#include <iostream>
using namespace std;

int main()
{
    int twoLv = 0;
    int oneLv = 0;
    int fiftyCt = 0;
    int twentyCt = 0;
    int tenCt = 0;
    int fiveCt = 0;
    int twoCt = 0;
    int oneCt = 0;
    cout << "Koko na broi 2Lv imash? ";
    cin >> twoLv;
    cout << "Koko na broi 1Lv imash? ";
    cin >> oneLv;
    cout << "Koko na broi 50Ct imash? ";
    cin >> fiftyCt;
    cout << "Koko na broi 20Ct imash? ";
    cin >> twentyCt;
    cout << "Koko na broi 10Ct imash? ";
    cin >> tenCt;
    cout << "Koko na broi 5Ct imash? ";
    cin >> fiveCt;
    cout << "Koko na broi 2Ct imash? ";
    cin >> twoCt;
    cout << "Koko na broi 1Ct imash? ";
    cin >> oneCt;
    int sum = oneCt + twoCt * 2 + fiveCt * 5 + tenCt * 10 +
        twentyCt * 20 + fiftyCt * 50 + oneLv * 100 + twoLv * 200;
    int leva = 0;
    int stotinki = 0;
    leva = sum / 100;
    stotinki = sum % 100;
    cout << "Leva: " << leva << endl;
    cout << "Stotinki: " << stotinki << endl;
}