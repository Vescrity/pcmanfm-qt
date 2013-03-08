/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2013  PCMan <email>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#ifndef PCMANFM_PREFERENCESDIALOG_H
#define PCMANFM_PREFERENCESDIALOG_H

#include <QDialog>
#include "ui_preferences.h"
#include <QString>

namespace PCManFM
{

class Settings;

class PreferencesDialog : public QDialog {
Q_OBJECT

public:
  // activePage is the name of page to select (general, display, advanced...)
  explicit PreferencesDialog(QString activePage = QString(), QWidget* parent = 0);
  virtual ~PreferencesDialog();

  virtual void accept();
  
private:
  void initIconThemes(Settings& settings);
  void initArchivers(Settings& settings);
  void initUiPage(Settings& settings);
  void initBehaviorPage(Settings& settings);
  void initThumbnailPage(Settings& settings);
  void initVolumePage(Settings& settings);
  void initAdvancedPage(Settings& settings);

  void applyUiPage(Settings& settings);
  void applyBehaviorPage(Settings& settings);
  void applyThumbnailPage(Settings& settings);
  void applyVolumePage(Settings& settings);
  void applyAdvancedPage(Settings& settings);

  void initFromSettings();
  void applySettings();

private:
  Ui::PreferencesDialog ui;
};

}

#endif // PCMANFM_PREFERENCESDIALOG_H