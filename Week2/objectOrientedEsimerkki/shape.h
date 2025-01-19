#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape();
    virtual int area(); // tämä luokka peritään ja ylikirjoitetaan.
    virtual void draw();
};

#endif // SHAPE_H
