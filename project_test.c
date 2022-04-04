#include<stdio.h>
int main()
{
    //Likhan
    int i,r,c,row,row2,col,choice;                //row,row2,col for rayhan
    r=0;
    float ara[45][8],gpa;
    for (row=0; row<45; row++)
    {
        for (col = 0; col<8; col++)
        {
            ara[row][col] = 0;
        }
    }
    row=0;
    while(1)
    {
        system ("cls");
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
        printf("        ||   5 . Exit Program                        ||\n");
        printf("        ||                                           ||\n");
        printf("        ===============================================\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

//-------------------------***---------------------------
//Hisham

        if (choice == 1)
        {
            for(  ; r<45 ; r++)
            {
                for(c=0 ; c<7 ; c++)
                {
                    if(c==0)
                    {
                        printf("\n\nEnter your id: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else if(c==1)
                    {
                        printf("MAT121: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else if(c==2)
                    {
                        printf("CSE122: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else if(c==3)
                    {
                        printf("CSE123: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else if(c==4)
                    {
                        printf("PHY123: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else if(c==5)
                    {
                        printf("PHY124: ");
                        scanf("%f",&ara[r][c]);
                    }
                    else  if(c==6)
                    {
                        printf("ENG123: ");
                        scanf("%f",&ara[r][c]);
                    }
                }
                //-----------------------------------***---------------------------------------

                printf("\n!!!   MARK SAVED   !!!\n\n");
                printf("Do you want to save another one? (YES / NO) : ");
                char ch[4];
                scanf("%s",&ch);

                if(ch[0]=='N' || ch[0]=='n')
                {
                    r=r+1;
                    break;
                }
            }
//------------------------------------CALCULATION-------------------------------
//Rayhan
            for (  ; row<r; row++)
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
                    else if (ara[row][col]<40)
                    {
                        ara[row][col]=0.0;
                    }
                }
            }
            for (row2=0; row2<45; row2++)             //increased row
            {
                gpa =0;                                        //initial gpa 0;
                for (col=1; col<7; col++)         // increased column
                {
                    if (col==1 || col== 2 || col== 4)            //only have  3 or 1 credit;count for 3 credit
                    {

                        gpa = gpa + (3*ara[row2][col])/12;
                    }
                    else                                              //count for 1 credit;
                    {
                        gpa = gpa + (1*ara[row2][col])/12;
                    }
                }
                ara[row2][7] = gpa;                                   // assigned grade for grade column or column 7
            }
        }
//--------------------------------------Show saved results------------------------------------
        else if(choice==2)
        {
            for(row=0 ; row<r ; row++)
            {
                if(row==0)
                {
                    printf("===================================================\n");
                    printf("||   ID                                GRADE     ||\n");
                }
                printf("||   %0.0f                              %0.02f      ||\n",ara[row][0],ara[row][7]);
                if(row==(r-1))
                {
                    printf("==================================================\n\n");
                }
            }
            printf("            Enter any key to go back to main menu\n");
            getch ();

        }
//--------------------------------------------****------------------------------------------
//Likhan
//--------------------------------------SORT GRADEWISE--------------------------------------

        else if(choice==3)
        {
            //7
            float temp;

            for(int first=0 ; first<45 ; first++)
            {
                for(int second=0 ; second<44 ; second++)
                {
                    if(ara[second][7]<ara[second+1][7])
                    {
                        temp=ara[second][7];
                        ara[second][7]=ara[second+1][7];
                        ara[second+1][7]=temp;
                    }
                }
            }

            for(int first2=0 ; first2<r ; first2++)
            {
                if(first2==0)
                {
                    printf("        =============================================\n");
                    printf("        ||   ID                            GRADE   ||\n");
                }
                printf("        ||   %0.0f                          %0.2f    ||\n",ara[first2][0],ara[first2][7]);              //Printing the sorted grades

                if(first2==(r-1))
                {
                    printf("        =============================================\n");
                }

            }
            printf("            Enter any key to go back to main menu\n");
            getch ();
        }

//-----------------------------------------****-------------------------------------
//Sayonee
//-----------------------------------COUNT EACH GRADES------------------------------
        else if(choice==4)
        {
            int A_plus=0, A=0, A_minus=0;
            int B_plus=0, B=0, B_minus=0;
            int C_plus=0, C=0, D=0, F=0;

            for(int row=0; row<r; row++)
            {
                if(ara[row][7]>=0.00 && ara[row][7]<2.00)
                {
                    F++;
                }
                else if(ara[row][7]>=2.00 && ara[row][7]<2.25)
                {
                    D++;
                }
                else if(ara[row][7]>=2.25 && ara[row][7]<2.50)
                {
                    C++;
                }
                else if(ara[row][7]>=2.50 && ara[row][7]<2.75)
                {
                    C_plus++;
                }
                else if(ara[row][7]>=2.75 && ara[row][7]<3.00)
                {
                    B_minus++;
                }
                else if(ara[row][7]>=3.00 && ara[row][7]<3.25)
                {
                    B++;
                }
                else if(ara[row][7]>=3.25 && ara[row][7]<3.50)
                {
                    B_plus++;
                }

                else if(ara[row][7]>=3.50 && ara[row][7]<3.75)
                {
                    A_minus++;
                }
                else if(ara[row][7]>=3.75 && ara[row][7]<=3.99)
                {
                    A++;
                }
                else
                {
                    A_plus++;
                }

            }

            printf("----------------------------------------------------------\n");
            printf("|                     GRADE POINT COUNT                  |\n");
            printf("|                                                        |\n");
            printf("| GRADE                 GRADE RANGE                COUNT |\n");
            printf("|                                                        |\n");
            printf("|   A+                      4.00                     %d   |\n",A_plus);
            printf("|   A                    3.75--3.99                  %d   |\n",A);
            printf("|   A-                   3.50--3.74                  %d   |\n",A_minus);
            printf("|   B+                   3.25--3.49                  %d   |\n",B_plus);
            printf("|   B                    3.00--3.24                  %d   |\n",B);
            printf("|   B-                   2.75--2.99                  %d   |\n",B_minus);
            printf("|   C+                   2.50--2.74                  %d   |\n",C_plus);
            printf("|   C                    2.25--2.49                  %d   |\n",C);
            printf("|   D                    2.00--2.24                  %d   |\n",D);
            printf("|   F                    0.00--1.99                  %d   |\n",F);
            printf("|                                                        |\n");
            printf("----------------------------------------------------------\n");

            printf("            Enter any key to go back to main menu\n");
            getch ();
        }
        else {
            break;
        }                                                                                   //8
//----------------------------------****---------------------------------------------
    }                                                                                     //2
    return 0;
}                                                                                     //1
