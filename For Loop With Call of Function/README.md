# FOR LOOP WITH CALL OF FUNCTION
## Program
```c
int fun() {
    static int num = 16;
    return num--;
}

int main() {
    for(fun();fun();fun())
    printf("%d",fun());
    return 0;
}
```

## FOR LOOP BASICS
For loop consist of 4 parts. These are:
- Initialization
- Condition
- Post Action
- Statements inside curly braces

And it is processed in order of that:
1) Initialization
2) Condition
3) Statements inside curly braces
4) Post Action

## SOLUTION
As we see in the program, we return the number and then increment it so it is __POST INCREMENT__. If we start up the iteration it goes like that
- for(16,15,x)
printf("%d",14)
- for(16,15,13)

So this is the order of execution and iteration stops while the condition step is 0.
