#include "searchwindow.h"

searchWindow::searchWindow(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("Search for Student");
    label = new QLabel("Student's First Name:");
    lineedit=new QLineEdit;
    lineedit->setFixedWidth(250);
    search = new QPushButton("Search");
    back = new QPushButton("Back");
    layout1 = new QHBoxLayout;
    layout2 = new QHBoxLayout;
    layout3 = new QHBoxLayout;
    layout4 = new QVBoxLayout;
    layout1->addStretch();
    layout1->addWidget(label);
    layout1->addStretch();
    layout2->addStretch(20);
    layout2->addWidget(lineedit);
    layout2->addStretch(20);
    layout3->addStretch();
    layout3->addWidget(back);
    layout3->addWidget(search);
    layout4->addLayout(layout1);
    layout4->addLayout(layout2);
    layout4->addLayout(layout3);
    setLayout(layout4);
    setFixedSize(300,100);
    search->setEnabled(false);
    connect(lineedit, SIGNAL(textChanged(const QString&)),this, SLOT(enableSearch(const QString&)));
}

void searchWindow::enableSearch(const QString& text)
{
    search->setEnabled(!text.isEmpty());
}
