#include <iostream>
#include "mySQL.h"
int main() {

    /*
    sql::Driver *driver;
    sql::Connection *con;
    mySQL *obj = new mySQL;
    try {
        driver = get_driver_instance();
        con = driver->connect("localhost","root","4976");
        con->setSchema("alazDB");
        obj->createEmployee(con,6,"Gabriel","Sara",23.23,"2024-08-15");

        obj->readEmployee(con);
        std::cout << std::endl << std::endl;
        obj->deleteEmployee(con,6);
        obj->updateEmployee(con,5,77.7);
        obj->changeEmployee(con,1,"Fatih","Terim",20.00,"1999-06-01");
        obj->readEmployee(con);
        delete con;
    }
    catch (sql::SQLException &e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
    }

    return 0;
}