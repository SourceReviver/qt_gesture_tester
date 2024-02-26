#pragma once

#include <QWidget>


class touchPadTester : public QWidget {
Q_OBJECT
public:
    explicit touchPadTester(QWidget *parent = nullptr);
    ~touchPadTester() override;
    bool event(QEvent *event);

};



