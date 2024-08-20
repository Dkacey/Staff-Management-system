#include "staffwriter.h"
#include <QFile>
#include <QTextStream>

StaffWriter::StaffWriter(StaffList sl): staffList{sl}
{
}

bool StaffWriter::writeToFile() const
{
    QFile file("staffFile.txt");
    if (!file.open(QIODevice::WriteOnly))
        return false;

    QTextStream toFile(&file);

    QList<Staff> list = staffList.getStaffList();

    foreach(Staff s, list)
    {
        toFile << "Name: " << s.getName() << "; ";
        toFile << "Birth date: " << s.getDate().toString() << "; ";
        toFile << "Type: " << s.getTypeAsString() << '\n';
    }

    file.close();

    return true;
}
