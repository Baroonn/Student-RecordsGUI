#include <QtWidgets/QApplication>
#include <createwindow.h>
#include <mainwindow.h>
#include <displaywindow.h>
#include <searchwindow.h>
#include <displaywindow2.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    mainWindow* window = new mainWindow;
    createWindow* window1 = new createWindow;
    displayWindow* window2 = new displayWindow;
    searchWindow* window3 = new searchWindow;
    displayWindow2* window4 = new displayWindow2;

    QObject::connect(window->button1, SIGNAL(clicked()), window1, SLOT(show()));
    QObject::connect(window->button1, SIGNAL(clicked()), window, SLOT(hide()));
    QObject::connect(window1->back, SIGNAL(clicked()), window, SLOT(show()));
    QObject::connect(window1->back, SIGNAL(clicked()), window1, SLOT(hide()));
    QObject::connect(window1->create, SIGNAL(clicked()), window1, SLOT(createStudent()));
    QObject::connect(window->button3, SIGNAL(clicked()),window2, SLOT(show()));
    QObject::connect(window->button3, SIGNAL(clicked()),window, SLOT(hide()));
    QObject::connect(window->button3, SIGNAL(clicked()),window2, SLOT(displayRecords()));
    QObject::connect(window->button2, SIGNAL(clicked()),window3, SLOT(show()));
    QObject::connect(window->button2, SIGNAL(clicked()),window, SLOT(hide()));
    QObject::connect(window3->back, SIGNAL(clicked()), window, SLOT(show()));
    QObject::connect(window3->back, SIGNAL(clicked()), window3, SLOT(hide()));
    QObject::connect(window2->back, SIGNAL(clicked()), window, SLOT(show()));
    QObject::connect(window2->back, SIGNAL(clicked()), window2, SLOT(hide()));
    QObject::connect(window3->search, SIGNAL(clicked()), window4, SLOT(show()));
    QObject::connect(window3->search, SIGNAL(clicked()), window3, SLOT(hide()));
    QObject::connect(window3->lineedit, SIGNAL(textChanged(const QString&)),
                     window4, SLOT(displayRecords(const QString&)));
    QObject::connect(window4->back, SIGNAL(clicked()), window3, SLOT(show()));
    QObject::connect(window4->back, SIGNAL(clicked()), window4, SLOT(hide()));

    return app.exec();
}
