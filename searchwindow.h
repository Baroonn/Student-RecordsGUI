#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QObject>

class searchWindow : public QWidget
{
    Q_OBJECT
public:
    explicit searchWindow(QWidget *parent = nullptr);
    QPushButton* back;
    QPushButton* search;
    QLineEdit* lineedit;
private:
   QLabel* label;
   QHBoxLayout* layout1;
   QHBoxLayout* layout2;
   QHBoxLayout* layout3;
   QVBoxLayout* layout4;
public slots:
   void enableSearch(const QString& text);
signals:
   void searchClicked(const QString& text);
};

#endif // SEARCHWINDOW_H
