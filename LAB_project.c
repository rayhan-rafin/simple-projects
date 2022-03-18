#include<stdio.h>
int main ()
//Calculation
{
    for (r=0; r<45; r++)             //increased row
    {
        gpa =0;                            //initial gpa 0;
        for (c=1; c<7; c++)         // increased column
        {
            if (c==1 || c== 2 || c== 4)            //only have  3 or 1 credit;count for 3 credit
            {
                gpa = gpa + (3*ar[r][c])/12;
            }
            else                                              //count for 1 credit;
            {
                gpa = gpa + (1*ar[r][c])/12;
            }
        }
        ar[r][7] = gpa;                                   // assigned grade for grade column or column 7
    }
}

// showing id + grade
for (r=0;r<45;r++){
    printf ("%d.Student ID: %d           Student Grade:%d",(r+1),ar[r][0],ar[r][7]);    //list of Id and grade column;
}
