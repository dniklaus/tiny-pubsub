#include "NotificationService.h"

NotificationService::NotificationService()
: m_topics(new std::map <std::string, Topic*>)
{

}

NotificationService::~NotificationService()
{

}

void NotificationService::publish(std::string topicName)
{

}

void NotificationService::subscribe(std::string topicName, ISubscriber* subscriber)
{

}

void NotificationService::unsubscribe(std::string topicName, ISubscriber* subscriber)
{

}

int NotificationService::getId()
{
    return 0;
}

void NotificationService::createTopic(std::string topicName)
{
  Topic* newTopic = new Topic();
  m_topics->insert(std::pair<std::string,Topic*>(topicName, newTopic));
}

Topic* NotificationService::findTopic(std::string topicName)
{
  if (auto search = m_topics->find(topicName); search != m_topics->end())
  {
    return search->second;
  }
  return nullptr;
}

void NotificationService::updateAllSubscribers()
{

}
