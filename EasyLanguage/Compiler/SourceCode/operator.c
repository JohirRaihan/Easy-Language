#include <bits/stdc++.h>
using namespace std;

void main()
{
      char a[10];

      printf("Enter Operator : ");
      gets(a);

        if(strcmp(a,"+")==0)
        {
            printf(" '+' is addition operator.");
        }
        else if(strcmp(a,"-")==0)
        {
            printf(" '-' is Subtract operator.");
        }
        else if(strcmp(a,"*")==0)
        {
            printf(" '*' is multiplication operator.");
        }
        else if(strcmp(a,"/")==0)
        {
            printf(" '/' is divided operator.");
        }
        else if(strcmp(a,"%")==0)
        {
            printf(" '%' is modulas operator.");
        }
        else
        {
            printf(" %s is not operator.", a);
        }

      getch();
}

