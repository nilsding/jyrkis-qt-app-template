#include "mainwindow.h"

#include <QApplication>

#include "config.h"

int main(int argc, char** argv)
{
    QApplication a(argc, argv);

    a.setApplicationName("yourappname");
    a.setApplicationDisplayName("Possibly the best program you will ever encounter");
    a.setOrganizationName("nilsding.org");
    a.setOrganizationDomain("nilsding.org");
    a.setApplicationVersion(PROJECT_VERSION);

    qSetMessagePattern(
        "%{if-debug}D%{endif}%{if-info}I%{endif}%{if-warning}W%{endif}%{if-critical}C%{endif}%{if-fatal}F%{endif}, "
        "[%{time yyyy-MM-ddTHH:mm:ss.zzz} #%{pid}] %{type} -- %{category}: %{message}"
    );

    MainWindow w;
    w.show();
    return a.exec();
}
