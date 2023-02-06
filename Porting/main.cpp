#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "python_wrapper.h"
#include <stdio.h>

int run_python(const char* pathname);

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/test/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    auto iret = run_python("C:/Users/va/Documents/test/hello.py");
    if (iret<0) return iret;

    return app.exec();
}

int run_python(const char* pathname)
{
    //Py_SetProgramName(program);  /* optional but recommended */

    Py_Initialize();

    FILE* fp = nullptr;
    auto ret = fopen_s(&fp, pathname, "r");
    if(ret != 0) return -1;

    auto iret = PyRun_SimpleFile(fp, pathname);
    if(iret < 0) return iret;

    Py_Finalize();

    fclose(fp);

    return 0;
}
