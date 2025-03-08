#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S52
* Description            : Testing the Verify Admin Functionality with the Admin Token for the First Trial
* Pre-requisites         : Pass a value of SECRET_ADMIN_TOKEN as an input for the setTokenForTesting function
* Test inputs            :
*                          Token                       -> SECRET_ADMIN_TOKEN
* Test Expected output   : The function should return true
* Reason                 : This is the correct token
*************************************************************************************/
void testCase1Suite52(void) {
	setTokenForTesting(SECRET_ADMIN_TOKEN);
	unsigned char expectedResult = TRUE;
	unsigned char actualResult = Verify_Admin();
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}

/************************************************************************************
* Test ID                : TC2-S52
* Description            : Testing the Verify Admin Functionality with the Admin Token for the Second Trial
* Pre-requisites         : Pass a value of 2020 as an input for the setTokenForTesting function
*                          for the first trial, and Pass a value of SECRET_ADMIN_TOKEN as an input 
                           for the setTokenForTesting function for the second trial
* Test inputs            :
*                          1st Trial Token                       -> 2020
*                          2nd Trial Token                       -> SECRET_ADMIN_TOKEN
* Test Expected output   : The function should return false after the first trial and true after the second one
* Reason                 : This is the correct token
*************************************************************************************/
void testCase2Suite52(void) {
	setTokenForTesting(2020);
	unsigned char expectedResult_1stTrial = FALSE;
	unsigned char actualResult_1stTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_1stTrial, expectedResult_1stTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(SECRET_ADMIN_TOKEN);
	unsigned char expectedResult_2ndTrial = TRUE;
	unsigned char actualResult_2ndTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_2ndTrial, expectedResult_2ndTrial);
}

/************************************************************************************
* Test ID                : TC3-S52
* Description            : Testing the Verify Admin Functionality with the Admin Token for the Third Trial
* Pre-requisites         : Pass a value of 2020 as an input for the setTokenForTesting function
*                          for the first trial, and Pass a value of 1020 for the setTokenForTesting function
*                          for the second trial, and then Pass a value of SECRET_ADMIN_TOKEN as an input
						   for the setTokenForTesting function for the third trial
* Test inputs            :
*                          1st Trial Token                       -> 2020
*                          2nd Trial Token                       -> 1020
*                          3rd Trial Token                       -> SECRET_ADMIN_TOKEN
* Test Expected output   : The function should return false after the first trial, 
                           false after the second one
						   and true after the third one
* Reason                 : This is the correct token
*************************************************************************************/
 void testCase3Suite52(void) {
	setTokenForTesting(2020);
	unsigned char expectedResult_1stTrial = FALSE;
	unsigned char actualResult_1stTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_1stTrial, expectedResult_1stTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(1020);
	unsigned char expectedResult_2ndTrial = FALSE;
	unsigned char actualResult_2ndTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_2ndTrial, expectedResult_2ndTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(SECRET_ADMIN_TOKEN);
	unsigned char expectedResult_3rdTrial = TRUE;
	unsigned char actualResult_3rdTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_3rdTrial, expectedResult_3rdTrial);
}

 /************************************************************************************
 * Test ID                : TC4-S52
 * Description            : Testing the Verify Admin Functionality with the Admin Token for the Third Trial 
 *                          Along With Verifying That The System No Longer Permits the User To 
                            Provide Any Inputs.
 * Pre-requisites         : 1- Pass a value of 2020 as an input for the setTokenForTesting function
 *                          for the first trial. 
                            2- Pass a value of 1020 as an input for the setTokenForTesting function 
							for the second trial.
                            3- Pass a value of 11223344 as an input for the setTokenForTesting function 
							for the third trial.
                            4- Pass a value of SECRET_ADMIN_TOKEN as an input for the setTokenForTesting 
							function for the final trial.
 * Test inputs            :
 *                          1st Trial Token                       -> 2020
 *                          2nd Trial Token                       -> 1020
 *                          3rd Trial Token                       -> 11223344
 *                          FInal Trial Token                     -> SECRET_ADMIN_TOKEN
 * Test Expected output   : The function should return false after the first trial,
							false after the second one,
							false after the third one
							and false after the final one.
 * Reason                 : The user ran out of trials and the system no longer accepts inputs 
                            for it is closed.
 *************************************************************************************/
 void testCase4Suite52(void) {
	setTokenForTesting(2020);
	unsigned char expectedResult_1stTrial = FALSE;
	unsigned char actualResult_1stTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_1stTrial, expectedResult_1stTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(1020);
	unsigned char expectedResult_2ndTrial = FALSE;
	unsigned char actualResult_2ndTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_2ndTrial, expectedResult_2ndTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(11223344);
	unsigned char expectedResult_3rdTrial = FALSE;
	unsigned char actualResult_3rdTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_3rdTrial, expectedResult_3rdTrial);
	printf("\n***********************************************************\n");
	setTokenForTesting(SECRET_ADMIN_TOKEN);
	unsigned char expectedResult_4thTrial = FALSE;
	unsigned char actualResult_4thTrial = Verify_Admin();
	CU_ASSERT_EQUAL(actualResult_4thTrial, expectedResult_4thTrial);
}
