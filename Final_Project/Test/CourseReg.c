#include "Tests.h"
#include "../Generic/Data_Types.h"
#include "../Courses_Registeration/course_reg.h"
//this test is going well, as the 3rd user (already in the db) is actually assigned to the 1st course
//happy scenario: test the already existing users against their registered courses
//1st user

/************************************************************************************
* Test ID                : TC1-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 5
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase1Suite40(void) {
	unsigned char studentId = 0, courseId = 5;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
}


/************************************************************************************
* Test ID                : TC2-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 6
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase2Suite40(void) {
	unsigned char studentId = 0, courseId = 6;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


/************************************************************************************
* Test ID                : TC3-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 1
*                          Course ID                          -> 5
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase3Suite40(void) {
	unsigned char studentId = 1, courseId = 5;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


/************************************************************************************
* Test ID                : TC4-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 1
*                          Course ID                          -> 6
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase4Suite40(void) {
	unsigned char studentId = 1, courseId = 6;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}



/************************************************************************************
* Test ID                : TC5-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 2
*                          Course ID                          -> 1
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase5Suite40(void) {
	unsigned char studentId = 2, courseId = 1;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}

/************************************************************************************
* Test ID                : TC6-S40
* Description            : Testing the Add Student to Course Functionality with an Already Enrolled Student
* Test inputs            :
*                          Student ID                         -> 2
*                          Course ID                          -> 5
* Test Expected output   : The enrollments entry for this user with this specific course should remain TRUE
* Reason                 : The student is already enrolled
*************************************************************************************/
static void testCase6Suite40(void) {
	unsigned char studentId = 2, courseId = 5;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = AlreadyEnrolled;
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


/************************************************************************************
* Test ID                : TC1-S41
* Description            : Testing the Add Student to Course Functionality to Add An Already Exisiting Student 
                           to a Course 
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 2
* Test Expected output   : The enrollments entry for this user with this specific course should change to TRUE
* Reason                 : The student is enrolled successfully
*************************************************************************************/
 static void testCase1Suite41(void) {
	 unsigned char studentId = 0, courseId = 2, numOfStudentsPerCourseExpected = 1;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = Enrolled;
	printf("\nenrollments for user 0 UPDATED : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[studentId][0], Enrollments[studentId][1], Enrollments[studentId][2], Enrollments[studentId][3], Enrollments[studentId][4], Enrollments[studentId][5]);
	CU_ASSERT_TRUE(Enrollments[studentId][courseId - 1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(ListofCourse[courseId-1].NumberOfEnrolledStudents,1);
	//CU_ASSERT_EQUAL(Enrollments[studentId][courseId - 1],1);

}


 /************************************************************************************
* Test ID                : TC2-S41
* Description            : Testing the Add Student to Course Functionality to Add An Already Exisiting Student
						   to a Course
* Test inputs            :
*                          Student ID                         -> 1
*                          Course ID                          -> 3
* Test Expected output   : The enrollments entry for this user with this specific course should change to TRUE
* Reason                 : The student is enrolled successfully
*************************************************************************************/
static void testCase2Suite41(void) {
	unsigned char studentId = 1, courseId = 3, numOfStudentsPerCourseExpected = 1;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = Enrolled;
	printf("\nenrollments for user 1 UPDATED : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[1][0], Enrollments[1][1], Enrollments[1][2], Enrollments[1][3], Enrollments[1][4], Enrollments[1][5]);
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(ListofCourse[courseId - 1].NumberOfEnrolledStudents, 1);

}


/************************************************************************************
* Test ID                : TC3-S41
* Description            : Testing the Add Student to Course Functionality to Add An Already Exisiting Student
						   to a Course
* Test inputs            :
*                          Student ID                         -> 2
*                          Course ID                          -> 4
* Test Expected output   : The enrollments entry for this user with this specific course should change to TRUE
* Reason                 : The student is enrolled successfully
*************************************************************************************/
static void testCase3Suite41(void) {
	unsigned char studentId = 2, courseId = 4, numOfStudentsPerCourseExpected = 1;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId);
	unsigned char expectedResult = Enrolled;
	printf("\nenrollments for user 2 UPDATED : 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[2][0], Enrollments[2][1], Enrollments[2][2], Enrollments[2][3], Enrollments[2][4], Enrollments[2][5]);
	CU_ASSERT_TRUE(Enrollments[studentId][courseId-1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_EQUAL(ListofCourse[courseId - 1].NumberOfEnrolledStudents, 1);

}


/************************************************************************************
* Test ID                : TC1-S42
* Description            : Testing the Add Student to Course Functionality to Add An Extra Student
						   to a Course with Complete Capacity
* Pre-requisites         : Students are enrolled to a specific course until full capacity
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 2
*                          Extra Student ID                   -> 5
* Test Expected output   : The course should have a number of enrolled students of max. number of students
*                          and no other students are added after that
* Reason                 : The student is enrolled successfully
*************************************************************************************/
static void testCase1Suite42(void) {
	unsigned char courseId = 2;
	unsigned char studentId = 0;
	unsigned char extraStudentId = 5;
	for (studentId = 0;studentId < MAX_STUDENTS_PER_COURSE;studentId++) {
		AddStudentToCourse(courseId, studentId);
	}
	unsigned char actualResult = AddStudentToCourse(courseId, extraStudentId);
	unsigned char expectedResult = CapacityCompleted;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	printf("\nnumber of enrolled students: %d\n", ListofCourse[courseId-1].NumberOfEnrolledStudents);
	CU_ASSERT_EQUAL(ListofCourse[courseId-1].NumberOfEnrolledStudents, MAX_STUDENTS_PER_COURSE);

}


/************************************************************************************
* Test ID                : TC1-S44
* Description            : Testing the Add Student to Course Functionality Along with Both the Check Reservations 
                           Funcionality And Delete Student Functionality to Check if the Reservations of
						   the Deleted Student are Deleted
* Pre-requisites         : Run Suite 42 Before This Suite
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 2
*                          Extra Student ID                   -> 5
* Test Expected output   : The course should have a number of enrolled students of max. number of students
*                          and no other students are added after that
* Reason                 : The student is enrolled successfully
*************************************************************************************/

static void testCase1Suite44(void) {
	DBM_PrintUsers(); //check on database, for in suite 43 reservations ONLY deleted (remember the == bug)
	unsigned char RET;
	unsigned char userId = 3, courseId = 3, numOfStudentsBeforeDeletion=1, numOfStudentsAfterDeletion=0;
	unsigned char actualResult = AddStudentToCourse(courseId, userId);
	unsigned char expectedResult = Enrolled;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_TRUE(Enrollments[userId][courseId - 1]);
	CU_ASSERT_EQUAL(ListofCourse[courseId - 1].NumberOfEnrolledStudents,numOfStudentsBeforeDeletion);
	printf("\nCheck reservations BEFORE the user is DELETED. For course ID 3, it should be ONLY 1 student.\n");
	DBM_CheckReservations();
	for (int i = 0;i < 2;i++) {
		RET = Delete_Account(current_user_test - 1);
	}
	CU_ASSERT_FALSE(Enrollments[userId][courseId - 1]);
	CU_ASSERT_EQUAL(ListofCourse[courseId - 1].NumberOfEnrolledStudents, numOfStudentsAfterDeletion);
	printf("\nCheck reservations AFTER the user is DELETED. For course ID 3, it should have ZERO enrolled students.\n");
	DBM_CheckReservations();
}


/************************************************************************************
* Test ID                : TC1-S45
* Description            : Testing the Add Student to Course Functionality with An Invalid Course ID 
                           (out of range)
* Pre-requisites         : Run Suite 44 Before This Suite
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 7
* Test Expected output   : The function should return false
* Reason                 : The course ID is invalid
*************************************************************************************/
static void testCase1Suite45(void) {
	unsigned char studentId = 0, courseId = 7;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId); //returns 2 (is it capacity complete or error?
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	printf("\nactual result: %d\n", actualResult);

}


/************************************************************************************
* Test ID                : TC2-S45
* Description            : Testing the Add Student to Course Functionality with An Invalid Course ID
						   (a character)
* Pre-requisites         : Run Suite 44 Before This Suite
* Test inputs            :
*                          Student ID                         -> 0
*                          Course ID                          -> 't'
* Test Expected output   : The function should return false
* Reason                 : The course ID is invalid
*************************************************************************************/
static void testCase2Suite45(void) {
	unsigned char studentId = 1, courseId = 't';
	unsigned char actualResult = AddStudentToCourse(courseId, studentId); //returns 2 (is it capacity complete or error?
	unsigned char expectedResult = FALSE;
	printf("\n enrollments[1]['t'-1] :%d", Enrollments[studentId][courseId - 1]);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	printf("\nactual result: %d\n", actualResult);

}

/************************************************************************************
* Test ID                : TC3-S45
* Description            : Testing the Add Student to Course Functionality with An Invalid Student ID
						   (out of range value)
* Pre-requisites         : Run Suite 44 Before This Suite
* Test inputs            :
*                          Student ID                         -> 5
*                          Course ID                          -> 3
* Test Expected output   : The function should return false
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase3Suite45(void) {
	unsigned char studentId = 5, courseId = 3;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId); //
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	printf("\nactual result: %d\n", actualResult);

}


/************************************************************************************
* Test ID                : TC4-S45
* Description            : Testing the Add Student to Course Functionality with An Invalid Student ID
						   (a character)
* Pre-requisites         : Run Suite 44 Before This Suite
* Test inputs            :
*                          Student ID                         -> 't'
*                          Course ID                          -> 3
* Test Expected output   : The function should return false
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase4Suite45(void) {
	unsigned char studentId = 't', courseId = 3;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId); //
	unsigned char expectedResult = FALSE;
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	printf("\nactual result: %d\n", actualResult);

}


/************************************************************************************
* Test ID                : TC5-S45
* Description            : Testing the Add Student to Course Functionality with An Empty Entry in the DB
* Pre-requisites         : Run Suite 44 Before This Suite
* Test inputs            :
*                          Student ID                         -> 3
*                          Course ID                          -> 3
* Test Expected output   : The function should return false
* Reason                 : The DB has only 3 users, an empty entry with an ID of 3 cannot be added
*************************************************************************************/
static void testCase5Suite45(void) {
	unsigned char studentId = 3, courseId = 3, currentNumOfEnrolledStudents = 3;
	unsigned char actualResult = AddStudentToCourse(courseId, studentId); //
	unsigned char expectedResult = FALSE;
	CU_ASSERT_FALSE(Enrollments[studentId][courseId - 1]);
	printf("\nactual result: %d\n", actualResult);
	CU_ASSERT_EQUAL(ListofCourse[courseId - 1].NumberOfEnrolledStudents, currentNumOfEnrolledStudents);
	printf("\nListofCourse[Course_ID-1].NumberOfEnrolledStudents :%d", ListofCourse[courseId - 1].NumberOfEnrolledStudents);
	CU_ASSERT_EQUAL(actualResult, expectedResult); //is it enrolled!!

}