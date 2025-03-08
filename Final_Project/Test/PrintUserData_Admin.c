#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S57
* Description            : Testing the DB Print User Data (Admin Version) Functionality
						   with a Valid ID of an Exisitng User
* Test inputs            :
*                          User ID  -> 0
* Test Expected output   : The function should return a value of true and print the user's data correctly
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase1Suite57(void) {
	unsigned short userId = 0;
	unsigned char actualResult = DBM_PrintUserData_Admin(userId);
	unsigned char expectedResult = TRUE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S57
* Description            : Testing the DB Print User Data (Admin Version) Functionality
						   with a Valid ID of a Newly Added User
* Pre-requisites         : Add ONLY one user in the start function
* Test inputs            :
*                          User ID  -> 1
* Test Expected output   : The function should return a value of true and print the user's data correctly
* Reason                 : This is an existing user
*************************************************************************************/
static void testCase2Suite57(void) {
	unsigned short userId = 1;
	unsigned char actualResult = DBM_PrintUserData_Admin(userId);
	unsigned char expectedResult = TRUE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC3-S57
* Description            : Testing the DB Print User Data (Admin Version) Functionality
						   with a Valid ID of an Empty Entry
* Pre-requisites         : Add ONLY one user in the start function
* Test inputs            :
*                          User ID  -> 4
* Test Expected output   : The function should return a value of true as 
                           this is the initial value of the return value
* Reason                 : This is an empty entry
*************************************************************************************/
static void testCase3Suite57(void) {
	unsigned short userId = 4;
	unsigned char actualResult = DBM_PrintUserData_Admin(userId);
	unsigned char expectedResult = TRUE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC1-S58
* Description            : Testing the DB Print User Data (Admin Version) Functionality
						   with an Invalid ID (out of range)
* Test inputs            :
*                          User ID  -> 5
* Test Expected output   : The function should return a value of false 
* Reason                 : This is an invalid ID
*************************************************************************************/
static void testCase1Suite58(void) {
	unsigned short userId = 5;
	unsigned char actualResult = DBM_PrintUserData_Admin(userId);
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S58
* Description            : Testing the DB Print User Data (Admin Version) Functionality
						   with an Invalid ID (a character)
* Test inputs            :
*                          User ID  -> 'k'
* Test Expected output   : The function should return a value of false
* Reason                 : This is an invalid ID
*************************************************************************************/
static void testCase2Suite58(void) {
	unsigned short userId = 'k';
	unsigned char actualResult = DBM_PrintUserData_Admin(userId);
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}
