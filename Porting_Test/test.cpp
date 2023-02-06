#include "test.h"

int run()
{
auto iret = run_python("C:/Users/va/Desktop/Qt/QT_Project/Porting_Test/hello.py");

if (iret<0)
    return iret;
else
    return 0;
}
