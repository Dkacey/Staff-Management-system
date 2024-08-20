#include "stafflist.h"

StaffList::StaffList()
{
}

void StaffList::addStaff(Staff s)
{
    staffList.append(s);
}

QList<Staff> StaffList::getStaffList() const
{
    return staffList;
}
