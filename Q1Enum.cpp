#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std; //used to define the scope
//create a temp converter
enum TempConvert( Celsius =, Fahrenheit);
//create a range of temps to follow
enum TempRange( Low = 10, Medium = 25, High = 40);
void TempRange( int convertedValue);

  int main(){
     while(true){
        TempConvert Converter;
      int userinput, option, convertedValue;
    cout << "Which option would you like: "<<endl; //prints question then ends for a new line(endl;)
//create options for userinput
        cout << "Enter" << Fahrenheit <<"convert from Fahrenheit to Celsius" <<endl;
        cout << "Enter" << Celsius <<"convert from Celsius to Fahrenheit" <<endl;
//display the users option
    cout <<"Your option: ";
    cin >> option;     //accepts input using iostream
    switch (option);     //used to differenciate between the following blocks of code for each options
    {
  //create block for option Celsius
  case Celsius:
        cout << "Enter temperature in Celsius: ";
        cin >> userinput;
        convertedValue = (userinput * 9/5)+32; //actual math behind the conversion
        cout << "This temperature in Fahrenheit is " << convertedValue <<endl;
        TempRange(userinput);
        break;
  //repeat steps just for Fahrenheit option and change math
   case Fahrenheit:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> userinput;
        convertedValue = (userinput - 32)*5/9; //actual math behind the conversion
        cout << "This temperature in Celsius is " << convertedValue <<endl;
        TempRange(userinput);
        break;
  //make a default so no invalid option will be taken
  default:
    cout << "Invalid Option" << endl;
    exit(0);
    break;
    }
  }
}
void TempRange(int convertedValue) {
  string result;
  convertedValue <= Low ? result = "Temperature is cold :";
  convertedValue > Low && convertedValue <= Medium ? result = "Temperature is perfect" : "";
  convertedValue > Medium && convertedValue <= High ? result = "Temperature is hot" : "";
  convertedValue > High ? result = "Temperature is hot" : "";
  cout << result << endl;
}
