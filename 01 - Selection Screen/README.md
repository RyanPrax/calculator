## Calculator mode selection

To figure out what the user wants to calculate, an initial screen will be printed out and the user will input a number that corresponds to the given process.

The initial screen will be contained in a declared void function named "Selection Screen"

The input will be obtained by first assigning the global integer variable `Choice`, then by using the `cin` statement

The terminal screen will be cleared prior to creation, to maintain clarity when using the calculator multiple times

```
void SelectionScreen () {
    system("cls");
    cout << " 1: Addition \n 2: Subtraction \n 3: Multiplication \n 4: Division \n 5: Exponent \n 6: Square Root \n 7: Cube Root \n 8: Quadratic \n Press 0 to quit \n";
    cin >> choice;
}
```

When the function is finished, don't forget to call the function in main:

```
int main() {
    SelectionScreen();
}
```

## Implementing the selections

The various options for the calculator will be their own seperate void functions, called in main via a switch

The switch will loop with an int value `loop` that is defined equal to 1 and will loop the selections after the calculator is used.

When the user inputs 0 in the selection screen, main returns 0, ending the program

The switch will look like this:

```
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
```
