#include<iostream>
using std::cin;
using std::cout;



int hash_table()
{
    for(int Row = 1; Row <= 7; Row++)
{
    for (int hash_row = 1; hash_row <= 4 - abs(4 - Row); hash_row++)
    {
        cout<<"#";
    }
    cout<<"\n";
}
    return 0;
}


int main()
{
    hash_table();
    return 0;
}