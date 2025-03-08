#include "Tests.h"
#include "../Generic/Data_Types.h"


/************************************************************************************
* Test ID                : TC1-S46
* Description            : Testing the Delete Account Functionality with An Invalid Student ID
						   (out of range value)
* Test inputs            :
*                          Student ID                         -> 5
* Test Expected output   : The function should return false
* Reason                 : The student ID is invalid
* Comment                : This test case is neglected due to it's behavior, it deletes an existing user 
                           (user with ID 2) 
*************************************************************************************/
static void testCase1Suite46(void) {
	unsigned short userId = 5;
	unsigned char actualResult = Delete_Account(userId); //returns TRUE, as the condition does not contain =
	unsigned char expectedResult = FALSE;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}


/************************************************************************************
* Test ID                : TC2-S46
* Description            : Testing the Delete Account Functionality with An Invalid Student ID
						   (a character)
* Test inputs            :
*                          Student ID                         -> 'r'
* Test Expected output   : The function should return false
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase2Suite46(void) {
	unsigned short userId = 'r';
	unsigned char actualResult = Delete_Account(userId);
	unsigned char expectedResult = FALSE;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC3-S46
* Description            : Testing the Delete Account Functionality with An Invalid Student ID (An Empty Entry)
* Test inputs            :
*                          Student ID                         -> 3
* Test Expected output   : The function should return false
* Reason                 : The student ID is invalid
* Comment                : This test case is neglected due to it's behavior, it deletes an existing user 
                           (user with ID 2)
*************************************************************************************/
static void testCase3Suite46(void) {
	unsigned short userId = 3;
	unsigned char actualResult = Delete_Account(userId);
	unsigned char expectedResult = FALSE;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}
