/********************************************************************
This file is part of the KDE project.

Copyright (C) 2014 Martin Gräßlin <mgraesslin@kde.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/
#ifndef KLIPPER_CLIPBOARDJOB_H
#define KLIPPER_CLIPBOARDJOB_H

#include <Plasma/ServiceJob>

class KFileItem;
class Klipper;

class ClipboardJob : public Plasma::ServiceJob
{
    Q_OBJECT
public:
    ClipboardJob(Klipper *klipper, const QString &destination, const QString &operation, const QVariantMap &parameters, QObject *parent = nullptr);
    ~ClipboardJob() override = default;

    void start() override;

private:
    void iconResult(const KFileItem &item);
    Klipper *m_klipper;
};

#endif
