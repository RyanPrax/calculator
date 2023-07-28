#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int choice;
float x, y;
void SelectionScreen () {
    system("cls");
    cout << " 1: Addition \n 2: Subtraction \n 3: Multiplication \n 4: Division \n 5: Exponent \n 6: Square Root \n 7: Cube Root \n 8: Quadratic \n 9: Circumference \n 10: Area of a Circle \n 11: Celcius to Fahrenheit \n 12: Fahrenheit to Celcius \n Press 0 to quit \n";
    cin >> choice;
}

void Addition() {
    cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The sum of those two numbers is " << x + y << endl;
		system("pause");
		SelectionScreen();
}
void Subtraction() {
    cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The difference of those two numbers is " << x - y << endl;
		system("pause");
		SelectionScreen();
}
void Multiplication() {
    cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The product of those two numbers is " << x * y << endl;
		system("pause");
		SelectionScreen();
}
void Division() {
    cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The quotient of those two numbers is " << x / y << endl;
		system("pause");
		SelectionScreen();
}
void Exponent() {
    cout << "Enter A Number: ";
		cin >> x;
		cout << "Enter A Exponent: ";
		cin >> y;
		cout << x << " to the power of " << y << " is " << pow(x, y) << endl;
		system("pause");
		SelectionScreen();
}
void Sqrt() {
    cout << "What Do You Want The Square Root of? \n";
		cin >> x;
		cout << "The square root of " << x << " is " << sqrt(x) << endl;
		system("pause");
		SelectionScreen();
}
void Cbrt() {
		cout << "What Do You Want The Cube Root of? \n";
		cin >> x;
		cout << "The cube root of " << x << " is " << cbrt(x) << endl;
		system("pause");
		SelectionScreen();
}
void Quadratic() {
        float a;
		float b;
		float c;
		cout << "Enter The Coefficient of A: ";
		cin >> a;
		cout << "Enter The Coefficient of B: ";
		cin >> b;
		cout << "Enter The Coefficient of C: ";
		cin >> c;
		float d = (b*b) - (4 * a*c);
		cout << (-b + sqrt(d)) / (2*a) << endl;
		cout << (-b - sqrt(d)) / (2*a) << endl;
		if (d < 0) {
			cout << "No Real Roots";
		}
		system("pause");
		SelectionScreen();
}

void Circumference() {
    cout << "Enter Your Radius: ";
		cin >> x;
		cout << "Circumference of the circle is" << x * 3.1415 << endl;
		system("pause");
		SelectionScreen();
}

void CircleArea() {
    cout << "Enter Your Radius: ";
		cin >> x;
		cout << "Area of the circle is" << x * x*3.1415 << " units squared" << endl;
		system("pause");
        SelectionScreen();
}

void C2F() {
    	cout << "Enter Your Tempurature In Celsius: ";
			cin >> x; 
		cout << (x*1.8) + 32 << endl;
		system("pause");
		SelectionScreen();
}

void F2C() {
    cout << "Enter Your Tempurature In Fahrenheit: ";
		cin >> x;
		int y = (x - 32)*0.5556;
		cout << y << endl;
		system("pause");
		SelectionScreen();
}

int main() {
    int loop = 1;
    SelectionScreen();
    while (loop == 1) {
    switch (choice)
    {
    case 1:
    system("cls");
        Addition();
        break;
    case 2:
    system("cls");
        Subtraction();
        break;
    case 3:
    system("cls");
        Multiplication();
        break;
    case 4:
    system("cls");
        Division();
        break;
    case 5:
    system("cls");
        Exponent();
        break;
    case 6:
    system("cls");
        Sqrt();
        break;
    case 7:
    system("cls");
        Cbrt();
        break;
    case 8:
    system("cls");
        Quadratic();
    case 9:
    system("cls");
        Circumference();
    case 10:
    system("cls");
        CircleArea();
    case 11:
    system("cls");
        C2F();
    case 12:
    system("cls");
        F2C();
    case 0:
        return 0;
    default:
        cout << "Number not valid, enter a valid number";
    }
    }
}