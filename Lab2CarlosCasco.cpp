#include <iostream>
#include <cmath>
using namespace std;
void ConvertBase(string);


int main() {

ConvertBase(102);


  return 0;
}


void ConvertBase(string numero){
    char digits [] = numero ;

    for (int  i = 0; i < sizeOf(digits)-1; i++) {
        std::cout << digits[i] << std::endl;
    }

}
