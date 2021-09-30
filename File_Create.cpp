#include<iostream>
#include<fstream>
using namespace std;



int main()
{   
    fstream newfile;
    // Reading a file
    newfile.open("New.txt",ios::in);
    if (!newfile)
    {
        cout<<"There is no such file";

    }
    else
    {
        cout<<"Writing into a file "<<endl;
        newfile<<"object oriented programming ";
        newfile.close();
        
    }

    return 0;
}
