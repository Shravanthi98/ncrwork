#include<iostream>
#include<string.h>
using namespace std;
class string1{
char *str;
int size;
public:
string1()
{
size =0;
str = NULL;
}
string1(int size)
{
size = size;
if(size>0)
{
str = new char[size];
cout<<"Enter the string"<<endl;
cin>>str;
}
else
{
cout<<"The size of the string is not a valid number. Please input values greater than 0"<<endl;
exit(0);
}
}
string1(string1 &c)
{
size = c.size;
str = new char[size];
strcpy(str,c.str);
}

void operator + (string1 &str2)
{
strcat(str, str2.str);
}

void operator = (string1 &str2)
{
int difference = 0;
difference = strcmp(str,str2.str);
if(difference == 0)
cout<<"Strings are equal"<<endl;
else
cout<<"The difference is "<<difference<<endl;
}

void operator [](int index)
{
if(index>size)
{
cout<<"Trying to access a character out of bounds, Index value must be less than the size of the array"<<endl;
exit(0);
}
else
cout<<"Array element = "<<str[index]<<endl;
}
friend ostream &operator <<(ostream &print, string1 &object);
friend istream &operator >>(istream &scan, string1 &object);
~string1()
{
free(str);
cout<<"Memory freed"<<endl;
}
};
ostream &operator <<(ostream &print, string1 &object)
{
print<<object.str<<endl;
return print;
}

int main()
{
int size, index,option;
cout<<"Enter the size of the string"<<endl;
cin>>size;
string1 stringobject1(size), stringobject2(size), stringobject3(stringobject2);
cout<<"1. String Concatenate"<<endl<<"2. String Compare"<<endl<<"3. String Indexing"<<endl;
cout<<"Enter your option"<<endl;
cin>>option;
switch(option)
{
case 1 : 
stringobject1+stringobject3; 
cout<<"Concatenated string = "<<stringobject1;break;
case 2 :
stringobject1=stringobject2; break;
case 3 :
cout<<"Enter the index of the string"<<endl;
cin>>index;
stringobject1[index]; break;
default : cout<<"Invalid Input, Please enter from the above options"<<endl; break;
}
return 0;
}


