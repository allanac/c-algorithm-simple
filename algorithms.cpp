#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>

void c_to_f(void);
void f_to_c(void);

void main(void) {
  int choice;
  char again;


  do {
    /* code */
  } while(/* condition */);

    do{
      system("CLS");
      std::cout << setw(10) << " "<<"What conversion would you like to make" << '\n';
      std::cout << setw(20) << "" << "1. Celsius to Farenheight" << '\n';
      std::cout << setw(20)<< " " << "2.Farenheight to Celsius" << '\n';
      std::cin >> choice;

        switch (choice) {
          case 1: {
            c_to_f();
            break;
          }
          case 2: {
            f_to_c();
            break;
          }
          default: { std::cout << setw(10) <<"" << "you must enter 1 or 2" << '\n';}
        } //end switch(choice)

      std::cout <<setw(10)<< "Do you wish to do another conversion Y ot N" << '\n';
      std::cin >> again;

    }while (again == 'Y' || again == 'y');
     // do()

}

void c_to_f(void)
{
  system('CLS');
  int temp,fahrenheit;
  std::cout << "\n\n\n";
  std::cout << "Enter the temperature in Whole Degrees Celcius" << '\n';
  std::cin >> temp;

  fahrenheit = ((temp *9)/5) + 32;

  std::cout << endl<< setw(10) << " " << temp <<" degrees celcius is"<< fahrenheit<<
  "degrees fahrenheit \a\n\n\n";
}

void f_to_c(void)
{
  system("CLS");
  int temp, celcius;

  std::cout << setw(10) << "Enter the temperature in whole degree fahrenheit" << '\n';
  std::cin >> temp;

  celsius = ((temp - 32)*5) / 9;

  std::cout << endl << setw(10) << temp << " degrees fahrenheit is " << celsius << "degrees celsius" << '\n';
}
