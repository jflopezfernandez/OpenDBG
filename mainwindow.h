
/** ***************************************************************************
 *
 *
 *                             OpenDBG MainWindow Class
 *
 *
 *  ***************************************************************************
 *
 *  @file mainwindow.h
 *  @author Jose Fernando Lopez Fernandez
 *  @date 04-June-2018
 *  @version 0.0.1
 *
 *  **************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // TODO: Implement constructor: explicit MainWindow(QWidget *parent = nullptr)
    // A value of zero normally means the widget is a top level widget. Since we refactored
    // it as a nullptr, we need to be aware of possible errors that may pop up as a result.
    explicit MainWindow(QWidget *parent = nullptr);

    // TODO: Implement destructor
    // Shouldn't it be virtual? Maybe the base class doesn't declare it as virtual?
    // Update: Documentation says destructors in Q_OBJECTs are virtual, so maybe I don't have
    // to do anything?
    ~MainWindow();

//private slots:

    /** @fn on_actionExit_triggered()
     *  @brief Signal handler for when exit is called
     *  @author Jose Fernando Lopez Fernandez
     *  @date 04-June-2018
     *
     *  @todo Implement on_actionExit_triggered()
     *
     */

    //void on_actionExit_triggered();

private:
    // TODO: Implement Ui::MainWindow *ui
    Ui::MainWindow *ui;

    // TODO: Implement QString currentFile
    QString currentFile;
};

#endif // MAINWINDOW_H
