#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S55
* Description            : Testing the DB Print User Data (User Version) Functionality 
                           with a Valid Username and Password of an Exisitng User 
* Test inputs            :
*                          User ID  -> 0
* Test Expected output   : The function should return a value of true and print the user's data correctly
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase1Suite55(void) {
	unsigned short userId = 0;
	unsigned char actualResult = DBM_PrintUserData_User(userId);
	unsigned char expectedResult = TRUE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S55
* Description            : Testing the DB Print User Data (User Version) Functionality
						   with a Valid ID of a Newly Added User
* Pre-requisites         : Add users in the start function
* Test inputs            :
*                          User ID  -> 4
* Test Expected output   : The function should return a value of true and print the user's data correctly
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase2Suite55(void) {
	unsigned short userId = 4;
	unsigned char actualResult = DBM_PrintUserData_User(userId);
	unsigned char expectedResult = TRUE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC1-S56
* Description            : Testing the DB Print User Data (User Version) Functionality
						   with an Invalid User ID (out of range)
* Pre-requisites         : Add users in the start function
* Test inputs            :
*                          User ID  -> 5
* Test Expected output   : The function should return a value of false
* Reason                 : This is an invalid user ID
*************************************************************************************/
static void testCase1Suite56(void) {
	unsigned short userId = 5;
	unsigned char actualResult = DBM_PrintUserData_User(userId);
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S56
* Description            : Testing the DB Print User Data (User Version) Functionality
						   with an Invalid User ID (a character)
* Pre-requisites         : Add users in the start function
* Test inputs            :
*                          User ID  -> 'k'
* Test Expected output   : The function should return a value of false
* Reason                 : This is an invalid user ID
*************************************************************************************/
static void testCase2Suite56(void) {
	unsigned short userId = 'k';
	unsigned char actualResult = DBM_PrintUserData_User(userId);
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}