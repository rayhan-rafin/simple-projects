#include<stdio.h>
int main()
{
    //1
    int r,row,col;
    float ara[45][8],gpa;

    while(1)
    {
        //2
//system("color F0");
        system("cls");
//-------------------------HOME---------------------------
        printf("                    \xB2\xB2\xB2   \xB2\xB2\xB2  \xB2\xB2\xB2  \xB2   \xB2  \xB2    \xB2\xB2\xB2      \xB2\xB2\xB2\xB2  \xB2\xB2\xB2  \xB2   \xB2  \xB2\xB2\xB2  \xB2\xB2\xB2    \xB2   \xB2\xB2\xB2   \xB2\xB2   \xB2\xB2\xB2\n");
        printf("                    \xB2  \xB2  \xB2    \xB2    \xB2   \xB2  \xB2     \xB2       \xB2     \xB2    \xB2\xB2  \xB2  \xB2    \xB2  \xB2  \xB2 \xB2   \xB2   \xB2  \xB2  \xB2  \xB2\n");
        printf("                    \xB2\xB2\xB2   \xB2\xB2\xB2  \xB2\xB2   \xB2   \xB2  \xB2     \xB2       \xB2 \xB2\xB2  \xB2\xB2\xB2  \xB2 \xB2 \xB2  \xB2\xB2\xB2  \xB2\xB2\xB2   \xB2\xB2\xB2   \xB2   \xB2  \xB2  \xB2\xB2\xB2\n");
        printf("                    \xB2 \xB2   \xB2      \xB2  \xB2   \xB2  \xB2     \xB2       \xB2  \xB2  \xB2    \xB2  \xB2\xB2  \xB2    \xB2 \xB2   \xB2 \xB2   \xB2   \xB2  \xB2  \xB2 \xB2\n");
        printf("                    \xB2  \xB2  \xB2\xB2\xB2  \xB2\xB2\xB2   \xB2\xB2\xB2   \xB2\xB2\xB2   \xB2       \xB2\xB2\xB2\xB2  \xB2\xB2\xB2  \xB2   \xB2  \xB2\xB2\xB2  \xB2  \xB2  \xB2 \xB2   \xB2    \xB2\xB2   \xB2  \xB2  \n\n\n");


        printf("        ===============================================\n");
        printf("        ||                                           ||\n");
        printf("        ||   1 . INPUT MARKS                         ||\n");
        printf("        ||   2 . SHOW SAVED RESULTS                  ||\n");
        printf("        ||   3 . SORT GRADEWISE                      ||\n");
        printf("        ||   4 . OVERALL RESULTS                     ||\n");
        printf("        ||                                           ||\n");
        printf("        ===============================================\n");

        int choice;
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

//-------------------------***---------------------------


        if(choice==1)
        {
            //3
            int c;
            for(r ; r<45 ; r++)
            {
                //4
                for(c=0 ; c<7 ; c++)
                {
                    if(c==0)
                    {
                        printf("\n\nEnter your id: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==1)
                    {
                        printf("MAT121: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==2)
                    {
                        printf("CSE122: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==3)
                    {
                        printf("CSE123: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==4)
                    {
                        printf("PHY123: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==5)
                    {
                        printf("PHY124: ");
                        scanf("%f",&ara[r][c]);
                    }
                    if(c==6)
                    {
                        //5
                        printf("ENG123: ");
                        scanf("%f",&ara[r][c]);

//------------------------------------CALCULATION-------------------------------
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
//-----------------------------------***---------------------------------------

                        printf("\n!!!   MARK SAVED   !!!\n\n");
                        printf("Do you want to save another one? (YES / NO) : ");
                        char ch[4];
                        scanf("%s",&ch);

                        if(ch[0]=='N' || ch[0]=='n')
                        {
                            //printf("%f %f %f ",ara[0][0],ara[0][1],ara[0][7]);
                            //getch();
//                            printf ("%f    %f    %f",ara[0][0],ara[0][6],ara[0][7]);
                            getch();
                            main();

                        }


                    }                                                           //5



                }
            }                                                                  //4
        }                                                                       //3

//--------------------------------------Show saved results------------------------------------

        if(choice==2)
        {
            //6
            for(int row=0 ; row<45 ; row++)
            {
                if(row==0)
                {
                    printf("===================================================\n");
                    printf("||   ID                             GRADE        ||\n");
                }
                printf("||   %0.0f                              %0.02f         ||\n",(row+1),ara[row][0],ara[row][7]);
                if(row==44)
                {
                    printf("==================================================\n\n");
                }

            }

            printf("     Enter any key to go back to main menu\n");
            getch();
            main();
        }                                                               //6

//--------------------------------------------****------------------------------------------

//--------------------------------------SORT GRADEWISE--------------------------------------

        if(choice==3)
        {
            //7
            float temp=0.0;

            for(int i=0 ; i<45 ; i++)
            {
                for(int j=0 ; j<44 ; j++)
                {
                    if(ara[7][j]<ara[7][j+1])
                    {
                        temp=ara[7][j];
                        ara[7][j]=ara[7][j+1];
                        ara[7][j+1]=temp;
                    }
                }
            }

            for(int i=0 ; i<45 ; i++)
            {
                if(i==0)
                {
                    printf("        =============================================\n");
                    printf("        ||   ID                            GRADE   ||\n");
                    printf("        ||                                         ||\n");
                }
                printf("        ||   %0.0f                             %0.2f    ||\n",ara[0][i],ara[7][i]);              //Printing the sorted grades

                if(i==44)
                {
                    printf("        =============================================\n");
                }

            }
            printf("            Enter any key to go back to main menu\n");
            getch();
            main();
        }                                                                           //7

//-----------------------------------------****-------------------------------------

//-----------------------------------COUNT EACH GRADES------------------------------
        if(choice==4)
        {
            //8
            int A_plus=0, A=0, A_minus=0;
            int B_plus=0, B=0, B_minus=0;
            int C_plus=0, C=0, D=0, F=0;

            for(int row=0; row<=44; row++)
            {
                if(ara[row][7]>=0.00 && ara[row][7]<2.00)
                    F++;
                if(ara[row][7]>=2.00 && ara[row][7]<2.25)
                    D++;
                if(ara[row][7]>=2.25 && ara[row][7]<2.50)
                    C++;
                if(ara[row][7]>=2.50 && ara[row][7]<2.75)
                    C_plus++;
                if(ara[row][7]>=2.75 && ara[row][7]<3.00)
                    B_minus++;
                if(ara[row][7]>=3.00 && ara[row][7]<3.25)
                    B++;
                if(ara[row][7]>=3.25 && ara[row][7]<3.50)
                    B_plus++;
                if(ara[row][7]>=3.50 && ara[row][7]<3.75)
                    A_minus++;
                if(ara[row][7]>=3.75 && ara[row][7]<4.00)
                    A++;
                if(ara[row][7]==4.00)
                    A_plus++;
            }

            printf("----------------------------------------------------------\n");
            printf("|                     GRADE POINT COUNT                  |\n");
            printf("|                                                        |\n");
            printf("| GRADE                 GRADE RANGE                COUNT |\n");
            printf("|                                                        |\n");
            printf("|   A+                      4.00                     %d  |\n",A_plus);
            printf("|   A                    3.75--3.99                  %d  |\n",A);
            printf("|   A-                   3.50--3.74                  %d  |\n",A_minus);
            printf("|   B+                   3.25--3.49                  %d  |\n",B_plus);
            printf("|   B                    3.00--3.24                  %d  |\n",B);
            printf("|   B-                   2.75--2.99                  %d  |\n",B_minus);
            printf("|   C+                   2.50--2.74                  %d  |\n",C_plus);
            printf("|   C                    2.25--2.49                  %d  |\n",C);
            printf("|   D                    2.00--2.24                  %d  |\n",D);
            printf("|   F                    0.00--1.99                  %d  |\n",F);
            printf("|                                                        |\n");
            printf("----------------------------------------------------------\n");


            printf("            Enter any key to go back to main menu\n");
            getch();
            main();


        }                                                                                   //8

//----------------------------------****---------------------------------------------
    }                                                                                     //2
    return 0;
}                                                                                     //1
