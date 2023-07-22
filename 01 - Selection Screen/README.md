## Calculator mode selection

To figure out what the user wants to calculate, an initial screen will be printed out and the user will input a number that corresponds to the given process.

The initial screen will be contained in a declared void function named "Selection Screen"

The input will be obtained by first assigning the global integer variable ```Choice```, then by using the ```cin``` statement

When the function is finished, don't forget to call the function in main:
```int main() {
    SelectionScreen();
    return 0;
}```

## Implementing the selections

The various options for the calculator will be their own seperate void functions, called in main via a switch

The switch will look like this:
```switch (choice)
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
    }```