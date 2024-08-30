#include <stdio.h>
int main()
{
    int day;
    printf("welcome to ravi dhaba:-");
    printf("\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n7.sunday");
    printf("\n");
    printf("\nenter the day:-");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("\nmonday");
        printf("\nthanks for choosen monday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 2)
    {
        printf("\ntuesday");
        printf("\nthanks for choosen tuesday:-");
        printf("\nhave a nice day");

        int time;

        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);

        if (time == 1)
        {

            printf("\ngood morning");
            printf("\nthanks for choosing breakfast:-");

            int what_would_you_want;
            printf("\n1poha\n2.maggie\n3.pasta");
            printf("\nenter the what would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");

                int how_much_you_want;
                printf("\n1.full plate\n2.half plate");
                printf("\nenter how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)

                {
                    printf("thanks for choosing full plate poha , please pay 100 rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate poha, palease pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate");
                printf("\nenter the what you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing full plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");

                int how_much_you_want;

                printf("\n1.full plate\n2.full plate");
                printf("\nenter the how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }
            }
        }

        else if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosing lunch:-");

            int what_would_you_want;
            printf("\n1. egg curry\n2.non veg thali\n3.veg thali");
            printf("\nenter what would you want");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate");
                printf("\nthe value of how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate egg curry, please pay 120rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing full plate egg curry, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali");

                int how_much_you_want;

                printf("\n1.full plate\n2.half plate");
                printf("\nenter the how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("\nthanks for choosing full plate non veg thali, please pay 200 rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("\nthanks for choosing half plate non veg thali, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali");

                int how_much_you_want;

                printf("\n1.full plate \n2.half plate");
                printf("\nenter the how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate veg thali, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate veg thali, please pay 75 rupees");
                }
            }
        }

        else if (time == 3)
        {
            printf("\ngood evening");
            printf("thanks for choosing dinner");

            int what_would_you_want;
            printf("\n1.paneer tikka\n2.matar paneer \n3.shahi paneer");
            printf("\nenter the what would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");

                int how_much_you_want;
                printf("\n1.full plate\n2.half plate");
                printf("\nthe value of how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate paneer tikka, please pay 200 rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate paneer tikka, please pay 200 rupees");
                }
            }

            if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");

                int how_much_you_want;
                printf("\n1.full plate\n2.half plate");
                printf("\nthe value of how much you want:-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)

                {
                    printf("thanks for choosing full plate matar paneer, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("\nthanks for choosing half plate paneer, please pay 100 rupees");
                }
            }

            if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer");

                int how_much_you_want;
                printf("\n1.full plate\n2.half plate");
                printf("\nenter the what would you want:-");
                scanf("%d", &how_much_you_want);
                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate matar paneer, please pay 200 rupees");
                }
                else if (how_much_you_want == 2)
                {
                    printf("\nthanks for choosing half plate paneer, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 3)
    {
        printf("\nwednesday");
        printf("\nthanks for choosen wednesday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 4)
    {
        printf("\nThursday");
        printf("\nthanks for choosen Thursday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 5)
    {
        printf("\nFriday");
        printf("\nthanks for choosen Friday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 6)
    {
        printf("\nSaturday");
        printf("\nthanks for choosen Saturday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    else if (day == 7)
    {
        printf("\nSunday");
        printf("\nthanks for choosen Sunday");
        printf("\nhave a nice day");
        int time;
        printf("\n1.breakfast\n2.lunch\n3.dinner");
        printf("\nenter the time:-");
        scanf("%d", &time);
        if (time == 1)
        {
            printf("\ngood morning");
            printf("\nthanks for choosen breakfast:-");

            int what_would_you_want;
            printf("\n1.poha\n2.maggie\n3.pasta");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing poha:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 100 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing maggie:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 80 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 50 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing pasta:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 80 rupees");
                }
            }
        }

        if (time == 2)
        {
            printf("\ngood afternoon");
            printf("\nthanks for choosen lunch:-");

            int what_would_you_want;
            printf("\n1.egg curry\n2.non veg thali\n3.veg thali");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing egg curry:-");

                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 120 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 60 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing non veg thali:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 120 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing veg thali\n:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 150 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay  75 rupees");
                }
            }
        }

        if (time == 3)
        {
            printf("\ngood evening");
            printf("\nthanks for choosen dinner:-");

            int what_would_you_want;
            printf("\n1.paneer tikka \n2.matar paneer \n3.shahi panner");
            printf("\nwhat would you want:-");
            scanf("%d", &what_would_you_want);

            if (what_would_you_want == 1)
            {
                printf("\nthanks for choosing paneer tikka:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\n1how much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 2)
            {
                printf("\nthanks for choosing matar paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }

            else if (what_would_you_want == 3)
            {
                printf("\nthanks for choosing shahi paneer:-");
                int how_much_you_want;
                printf("\n1.full plate \n2.half plate:-");
                printf("\nhow much you want :-");
                scanf("%d", &how_much_you_want);

                if (how_much_you_want == 1)
                {
                    printf("thanks for choosing full plate, please pay 200 rupees");
                }

                else if (how_much_you_want == 2)
                {
                    printf("thanks for choosing half plate, please pay 100 rupees");
                }
            }
        }
    }

    return 0;
}
