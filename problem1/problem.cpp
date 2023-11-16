#include<iostream>
using std::cin;
using std::cout;


int column_hash = 5;
int row_hash_down = 5;
int row_hash_up = 1;


/*

############## My Solution ##############


int hash_table()
{
    for(int i = 0; i <= column_hash; i++)
{
    for (int j = 0; j <= row_hash_down; j++)
    {
        cout<<"#";
    }

    cout<<"\n";
    row_hash_down -= 1;
    // row_hash_up += 1;
}
}

*/




/* ############## Ideal Solution ############## */

int hash_table()
{
    for(int Row = 1; Row <= 5; Row++)
{
    for (int hash_row = 1; hash_row <= 6 - Row; hash_row++)
    {
        cout<<"#";
    }
    cout<<"\n";
}
}



int main()
{
    hash_table();
    return 0;
}