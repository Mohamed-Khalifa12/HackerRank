### Objective
This challenge will help you learn the concept of recursion.

A function that calls itself is known as a recursive function. The C programming language supports recursion. But while using recursion, one needs to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

To prevent infinite recursion, *if ... else* statement (or similar approach) can be used where one branch makes the recursive call and other doesn't.
```
void recurse() {
    .....
    recurse()  //recursive call
    .....
}
int main() {
    .....
    recurse(); //function call
    .....
}
```
### Task

There is a series, S, where the next term is the sum of pervious three terms. Given the first three terms of the series, a, b, and c  respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.
```
S(n)    = a  => n = 1
        = b  => n = 2
        = c  => n = 3
        = S(n-1) + S(n-2) + S(n-3) => otherwise
```
### Input Format

- The first line contains a single integer,  *n*.

- The next line contains 3 space-separated integers, a, b, and c.

### Constraints
- 1 < n < 20
- 1 < a,b,c < 100

### Output Format

Print the nth term of the series, S(n).

### Sample Input 0
```
5
1 2 3
```
### Sample Output 0
```
11
```

### you can solve the problem from [here](https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true)