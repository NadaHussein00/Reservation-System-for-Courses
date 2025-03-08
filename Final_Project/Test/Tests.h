#pragma once

// Before including standard headers, remove any macro definitions
#undef snprintf
// Include standard headers
#include <stdio.h>

/* Includes to use CUnit Framework */
#include <CUnit.h>	   // ASSERT macros for use in test cases, and includes other framework headers.
#include <Automated.h> // Automated interface with xml output.
#include <Basic.h>     // Basic interface with non-interactive output to stdout.
#include <Console.h>   // Interactive console interface.

/* this is our software under test */
#include "../App/App.h"
#include "../Generic/Data_Types.h"

#define NUM_OF_TEST_USERS_PER_SUITE 2

extern struct Course ListofCourse[MAX_COURSES];

/* The reason why some of the following arrays of structures contain of two test users is that the maximum
* users in the database are 5, so the maximum number of users to create at one time are 2 users.
* The rest are structures not array of structures as some test users are better to be tested alone to observe
* them better, as some of them when tested in the same suite with another test user we can't catch
* the behaviors these data do, specially in the invalid cases. So, it was better to test them in isolation
* as a stand alone suite.
* 
* 
* The approached followed here is a personal preference to manage test users and test suites in a better way
* and to easily observe the test data and the behaviors casued by these data.
*/

static struct User_Input_Type testCasesSuite1[] = {
{
	{-1,"Ahmed",26,23,10,1998,Male,Masters_Student},
	{{"EdgesAcademy_1","Edges123"},"Edges123"}
},

{
	{-1,"Manal",17,23,12,2007,Female,Student},
	{{"EdgesAcademy_2","Edges123"},"Edges123"}
} };
static struct User_Input_Type testCasesSuite2[] = {

{
	{ -1,"Kamal",30,1,12,1994,Male,Graduate},
	{{"EdgesAcademy_3","12345678E"},"12345678E"}
},

{
	{ -1,"Mohamed",23,1,2,2001,Male,Faculty_Student},
	{{"EdgesAcademy_4","12345678E"},"12345678E"}
}

};


static struct User_Input_Type testCasesSuite3[] = {

{
	{ -1,"Salama",37,28,2,1987,Male,PHD_Student},
	{{"EdgesAcademy_5","12345678E"},"12345678E"}
},

{
	{ -1,"Arwa",44,29,2,1980,Female,PHD_Holder},
	{{"EdgesAcademy_6","12345678E"},"12345678E"}
}
};


/* boundary values for name*/
static struct User_Input_Type testCasesSuite4[] = {

{
	{ -1,"Amr",24,28,2,2000,Male,Graduate},
	{{"EdgesAcademy_7","12345678E"},"12345678E"}
},

{
	{ -1,"ArwaKhaledSayedMahmodAbdElkerem",23,19,10,2001,Female,Graduate},
	{{"EdgesAcademy_8","12345678E"},"12345678E"}
}

};


/* boundary values for age*/
static struct User_Input_Type testCasesSuite5[] = {

{
	{ -1,"Amir",0,28,2,2024,Male,Faculty_Student},
	{{"EdgesAcademy_9","12345678E"},"12345678E"}
},

{
	{ -1,"Alia",100,19,10,1924,Female,Graduate},
	{{"EdgesAcademy_10","12345678E"},"12345678E"}
}

};



/* boundary values for DOB_day*/
static struct User_Input_Type testCasesSuite6[] = {

{
	{ -1,"Akram",20,1,2,2004,Male,Faculty_Student},
	{{"EdgesAcademy_11","12345678E"},"12345678E"}
},

{
	{ -1,"Asmaa",21,31,10,2003,Female,Faculty_Student},
	{{"EdgesAcademy_12","12345678E"},"12345678E"}
}

};

/* boundary values for DOB_month*/
static struct User_Input_Type testCasesSuite7[] = {

{
	{ -1,"Ahmed",20,1,1,2004,Male,Faculty_Student},
	{{"EdgesAcademy_13","12345678E"},"12345678E"}
},

{
	{ -1,"Kawthar",21,31,12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_14","12345678E"},"12345678E"}
}

};
/*invalid name 1*/

static struct User_Input_Type testCasesSuite8[] = {

{
	{ -1,"Al",20,1,1,2004,Male,Faculty_Student},
	{{"EdgesAcademy_15","12345678E"},"12345678E"}
},

{
	{ -1,"KawtharMahmoudSamirAmirElHalawany",21,31,12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_16","12345678E"},"12345678E"}
}

};

/*invalid name 2*/
static struct User_Input_Type testCasesSuite9[] = {

{
	{ -1,"Ali@Samir",20,30,4,2004,Male,Faculty_Student},
	{{"EdgesAcademy_17","12345678E"},"12345678E"}
},

{
	{ -1,"Kawthar1234",21,31,12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_18","12345678E"},"12345678E"}
}

};


static struct User_Input_Type testCasesSuite10[] = {

{
	{ -1,"Adel",-1,30,4,2000,Male,Graduate},
	{{"EdgesAcademy_20","12345678E"},"12345678E"}
},

{
	{ -1,"Asmaa",101,31,12,1924,Female,Graduate},
	{{"EdgesAcademy_21","12345678E"},"12345678E"}
}

};

static struct User_Input_Type testCasesSuite11[] = {

{
	{ -1,"Ali",0.5,30,4,2024,Male,Faculty_Student},
	{{"EdgesAcademy_22","12345678E"},"12345678E"}
},

{
	{ -1,"Kawthar",100.5,31,12,1924,Female,Faculty_Student},
	{{"EdgesAcademy_23","12345678E"},"12345678E"}
}

};

static struct User_Input_Type testCasesSuite12[] = {

{
	{ -1,"Amira",17.5,30,4,2004,Female,Student},
	{{"EdgesAcademy_24","12345678E"},"12345678E"}
},

{
	{ -1,"Atef",'r',30,4,2004,Male,Student},
	{{"EdgesAcademy_99","12345678E"},"12345678E"}
}
};


static struct User_Input_Type testCasesSuite13[] = {

{
	{ -1,"Sandra",20,0,4,2004,Female,Faculty_Student},
	{{"EdgesAcademy_25","12345678E"},"12345678E"}
},

{
	{ -1,"Kamilia",21,32,12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_26","12345678E"},"12345678E"}
}

};

static struct User_Input_Type testCasesSuite14 =
{
	{ -1,"Maria",21,24.5,12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_28","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite15 =
{
	{ -1,"Martina",21,'t',12,2003,Female,Faculty_Student},
	{{"EdgesAcademy_09","12345678E"},"12345678E"}
};


static struct User_Input_Type testCasesSuite16 =
{
	{ -1,"Manal",24,31.5,12,2000,Female,Graduate},
	{{"EdgesAcademy_30","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite17=
{
	{ -1, "Karima", 24, 0.5, 4, 2000, Female, Graduate },
	{ {"EdgesAcademy_29","12345678E"},"12345678E" }
};

static struct User_Input_Type testCasesSuite18[] = {
{	{ -1,"Mona",31,29,2,1993,Female,Graduate},
	{{"EdgesAcademy_31","12345678E"},"12345678E"}
},
{	{ -1,"Amnaa",31,30,2,1993,Female,Graduate},
	{{"EdgesAcademy_32","12345678E"},"12345678E"}
}
};

/*invalid DOB_month*/
static struct User_Input_Type testCasesSuite19[] = {
{	{ -1,"Salma",31,29,0,1993,Female,Graduate},
	{{"EdgesAcademy_33","12345678E"},"12345678E"}
},
{	{ -1,"Farida",31,30,13,1993,Female,Graduate},
	{{"EdgesAcademy_34","12345678E"},"12345678E"}
}
};

static struct User_Input_Type testCasesSuite20 =
{ { -1,"Sara",31,30,10.5,1993,Female,Graduate},
	{{"EdgesAcademy_36","12345678E"},"12345678E"}

};

static struct User_Input_Type testCasesSuite21 =
{ { -1,"Somaia",31,29,0.5,1993,Female,Graduate},
	{{"EdgesAcademy_37","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite22=
{	{ -1,"Farah",31,30,12.5,1993,Female,Graduate},
	{{"EdgesAcademy_38","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite23 =
{	{ -1,"Samira",31,29,'i',1993,Female,Graduate},
	{{"EdgesAcademy_378","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite24[] = {
{	{ -1,"Hala",24,29,5,1923,Female,Graduate},
	{{"EdgesAcademy_39","12345678E"},"12345678E"}
},
{	{ -1,"Nesma",24,30,6,2025,Female,Graduate},
	{{"EdgesAcademys_40","12345678E"},"12345678E"}
}
};

static struct User_Input_Type testCasesSuite25 =
{ { -1,"Fady",24,30,6,2000.5,Male,Graduate},
	{{"EdgesAcademy_42","12345678E"},"12345678E"}

};

static struct User_Input_Type testCasesSuite26 = 
	/*{{-1,"Samira",100,29,5,1923.5,Female,Graduate},
		{{"EdgesAcademy_43","12345678E"},"12345678E"}
	},*/
	{	{ -1,"Eyad",0,30,6,2024.5,Male,Graduate},
		{{"EdgesAcademy_44","12345678E"},"12345678E"}
	};

static struct User_Input_Type testCasesSuite27 =
{ { -1,"Hamsa",24,15,5,'200p',Female,Graduate},
	{{"EdgesAcademy_4399","12345678E"},"12345678E"}
};

static struct User_Input_Type testCasesSuite28[] = {
{	{ -1,"Sama",31,29,5,1993,0,Graduate},
	{{"EdgesAcademy_45","12345678E"},"12345678E"}
},
{	{ -1,"Sayed",31,30,6,1993,3,Graduate},
	{{"EdgesAcademy_46","12345678E"},"12345678E"}
}
};

static struct User_Input_Type testCasesSuite29 =
{ { -1,"Mohab",31,30,6,1993,'l',Graduate},
	{{"EdgesAcademy_48","12345678E"},"12345678E"}

};

static struct User_Input_Type testCasesSuite30[] = {
{	{ -1,"Maha",31,29,5,1993,Female,0},
	{{"EdgesAcademy_49","12345678E"},"12345678E"}
},
{	{ -1,"Mohamed",31,30,6,1993,Male,7},
	{{"EdgesAcademy_50","12345678E"},"12345678E"}
}
};

static struct User_Input_Type testCasesSuite31 =
{ { -1,"Fady",31,30,6,1993,Male,'l'},
	{{"EdgesAcademy_52","12345678E"},"12345678E"}

};

static struct User_Input_Type testCasesSuite32[] = {

{
	{ -1,"Salama",37,28,2,1987,Male,PHD_Student},
	{{"EdgesAcademy_5","12345678E"},"12345678E"}
},

{
	{ -1,"Arwa",24,15,2,2000,Female,Graduate},
	{{"EdgesAcademy_6","12345678E"},"12345678E"}
},
{
	{ -1,"Kamilia",45,27,10,1979,Female,PHD_Holder},
	{{"EdgesAcademy3","12345678"},"12345678"}
}

};
/*boundary cases for the username*/
static struct User_Input_Type testCasesSuite33[] = {
{	{ -1,"Soha",31,29,5,1993,Female,Graduate},
	{{"Soha_Adel_Muhammed_AbdEl_Kereem","12345678E"},"12345678E"}
},
{	{ -1,"Fady",31,30,6,1993,Male,Graduate},
	{{"Edges___","12345678E"},"12345678E"}
}
};

/*boundary cases for the password*/
static struct User_Input_Type testCasesSuite34[] = {
{	{ -1,"Somaia",31,29,5,1993,Female,Graduate},
	{{"Somaia_Adel","Somaia_Adel_Muhammed_1122334455"},"Somaia_Adel_Muhammed_1122334455"}
},
{	{ -1,"Adel",31,30,6,1993,Male,Graduate},
	{{"Edges__Academy","12345678"},"12345678"}
}
};

/*invalid inputs for the username*/
static struct User_Input_Type testCasesSuite35[] = {
{	{ -1,"Soha",31,29,5,1993,Female,Graduate},
	{{"Soha_Adel_Muhammed_Abd_El__Kereem","12345678E"},"12345678E"}
},
{	{ -1,"Fady",31,30,6,1993,Male,Graduate},
	{{"Edges_","12345678E"},"12345678E"}
}
};

/*invalid inputs for the password*/
static struct User_Input_Type testCasesSuite36[] = {
{	{ -1,"Sofia",31,29,5,1993,Female,Graduate},
	{{"Sofia_Samir123","123456"},"123456"}
},
{	{ -1,"Fadwa",31,30,6,1993,Female,Graduate},
	{{"Fadwa_12345","123456789101112131415161718192021"},"123456789101112131415161718192021"}
}
};

/*invalid inputs for the password recheck*/
static struct User_Input_Type testCasesSuite37 = {

 { -1, "Tharwat", 31, 30, 6, 1993, Male, Graduate },
	{ {"tharwat_2024","hello_there@@"},"Hello_there@@" }

};
//users with the same username
static struct User_Input_Type testCasesSuite38[] = {
{
	{-1,"Salma",22,23,10,2002,Female,Faculty_Student},
	{{"EdgesAcademy_2024","Salma12345"},"Salma12345"}
},

{
	{-1,"Mariam",24,23,12,2000,Female,Graduate},
	{{"EdgesAcademy_2024","123_456_"},"123_456_"}
} };
//two identical users
static struct User_Input_Type testCasesSuite39[] = {
{
	{-1,"Amira",22,23,10,2002,Female,Faculty_Student},
	{{"amira_hassan_11","amira_1234"},"amira_1234"}
},

{
	{-1,"Amira",22,23,10,2002,Female,Faculty_Student},
	{{"amira_hassan_11","amira_1234"},"amira_1234"}
} };


/* Prototype Function to Run the Tests */
void Main_Test_Runner(void);
