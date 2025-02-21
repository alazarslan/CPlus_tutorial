cmake_minimum_required(VERSION 3.10)
project(mysql2)

set(CMAKE_CXX_STANDARD 20)

# MySQL Connector/C++ başlık dosyalarının yolu
include_directories(/usr/include/mysql)

# MySQL Connector/C++ kütüphanelerinin yolu
link_directories(/usr/lib/x86_64-linux-gnu)

# Çalıştırılabilir dosya oluştur
add_executable(mysql2 main.cpp
        mySQL.cpp
        mySQL.h)

# MySQL Connector/C++ kütüphanesini bağla
target_link_libraries(mysql2 mysqlcppconn)
