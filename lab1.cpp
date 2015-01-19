#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    ifstream numbers;
    ofstream out;
    int i;
    int sum=0;
    numbers.open(argv[1]);
    out.open("newints.txt");
    
    
    
    out << "x\t" << "x^2\t" << "Current Sum\t" << endl;
    
    while (numbers >> i)
    {
        sum = sum + i;
        out << i << "\t";
        out << i*i << "\t";
        out << sum  << "\t" << endl;
        
    }
    
    
    
    numbers.close();
    out.close();
    return 0;
}
