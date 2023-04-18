#pragma once

#include <map>
#include <Topic.h>
#include "INotificationService.h"

class NotificationService : public INotificationService
{
public:
  NotificationService();
  virtual ~NotificationService();

  void publish(std::string topicName);
  void subscribe(std::string topicName, ISubscriber* subscriber);
  void unsubscribe(std::string topicName, ISubscriber* subscriber);
  int getId();

private:
  void createTopic(std::string topicName);
  Topic* findTopic(std::string topicName);
  void updateAllSubscribers();

private:
  std::map<std::string, Topic*>* m_topics;
};
