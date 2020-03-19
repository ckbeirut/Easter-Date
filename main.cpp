#include <iostream>

using namespace std;

int main()
{
    int AN;
    int G,I,J,C,H,L, JourPaque, MoisPaque;
    string MP;
    char c;

    cout << "Enter Year" << endl;
    cin >> AN;
    G = AN % 19;
    C = AN / 100;
    H = (C - C / 4 - (8 * C + 13) / 25 + 19 * G + 15) % 30;
    I = H - (H / 28) * (1 - (H / 28) * (29 / (H + 1)) * ((21 - G) / 11));
    J = (AN + AN / 4 + I + 2 - C + C / 4) % 7;

    L = I - J;
    MoisPaque = 3 + (L + 40) / 44;
    JourPaque = L + 28 - 31 * (MoisPaque / 4);

    switch (MoisPaque) {
        case 1:
            MP="January";
        break;
        case 2:
            MP="February";
        break;
        case 3:
            MP="March";
        break;
        case 4:
            MP="April";
        break;
        case 5:
            MP="May";
        break;
        case 6:
            MP="June";
        break;
        case 7:
            MP="July";
        break;
        case 8:
            MP="August";
        break;
        case 9:
            MP="September";
        break;
        case 10:
            MP="October";
        break;
        case 11:
            MP="November";
        break;
        case 12:
            MP="December";
        break;
    }

    cout <<JourPaque<<" "<< MP<<" "<<AN<<endl;

    return 0;
}
