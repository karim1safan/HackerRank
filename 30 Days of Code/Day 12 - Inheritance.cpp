#include <iostream>
#include <vector>
using namespace std;

class Person{
protected:
    string firstName, lastName;
    int idNumber;
public:
    Person(string firstName, string lastName, int idNumber){
        this->firstName = firstName;
        this->lastName = lastName;
        this->idNumber = idNumber;
    }  
    
    void printPerson(){
        cout << "Name: " << lastName << ", " << firstName << endl;
        cout << "ID: " << idNumber << endl;
    }  
};

class Student : public Person{
private:
    vector<int> grades;
public:
    Student(string firstName, string lastName, int idNumber, vector<int> grades) : Person(firstName, lastName, idNumber){
        this->grades = grades; 
    }
    
    char calculate(){
        int sum = 0;
        
        for(int i = 0; i < grades.size(); i++)
            sum += grades[i];
        
        int avg = sum / grades.size();
        
        if(90 <= avg && avg <= 100)
            return 'O';
        else if(80 <= avg && avg <= 90)
            return 'E';
        else if(70 <= avg && avg <= 80)
            return 'A';
        else if(55 <= avg && avg <= 70)
            return 'P';
        else if(40 <= avg && avg <= 55)
            return 'D';
        else
            return 'T'; 
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
      int numScores;
    cin >> firstName >> lastName >> id >> numScores;
      vector<int> scores;
      for(int i = 0; i < numScores; i++){
          int tmpScore;
          cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
