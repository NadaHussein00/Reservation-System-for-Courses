
#include "Tests.h"

/* Start Function for Test Suite 1 */
static unsigned char test1_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite1 = &testCasesSuite1[0];
	printf("\nTest Suite 1: Valid Account1 is Starting ... \n");
	fflush(stdout);
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite1 + i);
		(pTestCasesSuite1 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 1 */
static unsigned char test1_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 1: Valid Account1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}


/* Start Function for Test Suite 2 */
static unsigned char test2_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite2 = &testCasesSuite2[0];
	printf("\nTest Suite 2: Valid Account2 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite2 + i);
		(pTestCasesSuite2 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 2 */
static unsigned char test2_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 2: Valid Account2 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 3 */
static unsigned char test3_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite3 = &testCasesSuite3[0];
	printf("\nTest Suite 3: Valid Account3 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite3 + i);
		(pTestCasesSuite3 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 3 */
static unsigned char test3_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 3: Valid Account3 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 4 */
static unsigned char test4_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite4 = &testCasesSuite4[0];
	printf("\nTest Suite 4: Boundary Values - Name Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite4 + i);
		(pTestCasesSuite4 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 4 */
static unsigned char test4_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 4: Boundary Values - Name Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 5 */
static unsigned char test5_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite5 = &testCasesSuite5[0];
	printf("\nTest Suite 5: Boundary Values - Age Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite5 + i);
		(pTestCasesSuite5 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 5 */
static unsigned char test5_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 5: Boundary Values - Age Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 6 */
static unsigned char test6_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite6 = &testCasesSuite6[0];
	printf("\nTest Suite 6: Boundary Values - DOB_day Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite6 + i);
		(pTestCasesSuite6 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 6 */
static unsigned char test6_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 6: Boundary Values - DOB_day Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 7 */
static unsigned char test7_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite7 = &testCasesSuite7[0];
	printf("\nTest Suite 7: Boundary Values - DOB_month Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite7 + i);
		(pTestCasesSuite7 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 7 */
static unsigned char test7_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 7: Boundary Values - DOB_month Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 8 */
static unsigned char test8_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite8 = &testCasesSuite8[0];
	printf("\nTest Suite 8: Invalid Values - Name Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite8 + i);
		(pTestCasesSuite8 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 8 */
static unsigned char test8_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 8: Invalid Values - Name Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 9 */
static unsigned char test9_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite9 = &testCasesSuite9[0];
	printf("\nTest Suite 9: Invalid Values - Name Field 2 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite9 + i);
		(pTestCasesSuite9 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 9 */
static unsigned char test9_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 9: Invalid Values - Name Field 2 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}


/* Start Function for Test Suite 10 */
static unsigned char test10_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite10 = &testCasesSuite10[0];
	printf("\nTest Suite 10: Invalid Values - Age Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite10 + i);
		(pTestCasesSuite10 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 10 */
static unsigned char test10_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 10: Invalid Values - Age Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 11 */
static unsigned char test11_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite11 = &testCasesSuite11[0];
	printf("\nTest Suite 11: Invalid Values - Age Field 2 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite11 + i);
		(pTestCasesSuite11 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 11 */
static unsigned char test11_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 11: Invalid Values - Age Field 2 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 12 */
static unsigned char test12_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite12 = &testCasesSuite12[0];
	printf("\nTest Suite 12: Invalid Values - Age Field 3 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite12 + i);
		(pTestCasesSuite12 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 12 */
static unsigned char test12_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 12: Invalid Values - Age Field 3 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}

	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 13 */
static unsigned char test13_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite13 = &testCasesSuite13[0];
	printf("\nTest Suite 13: Invalid Values - DOB_day Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite13 + i);
		(pTestCasesSuite13 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 13 */
static unsigned char test13_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 13: Invalid Values - DOB_day Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 14 */
static unsigned char test14_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 14: Invalid Values - DOB_day Field 2 is Starting ... \n");
	RET = Add_Account(&testCasesSuite14);
	(&testCasesSuite14)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 14 */
static unsigned char test14_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 14: Invalid Values - DOB_day Field 2 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);

	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 15 */
static unsigned char test15_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 15: Invalid Values - DOB_day Field 3 is Starting ... \n");
	RET = Add_Account(&testCasesSuite15);
	(&testCasesSuite15)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 15 */
static unsigned char test15_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 15: Invalid Values - DOB_day Field 3 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);

	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 16 */
static unsigned char test16_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 16: Invalid Values - DOB_day Field 4 is Starting ... \n");
		RET = Add_Account(&testCasesSuite16);
		(&testCasesSuite16)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 16 */
static unsigned char test16_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 16: Invalid Values - DOB_day Field 4 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);

	
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 17 */
static unsigned char test17_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 17: Invalid Values - DOB_day Field 5 is Starting ... \n");
	RET = Add_Account(&testCasesSuite17);
	(&testCasesSuite17)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 17 */
static unsigned char test17_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 17: Invalid Values - DOB_day Field 5 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);


	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 18 */
static unsigned char test18_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite18 = &testCasesSuite18[0];
	printf("\nTest Suite 18: Invalid Values - DOB_day Field 6 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite18 + i);
		(pTestCasesSuite18 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 18 */
static unsigned char test18_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 18: Invalid Values - DOB_day Field 6 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 19 */
static unsigned char test19_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite19 = &testCasesSuite19[0];
	printf("\nTest Suite 19: Invalid Values - DOB_month Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite19 + i);
		(pTestCasesSuite19 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 19 */
static unsigned char test19_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 19: Invalid Values - DOB_month Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);

	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 20 */
static unsigned char test20_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 20: Invalid Values - DOB_month Field 2 is Starting ... \n");
	RET = Add_Account(&testCasesSuite20);
	(&testCasesSuite20)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 20 */
static unsigned char test20_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 20: Invalid Values - DOB_month Field 2 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 21 */
static unsigned char test21_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 21: Invalid Values - DOB_month Field 3 is Starting ... \n");
		RET = Add_Account(&testCasesSuite21);
		(&testCasesSuite21)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 21 */
static unsigned char test21_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 21: Invalid Values - DOB_month Field 3 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 22 */
static unsigned char test22_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 22: Invalid Values - DOB_month Field 4 is Starting ... \n");
	RET = Add_Account(&testCasesSuite22);
	(&testCasesSuite22)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 22 */
static unsigned char test22_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 22: Invalid Values - DOB_month Field 4 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 23 */
static unsigned char test23_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 23: nvalid Values - DOB_month Field 5 is Starting ... \n");
	RET = Add_Account(&testCasesSuite23);
	(&testCasesSuite23)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 23 */
static unsigned char test23_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 23: nvalid Values - DOB_month Field 5 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 24 */
static unsigned char test24_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite24 = &testCasesSuite24[0];
	printf("\nTest Suite 24: nvalid Values - DOB_year Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite24 + i);
		(pTestCasesSuite24 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 24 */
static unsigned char test24_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 24: nvalid Values - DOB_year Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 25 */
static unsigned char test25_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 25: Invalid Values - DOB_year Field 2 is Starting ... \n");
	RET = Add_Account(&testCasesSuite25);
	(&testCasesSuite25)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 25 */
static unsigned char test25_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 25: Invalid Values - DOB_year Field 2 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 26 */
static unsigned char test26_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 26: Invalid Values - DOB_year Field 3 is Starting ... \n");
		RET = Add_Account(&testCasesSuite26);
		(&testCasesSuite26)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 26 */
static unsigned char test26_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 26: Invalid Values - DOB_year Field 3 is Ending ... \n");
		RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 27 */
static unsigned char test27_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 27: Invalid Values - DOB_year Field 4 is Starting ... \n");
		RET = Add_Account(&testCasesSuite27);
		(&testCasesSuite27)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 27 */
static unsigned char test27_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 27: Invalid Values - DOB_year Field 4 is Ending ... \n");
		RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 28 */
static unsigned char test28_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite28 = &testCasesSuite28[0];
	printf("\nTest Suite 28: Invalid Values - Gender Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite28 + i);
		(pTestCasesSuite28 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 28 */
static unsigned char test28_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 28: Invalid Values - Gender Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 29 */
static unsigned char test29_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 29: Invalid Values - Gender Field 2 is Starting ... \n");
	RET = Add_Account(&testCasesSuite29);
	(&testCasesSuite29)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 29 */
static unsigned char test29_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 29: Invalid Values - Gender Field 2 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 30 */
static unsigned char test30_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite30= &testCasesSuite30[0];
	printf("\nTest Suite 30: Invalid Values - Educational Status Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite30 + i);
		(pTestCasesSuite30 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 30 */
static unsigned char test30_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 30: Invalid Values - Educational Status Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 31 */
static unsigned char test31_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 31: Invalid Values - Educational Status Field 2 is Starting ... \n");
	RET = Add_Account(&testCasesSuite31);
	(&testCasesSuite31)->PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 31 */
static unsigned char test31_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 31: Invalid Values - Educational Status Field 2 is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 23 */
static unsigned char test32_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite32 = &testCasesSuite32[0];
	printf("\nTest Suite 32: Try Adding Three Users in A Row is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite32 + i);
		(pTestCasesSuite32 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 32 */
static unsigned char test32_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 32: Try Adding Three Users in A Row is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 33 */
static unsigned char test33_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite33 = &testCasesSuite33[0];
	printf("\nTest Suite 33: Boundary Values - Username Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite33 + i);
		(pTestCasesSuite33 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 33 */
static unsigned char test33_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 33: Boundary Values - Username Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 34 */
static unsigned char test34_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite34 = &testCasesSuite34[0];
	printf("\nTest Suite 34: Boundary Values - Password Field is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite34 + i);
		(pTestCasesSuite34 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 34 */
static unsigned char test34_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 34:Boundary Values - Password Field is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 35 */
static unsigned char test35_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite35 = &testCasesSuite35[0];
	printf("\nTest Suite 35: Invalid Values - Username Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite35 + i);
		(pTestCasesSuite35 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 35 */
static unsigned char test35_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 35: Invalid Values - Username Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 36 */
static unsigned char test36_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite36 = &testCasesSuite36[0];
	printf("\nTest Suite 36: Invalid Values - Password Field 1 is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite36 + i);
		(pTestCasesSuite36 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 36 */
static unsigned char test36_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 36: Invalid Values - Password Field 1 is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 37 */
static unsigned char test37_start(void)
{
	unsigned char RET = 0;
	printf("\nTest Suite 37: Invalid Values - Password Recheck Field is Starting ... \n");
	RET = Add_Account(&testCasesSuite37);
	(&testCasesSuite37)->PersonalInfo_Form.id = current_user_test - 1;

	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 37 */
static unsigned char test37_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 37: Invalid Values - Password Recheck Field is Ending ... \n");
	RET = Delete_Account(current_user_test - 1);

	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 38 */
static unsigned char test38_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite38 = &testCasesSuite38[0];
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite38 + i);
		(pTestCasesSuite38 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 38 */
static unsigned char test38_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 38: Two Users With the Same Username is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 39 */
static unsigned char test39_start(void)
{
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite39 = &testCasesSuite39[0];
	printf("\nTest Suite 39: Add Two Identical Users is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite39 + i);
		(pTestCasesSuite39 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 39 */
static unsigned char test39_end(void)
{
	unsigned char RET;
	printf("\nTest Suite 39: Add Two Identical Users is Ending ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 40 */
static unsigned char test40_start(void)
{
	printf("\nSuite 40: Add Student to Course - Already Enrolled is Starting ...\n");
	return 0;
}

/* End Function for Test Suite 40 */
static unsigned char test40_end(void)
{
	printf("\nSuite 40: Add Student to Course - Already Enrolled is Ending ...\n");
	return 0;
}

/* Start Function for Test Suite 41 */
 static unsigned char test41_start(void)
{
	printf("\nSuite 41: Add Student to Course - Enrolled is Starting ...\n");
	printf("\nenrollments for user 0 : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[0][0], Enrollments[0][1], Enrollments[0][2], Enrollments[0][3], Enrollments[0][4], Enrollments[0][5]);
	printf("\nenrollments for user 1 : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[1][0], Enrollments[1][1], Enrollments[1][2], Enrollments[1][3], Enrollments[1][4], Enrollments[1][5]);
	printf("\nenrollments for user 2 : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[2][0], Enrollments[2][1], Enrollments[2][2], Enrollments[2][3], Enrollments[2][4], Enrollments[2][5]);
	return 0;
}

 /* End Function for Test Suite 41 */
static unsigned char test41_end(void)
{
	printf("\nSuite 41: Add Student to Course - Enrolled is Ending ...\n");


	return 0;
}

/* Start Function for Test Suite 42 */
static unsigned char test42_start(void) {
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite1 = &testCasesSuite1[0];
	printf("\nTest Suite 42: Add Student to Course - Capacity Completed is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite1 + i);
		(pTestCasesSuite1 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 42 */
static unsigned char test42_end(void)
{
	printf("\nSuite 42: Add Student to Course - Capacity Completed is Ending ...\n");

	return 0;
}

/* Start Function for Test Suite 43 */
static unsigned char test43_start(void)
{
	printf("\nSuite 43: Delete Specific Reservations is Starting ...\n");

	return 0;
}

/* End Function for Test Suite 43 */
static unsigned char test43_end(void)
{

	printf("\nSuite 43: Delete Specific Reservations is Ending ...\n");
	return 0;
}

/* Start Function for Test Suite 44 */
static unsigned char test44_start(void) {
	printf("\nTest Suite 44 is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 44 */
static unsigned char test44_end(void) {
	printf("\nTest Suite 44: Delete Reservations Along with Delete User is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 45 */
static unsigned char test45_start(void) {
	printf("\nTest Suite 45: Invalid Inputs - Add Course is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 45 */
static unsigned char test45_end(void) {
	printf("\nTest Suite 45: Invalid Inputs - Add Course is Ending ... \n");
	return 0;
}

/* Start Function for Test Suite 46 */
static unsigned char test46_start(void) {
	printf("\nTest Suite 46: Invalid Inputs - Delete Account is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 46 */
static unsigned char test46_end(void) {
	printf("\nTest Suite 46: Invalid Inputs - Delete Account is Ending ... \n");
	return 0;
}

/* Start Function for Test Suite 47 */
static unsigned char test47_start(void) {
	printf("\nTest Suite 47: Invalid Inputs - Delete Reservatins is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 47 */
static unsigned char test47_end(void) {
	printf("\nTest Suite 47: Invalid Inputs - Delete Reservatins is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 48 */
static unsigned char test48_start(void) {
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite2 = &testCasesSuite2[0];
	printf("\nTest Suite 48: Show Registered Courses is Starting ... \n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite2 + i);
		(pTestCasesSuite2+i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
	
}

/* End Function for Test Suite 48 */
static unsigned char test48_end(void)
{
	unsigned char RET;
	printf("\nSuite 48: Show Registered Courses is Ending ...\n");
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 49 */
static unsigned char test49_start(void) {
	printf("\nTest Suite 49: Invalid Inputs - Show Registered Courses is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 49 */
static unsigned char test49_end(void) {
	printf("\nTest Suite 49: Invalid Inputs - Show Registered Courses is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 50 */
static unsigned char test50_start(void) {
	printf("\nTest Suite 50: Detect User Type - Valid Inputs is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 50 */
static unsigned char test50_end(void) {
	printf("\nTest Suite 50: Detect User Type - Valid Inputs is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 51 */
static unsigned char test51_start(void) {
	printf("\nTest Suite 51: Detect User Type - Invalid Inputs is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 51 */
static unsigned char test51_end(void) {
	printf("\nTest Suite 51: Detect User Type - Invalid Inputs is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 52 */
static unsigned char test52_start(void) {
	printf("\nTest Suite 52: Verify Admin is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 52 */
static unsigned char test52_end(void) {
	printf("\nTest Suite 52: Verify Admin is Ending ... \n");
	DBM_PrintUsers();
	return 0;
}

/* Start Function for Test Suite 53 */
static unsigned char test53_start(void) {
	printf("\nTest Suite 53: Verify User is Starting ... \n");
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite1 = &testCasesSuite1[0];
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite1 + i);
		(pTestCasesSuite1 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 53 */
static unsigned char test53_end(void) {
	printf("\nTest Suite 53: Verify User is Ending ... \n");
	unsigned char RET;
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 54 */
static unsigned char test54_start(void) {
	printf("\nTest Suite 54: Verify A User After It Has Been Deleted is Starting ... \n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 54 */
static unsigned char test54_end(void) {
	printf("\nTest Suite 54: Verify A User After It Has Been Deleted is Ending ... \n");
	return 0;
}

/* Start Function for Test Suite 55 */
static unsigned char test55_start(void) {
	printf("\nTest Suite 55: Print User Data (User Version) - Valid Inputs is Starting ... \n");
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite1 = &testCasesSuite1[0];
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Add_Account(pTestCasesSuite1 + i);
		(pTestCasesSuite1 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 55 */
static unsigned char test55_end(void) {
	printf("\nTest Suite 55: Print User Data (User Version) - Valid Inputs is Ending ... \n");
	unsigned char RET;
	for (int i = 0;i < NUM_OF_TEST_USERS_PER_SUITE;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 56 */
static unsigned char test56_start(void) {
	printf("\nTest Suite 56: Print User Data (User Version) - Invalid Inputs is Starting ...\n");
	DBM_PrintUsers();
	return 0;
}

/* End Function for Test Suite 56 */
static unsigned char test56_end(void) {
	printf("\nTest Suite 56: Print User Data (User Version) - Invalid Inputs is Ending ...\n");
	return 0;
}

/* Start Function for Test Suite 57 */
static unsigned char test57_start(void) {
	printf("\nTest Suite 57: Print User Data (Admin Version) - Valid Inputs is Starting ...\n");
	unsigned char RET = 0;
	struct User_Input_Type* pTestCasesSuite1 = &testCasesSuite1[0];
	for (int i = 0;i < 1;i++) {
		RET = Add_Account(pTestCasesSuite1 + i);
		(pTestCasesSuite1 + i)->PersonalInfo_Form.id = current_user_test - 1;
	}
	DBM_PrintUsers();
	return !RET;
}

/* End Function for Test Suite 57 */
static unsigned char test57_end(void) {
	printf("\nTest Suite 57: Print User Data (Admin Version) - Valid Inputs is Ending ...\n");
	unsigned char RET;
	for (int i = 0;i < 1;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	DBM_PrintUsers();
	return !RET;
}

/* Start Function for Test Suite 58 */
static unsigned char test58_start(void) {
	printf("\nTest Suite 58: Print User Data (Admin Version) - Invalid Inputs is Starting ...\n");
	return 0;
}

/* End Function for Test Suite 58 */
static unsigned char test58_end(void) {
	printf("\nTest Suite 58: Print User Data (Admin Version) - Invalid Inputs is Ending ...\n");
	return 0;
}
