
/* programmers: mohamed abdalkader said  20190459
				abdalrahman gamal abd alrehem  20190286
				mohamed samy elgabry  20190441
*/





#ifndef BIGDECIMALINT_H
#define BIGDECIMALINT_H
#include <iostream>
#include <string>
using namespace std;

class BigDecimalInt
{
public:



    string num;
    int sum, carry;

    BigDecimalInt(string decstr);
    BigDecimalInt(int decint);
    BigDecimalInt();

    BigDecimalInt operator+(BigDecimalInt b);
    BigDecimalInt operator-(BigDecimalInt b);

    friend ostream& operator<< (ostream& output, BigDecimalInt a);
    friend bool checkvalid(BigDecimalInt &b);
    friend bool checksign(BigDecimalInt &b);
    friend bool checkequality(string a, string b);
    friend bool checkbigger(string a, string b);
    friend void removeleftzeros(string &a);

    int size();

};

#endif // BIGDECIMALINT_H
