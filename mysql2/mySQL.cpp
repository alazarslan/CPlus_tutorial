//
// Created by alaz on 03.02.2025.
//

#include "mySQL.h"

void mySQL::readEmployee(sql::Connection *con) {
    sql::Statement *stmt = con->createStatement();
    sql::ResultSet *res = stmt->executeQuery("select * from employees");

    while (res->next()) {
        std::cout << "ID: " << res->getInt("employee_id");
        std::cout << ", Name: " << res->getString("first_name");
        std::cout << ", Surname: " << res->getString("last_name");
        std::cout << ", Hourly Payment: " << res->getDouble("hourly_pay");
        std::cout << ", Hire Date:" << res->getString("hire_date") << std::endl;
    }
    delete res;
    delete stmt;
}

void mySQL::createEmployee(sql::Connection *con, int empID, std::string name, std::string surname, double hourly_payment, std::string hire_date) {
    sql::PreparedStatement* prep_stmt = con->prepareStatement("INSERT INTO employees (employee_id, first_name, last_name, hourly_pay, hire_date) VALUES (?, ?, ?, ?, ?)");
    prep_stmt->setInt(1, empID);
    prep_stmt->setString(2, name);
    prep_stmt->setString(3, surname);
    prep_stmt->setDouble(4, hourly_payment);
    prep_stmt->setString(5, hire_date);
    prep_stmt->execute();

    delete prep_stmt;
}

void mySQL::deleteEmployee(sql::Connection *con, int empID) {
    sql::PreparedStatement *prep_stmt = con->prepareStatement("DELETE FROM employees WHERE employee_id = ?");
    prep_stmt->setInt(1, empID);
    prep_stmt->execute();
    delete prep_stmt;
}

void mySQL::updateEmployee(sql::Connection *con, int empID, double hour_pay) {
    sql::PreparedStatement *prep_stmt = con->prepareStatement("UPDATE employees SET hourly_pay = ? WHERE employee_id = ?");
    prep_stmt->setDouble(1, hour_pay);
    prep_stmt->setInt(2, empID);
    prep_stmt->execute();
    delete prep_stmt;
}

void mySQL::changeEmployee(sql::Connection *con, int empID, std::string name, std::string surname, double hour_pay,
    std::string hireDate) {
    sql::PreparedStatement *prep_stmt = con->prepareStatement("UPDATE employees SET hourly_pay = ?, first_name = ?, last_name = ?, hire_date = ? WHERE employee_id = ?");
    prep_stmt->setDouble(1, hour_pay);
    prep_stmt->setString(2, name);
    prep_stmt->setString(3, surname);
    prep_stmt->setString(4, hireDate);
    prep_stmt->setInt(5, empID);
    prep_stmt->execute();
    delete prep_stmt;
}
