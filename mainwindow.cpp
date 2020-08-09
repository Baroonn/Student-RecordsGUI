#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("SCOTTLUX");
    label = new QLabel("<font color=green><h1><i>STUDENT RECORDS</i>");
    layout1 = new QHBoxLayout;
    button1 = new QPushButton("New Student");
    button2 = new QPushButton("Search for Student");
    button3 = new QPushButton("Display All Records");
    layout1->addWidget(button1);
    layout1->addWidget(button2);
    QVBoxLayout* layout2 = new QVBoxLayout;
    layout2->addWidget(label);
    layout2->addLayout(layout1);
    layout2->addWidget(button3);
    setLayout(layout2);
    setFixedSize(260,130);
    show();
}
