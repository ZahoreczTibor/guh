/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Copyright (C) 2016 Simon Stürz <simon.stuerz@guh.io>                   *
 *                                                                         *
 *  This file is part of guh.                                              *
 *                                                                         *
 *  Guh is free software: you can redistribute it and/or modify            *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation, version 2 of the License.                *
 *                                                                         *
 *  Guh is distributed in the hope that it will be useful,                 *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with guh. If not, see <http://www.gnu.org/licenses/>.            *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef TIMEDESCRIPTOR_H
#define TIMEDESCRIPTOR_H

#include "timeeventitem.h"
#include "calendaritem.h"
#include "guhsettings.h"

namespace guhserver {

class TimeDescriptor
{
public:
    explicit TimeDescriptor();

    QList<TimeEventItem> timeEventItems() const;
    void setTimeEventItems(const QList<TimeEventItem> &timeEventItems);

    QList<CalendarItem> calendarItems() const;
    void setCalendarItems(const QList<CalendarItem> &calendarItems);

    bool isValid() const;
    bool isEmpty() const;

    bool evaluate(const QDateTime &lastEvaluationTime, const QDateTime &dateTime) const;

//    void dumpToSettings(GuhSettings &settings, const QString &groupName) const;
//    static TimeDescriptor loadFromSettings(GuhSettings &settings, const QString &groupPrefix);


private:
    QList<TimeEventItem> m_timeEventItems;
    QList<CalendarItem> m_calendarItems;

};

}

#endif // TIMEDESCRIPTOR_H
