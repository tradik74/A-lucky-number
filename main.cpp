#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d;
    cout << "Insect a number: ";
    cin >> n;
    if (n<1000 or n>9999)
        cout << "Please insert a number has 4 digits!!!!";
    else
    {
         a= (n/1000);
         b= ((n%1000)/100) ;
         c= (((n%1000)%100)/10);
         d= (((n%1000)%100)%10);
         cout << "The last of summary digits: " << (a+b+c+d)%10;
    }
    return 0;
}
