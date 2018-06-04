
/** ***************************************************************************
 *
 *
 *                             OpenDBG MainWindow Class
 *
 *
 *  ***************************************************************************
 *
 *  @file mainwindow.cpp
 *  @author Jose Fernando Lopez Fernandez
 *  @date 04-June-2018
 *  @version 0.0.1
 *
 *  **************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"

/** @fn MainWindow::MainWindow
 *  @brief Constructor for the main window that initializes the UI when called
 *  @returns void
 *
 */

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
