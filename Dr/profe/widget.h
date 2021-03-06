#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QHBoxLayout *mainLayout;
    QGroupBox *testGBox;
    QListWidget *listWidget;
    QVBoxLayout *boxLayout;
};

#endif // WIDGET_H
