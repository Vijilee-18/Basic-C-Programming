/*Author:Vijilee George Kurian 
Descrption:Program to find the total marks and  average of each student and total student using structure
Date:03/04/2025*/

#include<stdio.h>
struct student
{
    char name[50];
    int roll_no;
    int mark[3];
};
int main()
{
  int size,total_sum=0;
  printf("Enter the no.of students:");
  scanf("%d",&size);
  struct student students[size];
  for(int i=0;i<size;i++)
  {
    int sum=0;
    float avg=0;
    printf("Enter the detail's of  student %d:\n",i+1);
    printf("Name:");
    scanf("%s",students[i].name);
    printf("Roll_no:");
    scanf("%d",&students[i].roll_no);
    for(int j=0;j<3;j++)
    {
        printf("Enter the mark of subject_%d:",j+1);
        scanf("%d",&students[i].mark[j]);
        sum=sum+students[i].mark[j];
    }
    total_sum=total_sum+sum;
    avg=(float)sum/3;
    printf("Total Mark's obtained by student_%d=%d",i+1,sum);
    printf("\nAverage of student_%d=%.2f",i+1,avg);
    printf("\n");
  }
  float total_avg;
  total_avg=(float)total_sum/size;
  printf("Total Mark's obtained by %d student's=%d",size,total_sum);
  printf("\nAverage of %d students=%.2f",size,total_avg);
  return 0;
}
