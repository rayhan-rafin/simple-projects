#include<stdio.h>
int main ()
//Calculation
{
    int row,col;
    float ara[45][8],gpa;

     //all intial value 0;
    for (row = 0; row<45; row++)
    {
        for(col=0; col<8; col++)
        {
            ara[row][col]=0;
        }
    }


    // scanned for first row,delete when integrated;
    for (row=0,col=0; col<7; col++)
    {
        scanf (" %f", &ara[row][col]);
    }


    // replaced number with grade for each subject
    for (row=0; row<45; row++)
    {
        for (col=1; col<7; col++)
        {
            if (ara[row][col]>=80)
            {
                ara[row][col]= 4.00;
            }
            else if (ara[row][col]>=75)
            {
                ara[row][col] = 3.75;
            }
            else if (ara[row][col]>=70)
            {
                ara[row][col] = 3.50;
            }
            else if (ara[row][col]>=65)
            {
                ara[row][col] = 3.25;
            }
            else if (ara[row][col]>=60)
            {
                ara[row][col] = 3.00;
            }
            else if (ara[row][col]>=55)
            {
                ara[row][col] = 2.75;
            }
            else if (ara[row][col]>=50)
            {
                ara[row][col] = 2.50;
            }
            else if (ara[row][col]>=45)
            {
                ara[row][col] = 2.25;
            }
            else if (ara[row][col]>=40)
            {
                ara[row][col] = 2.00;
            }
            else
            {
                ara[row][col]=0.0;
            }
        }
    }


    //calculation and assigning grade to col 7;
    for (row=0; row<45; row++)                                       //increased row
    {
        gpa =0;                                                                    //initial gpa 0;
        for (col=1; col<7; col++)                                        // increased column
        {
            if (col==1 || col== 2 || col== 4)                         //only have  3 or 1 credit;count for 3 credit
            {
                gpa = gpa + ((3.0*ara[row][col])/12.00);
            }
            else                                                                    //count for 1 credit;
            {
                gpa = gpa +((1.0*ara[row][col])/12.00);
            }
        }
        ara[row][7] = gpa;                                                 // assigned grade for grade column or column 7

    }


// showing id + grade
    for (row=0; row<45; row++)
    {
        printf ("%d.Student ID: %0.0f           Student Grade:%0.2f\n",(row+1),ara[row][0],ara[row][7]);    //list of Id and grade column;
    }
}
