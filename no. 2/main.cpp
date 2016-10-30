#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
    private:
    string name, department, position;
    int idNumber;

    public:
    Employee (string name, int idNumber, string department, string position)
    {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }

    Employee (string name, int idNumber)
    {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }

    Employee ()
    {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }
    string getName()
    {
        return name;
    }
    int getIdNumber()
    {
        return idNumber;
    }
    string getDepartment()
    {
        return department;
    }
    string getPosition()
    {
        return position;

    }

};

int main()
{
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

   /* cout << setw(20) << left << "Name" << setw(20) << left << "ID Number" << setw(20) << left << "Department" << setw(20) << left << "Position" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << setw(20) << left << employee1.getName() << setw(20) << left << employee1.getIdNumber() << setw(20) << left << employee1.getDepartment() << setw(20) << left << employee1.getPosition() << endl;
    cout << setw(20) << left << employee2.getName() << setw(20) << left << employee2.getIdNumber() << setw(20) << left << employee2.getDepartment() << setw(20) << left << employee2.getPosition() << endl;
    cout << setw(20) << left << employee3.getName() << setw(20) << left << employee3.getIdNumber() << setw(20) << left << employee3.getDepartment() << setw(20) << left << employee3.getPosition() << endl;
*/
    cout <<"_____________________________________________________________"<<endl;
    cout << setw(15)<<left<<"Name"<<setw(15)<<left<<"ID Number"<<setw(15)<<left<<"Department"<<setw(15)<<left<<"Position"<<endl;
    cout <<"_____________________________________________________________"<<endl;
    cout << setw(15)<<left<<employee1.getName()<<setw(15)<<left<< employee1.getIdNumber()<<setw(15)<<left<<employee1.getDepartment()<<setw(15)<<left<<employee1.getPosition()<<endl;
    cout << setw(15)<<left<<employee2.getName()<<setw(15)<<left<< employee2.getIdNumber()<<setw(15)<<left<<employee2.getDepartment()<<setw(15)<<left<<employee2.getPosition()<<endl;
    cout << setw(15)<<left<<employee3.getName()<<setw(15)<<left<< employee3.getIdNumber()<<setw(15)<<left<<employee3.getDepartment()<<setw(15)<<left<<employee3.getPosition()<<endl;
    return 0;
}
