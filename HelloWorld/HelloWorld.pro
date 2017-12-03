#in order to compile our program using QT widget these variables are needed

#adds core and gui libraries
QT += core gui

#which version of QT are we using?
#Major version greater then 4
#we want to make widgets application
greaterThan(QT_MAJOR_VERSION,4) : QT += widgets

#This like a makefile in C
#This means thisi is the part of our project
SOURCES += \
    main.cpp


