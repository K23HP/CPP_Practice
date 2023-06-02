<h1> Operators in C++

<h2>Set of Operators in C++

* unary: operates on one operand. (E.g. unary minus operator which negates its operand.)
* binary: operates on two operands. (E.g. multiplication operator)
* ternary: operates on three operands. (E.g. conditional operator)

<h2>Common Operators in C++

- assignment
- arithmetics
- increment/decrement (partly works like arithmetic and assignment)
- relational (comparison)
- logical (to test logical and boolean condition)
- memeber access (e.g. array subscript operator)
- other

<h3>Assignment Operator (=)</h3>

L.H.S = R.H.S

where R.H.S is the expression evaluated to a value. This value in R.H.S is stored to the L.H.S (variable).

note: L.H.S must be assignable. More than one variable can be assigned in one statement.

C++ is statically typed. Compiler will be checking whether the value in R.H.S can be assgined to the variable in L.H.S during compile time.

* Assignment is different from initialization.

```cpp
int a {10};  // This is an initialization
int b {20};  // This is also an initialization

a = 20;  // This is an assignment
```

Initialization is when a variable is declared and it get the value for the first time.

Assignment happens when the existing value in the variable is updated or changed. As we can see in the above example code, line 1 and 2 is where the initialization of variables a and b happens and in line 4, the value 20 is assigned to variable a.

```cpp
a = b = 100;  // Assingning 100 to a and b happens from right to left.
```

<h3>Arithmetic Operator

| Operator | Operation                                     |
| :------: | :-------------------------------------------- |
|    +    | Addition                                      |
|    -    | Subtraction                                   |
|    *    | Multiplication                                |
|    /    | Division                                      |
|    %    | Modulo or Remainder<br />(Only with integers) |

Remember: PEMDAS

<h3>Increment and Decrement Operator

* ++ increment operator
* -- decrement operator
* ++num (prefix)
* num++ (postfix)

note: Never use this operator twice for the same variable in the same statement

```cpp
int num {10};  // num = 10
int result {0};  // result = 0

// prefix add one to the R.H.S before assignment
result = ++num;  // now num = 11 and result = 11.

// postfix does assignment first, then add one to the R.H.S
result = num++;  // now result = 11 and num = 12.
```

This is the same for decrement operator as well.

<h3>Equality Operator

* == Equal
* != Not equal

<h3>Relational Operator

* < less than
* <= less than or equal
* > greater than
* > = greater than or equal

<h3>Logical Operator

|  Operator  | Meaning                          |
| :---------: | -------------------------------- |
| not<br />! | Negation<br />Unary Operator     |
| and<br />&& | Logical and<br />Binary operator |
|     or     | Logical or<br />Binary operator  |
