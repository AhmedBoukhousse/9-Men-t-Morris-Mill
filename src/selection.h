#ifndef SELECTION_H
#define SELECTION_H

#include <QMainWindow>
#include <MainWindow.h>

namespace Ui {
class selection;
}

class selection : public QMainWindow
{
    Q_OBJECT

public:
    explicit selection(QWidget *parent = nullptr);
    ~selection();
public slots:
private slots:
    void on_onePlayer_clicked();
    void on_twoPlayer_clicked();
private:
    Ui::selection *ui;
    MainWindow *gameBoard;
};

#endif // SELECTION_H
