#include <iostream>

int main() {
// variables
bool exitloop = true;
double userweight;
int planet;
float weightmer = 0.38;
float weightven = 0.91;
float weightear = 1;
float weightmar = 0.38;
float weightjup = 2.34;
float weightsat = 1.06;
float weightura = 0.92;
float weightnep = 1.19;
double weightplut = .071;
//start user loop sequence
while (exitloop) {
//user enters earth weight
std::cout << "Please enter your Earth weight";
std::cin >> userweight;
//user enters the planet for the fight
std::cout << "Please enter the integer of the planet you wish to fight on. 1: Mercury, 2: Venus, 3:Earth, 4. Mars, 5. Jupiter, 6. Saturn, 7. Uranus, 8. Neptune.";
std::cin >> planet;
//calculate user weight then output the results
switch (planet){
  case 1:
    userweight = userweight * weightmer;
    std::cout << "Your weight on Mercury is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 2:
    userweight = userweight * weightven;
    std::cout << "Your weight on Venus is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 3:
    userweight = userweight * weightear;
    std::cout << "Your weight on Earth is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 4:
    userweight = userweight * weightmar;
    std::cout << "Your weight on Mars is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 5:
    userweight = userweight * weightjup;
    std::cout << "Your weight on Jupiter is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 6:
    userweight = userweight * weightsat;
    std::cout << "Your weight on Saturn is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 7:
    userweight = userweight * weightura;
    std::cout << "Your weight on Uranus is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 8:
    userweight = userweight * weightnep;
    std::cout << "Your weight on Mercury is: " << userweight << " in your preferred unit of measurement.\n";
    break;
  case 9:
    userweight = userweight * weightplut;
    std::cout << "Pluto is not a planet, it is a dwarf planet. But if you must know, your weight on Pluto is: " << userweight << " in your preferred unit of measurement.\n";
    continue;
    //if variable
  char exit;
    //if the user wants to enter again
  std::cout << "Would you like to choose again? Y/N\n";
  std::cin >> exit;
  if (exit == 'y') {
    exitloop = true;
  }
  else {
    exitloop = false;
  }}}}
