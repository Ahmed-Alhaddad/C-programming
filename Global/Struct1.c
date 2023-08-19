#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
  char name[30];
  int id;
  float degree;
} student_t;

student_t student[2];

void Get_info (student_t student_info[], unsigned char arr_size);
void Print_info (student_t student_info[], unsigned char arr_size);

int
main ()
{
  Get_info (student, 2);
  Print_info (student, 2);

  return 0;
}

void
Get_info (student_t student_info[], unsigned char arr_size)
{
  unsigned char count = 0;
  for (count = 0; count < arr_size; count++)
    {

      printf ("Please Insert the Name [%d]  : ", count);
      scanf ("%[^\n]", student[count].name);


      printf ("Please Insert the ID [%d]    : ", count);
      scanf ("%d", &(student_info[count].id));

      printf ("Please Insert the Degree [%d]: ", count);
      scanf ("%f", &(student_info[count].degree));

      getchar ();

    }


}

void
Print_info (student_t student_info[], unsigned char arr_size)
{
  unsigned char count = 0;
  for (count = 0; count < arr_size; count++)
    {
      printf (" %s \n %d \n %0.2f \n\n",
	      student_info[count].name,
	      student_info[count].id, student_info[count].degree);
    }
}
