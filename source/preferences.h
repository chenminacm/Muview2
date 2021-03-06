#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QDialog>
#include <QColorDialog>

namespace Ui {
    class Preferences;
}

class Preferences : public QDialog
{
    Q_OBJECT

public:
    explicit Preferences(QWidget *parent = 0);
    QColor getBackgroundColor();
    int getSpriteResolution();
    float getVectorLength();
    float getVectorRadius();
    float getVectorTipToTail();
    float getVectorInnerToOuter();
    float getBrightness();
    QString getFormat();
    QSize getImageDimensions();
    QString getColorScale();
    QString getColorQuantity();
    QString getVectorOrigin();
    ~Preferences();

private:
    Ui::Preferences *ui;
//    QColorDialog *colorPicker;
    QColor backgroundColor;
private slots:
    void setcolor();
};

#endif // PREFERENCES_H
