#include <iostream>
#include <string>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
  std::string message;
  if (is_succulent == false && days > 3) {
    message =  "Time to water the plant.";
  }
  else if (is_succulent == true && days <= 12) {
    message = "Don't water the plant!";
  }
  else if (is_succulent == true && days >= 13) {
    message = "Go ahead and give the plant a little water.";
  }
  else
    message = "Don't water the plant!";
    return message;
}


int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}