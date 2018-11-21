# Exam 2 Review

- If x = 5, y =6, z = 4. Evaluate the following statements.

        (x + z) % y = 3
        (x % y) % z = 1
        (y % z) % x = 2
        (x \* z) % y = 2

- What is the output of the following code.
        	
```cpp
char gender = 'M';
int age = 22;
double policyRate;

if(gender == 'M'){
    if(age < 21) {
        policyRate = 0.05;
    }
    else {
        policyRate = 0.035;
    }
}
else if(gender == 'F'){
    if(age < 21) {
        policyRate = 0.04;
    }
    else {
        policyRate = 0.03;
    }
} 

cout << "Your policy rate is " << policyRate << endl;
```
        Your policy rate is 0.035

- What is the output of the following code.
```cpp
double gpa = 3.8;

if (gpa >= 2.0) {
    if (gpa >= 3.9){
        cout << "Dean's Honor List" << endl;
    }
}
else {
        cout << "The GPA is below the graduation "
        << "requirements. " << endl
        << "See your academic advisor." << endl;
}
```
        No output

- What is the output of the following code.
```cpp
int n = 10;
int sum = 0;
int counter = 0;

while (counter < n)
{
    counter = counter + 1;
    sum = sum + counter;
}
cout << "The sum is " << sum << endl;
```
        The sum is 55

- What is the output of the following code.
```cpp
int counter = 6;

while
{
    cout << counter << " ";
    counter = counter - 1;
}
cout << "BLASTOFF!" << endl;
```
        6 5 4 3 2 1 BLASTOFF!

- Name the essential declarations your for loop has to have.

        Initial declaration, loop condition, and update
