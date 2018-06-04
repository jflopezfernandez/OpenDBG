
/** ***************************************************************************
 *
 *
 *                                   OpenDBG
 *
 *
 *  ***************************************************************************
 *
 *  @file main.cpp
 *  @author Jose Fernando Lopez Fernandez
 *  @date 04-June-2018
 *  @version 0.0.1
 *
 *  @todo Parse command line options
 *
 *  **************************************************************************/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication OpenDBG(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();

    return OpenDBG.exec();
}
