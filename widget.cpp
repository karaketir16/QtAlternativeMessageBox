#include "widget.h"
#include "ui_widget.h"
#include <alternativemessagebox.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    AlternativeMessageBox box(this);
    box.set("Bir Hata Olustu", QDialogButtonBox::Ignore | QDialogButtonBox::Close, "ERROR", Qt::red);
    int res = box.exec();
}
