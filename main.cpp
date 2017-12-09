//Author: Riley Decker
#include<iostream>
#include<string>
#include "employee.h"
#include<fstream>
#include<vector>

using namespace std;

int yearlyPay(string);
int budgetCalc(vector<int>);

//Pay by position
int cashierPay=14;
int baggerPay=12;
int managerPay=20;

int main()
{
    //setting up employee identifiers
    string firstName;
    string lastName;
    string position;
    int salary;
    string storeName;
    int i=1;
    employee person;
    int budget=400000;
    vector<int> expenses;
    ofstream employeeList;
    employeeList.open("records.txt");
    cout<<"What would you like to name your Grocery Store?"<<endl;
    cin>>storeName;
    cout<<storeName<<" annual-budget: $400,000"<<endl;
    employeeList<<storeName<<" Employee Info"<<endl;
    employeeList<<"=========================="<<endl;
    while(firstName!="DONE")
    {    
        cout<<"Please enter employee(s) first name, last name, position(cashier,bagger,or manager). Enter 'DONE' when complete."<<endl;
        cin>>firstName;
        if(firstName!="DONE")
        {
            cin>>lastName>>position;
            person.setName(firstName,lastName);
            person.setPosition(position);
            employeeList<<"Employee: "<<person.displayName()<<endl;
            employeeList<<"ID #00"<<i<<endl;
            employeeList<<"Position: "<<person.displayPosition()<<endl;
            salary=yearlyPay(position);
            employeeList<<"Yearly Pay: $"<<salary<<endl;
            employeeList<<"=========================="<<endl;
            cout<<"Saved "<<person.displayName()<<endl;
            cout<<"----------------------------"<<endl;
            expenses.push_back (salary);

        }
        i++;
    }
    budget=(budget-budgetCalc(expenses));
    if(budget<0)
    {
        cout<<"Oh no! It looks like you went over budget"<<endl;
        employeeList<<endl;
        employeeList<<"Debt: -$"<<budget<<endl;
    }
    else
    {
        cout<<"Congratulations! This place might just work out"<<endl;
        employeeList<<endl;
        employeeList<<"Remaing Funds: $"<<budget<<endl;
    }
    employeeList.close();    
    return 0;
}

int yearlyPay(string job)
{
    int pay;
    if(job=="cashier")
    {
        pay=cashierPay;
    }
    else if(job=="bagger")
    {
        pay=baggerPay;
    }
    else if(job=="manager")
    {
        pay=managerPay;
    }
    else
    {
        pay=0;
    }
    pay=(pay*40*52);
    return pay;
}
int budgetCalc(vector<int> employeePay)
{
    int moneyUsed=0;
    for(int i=0;i<employeePay.size();i++)
    {
        moneyUsed=(moneyUsed+employeePay[i]);
    }
    return moneyUsed;
}
