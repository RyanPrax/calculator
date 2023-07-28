The quadratic will be in the form ax^2 + bx + c (designated by floats a, b, and c called inside the function) and will be solved using the quadratic formula

`float d` represents the b^2 -4ac that is inside of the radical of the formula

```
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
```
