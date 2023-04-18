#pragma once

#include <string>

class INotificationService
{
protected:
  INotificationService() { }

public:
  virtual ~INotificationService() { }

  virtual void publish(std::string topicName) = 0;
  virtual void subscribe(std::string topicName, ISubscriber* subscriber) = 0;
  virtual void unsubscribe(std::string topicName, ISubscriber* subscriber) = 0;
  virtual int getId() = 0;
};