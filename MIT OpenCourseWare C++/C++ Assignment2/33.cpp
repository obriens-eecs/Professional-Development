#include <iostream>
void doubleNumber(int *num) { *num = *num * 2;};

int main() 
{
int num = 35;
int *ptr = &num;
doubleNumber (ptr);
std :: cout << num ; // Should print 70
return 0;
}
