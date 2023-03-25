#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float level2(float y);
float level3(float z);
void score(float s);

int main()
{

    int r1, i, counter = 0;
    float x = 0, m, n;
    char PN[20];
    printf("Enter your name: ");
    scanf("%c",&PN);
    mainhome:
        printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\tFirst Level:\n");
    for(i=1;i<=6;i++)
    {

        r1=i;
        switch(r1)
        {
        case 1:
            {

                printf("\nA microsoft windows is a(n)?");
                printf("\nA.Operating System.\t\tB.Graphic Program.\n\nC.Word Processing.\t\tD.Database.");
                if(toupper(getch()) == 'A')
                {
                    printf("\n\nYes!! A is Correct\n\n");

                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter ++;
                    break;
                }
                else
                {
                    printf("\n\nWrong. The correct answer is A.\n\n");
                    break;
                }
            }
        case 2:
            {
                printf("\nWhat is the next number in the series?");
                printf("\nA.88\tB.100\nC.66\tD.76");
                if(toupper(getch()) =='B')
                {
                    printf("\n\nYes!! B is Correct.\n\n");
                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter++;
                    break;
                }
                else
                {
                    printf("\n\nWrong. The correct answer is B.\n\n");
                    break;

                }
            }
        case 3:
            {
                printf("\n Which is the latest version of MS?");
                printf("\nA.Windows 2007\t\tB.Windows 8.1\n\nC.Windows 2008\t\tD.Windows 10");
                if(toupper(getch()) =='D')
                {
                    printf("\n\nYes!! D is Correct.\n\n");
                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter++;
                    break;
                }
                else
                {
                    printf("\n\nWrong. The correct answer is D.\n\n");
                    break;
                }
            }
        case 4:
            {
                printf("\n\n\nWhich one is not a system tool?");
                printf("\n\nA.Backup\t\tB.Disk\n\nC.Virus scanning\t\tD.All of the above");
                if (toupper(getch())=='C')
                {
                    printf("\n\nYes!! C is Correct.\n\n");
                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter++;
			        break;
                }
                else
		        {
		           printf("\nWrong. The correct answer is C.\n\n");
                   break;
                }
            }
        case 5:
            {
                printf("\n\n\n'OS' computer abbreviation usually means?");
                printf("\n\nA.Order of Significance\t\tB.Open Software\n\nC.Operating System\t\tD.Optical Sensor");
                if (toupper(getch())=='C')
                {
                    printf("\n\nYes!! C is Correct.\n\n");
                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter++;
                    break;
                }
                else
		        {
		            printf("\n\nWrong. The correct answer is C.\n\n");
		            break;
                }
            }
        case 6:
            {
                printf("\n\n\nWhich of the following windows do not have start button?");
                printf("\n\nA.Windows 8\t\tB.Windows vista\n\nC.Windows 7\t\tD.None of above");
                if (toupper(getch())=='A' )
                {
                    printf("\n\nYes!! A is Correct.\n\n");
                    x = x + 11.5;
                    printf("\nYour score: %f\n\n", x);
                    counter++;
			        break;
                }
                else
		        {
		           printf("\n\nWrong. The correct answer is A.\n\n");
                   break;
		        }
           }
        }

     }
     printf("Your total score: %f", x);
     system("cls");
    if(counter >= 4)
    {
        printf("You are eligible.");
        score(x);
        m = level2(x);
    }
    else
    {
        printf("You are not eligible.");
        printf("Your total score: %f", x);
        score(x);
        goto mainhome;
    }
    system("cls");
    printf("\n\nYour score: %f", m);
    if(counter >= 4)
    {
        printf("You are eligible.");
        score(m);
        n = level3(m);
    }
    else
    {
        printf("You are not eligible.");
        printf("Your score: %f", m);

        goto mainhome;
    }
    system("cls");
    printf("\n\nYour score: %f", n);
    if(counter >= 2)
    {
        score(n);
        printf("\nThank you.");
    }
    else
    {
        printf("Sorry. Please start from beginning.");

        goto mainhome;
    }

}
float level2(float y)
{
    int r2, j, counter=0;
    printf("\n\nYour score : %f", y);
    printf("\n\t\t\tSecond Level: \n");
    for(j=1; j<=6; j++)
    {
     r2=j;

     switch(r2)
		{
		case 1:
		printf("\n\nMrs. Jones is responsible for collecting all of the fifth-grade classes’ money for the school fundraiser. Sally attends Mrs. Jones’ school. Mrs. Jones is responsible for collecting Sally’s money for the fundraiser.");
		printf("\n\nA.Yes\t\tB.No\n\nC.Uncertain\t\tD.None of above");
		if (toupper(getch())=='C')
			{
			    printf("\n\nYes!! C is Correct.\n\n");
                y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.");
                break;}

		case 2:
		printf("\n\n\n29,27,24,20,15....What is next?");
		printf("\n\nA.7\t\tB.9\n\nC.10\t\tD.11");
		if (toupper(getch())=='B')
			{
			    printf("\n Yes!! B is Correct.\n\n");
			    y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is B.");
		        break;
            }

        case 3:
		printf("\n\n\nAngie’s profits for March totaled $5400. If she profited nine times more in March than in April, what were April’s profits? ");
		printf("\n\nA.$700\t\tB.$48,600\n\nC.600\t\tD.900");
		if (toupper(getch())=='C')
			{
			    printf("\n Yes!! C is Correct.\n\n");
			    y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.");
		        break;
            }

        case 4:
		printf("\n\n\nA college professor teaches a class of 80 students. Fourteen students are business majors, six are education majors and the rest are undecided. What percentage of the class is undecided?");
		printf("\n\nA.50%\t\tB.75%\n\nC.60%\t\tD.25%");
		if (toupper(getch())=='A')
			{
			    printf("\n\nYes!! A is Correct.\n\n");
			    y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.");
		        break;
            }

        case 5:
		printf("\n\n\nFind two words that are the closest in meaning?");
		printf("\n\nA.Talkative an Wind\t\tB.Job and Angry\n\nC.Talkative and Loquacious\t\tD.Ecstatic and Angry");
		if (toupper(getch())=='C')
			{
			    printf("\n\nYes!! C is Correct.\n\n");
			    y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.");
		        break;
            }

		case 6:
		printf("\n\n\nWhat number best completes the analogy 8:4 as 10");
		printf("\n\nA.3\t\tB.7\n\nC.24\t\tD.5");
		if (toupper(getch())=='D' )
			{
                printf("\n\nYes!! D is Correct.\n\n");
			    y = y+10;
                printf("\nYour score: %f\n\n", y);
                counter++;
                break;
            }
		else
            {
               printf("\n\nWrong!!! The correct answer is D.");
		       break;
            }

       }
   }
   return (y);
}
float level3(float z)
{
    int r2, j, counter=0;
    printf("\n\nYour score : %f", z);
    printf("\n\t\t\tFinal Level: \n");
    for(j=1; j<=6; j++)
    {
     r2=j;

     switch(r2)
		{
		case 1:
		printf("\n\nAn organization hosts monthly meals for families in the community. In March, 70 people attended the meal. In April, 60 attended. Their highest attendance was in May, with 20 more than April. What is their average monthly attendance?");
		printf("\n\nA.75\t\tB.50\n\nC.80\t\tD.70");
		if (toupper(getch())=='D')
			{
			    printf("\n\nYes!! D is Correct.\n\n");
                z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is D.");
                break;}

		case 2:
		printf("\n\n\n2,10,12,60,62.....What is next?");
		printf("\n\nA.90\t\tB.300\n\nC.310\t\tD.314");
		if (toupper(getch())=='C')
			{
			    printf("\n Yes!! C is Correct.\n\n");
			    z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.");
		        break;
            }

        case 3:
		printf("\n\n\nTom has a new set of golf clubs. Using a club 8, the ball travels an average distance of 100 meters. Using a club 7, the ball travels an average distance of 108 meters. Using a club 6, the ball travels an average distance of 114 meters. How far will the ball go if Tom uses a club 5?");
		printf("\n\nA.122 meters\t\tB.120 meters\n\nC.118 meters\t\tD.116 meters");
		if (toupper(getch())=='C')
			{
			    printf("\n Yes!! C is Correct.\n\n");
			    z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is C.");
		        break;
            }

        case 4:
		printf("\n\n\n121,144,169,196....What is next?");
		printf("\n\nA.225\t\tB.260\n\nC.298\t\tD.310");
		if (toupper(getch())=='A')
			{
			    printf("\n\nYes!! A is Correct.\n\n");
			    z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
                break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is A.Faraday");
		        break;
            }

        case 5:
		printf("\n\n\nDivide thirty by half and add ten.What do you get??");
		printf("\n\nA.25\t\tB.50\n\nC.60\t\tD.70");
		if (toupper(getch())=='D')
			{
			    printf("\n\nYes!! D is Correct.\n\n");
			    z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
			    break;
            }
		else
            {
                printf("\n\nWrong!!! The correct answer is D.");
		        break;
            }

		case 6:
		printf("\n\n\nMarry who is 16 years old,is four times as old as her brother.How old will Marry be when she is twice as old as her brother?");
		printf("\n\nA.20\t\tB.24\n\nC.28\t\tD.32");
		if (toupper(getch())=='B' )
			{
                printf("\n\nYes!! B is Correct.\n\n");
			    z = z+10;
                printf("\nYour score: %f\n\n", z);
                counter++;
                break;
            }
		else
            {
               printf("\n\nWrong!!! The correct answer is B.");
		       break;
            }

       }
   }
   return (z);
}
void score(float s)
{
    printf("\n\nYour score : %f", s);
    if(s <= 69)
        printf("Your IQ is 'EXTREMELY LOW'");
    else if(s >= 70 && s <= 79)
        printf("Your IQ is 'BORDERLINE'");
    else if(s >= 80 && s <= 89)
        printf("Your IQ is 'LOW AVERAGE'");
    else if(s >= 90 && s <= 109)
        printf("Your IQ is 'AVERAGE'");
    else if(s >= 110 && s <= 119)
        printf("Your IQ is 'HIGH AVERAGE'");
    else if(s >= 120 && s <= 129)
        printf("Your IQ is 'SUPERIOR'");
    else if(s >= 130)
        printf("Your IQ is 'VERY SUPERIOR'");
}
