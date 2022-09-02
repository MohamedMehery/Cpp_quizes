#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void bitreverse(int & val)
{
    val = ~val & ((int)-1);
    //val ^= (int)-1;
}

union reg
{
    /* data */
    struct bit{
    unsigned char B0 : 1;
    unsigned char B1 : 1;
    unsigned char B2 : 1;
    unsigned char B3 : 1;
    unsigned char B4 : 1;
    unsigned char B5 : 1;
    unsigned char B6 : 1;
    unsigned char B7 : 1;
    }Bit_t;

    unsigned char byte;
};


int main()
{
    // printf("\naaabb\bcd\ref");

    // int x =4 , y , z;
    // printf("%d %d %d\n",u1.x = 20 , u1.c , u1.sh = 30 );
    // printf("%d %d %d\n", ++x , y = ++x , z = ++x , x = 6);
    // union reg R1 ;
    // R1.byte = 10;
    // R1.Bit_t.B4 = 1;
    // cout << sizeof(reg) << endl;
    // printf("%d\n" , R1.byte);
    // cout << (int)R1.byte << endl;
    // struct s
    // {
    //     int bit1: 1;
    //     int bit3: 4;
    //     int bit4: 4;
    // }data{1,2,13};
    // printf("i =%d a=%d k=%d\n", data.bit1, data.bit3, data.bit4);

    printf("%d = %#x\n" , 5 , 5);

    return 0;
}