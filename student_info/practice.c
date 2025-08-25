#include <stdio.h>
int main(){
     char name[12] = "Manuel Giron";
     int course_id = 2271;
     int student_id = 981;
     int minus = student_id - course_id;
     printf("Name: \t\t\t%s\nCourse ID:\t\t\t%d\nStudent ID:\t\t\t%d\nStudent ID- Course ID;\t\t\t%d",name,course_id,student_id,minus);
     return 0;
}