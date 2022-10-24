using namespace std;
#include<string>

class TopicNode{
public:
    struct
    {
        string topic;
        TopicNode *der;
        TopicNode *izq;
    };
};