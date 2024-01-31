#include <iostream>

using namespace std;

class Person
{
private:
    int age;
public:
    Person (int intialAge)
    {
        if (intialAge < 0){
            cout << "Age is not valid, setting age to 0.\n";
            intialAge = 0;
            intialAge = age;
        }
        else
            age = intialAge;
    }  
    void yearPasses()
    {
        age++;
    }  
    void amIOld()
    {
        if (age < 13)
            cout << "You are young.\n";
        else if (age >= 13 && age < 18)
            cout << "You are a teenager.\n";
        else
            cout << "You are old.\n";
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
	
    while (t--)
    {
        int n;
        cin >> n;
        
        Person p(n);
        p.amIOld();
        p.yearPasses();
        p.yearPasses();
        p.yearPasses();
        p.amIOld();
        
        cout << endl;
    }
	
    return 0;
}
