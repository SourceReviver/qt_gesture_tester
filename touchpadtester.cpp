#include "touchpadtester.h"
#include <QGestureEvent>

touchPadTester::touchPadTester(QWidget* parent)
{
    this->grabGesture(Qt::SwipeGesture);

    this->setMinimumSize(500, 500);
}

bool touchPadTester::event(QEvent* event)
{
    if (event->type() == QEvent::NativeGesture)
    {
        auto ge = static_cast<QNativeGestureEvent*>(event);
        if (ge->gestureType() == Qt::SwipeNativeGesture)
        {
            qDebug() << "native Swipe!";
        } else if (ge->gestureType() == Qt::ZoomNativeGesture)
        {
            qDebug() << "native zoom!";
        }
    }

    if (event->type() == QEvent::Gesture)
    {
        auto gestureEvent = static_cast<QGestureEvent*>(event);
        if (QGesture* pinch = gestureEvent->gesture(Qt::PinchGesture))
        {
            qDebug() << "pinch!";
        }
        else if (QGesture* swipe = gestureEvent->gesture(Qt::SwipeGesture))
        {
            qDebug() << "Swipe";
        }
    }
}

touchPadTester::~touchPadTester()
{
}
