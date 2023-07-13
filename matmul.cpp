#include<iostream>

using namespace std;


void vect_mul(int a[5], int b[5])
{
    int c[5];
    for(int i =0; i<4; i++)
    {
        c[i] = a[i] * b[i];
    }

}
void display(int a[5])
{
     for(int j = 0; j<4; j++)
    {
        cout<<a[j]<<endl;
    }
}

int main()
{

    const int size = 5;
    int a[size] = {1,2,3,4};
    int b[size] = {5,6,7,8};
    int c[size];


    display(c);
    return 0;

}

// void vect_mul()
// {

// }