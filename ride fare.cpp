#include <stdio.h>

int main ()
{
    char trans,promo;
    int dist,basef,distf,dur,durf,totalf,promof;


    printf("chose from one of the following ride :\n\n");
    printf ("A.Car\nB.Motorcycle\nC.Bicycle\n\nEnter either A,B or C\n");
    scanf (" %c",&trans);

    printf ("Enter the distance you want to travel(in kilometer)\n");
    scanf ("%d",&dist);

    printf ("Choose a promo :\n");
    printf("A.10%% discount\nB.50 taka off\n");
    scanf (" %c",&promo);

    if (trans == 'a' || trans == 'A')
    {
        basef = 50;
        distf = 25*dist;
        dur = dist;
        durf=2*dur;

        totalf = basef+distf+durf;
        if (promo == 'a' || promo == 'A')
        {
            promof = totalf - (totalf*10)/100;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (10%% discount)\n",promof);
        }
        else if (promo == 'b' || promo == 'B')
        {
            promof = totalf - 50;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (50 taka flat discount)\n",promof);
        }

    }
      if (trans == 'b' || trans == 'B')
    {
        basef = 30;
        distf = 15*dist;
        dur = dist *60/70 ;
        durf=2*dur;

        totalf = basef+distf+durf;
        if (promo == 'a' || promo == 'A')
        {
            promof = totalf - (totalf*10)/100;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (10%% discount)\n",promof);
        }
        else if (promo == 'b' || promo == 'B')
        {
            promof = totalf - 50;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (50 taka flat discount)\n",promof);
        }

    }
    else if (trans == 'c' || trans == 'C')
    {
        basef = 15;
        distf = 10*dist;
        dur = 3*dist;
        durf=2*dur;

        totalf = basef+distf+durf;
        if (promo == 'a' || promo == 'A')
        {
            promof = totalf - (totalf*10)/100;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (10%% discount)\n",promof);
        }
        else if (promo == 'b' || promo == 'B')
        {
            promof = totalf - 50;
            printf ("Base fare is :%d taka\n",basef);
            printf ("Distance fare is :%d taka (%d Km)\n",distf,dist);
            printf ("Duration fare is :%d taka (%d minutes)\n",durf,dur );
            printf ("Total fare is :%d taka\n",totalf);
            printf ("Discounted fare :%d taka (50 taka flat discount)\n",promof);
        }

    }


    return 0;
}
