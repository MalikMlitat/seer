#pragma once

#include <QtWidgets/QWidget>

#include "ui_SeerKeysConfigPage.h"

class SeerKeysConfigPage : public QWidget, protected Ui::SeerKeysConfigPage {

    Q_OBJECT

    public:
        explicit SeerKeysConfigPage (QWidget* parent = 0);
       ~SeerKeysConfigPage ();

    protected slots:
};

