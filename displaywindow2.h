#ifndef DISPLAYWINDOW2_H
#define DISPLAYWINDOW2_H


#include <QObject>
#include <QWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QFile>
#include <QTextStream>
#include <QObject>
#include <QMessageBox>

class displayWindow2 : public QWidget
{
    Q_OBJECT
public:
    displayWindow2();
    QPushButton* back;
private:
    QTableWidget* table;
    QHBoxLayout* layout1;
    QVBoxLayout* layout2;
    int rows;
public slots:
    void displayRecords(const QString& text);

signals:

};

#endif // DISPLAYWINDOW2_H
