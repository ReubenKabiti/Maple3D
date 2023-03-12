#include "maple.h"
#include "ui_maple.h"

Maple::Maple(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Maple)
{
    ui->setupUi(this);
}

Maple::~Maple()
{
    delete ui;
}

