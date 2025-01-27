#ifndef BASECLASS_H
#define BASECLASS_H

class BaseClass
{
public:
  BaseClass (float, float);
  virtual float calculateArea(); // suorakaiteen alan

protected:
  float leveys;
  float korkeus;
};

#endif // BASECLASS_H
