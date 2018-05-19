#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vector.h"
#include "qcustomplot.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_pushButton_compute_clicked();
    void on_pushButton_generate_clicked();

private:
    Ui::MainWindow *ui;

    QVector<double> t;
    QVector<double> nu_1;
    QVector<double> nu_2;
    QVector<double> nu_3;
    QVector<double> x;
    QVector<double> y;
    QVector<double> theta;

    Vector<6> initial_values, final_values;
    double t_sw, T;
    Vector<3> u_minus, u_plus;

    bool plotted;
    QCPCurve *trajectory_minus;
    QCPCurve *trajectory_plus;
};

#endif // MAINWINDOW_H
