#include "Tests.h"
#include "../Generic/Data_Types.h"


/************************************************************************************
* Test ID                : TC1-S43
* Description            : Testing the Delete Reservation Functionality for Already Existing Users
* Pre-requisites         : Run Suite 42 Before Running this One
* Test inputs            :
*                          Student ID 0                         -> 0
*                          Student ID 1                         -> 1
*                          Student ID 2                         -> 2
*                          Course ID 2                          -> 2
*                          Course ID 3                          -> 3
*                          Course ID 4                          -> 4
* Test Expected output   : The function should return true and the enrollments array should be updated
*                          correctly for the deleted reservations
* Reason                 : The function deletes a reservation of a specific course for a specific student
* Comment                : the delete reservation actualy deletes but it doesn't update the status of 
                           enrolling. So, a student may be deleted and the num of enrolled student decreases, 
						   but in the enrollments array it's place remains true
*************************************************************************************/
static void testCase1Suite43(void) {
	unsigned char userId_0 = 0, userId_1 = 1, userId_2 = 2, courseId_2 = 2, courseId_3 = 3, courseId_4 = 4;
	printf("\nenrollments for user 0 before deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[0][0], Enrollments[0][1], Enrollments[0][2], Enrollments[0][3], Enrollments[0][4], Enrollments[0][5]);
	printf("\nenrollments for user 1 before deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[1][0], Enrollments[1][1], Enrollments[1][2], Enrollments[1][3], Enrollments[1][4], Enrollments[1][5]);
	printf("\nenrollments for user 2 before deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[2][0], Enrollments[2][1], Enrollments[2][2], Enrollments[2][3], Enrollments[2][4], Enrollments[2][5]);
	printf("\nnum of enrolled students for course 2 before reservations deletion: %d\n", ListofCourse[courseId_2-1].NumberOfEnrolledStudents);
	unsigned char actualResult1 = DBM_DeleteReservation(courseId_2, userId_0);
	unsigned char actualResult2 = DBM_DeleteReservation(courseId_3, userId_1);
	unsigned char actualResult3 = DBM_DeleteReservation(courseId_2, userId_1);
	unsigned char actualResult4 = DBM_DeleteReservation(courseId_4, userId_2);
	unsigned char actualResult5 = DBM_DeleteReservation(courseId_2, userId_2);

	unsigned char expectedResult = TRUE;

	printf("\nenrollments for user 0 after deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[0][0], Enrollments[0][1], Enrollments[0][2], Enrollments[0][3], Enrollments[0][4], Enrollments[0][5]);
	printf("\nenrollments for user 1 after deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[1][0], Enrollments[1][1], Enrollments[1][2], Enrollments[1][3], Enrollments[1][4], Enrollments[1][5]);
	printf("\nenrollments for user 2 after deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[2][0], Enrollments[2][1], Enrollments[2][2], Enrollments[2][3], Enrollments[2][4], Enrollments[2][5]);
	printf("\nnum of enrolled students for course 2 after reservations deletion: %d\n", ListofCourse[courseId_2-1].NumberOfEnrolledStudents);
	CU_ASSERT_EQUAL(actualResult1, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_0][courseId_2 - 1]);

	CU_ASSERT_EQUAL(actualResult2, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_1][courseId_3 - 1]);
	CU_ASSERT_EQUAL(actualResult3, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_1][courseId_2 - 1]);


	CU_ASSERT_EQUAL(actualResult4, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_2][courseId_4 - 1]);
	CU_ASSERT_EQUAL(actualResult5, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_2][courseId_2 - 1]);


}


/************************************************************************************
* Test ID                : TC2-S43
* Description            : Testing the Delete Reservation Functionality for Newly Added Users
* Pre-requisites         : Run Suite 42 Before Running this One
* Test inputs            :
*                          Student ID 3                         -> 3
*                          Student ID 4                         -> 4
*                          Course ID 2                          -> 2
* Test Expected output   : The function should return true and the enrollments array should be updated
*                          correctly for the deleted reservations
* Reason                 : The function deletes a reservation of a specific course for a specific student
* Comment                : the delete reservation actualy deletes but it doesn't update the status of
						   enrolling. So, a student may be deleted and the num of enrolled student decreases,
						   but in the enrollments array it's place remains true
*************************************************************************************/
static void testCase2Suite43(void) {
	unsigned char userId_3 = 3, userId_4 = 4, courseId_2 = 2;
	printf("\nenrollments for user 3 before deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[3][0], Enrollments[3][1], Enrollments[3][2], Enrollments[3][3], Enrollments[3][4], Enrollments[3][5]);
	printf("\nenrollments for user 4 before deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[4][0], Enrollments[4][1], Enrollments[4][2], Enrollments[4][3], Enrollments[4][4], Enrollments[4][5]);
	printf("\nnum of enrolled students for course 2 before reservations deletion: %d\n", ListofCourse[courseId_2-1].NumberOfEnrolledStudents);
	unsigned char actualResult1 = DBM_DeleteReservation(courseId_2, userId_3);
	unsigned char actualResult2 = DBM_DeleteReservation(courseId_2, userId_4);

	unsigned char expectedResult = TRUE;

	printf("\nenrollments for user 3 after deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[3][0], Enrollments[3][1], Enrollments[3][2], Enrollments[3][3], Enrollments[3][4], Enrollments[3][5]);
	printf("\nenrollments for user 4 after deletion: 1- %d , 2- %d , 3- %d , 4- %d , 5- %d , 6- %d\n", Enrollments[4][0], Enrollments[4][1], Enrollments[4][2], Enrollments[4][3], Enrollments[4][4], Enrollments[4][5]);
	printf("\nnum of enrolled students for course 2 after reservations deletion: %d\n", ListofCourse[courseId_2-1].NumberOfEnrolledStudents);

	CU_ASSERT_EQUAL(actualResult1, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_3][courseId_2 - 1]);

	CU_ASSERT_EQUAL(actualResult2, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId_4][courseId_2 - 1]);

}

/************************************************************************************
* Test ID                : TC3-S43
* Description            : Testing the Delete Reservation Functionality for an Empty Entry
* Pre-requisites         : Run Suite 42 Before Running this One
* Test inputs            :
*                          Student ID 0                         -> 0
*                          Course ID 4                          -> 4
* Test Expected output   : The function should return true 
* Reason                 : This is the initial value of the return if nothing actually happend
*************************************************************************************/
static void testCase3Suite43(void) {
	unsigned char userId = 0, courseId = 4;
	unsigned char actualResult = DBM_DeleteReservation(courseId, userId);
	unsigned char expectedResult = TRUE;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);
	CU_ASSERT_FALSE(Enrollments[userId][courseId - 1]);

}


/************************************************************************************
* Test ID                : TC1-S47
* Description            : Testing the Delete Reservation Functionality with an Invalid Student ID 
                           (out of range)
* Test inputs            :
*                          Student ID                       -> 5
*                          Course ID                        -> 1
* Test Expected output   : The function should return error
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase1Suite47(void) {
	unsigned char userId = 5, courseId = 1;
	unsigned char actualResult = DBM_DeleteReservation(courseId, userId);
	unsigned char expectedResult = ERROR;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


/************************************************************************************
* Test ID                : TC2-S47
* Description            : Testing the Delete Reservation Functionality with an Invalid Student ID
						   (a character)
* Test inputs            :
*                          Student ID                       -> 'u'
*                          Course ID                        -> 1
* Test Expected output   : The function should return error
* Reason                 : The student ID is invalid
*************************************************************************************/
static void testCase2Suite47(void) {
	unsigned char userId = 'u', courseId = 1;
	unsigned char actualResult = DBM_DeleteReservation(courseId, userId);
	unsigned char expectedResult = ERROR;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}

/************************************************************************************
* Test ID                : TC2-S47
* Description            : Testing the Delete Reservation Functionality with an Invalid Course ID
						   (out of range)
* Test inputs            :
*                          Student ID                       -> 1
*                          Course ID                        -> 7
* Test Expected output   : The function should return error
* Reason                 : The course ID is invalid
*************************************************************************************/
static void testCase3Suite47(void) {
	unsigned char userId = 1, courseId = 7;
	unsigned char actualResult = DBM_DeleteReservation(courseId, userId);
	unsigned char expectedResult = ERROR;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


/************************************************************************************
* Test ID                : TC3-S47
* Description            : Testing the Delete Reservation Functionality with an Invalid Course ID
						   (a character)
* Test inputs            :
*                          Student ID                       -> 1
*                          Course ID                        -> 'u'
* Test Expected output   : The function should return error
* Reason                 : The course ID is invalid
*************************************************************************************/
static void testCase4Suite47(void) {
	unsigned char userId = 1, courseId = 'u';
	unsigned char actualResult = DBM_DeleteReservation(courseId, userId);
	unsigned char expectedResult = ERROR;
	printf("\nactual result: %d", actualResult);
	CU_ASSERT_EQUAL(actualResult, expectedResult);

}


