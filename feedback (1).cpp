#include <cstring>
#include <iostream>
#include "Feedback.h"

using namespace std;

Feedback::Feedback()
{
    
}

Feedback::Feedback(int fID, string femail, string fDescription ) 
{
    feedbackID = fID;
    email = femail;
    feedbackDescription = fDescription;
    
}


void Feedback::viewFeedbackDetails()
 {

 }

Feedback::~Feedback() 
{

}
   

