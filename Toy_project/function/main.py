import sys

from PySide6.QtSql import QSqlQueryModel
from PySide6.QtWidgets import QTableView,QApplication

import createDb_1

if __name__ == "__main__":
    app = QApplication()
    createDb_1.init_db()

    model = QSqlQueryModel()
    model.setQuery("select * from book")

    table_view = QTableView()
    table_view.setModel(model)
    table_view.resize(800, 600)
    table_view.show()
    sys.exit(app.exec())
