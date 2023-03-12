#ifndef MAPLE_H
#define MAPLE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Maple; }
QT_END_NAMESPACE

class Maple : public QMainWindow
{
    Q_OBJECT

public:
    Maple(QWidget *parent = nullptr);
    ~Maple();

private:
    Ui::Maple *ui;
};
#endif // MAPLE_H
