## Notes from Introduction to C++ Classes

### Scanf for a String
Specify the size of the string in scanf to avoid exceeding the maximum number <br>
of characters. Example: for 32 characters.

```
printf("Name: ");
scanf("%32s", name);
```

### Differences Between C and C++
Char and String. <br> C++ has the "string" type.

```
string firstName, lastName, fullName;
```

### Output and Input
- Cout Console output.
- Cin Console input.
- << or >> Operator.
**NOTE:** In the "string" type, pure C commands like printf and scanf cannot be used. <br> The "string" type can only be declared in C++.

### File Extension for C++ Code
filename.cpp

### Portability with Line Break
endl enables program portability instead of using \n. <br> It allows the code to run on both Windows and Linux, as line breaks are handled differently on each operating system.

### String Comparison
A string has the address of its characters. It can be compared like any other variable. <br>
- Example: 'apple' == string

### Getline vs. Cin
- getline reads the whole line including spaces.
- Cin reads the string until the first space.

### isspace
A function that checks if a character is a space.

### Reading Date with Cin

```
int day, month, year;
char sep1, sep2; // the slashes in the date

cin >> day;
cin >> sep1;
cin >> month;
cin >> sep2;
cin >> year;
```

This input reads a date in the format DD/MM/YYYY.