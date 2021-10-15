class Feedback
{
private:
    int feedbackID;
    string feedbackDescription;
    string email;

    Staff*stf;  //Uni-directional Association 
     

public:
    Feedback();
    Feedback(int fID, string email, string fDescription);
    void viewFeedbackDetails();
    ~Feedback();
};
