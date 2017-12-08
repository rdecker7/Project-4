#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>

using namespace std;

class employee
{
    private:
        std::string first;
        std::string last;
        std::string jobTitle;
        int employeeID;
        int pay;
    public:
        void setName(std::string,std::string);
        std::string displayName();
        void setPosition(std::string);
        std::string displayPosition();
        void setID();
        void setPay(int);
}:
