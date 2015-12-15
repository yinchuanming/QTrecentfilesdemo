#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setOrganizationName("Trolltech");
	app.setApplicationName("Recent Files Example");
	MainWindow *mainWin = new MainWindow;
#if defined(Q_OS_SYMBIAN)
	mainWin->showMaximized();
#else
	mainWin->show();
#endif
	return app.exec();
}

