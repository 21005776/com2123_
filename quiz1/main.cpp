#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double hinInches,dinFeet,dinInches,angleinDegrees;
    const double Pi = 3.142;

    cout << "Enter h in inches" << endl;
    cin >> hinInches;

    cout << "Enter d in feet" << endl;
    cin >> dinFeet;

    cout << "Enter d in inches" << endl;
    cin >> dinInches;

    cout << "Enter angle in degrees" << endl;
    cin >> angleinDegrees;

    double dinFeetTotal = (dinFeet*12) + dinInches;

    double hofTree = (hinInches + dinFeetTotal*tan(angleinDegrees* Pi/180))/12;

     cout << "The Height Of The Tree Equals to:" <<hofTree <<" feet";

    return 0;
}
