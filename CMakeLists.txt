cmake_minimum_required(VERSION 3.27)
project(University)

set(CMAKE_CXX_STANDARD 17)

add_executable(University main.cpp
        App/Helpres/Enums/Enum.cpp
        App/Controllers/University.cpp
        App/Controllers/University.h
        App/Controllers/Person.cpp
        App/Controllers/Person.h
        App/Controllers/Major.cpp
        App/Controllers/Major.h
        App/Helpres/Enums/Enum.h
        App/Controllers/MaintenanceD.cpp
        App/Controllers/MaintenanceD.h
        App/Controllers/AdmissionAndRegistrationD.cpp
        App/Controllers/AdmissionAndRegistrationD.h
        App/Controllers/EmployeesAffairsD.cpp
        App/Controllers/EmployeesAffairsD.h
        App/Controllers/DepartmentEmployee.cpp
        App/Controllers/DepartmentEmployee.h
        App/Controllers/Student.cpp
        App/Controllers/Student.h
        App/Controllers/TeachingStaff.cpp
        App/Controllers/TeachingStaff.h
        College.cpp
        College.h

)
