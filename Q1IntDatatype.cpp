#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
  void TempRange(int convertedValue);
int main(){
    while (true){
      int userInput, option, convertedValue;
        cout << "Please enter the choice : " << endl;
        cout << "Enter 1 -- convert from Celsius to Fahrenheit" << endl;
        cout << "Enter 2 -- convert from Fahrenheit to Celsius" << endl;
        cout << "Your option: ";
      cin >> option;
switch (option){
      case 1:
        cout << "Please enter the Celsius value : ";
        cin >> userInput;
        convertedValue = (userInput * 9 / 5) + 32;
        cout << "Fahrenheit is " << convertedValue << endl;
      TempRange(userInput);
break;
      case 2:
        cout << "Please enter the Fahrenheit value : ";
        cin >> userInput;
        convertedValue = (userInput - 32) * 5 / 9;
        cout << "Celsius is " << convertedValue << endl;
      TempRange(convertedValue);
break;

  default:
    cout << "Invalid Option" << endl;
exit(0);

break;
  }
 }
}
  void TempRange(int convertedValue){
    string result;
      convertedValue <= 10 ? result = "Temperature is cold" : "";
      convertedValue > 10 && convertedValue <= 25 ? result = "Temperature is perfect" : "";
      convertedValue > 25 && convertedValue <= 40 ? result = "Temperature is hot" : "";
      convertedValue > 40 ? result = "Temperature is very hot" : "";
     cout << result << endl;
}
