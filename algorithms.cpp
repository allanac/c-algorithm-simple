#include <iostream>
#include <iomanip>
#include <cstdlib>

void c_to_f(void);
void f_to_c(void);

int main(void) {
  int choice;
  char again;

    do{
      // system("CLS");
      std::cout << " "<<"What conversion would you like to make" << '\n';
      std::cout << "" << "1. Celsius to Farenheight" << '\n';
      std::cout << " " << "2.Farenheight to Celsius" << '\n';
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
          default: { std::cout <<"" << "you must enter 1 or 2" << '\n';}
        } //end switch(choice)

      std::cout << "Do you wish to do another conversion Y ot N" << '\n';
      std::cin >> again;

    }while (again == 'Y' || again == 'y');
     // do()

}

void c_to_f(void)
{
  // system('CLS');
  int temp,fahrenheit;
  std::cout << "\n\n\n";
  std::cout << "Enter the temperature in Whole Degrees Celcius" << '\n';
  std::cin >> temp;

  fahrenheit = ((temp *9)/5) + 32;

  std::cout << " " << temp <<" degrees celcius is"<< fahrenheit<<
  "degrees fahrenheit \a\n\n\n";
}

void f_to_c(void)
{
  // system("CLS");
  int temp, celcius;

  std::cout << "Enter the temperature in whole degree fahrenheit" << '\n';
  std::cin >> temp;

  celcius = ((temp - 32)*5) / 9;

  std::cout << temp << " degrees fahrenheit is " << celcius << "degrees celsius" << '\n';
}
