#pragma once

#   pragma push_macro("slots")
#   undef slots

#       define PY_SSIZE_T_CLEAN
#       include <Python.h>

#   pragma pop_macro("slots")
