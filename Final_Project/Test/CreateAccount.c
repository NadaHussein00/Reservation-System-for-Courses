#include "Tests.h"
#include "../Generic/Data_Types.h"

/************************************************************************************
* Test ID                : TC1-S1
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ahmed
*                          Age                          -> 26
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 1998
*                          Educational_Status           -> Masters_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_1
*                          Password                     -> Edges123
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite1(void)
{
	unsigned int Test_id = testCasesSuite1[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite1[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite1[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite1[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite1[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite1[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite1[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite1[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite1[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite1[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite1[0].PersonalInfo_Form.id);
	//printf("\nTEST ID: %d , PERSONAL ID: %d\n", DB_info[Test_id].id, testCasesSuite1[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S1
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Manal
*                          Age                          -> 17
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2007
*                          Educational_Status           -> Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_2
*                          Password                     -> Edges123
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite1(void)
{
	unsigned int Test_id = testCasesSuite1[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite1[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite1[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite1[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite1[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite1[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite1[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite1[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite1[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite1[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite1[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S2
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Kamal
*                          Age                          -> 30
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1994
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_3
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite2(void)
{
	unsigned int Test_id = testCasesSuite2[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite2[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite2[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite2[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite2[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite2[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite2[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite2[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite2[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite2[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite2[0].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC2-S2
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Mohamed
*                          Age                          -> 23
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 2001
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_4
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite2(void)
{
	unsigned int Test_id = testCasesSuite2[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite2[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite2[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite2[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite2[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite2[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite2[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite2[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite2[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite2[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite2[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S3
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Salama
*                          Age                          -> 37
*                          DOB_day                      -> 28
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 1987
*                          Educational_Status           ->PHD_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_5
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite3(void)
{
	unsigned int Test_id = testCasesSuite3[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite3[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite3[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite3[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite3[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite3[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite3[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite3[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite3[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite3[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite3[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S3
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Arwa
*                          Age                          -> 44
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 1980
*                          Educational_Status           ->PHD_Holder
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_6
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite3(void)
{
	unsigned int Test_id = testCasesSuite3[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite3[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite3[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite3[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite3[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite3[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite3[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite3[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite3[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite3[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite3[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S4
* Description            : Testing the Add Account Functionality with Boundary Values for the Name Field
*                         (3 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amr
*                          Age                          -> 24
*                          DOB_day                      -> 28
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_7
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite4(void)
{
	unsigned int Test_id = testCasesSuite4[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite4[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite4[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite4[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite4[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite4[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite4[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite4[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite4[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite4[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite4[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S4
* Description            : Testing the Add Account Functionality with Boundary Values for the Name Field
*                         (32 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> ArwaKhaledSayedMahmodAbdElkerem
*                          Age                          -> 23
*                          DOB_day                      -> 19
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 2001
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_8
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite4(void)
{
	unsigned int Test_id = testCasesSuite4[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite4[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite4[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite4[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite4[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite4[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite4[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite4[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite4[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite4[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite4[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S5
* Description            : Testing the Add Account Functionality with Boundary Values for the Age Field
*                         (0 years old)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amir
*                          Age                          -> 0
*                          DOB_day                      -> 28
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 2024
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_9
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite5(void)
{
	unsigned int Test_id = testCasesSuite5[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite5[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite5[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite5[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite5[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite5[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite5[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite5[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite5[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite5[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite5[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S5
* Description            : Testing the Add Account Functionality with Boundary Values for the Age Field
*                         (100 years old)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Alia
*                          Age                          -> 100
*                          DOB_day                      -> 19
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 1924
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_10
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite5(void)
{
	unsigned int Test_id = testCasesSuite5[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite5[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite5[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite5[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite5[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite5[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite5[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite5[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite5[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite5[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite5[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S6
* Description            : Testing the Add Account Functionality with Boundary Values for the DOB_day Field
*                         (1st day of the month)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Akram
*                          Age                          -> 20
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_11
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite6(void)
{
	unsigned int Test_id = testCasesSuite6[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite6[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite6[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite6[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite6[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite6[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite6[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite6[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite6[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite6[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite6[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S6
* Description            : Testing the Add Account Functionality with Boundary Values for the DOB_day Field
*                         (31th day of the month)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Asmaa
*                          Age                          -> 21
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_12
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite6(void)
{
	unsigned int Test_id = testCasesSuite6[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite6[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite6[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite6[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite6[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite6[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite6[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite6[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite6[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite6[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite6[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S7
* Description            : Testing the Add Account Functionality with Boundary Values for the DOB_month Field
*                         (1st month of the year)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ahmed
*                          Age                          -> 20
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 1
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_13
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase1Suite7(void)
{
	unsigned int Test_id = testCasesSuite7[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite7[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite7[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite7[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite7[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite7[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite7[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite7[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite7[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite7[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite7[0].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC2-S7
* Description            : Testing the Add Account Functionality with Boundary Values for the DOB_month Field
*                         (12th month of the year)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Kawthar
*                          Age                          -> 21
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_14
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void testCase2Suite7(void)
{
	unsigned int Test_id = testCasesSuite7[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite7[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite7[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite7[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite7[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite7[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite7[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite7[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite7[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite7[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite7[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S8
* Description            : Testing the Add Account Functionality with Invalid Values for the Name Field
*                         (2 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Al
*                          Age                          -> 20
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 1
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_15
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the name field
*************************************************************************************/
static void testCase1Suite8(void)
{
	unsigned int Test_id = testCasesSuite8[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, 0);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, 0);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, 0);
	CU_ASSERT_NOT_EQUAL(DB_info[Test_id].id, testCasesSuite8[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S8
* Description            : Testing the Add Account Functionality with Invalid Values for the Name Field
*                         (33 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> KawtharMahmoudSamirAmirElHalawany
*                          Age                          -> 21
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_16
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the name field
*************************************************************************************/
static void testCase2Suite8(void)
{
	unsigned int Test_id = testCasesSuite8[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_NOT_EQUAL(DB_info[Test_id].id, testCasesSuite8[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S9
* Description            : Testing the Add Account Functionality with Invalid Values for the Name Field
*                         (A name containing special characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali@Samir
*                          Age                          -> 20
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_17
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the name field
*************************************************************************************/
static void testCase1Suite9(void)
{
	unsigned int Test_id = testCasesSuite9[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite9[0].PersonalInfo_Form.id);
	//printf("\nLine number %d\n", __LINE__);
}


/************************************************************************************
* Test ID                : TC2-S9
* Description            : Testing the Add Account Functionality with Invalid Values for the Name Field
*                         (A name containing numbers)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Kawthar1234
*                          Age                          -> 21
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_18
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the name field
*************************************************************************************/
static void testCase2Suite9(void)
{
	unsigned int Test_id = testCasesSuite9[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite9[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S10
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (out of boundaries value: -1)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Adel
*                          Age                          -> -1
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_20
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase1Suite10(void)
{
	unsigned int Test_id = testCasesSuite10[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite10[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S10
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (out of boundaries value: 101)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Asmaa
*                          Age                          -> 101
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1924
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_21
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase2Suite10(void)
{
	unsigned int Test_id = testCasesSuite10[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite10[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S11
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (float out of range number: 0.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 0.5
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2024
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_22
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase1Suite11(void)
{
	unsigned int Test_id = testCasesSuite11[0].PersonalInfo_Form.id;
	//CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite11[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S11
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (float out of range number: 100.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Kawthar
*                          Age                          -> 100.5
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1924
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_23
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase2Suite11(void)
{
	unsigned int Test_id = testCasesSuite11[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite11[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S12
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (float in range number)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amira
*                          Age                          -> 17.5
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_24
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase1Suite12(void)
{
	unsigned int Test_id = testCasesSuite12[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite12[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S12
* Description            : Testing the Add Account Functionality with Invalid Values for the Age Field
*                         (a character)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Atef
*                          Age                          -> 'r'
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_99
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the age field
*************************************************************************************/
static void testCase2Suite12(void)
{
	unsigned int Test_id = testCasesSuite12[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite12[1].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S13
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (out of range value: 0)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Sandra
*                          Age                          -> 20
*                          DOB_day                      -> 0
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2004
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_25
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite13(void)
{
	unsigned int Test_id = testCasesSuite13[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite13[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S13
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (out of range value: 32)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Kamilia
*                          Age                          -> 21
*                          DOB_day                      -> 32
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_26
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase2Suite13(void)
{
	unsigned int Test_id = testCasesSuite13[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite13[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S14
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (float number in range: 24.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Maria
*                          Age                          -> 21
*                          DOB_day                      -> 24.5
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_28
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite14(void)
{
	unsigned int Test_id = testCasesSuite14.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite14.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S15
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (a character)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Martina
*                          Age                          -> 21
*                          DOB_day                      -> 't'
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2003
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_09
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite15(void)
{
	unsigned int Test_id = testCasesSuite15.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_NOT_EQUAL(DB_info[Test_id].id, testCasesSuite15.PersonalInfo_Form.id);
	printf("TEST ID: %d , PERSONAL ID: %d", DB_info[Test_id].id, testCasesSuite15.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S16
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (a float number out of range 31.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Manal
*                          Age                          -> 24
*                          DOB_day                      -> 31.5
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_30
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite16(void)
{
	unsigned int Test_id = testCasesSuite16.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite16.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S17
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (a float number out of range 0.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Karima
*                          Age                          -> 24
*                          DOB_day                      -> 0.5
*                          DOB_Month                    -> 4
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_29
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite17(void)
{
	unsigned int Test_id = testCasesSuite17.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite17.PersonalInfo_Form.id);
	printf("\n TEST ID: %d, PERSONAL ID: %d", DB_info[Test_id].id, testCasesSuite17.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S18
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (29th of Feb in a non leap year)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Mona
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_31
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase1Suite18(void)
{
	unsigned int Test_id = testCasesSuite18[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite18[0].PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC2-S18
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_day Field
*                         (30th of Feb: a non-existing day)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amnaa
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_32
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_day field
*************************************************************************************/
static void testCase2Suite18(void)
{
	unsigned int Test_id = testCasesSuite18[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite18[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S19
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (out of range value: 0)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Salma
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 0
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_33
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase1Suite19(void)
{
	unsigned int Test_id = testCasesSuite19[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite19[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S19
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (out of range value: 13)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Farida
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 13
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_34
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase2Suite19(void)
{
	unsigned int Test_id = testCasesSuite19[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite19[1].PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TC1-S20
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (a float number in range: 10.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Sara
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 10.5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_36
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase1Suite20(void)
{
	unsigned int Test_id = testCasesSuite20.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite20.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S21
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (a float number out of range: 0.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Somaia
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 10.5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_37
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase1Suite21(void)
{
	unsigned int Test_id = testCasesSuite21.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_NOT_EQUAL(DB_info[Test_id].id, testCasesSuite21.PersonalInfo_Form.id);
}



/************************************************************************************
* Test ID                : TC1-S22
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (a float number out of range: 12.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Farah
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 12.5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_38
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase1Suite22(void)
{
	unsigned int Test_id = testCasesSuite22.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite22.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S23
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_month Field
*                         (a character)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Samira
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 'i'
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_378
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_month field
*************************************************************************************/
static void testCase1Suite23(void)
{
	unsigned int Test_id = testCasesSuite23.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite23.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S24
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_year Field
*                         (out of range value: 1923)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Hala
*                          Age                          -> 24
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1923
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_39
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_year field
*************************************************************************************/
static void testCase1Suite24(void)
{
	unsigned int Test_id = testCasesSuite24[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite24[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S24
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_year Field
*                         (out of range value: 2025)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Nesma
*                          Age                          -> 24
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 2025
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_40
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_year field
*************************************************************************************/
static void testCase2Suite24(void)
{
	unsigned int Test_id = testCasesSuite24[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite24[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S25
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_year Field
*                         (a float number in range: 2000.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Fady
*                          Age                          -> 24
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 2000.5
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_42
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_year field
*************************************************************************************/
static void testCase1Suite25(void)
{
	unsigned int Test_id = testCasesSuite25.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite25.PersonalInfo_Form.id);
}

/*
static void testCase1Suite26(void)
{
	unsigned int Test_id = testCasesSuite26[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite26[0].PersonalInfo_Form.id);
}
*/

/************************************************************************************
* Test ID                : TC1-S26
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_year Field
*                         (a float number out of range: 2024.5)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Eyad
*                          Age                          -> 24
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 2024.5
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_44
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_year field
*************************************************************************************/
static void testCase1Suite26(void)
{
	unsigned int Test_id = testCasesSuite26.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite26.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S27
* Description            : Testing the Add Account Functionality with Invalid Values for the DOB_year Field
*                         (a year value containing characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Hamsa
*                          Age                          -> 24
*                          DOB_day                      -> 15
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> '200p'
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_4399
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the DOB_year field
*************************************************************************************/
static void testCase1Suite27(void)
{
	unsigned int Test_id = testCasesSuite27.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite27.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S28
* Description            : Testing the Add Account Functionality with Invalid Values for the Gender Field
*                         (out of range value: 0)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Sama
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> 0
*                          UserName                     -> EdgesAcademy_45
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the gender field
*************************************************************************************/
static void testCase1Suite28(void)
{
	unsigned int Test_id = testCasesSuite28[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite28[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S28
* Description            : Testing the Add Account Functionality with Invalid Values for the Gender Field
*                         (out of range value: 3)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Sayed
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> 3
*                          UserName                     -> EdgesAcademy_46
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the gender field
*************************************************************************************/
static void testCase2Suite28(void)
{
	unsigned int Test_id = testCasesSuite28[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite28[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S29
* Description            : Testing the Add Account Functionality with Invalid Values for the Gender Field
*                         (a character)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Mohab
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> 'l'
*                          UserName                     -> EdgesAcademy_48
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the gender field
*************************************************************************************/
static void testCase1Suite29(void)
{
	unsigned int Test_id = testCasesSuite29.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite29.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S30
* Description            : Testing the Add Account Functionality with Invalid Values for the Educational Status
*                          Field (out of range value)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Maha
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> 0
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_49
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the educational status field
*************************************************************************************/
static void testCase1Suite30(void)
{
	unsigned int Test_id = testCasesSuite30[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite30[0].PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TC2-S30
* Description            : Testing the Add Account Functionality with Invalid Values for the Educational Status
*                          Field (out of range value)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Mohamed
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> 7
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_50
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the educational status field
*************************************************************************************/
static void testCase2Suite30(void)
{
	unsigned int Test_id = testCasesSuite30[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite30[1].PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TC1-S31
* Description            : Testing the Add Account Functionality with Invalid Values for the Educational Status
*                          Field (a character)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Fady
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> 'l'
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_52
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the educational status field
*************************************************************************************/
static void testCase1Suite31(void)
{
	unsigned int Test_id = testCasesSuite31.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite31.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S32
* Description            : Testing the Add Account Functionality with Adding 3 Users in A row
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Salama
*                          Age                          -> 28
*                          DOB_day                      -> 2
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1987
*                          Educational_Status           -> PHD_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy_5
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid 
*************************************************************************************/
static void testCase1Suite32(void)
{
	unsigned int Test_id = testCasesSuite32[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite32[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite32[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite32[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite32[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite32[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite32[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite32[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite32[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite32[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite32[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S32
* Description            : Testing the Add Account Functionality with Adding 3 Users in A row
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Arwa
*                          Age                          -> 24
*                          DOB_day                      -> 15
*                          DOB_Month                    -> 2
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_6
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase2Suite32(void)
{
	unsigned int Test_id = testCasesSuite32[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite32[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite32[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite32[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite32[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite32[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite32[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite32[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite32[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite32[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite32[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC3-S32
* Description            : Testing the Add Account Functionality with Adding 3 Users in A row
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> kamilia
*                          Age                          -> 45
*                          DOB_day                      -> 27
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 1979
*                          Educational_Status           -> PHD_Holder
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy3
*                          Password                     -> 12345678
*                          Password Recheck             -> 12345678
* Test Expected output   : The DB should not be updated with the previous inputs as the maximum number of users
*                          is reached
* Reason                 : All fields are valid
*************************************************************************************/
//returns TRUE
static void testCase3Suite32(void)
{
	struct User_Input_Type* pTestCase3Suite32 = &testCasesSuite32[2];
	unsigned char actualResult = Add_Account(pTestCase3Suite32);
	(pTestCase3Suite32)->PersonalInfo_Form.id = current_user_test - 1;
	CU_ASSERT_FALSE(actualResult);

	unsigned int Test_id = testCasesSuite32[2].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_NOT_EQUAL(DB_info[Test_id].id, testCasesSuite32[2].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S33
* Description            : Testing the Add Account Functionality with Boundary Cases for the Username Field
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Soha
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> Soha_Adel_Muhammed_AbdEl_Kereem
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase1Suite33(void)
{
	unsigned int Test_id = testCasesSuite33[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite33[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite33[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite33[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite33[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite33[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite33[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite33[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite33[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite33[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite33[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S33
* Description            : Testing the Add Account Functionality with Boundary Cases for the Username Field
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Fady
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> Edges___
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase2Suite33(void)
{
	unsigned int Test_id = testCasesSuite33[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite33[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite33[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite33[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite33[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite33[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite33[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite33[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite33[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite33[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite33[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S34
* Description            : Testing the Add Account Functionality with Boundary Cases for the Password Field
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Somaia
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> Somaia_Adel
*                          Password                     -> Somaia_Adel_Muhammed_1122334455
*                          Password Recheck             -> Somaia_Adel_Muhammed_1122334455
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase1Suite34(void)
{
	unsigned int Test_id = testCasesSuite34[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite34[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite34[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite34[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite34[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite34[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite34[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite34[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite34[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite34[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite34[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S34
* Description            : Testing the Add Account Functionality with Boundary Cases for the Password Field
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Adel
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> Edges__Academy
*                          Password                     -> 12345678
*                          Password Recheck             -> 12345678
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase2Suite34(void)
{
	unsigned int Test_id = testCasesSuite34[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite34[1].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite34[1].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite34[1].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite34[1].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite34[1].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite34[1].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite34[1].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite34[1].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite34[1].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite34[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S35
* Description            : Testing the Add Account Functionality with Invalid Values for the Username Field
*                          (33 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Soha
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> Soha_Adel_Muhammed_Abd_El__Kereem
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs 
* Reason                 : All fields are valid EXCEPT the username field
*************************************************************************************/
static void testCase1Suite35(void)
{
	unsigned int Test_id = testCasesSuite35[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite35[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S35
* Description            : Testing the Add Account Functionality with Invalid Values for the Username Field
*                          (6 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Fady
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> Edges_
*                          Password                     -> 12345678E
*                          Password Recheck             -> 12345678E
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the username field
*************************************************************************************/
static void testCase2Suite35(void)
{
	unsigned int Test_id = testCasesSuite35[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite35[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S36
* Description            : Testing the Add Account Functionality with Invalid Values for the Password Field
*                          (6 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Sofia
*                          Age                          -> 31
*                          DOB_day                      -> 29
*                          DOB_Month                    -> 5
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> Sofia_Samir123
*                          Password                     -> 123456
*                          Password Recheck             -> 123456
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the password field
*************************************************************************************/
static void testCase1Suite36(void)
{
	unsigned int Test_id = testCasesSuite36[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite36[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S36
* Description            : Testing the Add Account Functionality with Invalid Values for the Password Field
*                          (32 characters)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Fadwa
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> Fadwa_12345
*                          Password                     -> 123456789101112131415161718192021
*                          Password Recheck             -> 123456789101112131415161718192021
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the password field
*************************************************************************************/
static void testCase2Suite36(void)
{
	unsigned int Test_id = testCasesSuite36[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite36[1].PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TC1-S37
* Description            : Testing the Add Account Functionality with Invalid Values for the Password Recheck
*                          Field (not the same as the password field value)
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Tharwat
*                          Age                          -> 31
*                          DOB_day                      -> 30
*                          DOB_Month                    -> 6
*                          DOB_Year                     -> 1993
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> tharwat_2024
*                          Password                     -> hello_there@@
*                          Password Recheck             -> Hello_there@@
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid EXCEPT the password recheck field
*************************************************************************************/
static void testCase1Suite37(void)
{
	unsigned int Test_id = testCasesSuite37.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite37.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S38
* Description            : Testing the Add Account Functionality with Adding Users with the Same username
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Salma
*                          Age                          -> 22
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 2002
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_2024
*                          Password                     -> Salma12345
*                          Password Recheck             -> Salma12345
* Test Expected output   : The DB should be updated with the previous inputs
* Reason                 : All fields are valid 
*************************************************************************************/
static void testCase1Suite38(void)
{
	unsigned int Test_id = testCasesSuite38[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite38[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite38[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite38[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite38[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite38[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite38[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite38[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite38[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite38[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite38[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S38
* Description            : Testing the Add Account Functionality with Adding Users with the Same username
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Mariam
*                          Age                          -> 24
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy_2024
*                          Password                     -> 123_456_
*                          Password Recheck             -> 123_456_
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase2Suite38(void)
{
	unsigned int Test_id = testCasesSuite38[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	//CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite38[1].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC1-S39
* Description            : Testing the Add Account Functionality with Adding Two Identical Users
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amira
*                          Age                          -> 22
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 2002
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> amira_hassan_11
*                          Password                     -> amira_1234
*                          Password Recheck             -> amira_1234
* Test Expected output   : The DB should be updated with the previous inputs
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase1Suite39(void)
{
	unsigned int Test_id = testCasesSuite39[0].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, testCasesSuite39[0].PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, testCasesSuite39[0].PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, testCasesSuite39[0].PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, testCasesSuite39[0].PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, testCasesSuite39[0].PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, testCasesSuite39[0].PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, testCasesSuite39[0].PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, testCasesSuite39[0].LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, testCasesSuite39[0].LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite39[0].PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TC2-S39
* Description            : Testing the Add Account Functionality with Adding Two Identical Users
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Amira
*                          Age                          -> 22
*                          DOB_day                      -> 23
*                          DOB_Month                    -> 10
*                          DOB_Year                     -> 2002
*                          Educational_Status           -> Faculty_Student
*                          Gender                       -> Female
*                          UserName                     -> amira_hassan_11
*                          Password                     -> amira_1234
*                          Password Recheck             -> amira_1234
* Test Expected output   : The DB should not be updated with the previous inputs
* Reason                 : All fields are valid
*************************************************************************************/
static void testCase2Suite39(void)
{
	unsigned int Test_id = testCasesSuite39[1].PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, 0);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, 0);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, "");
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, "");
	CU_ASSERT_EQUAL(DB_info[Test_id].id, testCasesSuite39[1].PersonalInfo_Form.id);
}


