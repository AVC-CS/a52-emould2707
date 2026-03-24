#include <iostream>
using namespace std;
int main()
{
    // TODO //It didnt save my work from my laptop because it wasnt able to push painnnn
    int value, maxVal;
    cin >> maxVal;
    for (int i = 1; i < 10; i++){
        cin >> value;
        if (value > maxVal){
            maxVal = value;
        }

    }
    cout << maxVal << endl;
    return 0;
}
