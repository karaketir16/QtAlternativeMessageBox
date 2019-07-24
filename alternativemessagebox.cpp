#include "alternativemessagebox.h"
#include "ui_alternativemessagebox.h"

AlternativeMessageBox::AlternativeMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlternativeMessageBox)
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->setupUi(this);
    windowCount++;


}
int AlternativeMessageBox::windowCount = 0;
void AlternativeMessageBox::setLabelText(QString txt)
{
    ui->label->setText(txt);

}
void AlternativeMessageBox::set(QString text , QDialogButtonBox::StandardButtons buttons, QString title, Qt::GlobalColor color)
{
    QPalette pal = palette();
    pal.setColor(QPalette::Window, color);
    ui->title->setPalette(pal);
    ui->title->setText(QString(title));
    setLabelText(text);
    ui->buttonBox->setStandardButtons(buttons);
}
void AlternativeMessageBox::setWarning()
{

}
AlternativeMessageBox::~AlternativeMessageBox()
{
    windowCount--;
    delete ui;
}
