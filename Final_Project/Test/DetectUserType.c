#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S50
* Description            : Testing the Detect User Type Functionality with a Valid User Type
* Pre-requisites         : Pass a value of AdminMohamedTarek as an input for the setUserTypeForTesting function
* Test inputs            :
*                          User Type                       -> AdminMohamedTarek
* Test Expected output   : The function should return a value of AdminMohamedTarek
* Reason                 : This is a valid user type
*************************************************************************************/
static void testCase1Suite50(void) {
	setUserTypeForTesting(AdminMohamedTarek);
	unsigned char expectedResult = AdminMohamedTarek;
	unsigned char actualResult = Detect_User_Type();
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S50
* Description            : Testing the Detect User Type Functionality with a Valid User Type
* Pre-requisites         : Pass a value of NormalUser as an input for the setUserTypeForTesting function
* Test inputs            :
*                          User Type                       -> NormalUser
* Test Expected output   : The function should return a value of NormalUser
* Reason                 : This is a valid user type
*************************************************************************************/
static void testCase2Suite50(void) {
	setUserTypeForTesting(NormalUser);
	unsigned char expectedResult = NormalUser;
	unsigned char actualResult = Detect_User_Type();
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC1-S51
* Description            : Testing the Detect User Type Functionality with an Invalid User Type
*                          (out of range value)
* Pre-requisites         : Pass a value of 2 as an input for the setUserTypeForTesting function
* Test inputs            :
*                          User Type                       -> 2
* Test Expected output   : The function should return a value of IncorrectLogin
* Reason                 : This is an invalid user type
*************************************************************************************/
static void testCase1Suite51(void) {
	setUserTypeForTesting(2);
	unsigned char expectedResult = IncorrectLogin;
	unsigned char actualResult = Detect_User_Type();
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S51
* Description            : Testing the Detect User Type Functionality with an Invalid User Type
*                          (a character)
* Pre-requisites         : Pass a value of 2 as an input for the setUserTypeForTesting function
* Test inputs            :
*                          User Type                       -> 'i'
* Test Expected output   : The function should return a value of IncorrectLogin
* Reason                 : This is an invalid user type
*************************************************************************************/
static void testCase2Suite51(void) {
	setUserTypeForTesting('i');
	unsigned char expectedResult = IncorrectLogin;
	unsigned char actualResult = Detect_User_Type();
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}
