#include "displaywindow.h"

displayWindow::displayWindow()
{
    table = new QTableWidget;
    table->setColumnCount(3);
    table->setColumnWidth(0,150);
    table->setColumnWidth(1,150);
    table->setColumnWidth(2,150);
    table->setFixedWidth(470);
    rows=0;
    back = new QPushButton("Back");
    layout1 = new QHBoxLayout;
    layout2 = new QVBoxLayout;
    layout1->addStretch();
    layout1->addWidget(back);
    layout2->addWidget(table);
    layout2->addLayout(layout1);
    setLayout(layout2);
    setFixedSize(500, 300);
    setWindowTitle("Enrolled Students");
}

void displayWindow::displayRecords()
{
    table->clear();
    QString Header="FIRSTNAME,LASTNAME,COURSE";
    QStringList fields = Header.split(",");
    table->setHorizontalHeaderLabels(fields);
    QFile file("C:\\Users\\Bolaji\\Documents\\QtPrograms\\Student-Records\\Student-Records.txt");
    if(!file.open(QIODevice::ReadOnly))QMessageBox::information(0,"error",file.errorString());
    QTextStream in(&file);
    while(!in.atEnd())
    {
        if(table->rowCount()==rows)
            table->insertRow(rows);
        QString line=in.readLine();
        line.remove(line[0]);
        line.remove(line[line.size()-1]);
        QStringList fields = line.split(",");
        QTableWidgetItem* a = new QTableWidgetItem(fields[0]);
        QTableWidgetItem* b=new QTableWidgetItem(fields[1]);
        QTableWidgetItem* c=new QTableWidgetItem(fields[2]);
        table->setItem(rows,0,a);
        table->setItem(rows,1,b);
        table->setItem(rows,2,c);
        ++rows;
    }
    rows=0;
    table->sortItems(0);
    file.close();
}
