#ifndef SQUARE_H
#define SQUARE_H

#include <QColor>
#include <QGraphicsItem>

class Square : public QGraphicsItem
{
public:
    Square(const QColor &color, int x, int y);

    QRectF boundingRect() const Q_DECL_OVERRIDE;
    QPainterPath shape() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *item, QWidget *widget) Q_DECL_OVERRIDE;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) Q_DECL_OVERRIDE;

private:
    int x;
    int y;
    QColor color;
    QVector<QPointF> stuff;
};

#endif // SQUARE_H
