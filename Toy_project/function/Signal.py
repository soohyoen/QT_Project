import sys
from PySide6.QtWidgets import QApplication, QPushButton
from PySide6.QtCore import QObject, Signal, Slot


#def function():
#    print("The 'function' has been called!")


#app = QApplication()
#button = QPushButton("Call function")
#button.clicked.connect(function)
#button.show()
#sys.exit(app.exec())


class Communicate(QObject):
    speak = Signal((int,),(str,))

    def __init__(self, parent = None):
        super().__init__(parent)

        self.speak[int].connect(self.say_something)
        self.speak[str].connect(self.say_something)

    @Slot(int)
    @Slot(str)
    def say_something(self, arg):
        if isinstance(arg, int):
            print("This is a number:", arg)
        elif isinstance(arg, str):
            print("This is a string:", arg)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    someone = Communicate()

    someone.speak.emit(10)
    someone.speak[str].emit("Hello everybody!")
