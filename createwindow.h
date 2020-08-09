#ifndef CREATEWINDOW_H
#define CREATEWINDOW_H

#include <QObject>
#include <QtWidgets/QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include <studentfunc.h>

class createWindow : public QWidget
{
    Q_OBJECT
public:
    explicit createWindow(QWidget *parent = nullptr);

public slots:
    void createStudent();
    void enableCreate(const QString& text);
public:
    QLabel* firstName;
    QLabel* lastName;
    QLabel* course;
    QLineEdit* FirstName;
    QLineEdit* LastName;
    QLineEdit* Course;
    QPushButton* create;
    QPushButton* back;
    QHBoxLayout* firstNameLayout;
    QHBoxLayout* lastNameLayout;
    QHBoxLayout* createLayout;
    QHBoxLayout* courseLayout;

signals:
    void studentCreated(const QString&, const QString&, const QString&);
};

#endif // CREATEWINDOW_H
