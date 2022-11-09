#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int a=0;
    cin>> a;
    for (const string& word : msg)
    {
        cout << word << " "<<a<<endl;
    }
    cout << endl;
    return 0;
}