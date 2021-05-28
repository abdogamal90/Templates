#include <iostream>
#include <string>
#include <vector>
using namespace std;


class StudentName
{
private:
    string Name;
public:
    StudentName(string name)
    {
        int spaces_number=0,last_position=0;
        for(int i=0; i<name.length(); ++i)
        {
            if (name[i]==' ')
            {
                ++spaces_number;
                last_position =i;
            }
        }
        if (spaces_number <2)
        {
            if(spaces_number ==0)
                Name=name+" "+name+" "+name;
            else
                Name=name+name.substr(last_position);
        }
        else
            Name=name;
    }
    void print()
    {
        vector <string> Names;
        string name="";
        for(int i=0; i<Name.length(); ++i)
        {
            if (Name[i]==' ')
            {
                Names.push_back(name);
                name="";
            }
            else if(i==Name.length()-1)
            {
                name+=Name[i];
                Names.push_back(name);
            }
            else
                name+=Name[i];
        }
        int j=1;
        for(int i=0; i<Names.size(); ++i)
        {
            cout<<j<<") "<<Names[i]<<endl;
            ++j;
        }
    }
    bool Replace(int i,int j)
    {
        vector <string> Names;
        string name="";
        for(int i=0; i<Name.length(); ++i)
        {
            if (Name[i]==' ')
            {
                Names.push_back(name);
                name="";
            }
            else if(i==Name.length()-1)
            {
                name+=Name[i];
                Names.push_back(name);
            }
            else
                name+=Name[i];
        }
        if(i > Names.size() || j > Names.size())
        {
            return false;
        }
        else
        {
            string s=Names[j-1];
            Names[j-1]=Names[i-1];
            Names[i-1]=s;
            string k;
            for(int i = 0 ; i < Names.size() ; i++)
            {
                k+=Names[i] + " ";
            }
            Name = k;
            cout << Name<<endl;
            return true;
        }
    }
};

int main()
{

    StudentName test_1("Mohamed Samy Elgabry");
    if(test_1.Replace(1,3))
    {
        test_1.print();
        cout <<endl;
    }


    StudentName test_2("Mohamed Samy Elgabry");
    if(test_2.Replace(2,3))
    {
        test_2.print();
        cout <<endl;
    }
    StudentName test3("Abdelrahman Gamal");
    if(test3.Replace(3,1))
    {
        test3.print();
        cout <<endl;
    }

    StudentName test_4("Muhammad chixo");
    if(test_4.Replace(1,3))
    {
        test_4.print();
        cout <<endl;
    }

    StudentName test_5("Mohamed");
    if(test_5.Replace(1,3))
    {
        test_5.print();
        cout <<endl;
    }

    return 0;
}
