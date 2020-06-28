#include<bits/stdc++.h>
using namespace std;
class f
{
public:
    int cnt;
    string name;
    ofstream file;
    ifstream file1;
    string line;
    void filein()
    {
        int n=1;
        while(n)
        {
            file.open("result.txt",std::ios_base::app);

            cin>>ws;
            getline(cin,name);
            file<<name<<"\n";
            if(name==";;")
                break;
            file.close();
            ++n;
        }
    }
    void fileout()

    {
        file1.open("result.txt");
        file1>>line;
        if(file1.is_open())
        {
            while(getline(file1,line))
            {
                cout<<line<<endl;
            }
        }
        else
            cout<<"file not found\n";

        file1.close();

    }

    void file_Search()
    {
        string id;

        file1.open("result.txt");
        cin>>id;
        cout<<"\n\n-------------------------------------------------------------------------------------\n";
        cout<<"\t\t\t\t The line is....\n";
        cout<<"-------------------------------------------------------------------------------------\n\n";

        if(file1.is_open())
        {
            while(getline(file1,line))
            {
                if(line.find(id)!=string::npos)
                {
                    cnt=1;
                    cout<<line<<"\n";
                }

            }
            if(cnt==0)
                cout<<"Please write correct word\n";

        }
        file1.close();
    }

    int calculator()

    {
        string s1;
        long long a,b;

        for(;;)
        {
            cin>>a>>s1>>b;

            if(s1=="+")
                cout<<"\n= "<<a+b<<"\n\n";
            if(s1=="-")
                cout<<"\n= "<<a-b<<"\n\n";
            if(s1=="/")
            {
                if(a%b==0)
                cout<<"\n= "<<a/b<<"\n\n";
                else
                    cout<<"\n= "<<(double)a/b<<"\n\n";

            }
            if(s1=="*")
                cout<<"\n= "<<a*b<<"\n\n";
            if(a==0&&s1=="?"&&b==0)
                break;

        }


    }

    int recognize()
{
    string s;

    for(;;){
    int state=0,i=0,cont=0,ct=0;

    printf("\t Enter a string:");
   cin>>ws;
    cin>>s;

    for(i=0;i<s.size();i++)
    {

        if(s[i]=='a')
        {
            cont++;
        }
        else if(s[i]=='b')
        {
            ct++;
        }
        else
        {
            cout<<"Your syntax is wrong\n";
            return 0;
        }
    }
    if(cont>=1 && ct==0)
    {
        cout<<"\n\t is accepted under rule 'a*' \n";
    }
    else if(cont==ct)
    {
        cout<<"\n\t is accepted under rule 'a*b+' \n";
    }
    else if(cont==1 && ct==cont+1)
    {
        cout<<"\n\tis accepted under rule 'abb' \n";
    }
    else
    {
        cout<<"\n\tis not recognized. \n";
    }
    }
    //return 0;
}
};

int main()

{
    f obj;

    for(;;)
    {
        string s;
        cin>>ws;
        getline(cin,s);

        if(s=="write::")
            obj.filein();
        if(s=="read::")
            obj.fileout();
        if(s=="search::")
            obj.file_Search();
            if(s=="calculator::")
                obj.calculator();
                if(s=="recognize::")
                    obj.recognize();
        if(s==";;")
            return 0;
    }
}

