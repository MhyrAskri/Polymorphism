cmake_minimum_required(VERSION 3.20)
project(Polymorphism)

set(CMAKE_CXX_STANDARD 14)

add_executable(Polymorphism main.cpp Account.cpp Account.h CheckingAccount.cpp CheckingAccount.h SavingsAccount.cpp SavingsAccount.h TrustAccount.cpp TrustAccount.h AccountUtil.cpp AccountUtil.h IPrintable.cpp IPrintable.h)
