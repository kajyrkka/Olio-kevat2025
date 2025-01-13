#ifndef DHT_H
#define DHT_H

class DHT
{
public:
  DHT ();
  ~DHT();
  void begin();
  float readTemperature();

private:
  float temperature;

};

#endif // DHT_H
