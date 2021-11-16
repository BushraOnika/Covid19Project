#include<stdio.h>
#include<string.h>
#include <conio.h>
#include <stdlib.h>

struct patient
{
    char name[100];
    int age;
    char address[100];
    char gender[100];

} p1[100];
void view();
void search();
void password();
void display();
void informations();
void symptoms();
void covidtestkit();
void patient();
void title1();
void forcovidtestcenter();
int num;
int i=0;
int main()
{

    int c,n;
    title1();
    // printf("\n\n");
    // display();
    printf("1.PRESS 1 For Free Virtual COVID TEST(For Everyone)\n2.PRESS 2 for BRO COVID TEST CENTER(Only for staffs)\n");
    printf("Enter the number : ");
    scanf("%d",&n);
    //if(n==1)
    switch(n)
    {
        case 1:
        {

            symptoms();
            covidtestkit();

        }

        case 2:
        {

            password();

        }
    }


//struct patient p1;
//printf("\n\t\tNAME: %s \t\tAGE: %d \t\tAREA: %s \t\tGender: %s\n",informations(p1.name),informations(p1.age),informations(p1.address),informations(p1.gender));
    return 0;
}

void patient()
{
    struct patient p1;
    printf("\tName:-");
    scanf("\n");
    gets(p1.name);
    printf("\tAREA:- ");
    scanf("\n");
    gets(p1.address);
    printf("\tAGE:- ");
    scanf("%d",&p1.age);

    printf("\tGender:- ");
    scanf("\n");
    scanf("%s",p1.gender);

}

void search()
{

    char name[100];
    title1();
    FILE*ek;
    ek=fopen("patient.txt","r");
    printf("\t\t\tSEARCH Patient\t\t\t\n");
    int count=0;
    gets(name);
    fflush(stdin);
    printf("\n");
    while(fscanf(ek,"%s %d %s %s",p1[i].name,&p1[i].age,p1[i].address,p1[i].gender)!=EOF)
    {
        if(strcmp(p1[i].name,name)==0)
        {
            printf("FULL NAME");
            printf("\tAGE\t");
            printf("\tADRESS\t");
            printf("\tGENDER\t\n");

            printf("%s\t",p1[i].name);
            printf("\t%d\t",p1[i].age);
            printf("\t%s\t",p1[i].address);
            printf("\t%s\t\n",p1[i].gender);
            i++;
            count++;
        }




    }
    if(count==0)
    {

        printf("\n\nNot Found\n\n");
    }


    fclose(ek);
}
void view()
{
    FILE*ek;
    ek=fopen("patient.txt","r");
    printf("\n\n\t\t\t**********List OF Patients*****************\n");
    printf("FULL NAME");
    printf("\tAGE\t");
    printf("\tADRESS\t");
    printf("\tGENDER\t\n");

    printf("**********************************************************************************************************************\n");

    int i=0;
    while(fscanf(ek,"%s %d %s %s",p1[i].name,&p1[i].age,p1[i].address,p1[i].gender)!=EOF)
    {

        printf("%s\t",p1[i].name);
        printf("\t%d\t",p1[i].age);
        printf("\t%s\t",p1[i].address);
        printf("\t%s\t\n",p1[i].gender);
        i++;
    }
    fclose(ek);
}
void forcovidtestcenter(void)
{
    int c;
    while(c!=4)
    {
        // title1();
        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Exit\n\nOption=");
        scanf("%d",&c);
        fflush(stdin);
        if(c==1)
        {
            system("cls");
            informations();
        }
        else if(c==2)
        {
            system("cls");
            view();
        }
        else if(c==3)
        {
            system("cls");
            search();
        }

        else if(c==4)
        {
            // write();
            return ;
        }


        return ;

    }
}

void password(void)
{
    int e;
    //display();
    title1();
    char username[15];
    char password[12];

    do
    {
        printf("\nEnter your username:\n");
        scanf("%s",&username);

        printf("Enter your password:\n");
        scanf("%s",&password);

        if(strcmp(username,"BRO")==0) //BRO means Bushra , Redwan and Owaes (Team members)
                                     // its Redwan's idea of giving Bro Codeee xP
        {
            if(strcmp(password,"BRO123")==0)
            {
                // system("cls");
                // title1();
                // printf("\n\t\tWelcome.Login Success!\n\n\n");
                // forcovidtestcenter();
                e=0;
                break;


            }
        }
        else
        {
            printf("\n\tWrong password OR ");

            printf("User doesn't exist :( :(\n\n");
            e++;
        }


    }
    while(e<=2);
    if(e==0)
    {
        system("cls");
        title1();
        printf("\n\t\tWelcome.Login Success!\n\n\n");
        forcovidtestcenter();

    }
    if(e>2)
    {
        printf("\tYou have crossed the limit.Sorry You can't login :( :(\n\n");
    }
}


void display(void)
{

    printf("\n\t\t ************************************************* \t\t\n");
    printf("\n\t\t     WELCOME TO THE INFECTION RATE OF TEST  COVID-19        \t\t\n");


    for (int i=0; i<50; i++)
    {
        printf("");

    }
    printf("\n\t\t\t       BRO COVID TEST CENTER        \n");
    printf("\n\t\t ************************************************* \t\t\n\n\n\n");

    printf("\n");


}
void informations()
{
    int n;
    FILE*ek;
    ek=fopen("patient.txt","a");
    // int n;
    printf("\t\t\t\t*******BRO COVID TEST CENTER****************\n");
    //printf("\n\t\t\t\tPLEASE ENTER YOUR BASIC INFORMATION \n");
    printf("\n\n");
    // printf("Patient already admitted =%d\n\n",num);
    printf("How many new patient you wanna add :");
    scanf("%d",&n);
    // sum=num+n;
    struct patient p1[n];

    for(int i = 0 ; i<n; i++)
    {
        printf("\tNAME:- ");
        scanf("\n");
        gets(p1[i].name);


        printf("\tAGE:- ");
        scanf("%d", &p1[i].age);


        printf("\tAREA:- ");
        //fflush(stdin);
        scanf("\n");
        gets(p1[i].address);

        printf("\tGender:- ");
        scanf("\n");
        gets(p1[i].gender);

        fprintf(ek,"%s\t%d\t%s\t%s\n",p1[i].name,p1[i].age,p1[i].address,p1[i].gender);
    }
    printf("\t\t Information Recorded\t\t");
    fclose(ek);

}
void title1()
{
    printf("*************************************************************************\n");
    printf("\t\t\t\t****BRO COVID TEST CENTER****\t\t\n ");
    printf("*************************************************************************\n");
//    printf(Name: );
}
void symptoms(void)
{
    system("cls");
    //title1();
    display();
    patient();
    int a,b,c,d,e,f,g,h,j,i,x;
    int count=0;
    printf("\n\n\n\t\t\t\t PLEASE ANSWER THE FOLLOWING QUESTION CORRECTLY\n");



    printf("\n\n\tDo you came in contact with any covid infected parson?(y/n)\nAns:- ");

    fflush(stdin);

    scanf("%c", &b);

    if(b=='y' || b=='Y')

    {

        count=count+1;

    }

    printf("\n\n\tIs there any covid patient in the range of 1 km?(y/n)\nAns:-  ");

    fflush(stdin);

    scanf("%c", &c);

    if(c=='y' || c=='Y')

    {

        count=count+1;

    }



    printf("\n\n\tPlease let us know your body temperature(in Fehrenheit) !! \n Ans:-  ");

    scanf("%d",&x);

    if (x>=99)

    {

        count=count+1;
        //   printf("HAVE FEVER");


    }
    printf("\n\n\tIf you are suffering from Dry cough?(y/n) \nAns:-  ");

    fflush(stdin);

    scanf("%e",&g);

    if(e=='y' || e=='Y')

    {

        count=count+1;
        // printf("HAVE DRY COUGH");


    }

    printf("\n\n\tIf you are suffering from Shortness of breath?(y/n)  \nAns:- ");

    fflush(stdin);

    scanf("%c",&f);

    if(f=='y' || f=='Y')

    {

        count=count+1;
        //printf("HAVE BREATH PROBLEM");

    }
    printf("\n\n\tIf you are suffering from Headaches?(y/n)   \nAns:- ");

    fflush(stdin);

    scanf("%c",&g);

    if(g=='y' || g=='Y')

    {

        count=count+1;
        // printf("HAVE HEADACHES");

    }
    printf("\n\n\tIf you are suffering from Diarrhea?(y/n)  \nAns:- ");

    fflush(stdin);

    scanf("%c",&h);


    if(h=='y' || h=='Y')

    {

        count++;
        // printf("HAVE DIARRHEA");


    }
    count=2*count*10;

    printf("\n\n\t\t\t YOUR RATE OF BEING INFECTED IS %d percent",count);


    if (count<=20)

    {

        printf("\n\n\t\t\t  CONGRATS! YOU are safe .\n ");


        //printf("\n\n\t\t\t YOUR RATE OF BEING INFECTED IS %d percent",count);
        printf("\n\n\n\t\tSTAY HOME STAY SAFE \n");

    }
    if (count>20 && count<=50)

    {

        printf("\n\n\n\t\t\t HEY! You should take 7 days qurantine\n");
        // printf("\n\n\t\t\t YOUR RATE OF BEING INFECTED IS %d percent",count);
        printf("\n\n\t\t\t STAY HOME STAY SAFE \n");
//            break;

    }
    if(count>50 && count<=100)
    {
        printf("\n\n\t\t\t ALERT! YOU urgently do your corona test as soon as possible.You are in risk zone  \n");

        // printf("\n\n\t\t\t YOUR RATE OF BEING INFECTED IS %d percent",count);
    }

    printf("\n\n\t\t\t STAY HOME STAY SAFE \n");
    // covidtestkit();
    getch();

}

void covidtestkit(void)
{
    system("cls");
    title1();
    display();
    int testkits = 50000;
    char a;
    printf(" DO YOU WANT TO REGISTER FOR THE TEST KITS(y/n)  \nAns: ");

    fflush(stdin);

    scanf("%c",&a);

    if(a=='y' || a=='Y')

    {
        system("cls");
        testkits=testkits-1;
        printf("TESTKITS REMAINING:--> %d\n\n\n",testkits);
        printf("\n\t PLEASE CONTRACT WITH THE FOLLOWING ADDRESS OR PHONE NUMBERS FOR FURTHER INFORMATION");
        printf("BRO COVID TEST CENTER\nPlot 15, Road 71,\nGulshan, Dhaka-1212\nBangladesh\nTel: +88 02 8836444, +88 02 8836000\nFax: +88 02 8836446\nEmail: info@bro.com\n\n\n----------------------------------------------");



    }
    return;

}
