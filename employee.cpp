#include "employee.h"
#include <string>

using namespace std;

void employee::setName(std::string fname,std::string lname)
{
    first=fname;
    last=lname;
}
void employee::setPosition(std::string jobName)
{
    jobTitle=jobName;
}

std::string employee::displayName()
{
    string wholeName;
    wholeName.append(first);
    wholeName.append(" ");
    wholeName.append(last);
    return wholeName;
}
std::string employee::displayPosition()
{
    return jobTitle;
}

