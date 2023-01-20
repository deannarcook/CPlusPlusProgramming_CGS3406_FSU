// This program prompts the user for the time for the gold, silver, and medal winners. Then it computes the gap between the winner and runner up, the gap between the second and third place contestant, and the average time of the top three runners
#include <iostream>

using namespace std;

int main()
{
    float goldTime;
    float silverTime;
    float bronzeTime;
    
    cout << "enter the time for the gold medal winner: (s)" << endl;
    cin >> goldTime;
    
    cout << "enter the time for the silver medal winner: (s)" << endl;
    cin >> silverTime;
    
    cout << "enter the time for the bronze medal winner: (s)" << endl;
    cin >> bronzeTime;
 
    cout << "The gap between the winner and the runner up is "<< silverTime - goldTime << "s" << endl;
    cout << "The gap between second and third place is " << bronzeTime - silverTime << "s" << endl;
    cout << "The average time of the top three runners is " << (goldTime + silverTime +bronzeTime)/3 << "s" << endl;
    
    return 0;
}

// test
// input: 43.01, 44.23, 45.67
// output: 1.22, 1.44, 44.3033
