First, add two global float variables, x and y. These variables will be the numbers being solved

The user will be asked two seperate numbers, and will get the sum, difference, product, or quotient

`system("cls")` will be used to clear the selection screen whenever a selection is made

`system("pause")` will require the user to press any key to return to the selection screen

## Addition

```
    cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The sum of those two numbers is " << x + y << endl;
		system("pause");
		SelectionScreen();
```

## Subtraction

```
cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The difference of those two numbers is " << x - y << endl;
		system("pause");
		SelectionScreen();
```

## Multiplication

```
cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The product of those two numbers is " << x * y << endl;
		system("pause");
		SelectionScreen();
```

## Division

```
cout << "What is Your First Number? \n";
		cin >> x;
		cout << "What is Your Second Number? \n";
		cin >> y;
		cout << "The quotient of those two numbers is " << x / y << endl;
		system("pause");
		SelectionScreen();
```