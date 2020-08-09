#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>

class mainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit mainWindow(QWidget *parent = nullptr);
    QLabel *label;
    QHBoxLayout* layout1;
    QPushButton* button1;
    QPushButton* button2;
    QPushButton* button3;
    QVBoxLayout* layout2;

signals:

};

#endif // MAINWINDOW_H
