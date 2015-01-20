#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> numbers;
    string number;
    int num;
    char* end;
    
    while(cin >> number)
    {
        if (number == "+")
        {
            if (numbers.size() <= 1)
            {
                cout << "Incorrect Use of RPN Calculator!" << endl;
                return 0;
            }
            int i = 0;
            i = numbers.back();
            numbers.pop_back();
            i = numbers.back() + i;
            numbers.pop_back();
            numbers.push_back(i);
        }
        else if (number == "-")
        {
            if (numbers.size() <= 1)
            {
                cout << "Incorrect Use of RPN Calculator!" << endl;
                return 0;
            }
            int i = 0;
            i = numbers.back();
            numbers.pop_back();
            i = numbers.back() - i;
            numbers.pop_back();
            numbers.push_back(i);
        }
        else if (number == "*")
        {
            if (numbers.size() <= 1)
            {
                cout << "Incorrect Use of RPN Calculator!" << endl;
                return 0;
            }
            int i = 0;
            i = numbers.back();
            numbers.pop_back();
            i = numbers.back() * i;
            numbers.pop_back();
            numbers.push_back(i);
        }
        else if (number == "/")
        {
            if (numbers.size() <= 1)
            {
                cout << "Incorrect Use of RPN Calculator!" << endl;
                return 0;
            }
            int i = 0;
            i = numbers.back();
            numbers.pop_back();
            i = numbers.back()/i;
            numbers.pop_back();
            numbers.push_back(i);
        }
        else if (number == ".")
        {
            if (numbers.size() != 1)
            {
                cout << "Incorrect Use of RPN Calculator!" << endl;
                return 0;
            }
            cout << numbers.back() << endl;
            numbers.pop_back();
            return 0;
            
        }
        else
        {
            num=strtol(number.c_str(), &end, 10);
            numbers.push_back(num);
        }
        
        
    }
    
    
    return 0;
}