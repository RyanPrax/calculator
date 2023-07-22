#include <iostream>
using namespace std;
int choice;
void SelectionScreen () {
   cout << " 1: Addition \n 2: Subtraction \n 3: Multiplication \n 4: Division \n 5: Exponent \n 6: Square Root \n 7: Cube Root \n 8: Quadratic \n";
    cin >> choice;
}

void Addition() {}
void Subtraction() {}
void Multiplication() {}
void Division() {}
void Exponent() {}
void Sqrt() {}
void Cbrt() {}
void Quadratic(){}

int main() {
    SelectionScreen();
    switch (choice)
    {
    case 1:
        Addition();
        break;
    case 2:
        Subtraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    case 5:
        Exponent();
        break;
    case 6:
        Sqrt();
        break;
    case 7:
        Cbrt();
        break;
    case 8:
        Quadratic();
    default:
        cout << "Number not valid, enter a valid number";
    }
    return 0;
}