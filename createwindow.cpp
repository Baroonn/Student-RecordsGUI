#include "createwindow.h"
#include <fstream>

createWindow::createWindow(QWidget *parent) : QWidget(parent)
{
    firstName = new QLabel("First Name: ");
    setWindowTitle("Create New Student");
    lastName = new QLabel("Last Name: ");
    course = new QLabel("Current Course: ");
    FirstName = new QLineEdit;
    LastName = new QLineEdit;
    Course = new QLineEdit;
    create = new QPushButton("Create");
    back = new QPushButton("Back");
    firstNameLayout = new QHBoxLayout;
    lastNameLayout = new QHBoxLayout;
    createLayout = new QHBoxLayout;
    courseLayout = new QHBoxLayout;
    createLayout->addStretch();
    createLayout->addWidget(back);
    createLayout->addWidget(create);
    firstNameLayout->addWidget(firstName);
    firstNameLayout->addWidget(FirstName);
    lastNameLayout->addWidget(lastName);
    lastNameLayout->addWidget(LastName);
    courseLayout->addWidget(course);
    courseLayout->addWidget(Course);
    QVBoxLayout* layout4 = new QVBoxLayout;
    layout4->addLayout(firstNameLayout);
    layout4->addLayout(lastNameLayout);
    layout4->addLayout(courseLayout);
    layout4->addLayout(createLayout);
    setFixedSize(300,150);
    setLayout(layout4);
    create->setEnabled(false);
    connect(FirstName, SIGNAL(textChanged(const QString&)),this, SLOT(enableCreate(const QString&)));
    connect(LastName, SIGNAL(textChanged(const QString&)),this, SLOT(enableCreate(const QString&)));
    connect(Course, SIGNAL(textChanged(const QString&)),this, SLOT(enableCreate(const QString&)));
}

void createWindow::createStudent()
{
    New_Student student; //create a new object
    student.firstName = FirstName->text();
    student.lastName=LastName->text();
    student.course=Course->text();

    //open "Student-Records.txt" as an output file to append to
    ofstream f("C:\\Users\\Bolaji\\Documents\\QtPrograms\\Student-Records\\Student-Records.txt", ios_base::app);
    //append to file "StudentRecords.txt" in a specified format
    f<<"[ "<<student.firstName.toStdString()<<" , "
             <<student.lastName.toStdString()<<" , "
           <<student.course.toStdString()<<" ]"<<endl;
    FirstName->clear();
    LastName->clear();
    Course->clear();
}

void createWindow::enableCreate(const QString& text)
{
    create->setEnabled(!text.isEmpty() && !FirstName->text().isEmpty()
                       && !LastName->text().isEmpty()
                       && !Course->text().isEmpty());
}
