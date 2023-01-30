# This Python file uses the following encoding: utf-8

# if __name__ == "__main__":
#     pass

import sys
from PySide6.QtWidgets import QApplication, QLabel

app = QApplication(sys.argv)
label = QLabel("<font color=red size=20>Hello World!</font>")
label.show()
app.exec()
