#include <iostream>  
using namespace std;  
  
//迭代实现斐波那契数列  
long fab_iteration(int index)  
{  
    if(index == 1 || index == 2)  
    {  
        return 1;  
    }  
    else  
    {  
        long f1 = 1L;  
        long f2 = 1L;  
        long f3 = 0;  
        for(int i = 0; i < index-2; i++)  
        {     
            f3 = f1 + f2; //利用变量的原值推算出变量的一个新值  
            f1 = f2;  
            f2 = f3;  
        }  
         return f3;  
    }  
}  
  
//递归实现斐波那契数列  
 long fab_recursion(int index)  
 {      
    if(index == 1 || index == 2)  
    {  
        return 1;  
    }  
    else  
    {  
        return fab_recursion(index-1)+fab_recursion(index-2);    //递归求值  
    }  
}  
  
int main(int argc, char* argv[])  
{  
    cout << fab_recursion(10) << endl;  
    cout << fab_iteration(10) << endl;  
    return 0;  
}  
