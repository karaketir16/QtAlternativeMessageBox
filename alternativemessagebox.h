#ifndef ALTERNATIVEMESSAGEBOX_H
#define ALTERNATIVEMESSAGEBOX_H

#include <QDialog>
#include <QDialogButtonBox>
namespace Ui {
class AlternativeMessageBox;
}

class AlternativeMessageBox : public QDialog
{
    Q_OBJECT

public:
    explicit AlternativeMessageBox(QWidget *parent = nullptr);
    ~AlternativeMessageBox();
    void setLabelText(QString);
    void set(QString text , QDialogButtonBox::StandardButtons buttons = (QDialogButtonBox::Ok | QDialogButtonBox::Cancel), QString title = "WARNING", Qt::GlobalColor color = Qt::yellow);
    void setWarning();
    static int windowCount;
private:

    Ui::AlternativeMessageBox *ui;
};

#endif // ALTERNATIVEMESSAGEBOX_H
