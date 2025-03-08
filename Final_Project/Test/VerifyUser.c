#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of an Already Existing User
* Test inputs            :
*                          id                                 -> -1
*                          firstAdminId                       -> 0
*                          Username                           -> AdminUser1
*                          Password                           -> Edges123
* Test Expected output   : The function should return a value of Login_Successful and the value of id is
*                          increased by 1 and becomes equal to the firstAdminId value
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase1Suite53(void) {
	int id = -1;
	unsigned char firstAdminId = 0;
	//struct User_Input_Type* pTestCase1Suite48 = &testCasesSuite1[0];
	//unsigned char actualResult = Verify_User(pTestCase1Suite48->LoginCredentials_Form.LoginCredentials.User_Name, pTestCase1Suite48->LoginCredentials_Form.LoginCredentials.Password, &id);
	unsigned char actualResult = Verify_User("AdminUser1", "Edges123", &id);
	unsigned char expectedResult = Login_Successful;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, firstAdminId);
}

/************************************************************************************
* Test ID                : TC1-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of a Newly Added User
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EdgesAcademy_1
*                          Password of the first structure in the testCasesSuite1 array     -> EEdges123
* Test Expected output   : The function should return a value of Login_Successful and the value of id is
*                          increased by 1 and becomes equal to the firstAdminId value
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase2Suite53(void) {
	int id = -1;
	struct User_Input_Type* pTestCase2Suite53 = &testCasesSuite1[0];
	unsigned char actualResult = Verify_User("EdgesAcademy_1", "Edges123", &id);
	unsigned char expectedResult = Login_Successful;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, pTestCase2Suite53->PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TC3-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of a Newly Added User but the Username Letters are in Uppercase
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EDGESACADEMY_1
*                          Password of the first structure in the testCasesSuite1 array     -> Edges123
* Test Expected output   : The function should return a value of Username_NotFound 
                           and the value of id remains the same
* Reason                 : This is a non existing user
*************************************************************************************/
static void testCase3Suite53(void) {
	int id = -1;
	unsigned char actualResult = Verify_User("EDGESACADEMY_1", "Edges123", &id);
	unsigned char expectedResult = UserName_NotFound;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, -1);
}
/************************************************************************************
* Test ID                : TC4-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of a Newly Added User but the Password Letters are in Uppercase
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EdgesAcademy_1
*                          Password of the first structure in the testCasesSuite1 array     -> EDGES123
* Test Expected output   : The function should return a value of Password_incorrect
						   and the value of id remains the same
* Reason                 : This is a wrong password for an existing user
*************************************************************************************/
static void testCase4Suite53(void) {
	int id = -1;
	unsigned char actualResult = Verify_User("EdgesAcademy_1", "EDGES123", &id);
	unsigned char expectedResult = Password_incorrect;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, -1);
}

/************************************************************************************
* Test ID                : TC5-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of a Non Existing User
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EdgesAcademy___
*                          Password of the first structure in the testCasesSuite1 array     -> Edges123
* Test Expected output   : The function should return a value of UserName_NotFound
						   and the value of id remains the same
* Reason                 : This is a non existing user
*************************************************************************************/
static void testCase5Suite53(void) {
	int id = -1;
	unsigned char actualResult = Verify_User("EdgesAcademy___", "Edges123", &id);
	unsigned char expectedResult = UserName_NotFound;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, -1);
}

/************************************************************************************
* Test ID                : TC6-S53
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of an Exisitng User but the Password is Wrong
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EdgesAcademy_1
*                          Password of the first structure in the testCasesSuite1 array     -> Edges124
* Test Expected output   : The function should return a value of Password_incorrect
						   and the value of id remains the same
* Reason                 : This is a non existing user
*************************************************************************************/
static void testCase6Suite53(void) {
	int id = -1;
	unsigned char actualResult = Verify_User("EdgesAcademy_1", "Edges124", &id);
	unsigned char expectedResult = Password_incorrect;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, -1);
}

//a user is added and then deleted, try to login with it

/************************************************************************************
* Test ID                : TC1-S54
* Description            : Testing the Verify User Functionality with a Valid Username and Password
*                          of a Deleted User
* Test inputs            :
*                          id                                                               -> -1
*                          Username of the first structure in the testCasesSuite1 array     -> EdgesAcademy_1
*                          Password of the first structure in the testCasesSuite1 array     -> Edges123
* Test Expected output   : The function should return a value of UserName_NotFound
						   and the value of id remains the same
* Reason                 : This is a non existing user
*************************************************************************************/
static void testCase1Suite54(void) {
	int id = -1;
	Add_Account(&testCasesSuite1[0]);
	(&testCasesSuite1[0])->PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	unsigned char actualResult = Verify_User("EdgesAcademy_1", "Edges123", &id);
	unsigned char expectedResult = UserName_NotFound;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(id, -1);
}