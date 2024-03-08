#include<stdio.h>
int main()
{
    int NoSem,NoSubject;
    float SGPA=0,CGPA=0;
    char c;
    printf("\nEnter the No. of subjects you had in Semester:-");
    scanf("%d",&NoSubject);        
    int Subjects[NoSubject];
    for (int j = 1; j<=NoSubject; j++)
        {
            printf("\nEnter marks for subject %d:-",j);
            scanf("%d",&Subjects[j]);
            SGPA=SGPA+Subjects[j];
        }
        CGPA=(float)SGPA/NoSubject;
        CGPA = CGPA/9.5;
    printf("\nSGPA :- %.2f",(float)CGPA);
    printf("\nDo you want to calculate your overall CGPA?(Y/N):-");
    scanf(" %c", &c);
    if(c=='y'||c=='Y')
    {
        printf("\nEnter the No. of semesters you have SGPAs of (Exclude the SGPA just calculated above) :-");
        scanf("%d",&NoSem);
        float Semester[NoSem];
        for(int i=1;i<=NoSem;i++)
        {
            printf("\nEnter SGPA of semester %d :- ",i);
            scanf("%f",&Semester[i]);
            CGPA = CGPA + Semester[i];
        }
        CGPA=CGPA/(NoSem+1);
        printf("\nOverall CGPA :- %.2f",(float)CGPA);
    }
    return 0;
}