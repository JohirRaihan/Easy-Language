#include <bits/stdc++.h>
using namespace std;

int identifire (){
        int i=0,flag=0;
        char a[10];

        printf(" Enter Identifier : ");
        gets(a);

        if(flag == 0){
            if((a[0] == '_') || (isalpha(a[0]) != 0))
            {
                    for(i=1; a[i]!='\0'; i++)
                    {
                        if((isalnum(a[i]) == 0) && (a[i] != '_'))
                        {
                                flag=1;
                        }
                    }
            }
            else
            {
                    flag=1;
            }
        }

      if(flag == 0){
            printf("\n %s is an Identifier.",a);
      }else{
            printf("\n %s is Not an Identifier.",a);
      }

      getch();
}
