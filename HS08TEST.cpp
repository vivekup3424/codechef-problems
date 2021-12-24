#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int cash;
    float savings, bankCharge = 0.50;

    cin >> cash >> savings;

    if (cash%5 == 0 && cash <= (savings-bankCharge) && 0 <= cash <= 2000 && 0 <= savings <= 2000){
        savings = savings - (bankCharge + cash);

        cout << fixed << setprecision(2) << savings << endl;
    }
    else
    {
        cout << savings<< endl;
    }

    return 0;
}
