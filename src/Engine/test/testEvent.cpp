#include "testEvent.h"


TestEvent::TestEvent()
{

}
virtual ~TestEvent()=0;

/**
Execute les actions suivant les �v�nements
**/
void TestEvent::executeAction(const stateEvent &event);