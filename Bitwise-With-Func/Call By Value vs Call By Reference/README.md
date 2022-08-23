# Call by Value vs Call by Reference
In this problem we can observe the difference between __call by value__ and __call by reference__. For understanding that we've got key concepts to explain:

__FORMAL PARAMETER__ : This parameter is the one which is in the declaration and definition. It copies the content of actual parameter or points the variable described in actual parameter.
__ACTUAL PARAMETER__ : This parameter is the one which is in the calling of function. It is the given values to function while calling it or the Memory location given.

## Call by Value
So if we have a variable as __callbyvalue__ then we actually copy the content of actual parameter to formal one. So we cant change the actual parameter variable and changes are effective just inside of function scope.

## Call by Reference
If we have a variable as __callbyreference__ then formal parameter actually points the memory location of formal one. This means that we can interrupt and change the content of actual parameter variable and effect is valid in globally.

There are key signs used for references : 
- __&__ : It is the memory/address/reference operator and if we use it, it gives us the memory location of a variable.
- __*__ : It is called as dereference operator and it is used with a RAM location. It means that give the content in that memory location.
