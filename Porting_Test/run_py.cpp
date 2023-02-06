#include "test.h"

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



/*int run()
{
auto iret = run_python("C:/Users/va/Desktop/Qt/QT_Project/Porting_Test/hello.py");

if (iret<0)
    return iret;
else
    return 0;
}*/
