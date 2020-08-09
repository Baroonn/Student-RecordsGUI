#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <QObject>
#include <QWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QObject>
#include <QMessageBox>

class displayWindow : public QWidget
{
    Q_OBJECT
public:
    displayWindow();
    QPushButton* back;
private:
    QTableWidget* table;
    QHBoxLayout* layout1;
    QVBoxLayout* layout2;
    int rows;
public slots:
    void displayRecords();

signals:
};

#endif // DISPLAYWINDOW_H
