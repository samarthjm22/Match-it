#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <cstdlib>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<time.h>


using namespace std;

int main()
{

    srand(time(NULL));
    int i,j,x,l,m,n,o,p,q,r,s,t=1,flag=1;
    char a[5][5],b[5][5];

    a[0][0]='0';
    a[1][0]='1';
    a[2][0]='2';
    a[3][0]='3';
    a[4][0]='4';

    a[0][0]='0';
    a[0][1]='1';
    a[0][2]='2';
    a[0][3]='3';
    a[0][4]='4';

    b[0][0]='0';
    b[1][0]='1';
    b[2][0]='2';
    b[3][0]='3';
    b[4][0]='4';

    b[0][0]='0';
    b[0][1]='1';
    b[0][2]='2';
    b[0][3]='3';
    b[0][4]='4';



    for(i=1;i<5;i++)
        {
            for(j=1;j<5;j++)
            {
                b[i][j]='*';
                a[i][j]='*';
            }
        }

        for(i=0;i<8;i++)
        {

            for(j=0;j<2;)
            {
                l=(rand()%10)+1;
                m=(rand()%10)+1;
                if((l<=4) && (m<=4))
                {
                    if(a[l][m]=='*')
                    {
                        a[l][m]=char(65+i);
                        j++;
                    }
                }
            }
        }

    while(flag!=0)
    {
        p:
        flag=0;
        system("cls");
        cout<<"\n\t\t\t\t  Attempt: "<<t;
        cout<<"\n\n\n\t\t\t\t";
        for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    cout<<b[i][j]<<"  ";
                }
                cout<<"\n\n\t\t\t\t";
            }

        cout<<"\n\n Enter move 1: ";
        cin>>n;
        if(n==99)
        {
            system("cls");
            cout<<"\n\t\t\t\t   Solution";
            cout<<"\n\n\n\t\t\t\t";
            for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        cout<<a[i][j]<<"  ";
                    }
                    cout<<"\n\n\t\t\t\t";
                }
            cout<<"\n\n\n\n\n";
            system("pause");
            goto p;
        }
        if(n==0)
        {
            exit(0);
        }
        q=n%10;
        n/=10;
        p=n%10;
        if(b[p][q]!='*')
        {
            cout<<"\n\n\t\t Invalid Move \n\n\n";
            system("pause");
            goto p;
        }
        b[p][q]=a[p][q];

        q:
        system("cls");
        cout<<"\n\t\t\t\t  Attempt: "<<t;
        cout<<"\n\n\n\t\t\t\t";
        for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    cout<<b[i][j]<<"  ";
                }
                cout<<"\n\n\t\t\t\t";
            }

        cout<<"\n\n Enter move 2: ";
        cin>>o;
        if(o==99)
        {
            system("cls");
            cout<<"\n\t\t\t\t   Solution ";
            cout<<"\n\n\n\t\t\t\t";
            for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        cout<<a[i][j]<<"  ";
                    }
                    cout<<"\n\n\t\t\t\t";
                }
            cout<<"\n\n\n\n\n";
            system("pause");
            goto q;
        }
        if(n==0)
        {
            exit(0);
        }
        s=o%10;
        o/=10;
        r=o%10;
        if(b[r][s]!='*')
        {
            cout<<"\n\n\t\t Invalid Move \n\n\n";
            system("pause");
            goto q;
        }
        b[r][s]=a[r][s];

        system("cls");
        cout<<"\n\t\t\t\t  Attempt: "<<t;
        cout<<"\n\n\n\t\t\t\t";
        for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    cout<<b[i][j]<<"  ";
                }
                cout<<"\n\n\t\t\t\t";
            }
        cout<<"\n\n\n";
        system("pause");

        if(a[p][q]!=a[r][s])
        {
            b[p][q]='*';
            b[r][s]='*';
            t++;
        }
        else
            t++;

        for(i=1;i<5;i++)
            {
                for(j=1;j<5;j++)
                {
                    if(b[i][j]=='*')
                    {
                        flag=1;
                    }
                }
            }
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t   Congratulations! You completed the game in "<<t<<" Attempts\n\n\n";
    system("pause");

    return 0;
}
