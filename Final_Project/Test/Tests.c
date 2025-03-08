#include "Tests.h"
#include "../Generic/Data_Types.h"
#include "CreateAccount.c"
#include "Start_End_Funs.c"
#include "CourseReg.c"
#include "DeleteReservation.c"
#include "DeleteAccount.c"
#include "ShowStudentCourses.c"
#include "DetectUserType.c"
#include "VerifyAdmin.c"
#include "VerifyUser.c"
#include "PrintUserData_User.c"
#include "PrintUserData_Admin.c"

void Main_Test_Runner(void)
{
	/* initialize the Registry */
	CU_initialize_registry();

	/* Adding Test Suite to the Registry */
	CU_pSuite suite1 = CU_add_suite("Suite 1:Valid Account1", test1_start, test1_end);
	CU_pSuite suite2 = CU_add_suite("Suite 2:Valid Account2", test2_start, test2_end);
	CU_pSuite suite3 = CU_add_suite("Suite 3:Valid Account3", test3_start, test3_end);


	CU_pSuite suite4 = CU_add_suite("Suite 4:Boundary Values - Name Field", test4_start, test4_end);

	CU_pSuite suite5 = CU_add_suite("Suite 5:Boundary Values - Age Field", test5_start, test5_end);

	CU_pSuite suite6 = CU_add_suite("Suite 6:Boundary Values - DOB_day Field", test6_start, test6_end);

	CU_pSuite suite7 = CU_add_suite("Suite 7:Boundary Values - DOB_month Field", test7_start, test7_end);

	CU_pSuite suite8 = CU_add_suite("Suite 8:Invalid Values - Name Field 1", test8_start, test8_end);
	CU_pSuite suite9 = CU_add_suite("Suite 9:Invalid Values - Name Field 2", test9_start, test9_end);

	CU_pSuite suite10 = CU_add_suite("Suite 10:Invalid Values - Age Field 1", test10_start, test10_end);
	CU_pSuite suite11 = CU_add_suite("Suite 11:Invalid Values - Age Field 2", test11_start, test11_end);
	CU_pSuite suite12 = CU_add_suite("Suite 12:Invalid Values - Age Field 3", test12_start, test12_end);

	CU_pSuite suite13 = CU_add_suite("Suite 13:Invalid Values - DOB_day Field 1", test13_start, test13_end);
	CU_pSuite suite14 = CU_add_suite("Suite 14:Invalid Values - DOB_day Field 2", test14_start, test14_end);
	CU_pSuite suite15 = CU_add_suite("Suite 15:Invalid Values - DOB_day Field 3", test15_start, test15_end);
	CU_pSuite suite16 = CU_add_suite("Suite 16:Invalid Values - DOB_day Field 4", test16_start, test16_end);
	CU_pSuite suite17 = CU_add_suite("Suite 17:Invalid Values - DOB_day Field 5", test17_start, test17_end);
	CU_pSuite suite18 = CU_add_suite("Suite 18:Invalid Values - DOB_day Field 6", test18_start, test18_end);

	CU_pSuite suite19 = CU_add_suite("Suite 19:Invalid Values - DOB_month Field 1", test19_start, test19_end);
	CU_pSuite suite20 = CU_add_suite("Suite 20:Invalid Values - DOB_month Field 2", test20_start, test20_end);
	CU_pSuite suite21 = CU_add_suite("Suite 21:Invalid Values - DOB_month Field 3", test21_start, test21_end);
	CU_pSuite suite22 = CU_add_suite("Suite 22:Invalid Values - DOB_month Field 4", test22_start, test22_end);
	CU_pSuite suite23 = CU_add_suite("Suite 23:Invalid Values - DOB_month Field 5", test23_start, test23_end);

	CU_pSuite suite24 = CU_add_suite("Suite 24:Invalid Values - DOB_year Field 1", test24_start, test24_end);
	CU_pSuite suite25 = CU_add_suite("Suite 25:Invalid Values - DOB_year Field 2", test25_start, test25_end);
	CU_pSuite suite26 = CU_add_suite("Suite 26:Invalid Values - DOB_year Field 3", test26_start, test26_end);
	CU_pSuite suite27 = CU_add_suite("Suite 27:Invalid Values - DOB_year Field 4", test27_start, test27_end);

	CU_pSuite suite28 = CU_add_suite("Suite 28:Invalid Values - Gender Field 1", test28_start, test28_end);
	CU_pSuite suite29 = CU_add_suite("Suite 29:Invalid Values - Gender Field 2", test29_start, test29_end);

	CU_pSuite suite30 = CU_add_suite("Suite 30:Invalid Values - Educational Status Field 1", test30_start, test30_end);
	CU_pSuite suite31 = CU_add_suite("Suite 31:Invalid Values - Educational Status Field 2", test31_start, test31_end);

	CU_pSuite suite32 = CU_add_suite("Suite 32:Try Adding Three Users in A Row", test32_start, test32_end);

	CU_pSuite suite33 = CU_add_suite("Suite 33:Boundary Values - Username Field", test33_start, test33_end);

	CU_pSuite suite34 = CU_add_suite("Suite 34:Boundary Values - Password Field", test34_start, test34_end);

	CU_pSuite suite35 = CU_add_suite("Suite 35:Invalid Values - Username Field 1", test35_start, test35_end);

	CU_pSuite suite36 = CU_add_suite("Suite 36:Invalid Values - Password Field 1", test36_start, test36_end);

	CU_pSuite suite37 = CU_add_suite("Suite 37:Invalid Values - Password Recheck Field", test37_start, test37_end);

	CU_pSuite suite38 = CU_add_suite("Suite 38:Two Users With the Same Username", test38_start, test38_end);

	CU_pSuite suite39 = CU_add_suite("Suite 39:Add Two Identical Users", test39_start, test39_end);

	CU_pSuite suite40 = CU_add_suite("Suite 40:Add Student to Course - Already Enrolled", test40_start, test40_end);

	CU_pSuite suite41 = CU_add_suite("Suite 41:Add Student to Course - Enrolled", test41_start, test41_end);
	
	CU_pSuite suite42 = CU_add_suite("Suite 42:Add Student to Course - Capacity Completed", test42_start, test42_end);
	
	CU_pSuite suite43 = CU_add_suite("Suite 43:Delete Specific Reservations", test43_start, test43_end);

	CU_pSuite suite44 = CU_add_suite("Suite 44:Delete Reservations Along with Delete User", test44_start, test44_end);

	CU_pSuite suite45 = CU_add_suite("Suite 45:Invalid Inputs - Add Course", test45_start, test45_end);

	CU_pSuite suite46 = CU_add_suite("Suite 46:Invalid Inputs - Delete Account", test46_start, test46_end);

	CU_pSuite suite47 = CU_add_suite("Suite 47:Invalid Inputs - Delete Reservatins", test47_start, test47_end);

	CU_pSuite suite48 = CU_add_suite("Suite 48:Show Registered Courses", test48_start, test48_end);

	CU_pSuite suite49 = CU_add_suite("Suite 49:Invalid Inputs - Show Registered Courses", test49_start, test49_end);

	CU_pSuite suite50 = CU_add_suite("Suite 50:Detect User Type - Valid Inputs", test50_start, test50_end);

	CU_pSuite suite51 = CU_add_suite("Suite 51:Detect User Type - Invalid Inputs", test51_start, test51_end);

	CU_pSuite suite52 = CU_add_suite("Suite 52:Verify Admin", test52_start, test52_end);

	CU_pSuite suite53 = CU_add_suite("Suite 53:Verify User", test53_start, test53_end);

	CU_pSuite suite54 = CU_add_suite("Suite 54:Verify A User After It Has Been Deleted", test54_start, test54_end);

	CU_pSuite suite55 = CU_add_suite("Suite 55:Print User Data (User Version) - Valid Inputs", test55_start, test55_end);

	CU_pSuite suite56 = CU_add_suite("Suite 56:Print User Data (User Version) - Invalid Inputs", test56_start, test56_end);

	CU_pSuite suite57 = CU_add_suite("Suite 57:Print User Data (Admin Version) - Valid Inputs", test57_start, test57_end);

	CU_pSuite suite58 = CU_add_suite("Suite 58:Print User Data (Admin Version) - Invalid Inputs", test58_start, test58_end);

	//CU_pSuite suite53 = CU_add_suite("Suite 53:Main App Runner - Valid Inputs", test53_start, test53_end);
	/* Adding Test Cases to the Test Suite*/
	CU_add_test(suite1, "\nTC1_S1:Valid Account1\n", testCase1Suite1);
	CU_add_test(suite1, "\nTC2_S1:Valid Account1\n", testCase2Suite1);

	CU_add_test(suite2, "\nTC2_S2:Valid Account2\n", testCase1Suite2);
	CU_add_test(suite2, "\nTC2_S2:Valid Account2\n", testCase2Suite2);

	CU_add_test(suite3, "\nTC1_S3:Valid Account3\n", testCase1Suite3);
	CU_add_test(suite3, "\nTC2_S3:Valid Account3\n", testCase2Suite3);

	CU_add_test(suite4, "\nTC1_S4:Boundary Values - Name Field\n", testCase1Suite4);
	CU_add_test(suite4, "\nTC2_S4:Boundary Values - Name Field\n", testCase2Suite4);

	CU_add_test(suite5, "\nTC1_S5:Boundary Values - Age Field\n", testCase1Suite5);
	CU_add_test(suite5, "\nTC2_S5:Boundary Values - Age Field\n", testCase2Suite5);

	CU_add_test(suite6, "\nTC1_S6:Boundary Values - DOB_day Field\n", testCase1Suite6);
	CU_add_test(suite6, "\nTC2_S6:Boundary Values - DOB_day Field\n", testCase2Suite6);

	CU_add_test(suite7, "\nTC1_S7:Boundary Values - DOB_month Field\n", testCase1Suite7);
	CU_add_test(suite7, "\nTC2_S7:Boundary Values - DOB_month Field\n", testCase2Suite7);

	CU_add_test(suite8, "\nTC1_S8:Invalid Values - Name Field 1\n", testCase1Suite8);
	CU_add_test(suite8, "\nTC2_S8:Invalid Values - Name Field 1\n", testCase2Suite8);

	CU_add_test(suite9, "\nTC1_S9:Invalid Values - Name Field 2\n", testCase1Suite9);
	CU_add_test(suite9, "\nTC2_S9:Invalid Values - Name Field 2\n", testCase2Suite9);

	CU_add_test(suite10, "\nTC1_S10:Invalid Values - Age Field 1\n", testCase1Suite10);
	CU_add_test(suite10, "\nTC2_S10:Invalid Values - Age Field 1\n", testCase2Suite10);

	CU_add_test(suite11, "\nTC1_S11:Invalid Values - Age Field 2\n", testCase1Suite11);
	CU_add_test(suite11, "\nTC2_S11:Invalid Values - Age Field 2\n", testCase2Suite11);

	CU_add_test(suite12, "\nTC1_S12:Invalid Values - Age Field 3\n", testCase1Suite12);
	CU_add_test(suite12, "\nTC2_S12:Invalid Values - Age Field 3\n", testCase2Suite12);

	CU_add_test(suite13, "\nTC1_S13:Invalid Values - DOB_day Field 1\n", testCase1Suite13);
	CU_add_test(suite13, "\nTC2_S13:Invalid Values - DOB_day Field 1\n", testCase2Suite13);

	CU_add_test(suite14, "\nTC1_S14:Invalid Values - DOB_day Field 2\n", testCase1Suite14);

	CU_add_test(suite15, "\nTC1_S15:Invalid Values - DOB_day Field 3\n", testCase1Suite15);

	CU_add_test(suite16, "\nTC1_S16:Invalid Values - DOB_day Field 4\n", testCase1Suite16);

	CU_add_test(suite17, "\nTC1_S17:Invalid Values - DOB_day Field 5\n", testCase1Suite17);

	CU_add_test(suite18, "\nTC1_S18:Invalid Values - DOB_day Field 5\n", testCase1Suite18);
	CU_add_test(suite18, "\nTC2_S18:Invalid Values - DOB_day Field 5\n", testCase2Suite18);

	CU_add_test(suite19, "\nTC1_S19:Invalid Values - DOB_month Field 1\n", testCase1Suite19);
	CU_add_test(suite19, "\nTC2_S19:Invalid Values - DOB_month Field 1\n", testCase2Suite19);

	CU_add_test(suite20, "\nTC1_S20:Invalid Values - DOB_month Field 2\n", testCase1Suite20);

	CU_add_test(suite21, "\nTC1_S21:Invalid Values - DOB_month Field 3\n", testCase1Suite21);

	CU_add_test(suite22, "\nTC1_S22:Invalid Values - DOB_month Field 4\n", testCase1Suite22);

	CU_add_test(suite23, "\nTC1_S23:Invalid Values - DOB_month Field 5\n", testCase1Suite23);

	CU_add_test(suite24, "\nTC1_S24:Invalid Values - DOB_year Field 1\n", testCase1Suite24);
	CU_add_test(suite24, "\nTC2_S24:Invalid Values - DOB_year Field 1\n", testCase2Suite24);

	CU_add_test(suite25, "\nTC1_S25:Invalid Values - DOB_year Field 2\n", testCase1Suite25);

	CU_add_test(suite26, "\nTC1_S26:Invalid Values - DOB_year Field 3\n", testCase1Suite26);
	//CU_add_test(suite26, "\nTC2_S26:Invalid Values - DOB_year Field 3\n", testCase2Suite26);

	CU_add_test(suite27, "\nTC1_S27:Invalid Values - DOB_year Field 4\n", testCase1Suite27);

	CU_add_test(suite28, "\nTC1_S28:Invalid Values - Gender Field 1\n", testCase1Suite28);
	CU_add_test(suite28, "\nTC2_S28:Invalid Values - Gender Field 1\n", testCase2Suite28);

	CU_add_test(suite29, "\nTC1_S29:Invalid Values - Gender Field 2\n", testCase1Suite29);

	CU_add_test(suite30, "\nTC1_S30:Invalid Values - Educational Status Field 1\n", testCase1Suite30);
	CU_add_test(suite30, "\nTC2_S30:Invalid Values - Educational Status Field 1\n", testCase2Suite30);

	CU_add_test(suite31, "\nTC1_S31:Invalid Values - Educational Status Field 2\n", testCase1Suite31);

	CU_add_test(suite32, "\nTC1_S32:Try Adding Three Users in A Row\n", testCase1Suite32);
	CU_add_test(suite32, "\nTC2_S32:Try Adding Three Users in A Row\n", testCase2Suite32);
	CU_add_test(suite32, "\nTC3_S32:Try Adding Three Users in A Row\n", testCase3Suite32);

	CU_add_test(suite33, "\nTC1_S33:Boundary Values - Username Field\n", testCase1Suite33);
	CU_add_test(suite33, "\nTC2_S33:Boundary Values - Username Field\n", testCase2Suite33);

	CU_add_test(suite34, "\nTC1_S34:Boundary Values - Password Field\n", testCase1Suite34);
	CU_add_test(suite34, "\nTC2_S34:Boundary Values - Password Field\n", testCase2Suite34);

	CU_add_test(suite35, "\nTC1_S35:Invalid Values - Username Field 1\n", testCase1Suite35);
	CU_add_test(suite35, "\nTC2_S35:Invalid Values - Username Field 1\n", testCase2Suite35);

	CU_add_test(suite36, "\nTC1_S36:Invalid Values - Password Field 1\n", testCase1Suite36);
	CU_add_test(suite36, "\nTC2_S36:Invalid Values - Password Field 1\n", testCase2Suite36);

	CU_add_test(suite37, "\nTC1_S37:Invalid Values - Password Recheck Field\n", testCase1Suite37);

	CU_add_test(suite38, "\nTC1_S38:1st User - Two Users With the Same Username\n", testCase1Suite38);
	CU_add_test(suite38, "\nTC2_S38:2st User - Two Users With the Same Username\n", testCase2Suite38);

	CU_add_test(suite39, "\nTC1_S39:1st User - Add Two Identical Users\n", testCase1Suite39);
	CU_add_test(suite39, "\nTC2_S39:1st User - Add Two Identical Users\n", testCase2Suite39);

	CU_add_test(suite40, "\nTC1_S40:1st User - Add Student to Course - Already Enrolled\n", testCase1Suite40);
	CU_add_test(suite40, "\nTC2_S40:1st User - Add Student to Course - Already Enrolled\n", testCase2Suite40);
	CU_add_test(suite40, "\nTC3_S40:2nd User - Add Student to Course - Already Enrolled\n", testCase3Suite40);
	CU_add_test(suite40, "\nTC4_S40:2nd User - Add Student to Course - Already Enrolled\n", testCase4Suite40);
	CU_add_test(suite40, "\nTC5_S40:3rd User - Add Student to Course - Already Enrolled\n", testCase5Suite40);
	CU_add_test(suite40, "\nTC6_S40:3rd User - Add Student to Course - Already Enrolled\n", testCase6Suite40);

	CU_add_test(suite41, "\nTC1_S41:1st User - Add Student to Course - Enrolled\n", testCase1Suite41);
	CU_add_test(suite41, "\nTC2_S41:2nd User - Add Student to Course - Enrolled\n", testCase2Suite41);
	CU_add_test(suite41, "\nTC3_S41:3rd User - Add Student to Course - Enrolled\n", testCase3Suite41);

	CU_add_test(suite42, "\nTC1_S42:1st Course - Add Student to Course - Capacity Completed\n", testCase1Suite42);
	
	CU_add_test(suite43, "\nTC1_S43:Delete Specific Reservations - Existing Students\n", testCase1Suite43);
	CU_add_test(suite43, "\nTC2_S43:Delete Specific Reservations - Newly Added Students\n", testCase2Suite43);
	CU_add_test(suite43, "\nTC3_S43:Delete Specific Reservations - A Student That's Not Enrolled For The Specified Course\n", testCase3Suite43);

	CU_add_test(suite44, "\nTC1_S44:Delete Reservations Along with Delete User\n", testCase1Suite44);

	CU_add_test(suite45, "\nTC1_S45:Add Course - Invalid Course ID\n", testCase1Suite45);
	CU_add_test(suite45, "\nTC2_S45:Add Course - Invalid Course ID\n", testCase2Suite45);
	CU_add_test(suite45, "\nTC3_S45:Add Course - Invalid Student ID\n", testCase3Suite45);
	CU_add_test(suite45, "\nTC4_S45:Add Course - Invalid Student ID\n", testCase4Suite45);
	CU_add_test(suite45, "\nTC5_S45:Add Course - Empty Entry\n", testCase5Suite45);

	//CU_add_test(suite46, "\nTC1_S46:Invalid User ID - Delete Account\n", testCase1Suite46);
	CU_add_test(suite46, "\nTC2_S46:Invalid User ID - Delete Account\n", testCase2Suite46);
	//CU_add_test(suite46, "\nTC3_S46:Valid ID, but It's Place is Already Empty\n", testCase3Suite46);

	CU_add_test(suite47, "\nTC1_S47:Invalid User ID - Delete Reservation\n", testCase1Suite47);
	CU_add_test(suite47, "\nTC2_S47:Invalid User ID - Delete Reservation\n", testCase2Suite47);
	CU_add_test(suite47, "\nTC3_S47:Invalid User ID - Delete Reservation\n", testCase3Suite47);
	CU_add_test(suite47, "\nTC4_S47:Invalid User ID - Delete Reservation\n", testCase4Suite47);

	CU_add_test(suite48, "\nTC1_S48:Already Existing User - Show Registed Courses\n", testCase1Suite48);
	CU_add_test(suite48, "\nTC2_S48:Newly Added Users - Show Registed Courses\n", testCase2Suite48);
	CU_add_test(suite48, "\nTC3_S48:Newly Added Users - Show Registed Courses\n", testCase3Suite48);

	CU_add_test(suite49, "\nTC1_S49:Invalid User ID - Show Registed Courses\n", testCase1Suite49);
	CU_add_test(suite49, "\nTC2_S49:Invalid User ID - Show Registed Courses\n", testCase2Suite49);

	CU_add_test(suite50, "\nTC1_S50:Detect User Type - Valid Inputs\n", testCase1Suite50);
	CU_add_test(suite50, "\nTC2_S50:Detect User Type - Valid Inputs\n", testCase2Suite50);

	CU_add_test(suite51, "\nTC1_S51:Detect User Type - Invalid Inputs\n", testCase1Suite51);
	CU_add_test(suite51, "\nTC2_S51:Detect User Type - Invalid Inputs\n", testCase2Suite51);

	CU_add_test(suite52, "\nTC1_S52:Verify Admin - Valid Token 1st Trial\n", testCase1Suite52);
	CU_add_test(suite52, "\nTC2_S52:Verify Admin - Valid Token 2nd Trial\n", testCase2Suite52);
	CU_add_test(suite52, "\nTC3_S52:Verify Admin - Valid Token 3rd Trial\n", testCase3Suite52);
	CU_add_test(suite52, "\nTC4_S52:Verify Admin - Ran Out of Trials\n", testCase4Suite52);

	CU_add_test(suite53, "\nTC1_S53:Verify User - Correct Username and Password for an Admin\n", testCase1Suite53);
	CU_add_test(suite53, "\nTC2_S53:Verify User - Correct Username and Password for a Normal User\n", testCase2Suite53);
	CU_add_test(suite53, "\nTC4_S53:Verify User - Wrong Username (Same Letters As in Correct One but in Upper Case)\n", testCase3Suite53);
	CU_add_test(suite53, "\nTC5_S53:Verify User - Wrong Password (Same Letters As in Correct One but in Upper Case)\n", testCase4Suite53);
	CU_add_test(suite53, "\nTC6_S53:Verify User - Non-Existing Username\n", testCase5Suite53);
	CU_add_test(suite53, "\nTC7_S53:Verify User - Non-Existing Password\n", testCase6Suite53);
	
	CU_add_test(suite54, "\nTC1_S54:Verify User - Try to Login With A Deleted Account\n", testCase1Suite54);

	CU_add_test(suite55, "\nTC1_S55:Print Data User (User Version) - Valid User ID\n", testCase1Suite55);
	CU_add_test(suite55, "\nTC2_S55:Print Data User (User Version) - Valid User ID\n", testCase2Suite55);

	CU_add_test(suite56, "\nTC1_S56:Print Data User (User Version) - Invalid User ID\n", testCase1Suite56);
	CU_add_test(suite56, "\nTC2_S56:Print Data User (User Version) - Invalid User ID\n", testCase2Suite56);

	CU_add_test(suite57, "\nTC1_S57:Print Data User (Admin Version) - Valid User ID (Already Existing User)\n", testCase1Suite57);
	CU_add_test(suite57, "\nTC2_S57:Print Data User (Admin Version) - Valid User ID (Newly Added User)\n", testCase2Suite57);
	CU_add_test(suite57, "\nTC2_S57:Print Data User (Admin Version) - Valid User ID (Empty Entry)\n", testCase3Suite57);

	CU_add_test(suite58, "\nTC1_S58:Print Data User (Admin Version) - Invalid User ID\n", testCase1Suite58);
	CU_add_test(suite58, "\nTC2_S58:Print Data User (Admin Version) - Invalid User ID\n", testCase2Suite58);

	//CU_add_test(suite53, "\nTC1_S53:Main App Runner - Valid Inputs\n", testCase1Suite53);
	/* Running the Test Suite through Basic Console */
	//CU_basic_set_mode(CU_BRM_VERBOSE);
	//CU_basic_run_tests();

	/* Running the Test Suite through Console interactive */
	  CU_console_run_tests();

	/* Clear the registry after test finished */
	CU_cleanup_registry();
}
