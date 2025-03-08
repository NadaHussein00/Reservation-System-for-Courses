#include "Tests.h"
#include "../Generic/Data_Types.h"


/************************************************************************************
* Test ID                : TC1-S48
* Description            : Testing the Show Student Courses Functionality with an Already Existing Student
* Test inputs            :
*                          Student ID                        -> 0
*                          Course ID 5                       -> 5
*                          Course ID 6                       -> 6
* Test Expected output   : The function should show those courses
* Reason                 : The student ID is valid and this student is actually enrolled in those sourses
* Comment                : Course with ID 2 is shown as a registered course for this student, 
                           as previously this course isn't deleted in TC1-S43
*************************************************************************************/
static void testCase1Suite48(void) {
	unsigned char userId = 0, courseId_5 = 5, courseId_6 = 6;
	CU_ASSERT_TRUE(Enrollments[userId][courseId_5 - 1]);
	CU_ASSERT_TRUE(Enrollments[userId][courseId_6 - 1]);
	ShowStudentCourses(userId);

}


/************************************************************************************
* Test ID                : TC2-S48
* Description            : Testing the Show Student Courses Functionality with an Already Existing Student
* Test inputs            :
*                          Student ID                        -> 1
*                          Course ID 3                       -> 3
*                          Course ID 4                       -> 4
* Test Expected output   : The function should show those courses
* Reason                 : The student ID is valid and this student is actually enrolled in those sourses
* Comment                : Course with ID 2 is shown as a registered course for this student,
						   as previously this course isn't deleted in TC2-S43
*************************************************************************************/
static void testCase2Suite48(void) {
	unsigned char userId = 1, courseId_3 = 3, courseId_4 = 4;
	AddStudentToCourse(courseId_3, userId);
	AddStudentToCourse(courseId_4, userId);
	CU_ASSERT_TRUE(Enrollments[userId][courseId_3 - 1]);
	CU_ASSERT_TRUE(Enrollments[userId][courseId_4 - 1]);
	ShowStudentCourses(userId);
}

/************************************************************************************
* Test ID                : TC3-S48
* Description            : Testing the Show Student Courses Functionality with a Newly Added Student
* Test inputs            :
*                          Student ID                        -> 3
*                          Course ID 3                       -> 3
*                          Course ID 4                       -> 4
* Test Expected output   : The function should show those courses
* Reason                 : The student ID is valid and this student is actually enrolled in those sourses
* Comment                : Course with ID 2 is shown as a registered course for this student,
						   as previously this course isn't deleted in TC2-S43
*************************************************************************************/
static void testCase3Suite48(void) {
	unsigned char userId = 4, courseId_1 = 1, courseId_6 = 6;
	AddStudentToCourse(courseId_1, userId);
	AddStudentToCourse(courseId_6, userId);
	CU_ASSERT_TRUE(Enrollments[userId][courseId_1 - 1]);
	CU_ASSERT_TRUE(Enrollments[userId][courseId_6 - 1]);
	ShowStudentCourses(userId);
}

/************************************************************************************
* Test ID                : TC1-S49
* Description            : Testing the Show Student Courses Functionality with an Invalid Student ID 
                           (out of range)
* Test inputs            :
*                          Student ID                        -> 5
* Test Expected output   : The function should show a message indicating that the student ID is invalid
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase1Suite49(void) {
	unsigned char userId = 5;
	ShowStudentCourses(userId);
}


/************************************************************************************
* Test ID                : TC2-S49
* Description            : Testing the Show Student Courses Functionality with an Invalid Student ID
						   (a character)
* Test inputs            :
*                          Student ID                        -> 'y'
* Test Expected output   : The function should show a message indicating that the student ID is invalid
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase2Suite49(void) {
	unsigned char userId = 'y';
	ShowStudentCourses(userId);
}
