//
// Created by alaz on 03.02.2025.
//

#ifndef MYSQL_H
#define MYSQL_H

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class mySQL {
private:
public:
    mySQL() {
    }

    void readEmployee(sql::Connection *con);
    void createEmployee(sql::Connection *con, int empID, std::string name, std::string surname, double hourly_payment
        , std::string hire_date);
    void deleteEmployee(sql::Connection *con, int empID);
    void updateEmployee(sql::Connection *con, int empID, double hour_pay);
    void changeEmployee(sql::Connection *con, int empID, std::string name, std::string surname, double hour_pay, std::string hireDate);
};



#endif //MYSQL_H
