//C++ FROM SCRATCH- DSA DAY 1 (BASICS)
        //1. BASIC STRUCTURE
#include <iostream>
#include <string>
using namespace std;

int main() 
{
        //2.Taking in input and printing output.
        //3.DataTypes.
int age;
string name;
char letter= 'z';
float decimal= 3.3;
int num1, num2;
cout<<"WELCOME TO THE PRACTICE SESSION 1\n";
cout<<"To begin, Enter your name and age.\n";
getline(cin,name);
cin>>age;
cout<<"Let's Start with rules of Datatypes "<<name<<endl;
       //3a. Typecasting
cout<<"First: Operation of 2 datatypes will be converted to larger datatype like char+int will be int: " <<letter+age <<" and int/float will be float " <<age/decimal <<endl;
cout<<" Second: Datatype can be converted to another Datatype explicitly like: (int)3.3 = "<< (int)decimal<<endl;
        //4.Operators
        //4a. Arithmetic
cout<<"Lets proceed to topic operators, Enter 2 numbers you want to see arithmetic operations on:"<<endl;
cin>>num1>>num2;
cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
cout<<num1<<" % "<<num2<<" = "<<num1 % num2<<endl;   //mod should be used vwith int only, small%large will return small while large%small will return remainder.
//other operator like relational, logical, misc, unary can be used in same way, alr done in notes & coding studio.
}


//SHORTCUTS FOR VS:
	//1. select complete line by clicking line number.
	//2. ctrl+c & ctrl+v, line will be pasted below that line.
	//3. ctrl+x for cutting line.
	//4. Ctrl+Shift+\ to jump gto matching bracket.
	//5. ctrl+home to go at start
	//6. ctrl+end to go at end.
	//7. ctrl+shit+H for replacing word by new.
	//8. alt+arrow buttons to move lines.
	//9. shift+alt+arrow buttons to write on multiple lines.
	//10. shift+alt+; for editing a word in whole program.
        //11. Ctrl+Enter TO Insert line above
        //12 Ctrl+Shift+Enter to Insert line below