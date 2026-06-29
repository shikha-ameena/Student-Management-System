#include<stdio.h>
struct student{
int rollno;
char name[100];
float mark;
};
int main(){
struct student s[100];
int i,choice,count=0;
do
{
printf("\nSTUDENT MANAGEMENT SYSTEM\n");
printf("=======================\n");
printf("1.Add student\n");
printf("2.Display student\n");
printf("3.Search student\n");
printf("4.Update student\n");
printf("5.Delete student\n");
printf("6.Exit\n");

printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
  printf("Enter Rollno of student:");
  scanf("%d",&s[count].rollno);
  printf("Enter the name of student:");
  scanf("%s",s[count].name);
  printf("Enter the mark:");
  scanf("%f",&s[count].mark);
  count++;
  printf("\nStudent added successfully\n");
  break;
case 2:
  if(count==0){
    printf("No student to display\n");
  }
  else{
    printf("\n..Student details..\n");
  for(i=0;i<count;i++){
    printf("Student %d details\n",i+1);
    printf("Roll no:%d\n",s[i].rollno);
    printf("Name:%s\n",s[i].name);
    printf("Mark:%.2f\n",s[i].mark);
  }}
  break;
case 3:
    int roll,found=0;
  if(count==0){
    printf("No students available\n");
    break;
  }
  printf("Enter rollno to search:");
  scanf("%d",&roll);
  for(i=0;i<count;i++){
    if(s[i].rollno==roll){
        printf("\nstudent found\n");
        printf("Rollno:%d\n",s[i].rollno);
        printf("Name:%s\n",s[i].name);
        printf("Mark:%.2f\n",s[i].mark);
        found=1;
        break;
    }
  }
  if(found==0){
    printf("student not found\n");
  }
  break;
case 4:
{
    int roll, found = 0;

    if(count == 0)
    {
        printf("No students available.\n");
        break;
    }

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].rollno == roll)
        {
            printf("\nStudent Found!\n");

            printf("Enter New Name: ");
            scanf("%s",s[i].name);

            printf("Enter New Marks: ");
            scanf("%f",&s[i].mark);

            printf("Student Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }

    break;
}
case 5:
{
    int roll, found = 0;

    if(count == 0)
    {
        printf("No students available.\n");
        break;
    }

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].rollno == roll)
        {
            found = 1;

            // Shift all students one position to the left
            for(int j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;

            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }

    break;
}
case 6:
    printf("Thank you!\n");
    printf("Exiting Student Management System...\n");
break;
default:
  printf("Invalid choice");
  }
}while(choice!=6);
return 0;

}
