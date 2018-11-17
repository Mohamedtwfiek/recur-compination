#include <iostream>

using namespace std;
int fact(int x) // recursion factorial function
{
    if(x > 1)   // recursive case
        return x * fact(x - 1);
    else        // base case
        return 1;
}
//////////////////////////////////////////////////////////////////////////////////////////////

int compination(int x,int y) // recursion comp function
{
    int tmp1 = x-y;
    return (   fact(x)  /  (  fact(y)  *  fact(tmp1)  )   );


}
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int num,base;
    cout<<"enter the number : "<<endl;
    cin>>num;                                   // input number
    cout<<"enter the base : "<<endl;
    cin>>base;                                  // input base
    cout <<compination(num , base) << endl;     // comp function
    main();
    return 0;
}
