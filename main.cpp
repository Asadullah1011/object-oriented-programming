#include<iostream>
using namespace std;
#include<math.h>

// functions prototyping
void mainMenu();
void selectBatsMan();
void theDisplay();
void randomNumberLogic();
void oversIncrement();
void scoreCard();
void targetScore();
void randomBowler();
void checkRunsOuts();
void playAgain();
// functions prototyping

//global var
int batsManCounter = 1;
int oversCounter = 1;
int onBat, offBat;
int maxOvers = 5;
//global var

class Cricket
{// class
protected:
    int score, out, targetScore;
    float overs;
    string player[10];
    int outIndex[10];
    int individualScore[10];
    int confidence;
    int onStrikeIndex, offStrikeIndex;
    string teamName;
    string bowler;
    
public:
    
    void setCaptianName(string captianPara)
    {//set
    player[0] = captianPara;
    }//set
    
    string getPlayerName(int indexNamePara)
    {//get
        return player[indexNamePara];
    }//get
    
    void setScore(int scorePara)
    {//set
        score = scorePara;
    }//set
    
    int getScore()
    {//get
        return score;
    }//get
    
    void setIndividualScore(int individualPara, int individualScorePara)
    {//set
        individualScore[individualPara] = individualScorePara;
    }//set
    
    int getIndividualScore(int getIndividualPara)
    {//get
        return individualScore[getIndividualPara];
    }//get
    
    void setConfidence(int confidencePara)
    {//set
        confidence = confidencePara;
    }//set
    
    void setOutIndex(int outIndexPara)
    {//set
        outIndex[outIndexPara] = 1;
    }//set
    
    int getOutIndex(int getIndexPara)
    {//get
        return outIndex[getIndexPara];
    }//get
    
    void setOnStrikeIndex(int onStrkePara)
    {//set
        onStrikeIndex = onStrkePara;
    }//set
    
    int getOnStrikeIndex()
    {//get
        return onStrikeIndex;
    }//get
    
    void setOffStrikeIndex(int offStrkePara)
    {//set
        offStrikeIndex = offStrkePara;
    }//set
    
    int getOffStrikeIndex()
    {//get
        return offStrikeIndex;
    }//get
    
    string getTeamName()
    {//get
        return teamName;
    }//get
    
    void setOvers(float oversPara)
    {//set
        overs = oversPara;
    }//set
    
    float getOvers()
    {//get
        return overs;
    }//get
    
    void setBowler(string bowlerPara)
    {//set
        bowler = bowlerPara;
    }//set
    
    string getBowler()
    {//get
        return bowler;
    }//get
    
    void setOuts(int outPara)
    {//set
        out = outPara;
    }//set
    
    int getOuts()
    {//get
        return out;
    }//get
    
    void setTargetScore(int targetPara)
    {//set
        targetScore = targetPara;
    }//set
    
    int getTargetScore()
    {//get
        return targetScore;
    }//get
    

    
};//class

class Pakistan :public Cricket
{//pakistan class
    
public:
    Pakistan()
    {//constructor
        out = 0;
        overs = 0;
        score = 0;
        teamName = "Pakistan";
        player[1] = "M.Hafeez";
        player[2] = "Ahmed Shahzad";
        player[3] = "Umer Akmal";
        player[4] = "Sharjeel Khan";
        player[5] = "Shahid Afridi";
        player[6] = "Sarfaraz Ahmed";
        player[7] = "Umer Gull";
        player[8] = "M.Amir";
        player[9] = "Saeed Ajmal";
        
        for (int od = 0; od < 10; od++)
        {//for
            outIndex[od] = 0;
        }//for
        
        for (int is = 0; is < 10; is++)
        {//for
            individualScore[is] = 0;
        }//for
        
    }//constructor
    
    
};//pakistan class



class India :public Cricket
{//India class
    
public:
    India()
    {//constructor
        out = 0;
        overs = 0;
        score = 0;
        teamName = "India";
        player[1] = "Rohit Sharma";
        player[2] = "Virat Kohli";
        player[3] = "Dinesh Kartit";
        player[4] = "Yuvraj Singh";
        player[5] = "Suresh Raina";
        player[6] = "Ms.Dhoni";
        player[7] = "Irfan Pathan";
        player[8] = "Bhuveshver";
        player[9] = "R.Ashwin";
        
        for (int od = 0; od < 10; od++)
        {//for
            outIndex[od] = 0;
        }//for
        
        for (int is = 0; is < 10; is++)
        {//for
            individualScore[is] = 0;
        }//for
        
    }//constructor
    
    
};//india class

//objects
Pakistan pak;
India ind;
Cricket myTeam;
Cricket oppTeam;
//objects







int main()
{//main
    
    
    batsManCounter = 1;
    maxOvers = 5;
    oversCounter = 1;
    system("cls");
    string captianInput;
    
    
    
    mainMenu();
    
    cout << "Enter Your Name : ";
    cin >> captianInput;
    myTeam.setCaptianName(captianInput);
    
    randomBowler();
    targetScore();
    selectBatsMan();
    
    
    
    theDisplay();
    
    
    
    
    
    system("pause");
}//main

void mainMenu()
{//menu
    int teamSelect;
    
    system("cls");
    
    
    cout << "Select Your Team...\n1)Pakistan\n2)India" << endl;
    cin >> teamSelect;
    switch (teamSelect)
    {//switch
        case 1:
        {
            myTeam = pak;
            oppTeam = ind;
            oppTeam.setCaptianName("V.Sehwag");
            break;
        }
        case 2:
        {
            myTeam = ind;
            oppTeam = pak;
            oppTeam.setCaptianName("Imran Khan");
            break;
        }
            
        default:
        {
            cout << "Invalid Choice" << endl;
            system("pause");
            mainMenu();
        }
            
    }//switch
    
}//main menu

void selectBatsMan()
{//select batsman
    int selectBatsManInput;
    
    if (batsManCounter == 1)
    {//then
        onBat = 1;
        myTeam.setOnStrikeIndex(onBat - 1);
        
    }//then
    
    system("cls");
    
    if (myTeam.getOuts() < 9)
    {//than
        
        
        cout << "Select Bats Man...." << endl << endl;
        
        for (int sb = 0; sb < 10; sb++)
        {//for
            
            if (sb == 0)
            {//then
                cout << sb + 1 << ")" << myTeam.getPlayerName(sb) << "        CAPTIAN" << endl;
            }//then
            
            else if (sb == 6)
            {//then
                cout << sb + 1 << ")" << myTeam.getPlayerName(sb) << "        Wicket Keeper" << endl;
            }//then
            
            else
            {//else
                cout << sb + 1 << ")" << myTeam.getPlayerName(sb) << endl;
            }//else
            
            
            
        }//for
        
        cin >> selectBatsManInput;
        if (selectBatsManInput < 1 || selectBatsManInput > 10)
        {//then
            system("cls");
            cout << "Invalid Choice" << endl;
            system("pause");
            system("cls");
            
            selectBatsMan();
            
        }//then
        
        if (myTeam.getOutIndex(selectBatsManInput - 1) != 0 && myTeam.getOutIndex(selectBatsManInput - 1) == 1)
        {//then
            cout << myTeam.getPlayerName(selectBatsManInput - 1) << " Is Out Select Another Player " << endl;
            system("pause");
            selectBatsMan();
        }//then
        
        else if (batsManCounter == 1 && selectBatsManInput == 1)
        {//else if
            cout << myTeam.getPlayerName(selectBatsManInput - 1) << " Is Already Playing, Select Another Player " << endl;
            system("pause");
            selectBatsMan();
        }//else if
        
        else if (selectBatsManInput - 1 == myTeam.getOffStrikeIndex()  /* && myTeam.getOffStrikeIndex() == 0 */)
        {//else if
            cout << myTeam.getPlayerName(selectBatsManInput - 1) << " Is Already Playing, Select Another Player " << endl;
            system("pause");
            selectBatsMan();
        }//else if
        
        else
        {//else
            
            
            if (batsManCounter == 1)
            {//then
                offBat = selectBatsManInput;
                myTeam.setOffStrikeIndex(offBat - 1);
            }//then
            
            else
            {//else
                onBat = selectBatsManInput;
                myTeam.setOnStrikeIndex(onBat - 1);
            }//else
            
            
        }//else
        
    }//than
    
    else
    {//else
        system("cls");
        scoreCard();
    }//else
    
    batsManCounter++;
}//select batsman

void theDisplay()
{//theDisplay
    
    
    
    while (true)
    {//while
        system("cls");
        
        cout << "Your Team : " << myTeam.getTeamName() << "            Opponent Team : " << oppTeam.getTeamName() << " (" << myTeam.getTargetScore() << ")" << endl;
        cout << endl << endl;
        
        cout << "On Strike : " << myTeam.getPlayerName(myTeam.getOnStrikeIndex()) << "  (" << myTeam.getIndividualScore(myTeam.getOnStrikeIndex()) << " )" << endl;
        cout << "Off Strike : " << myTeam.getPlayerName(myTeam.getOffStrikeIndex()) << "  (" << myTeam.getIndividualScore(myTeam.getOffStrikeIndex()) << " )" << endl;
        cout << endl << endl;
        
        cout << "Total Score : " << myTeam.getScore() << "        Overs : " << myTeam.getOvers() << " / Outs : " << myTeam.getOuts() << "        Bowler : " << oppTeam.getBowler();
        cout << endl << endl;
        
        randomNumberLogic();
        system("pause");
    }//while
}//theDisplay

void randomNumberLogic()
{//random number
    
    int guessInput;
    
    srand((int)time(0));
    int randomNo = rand()%10;// = (rand() % 10) + 1;
    
    if (maxOvers == 0)   // 0 means total 5 overs because maxOvers=5 initially
    {//than
        system("cls");
        cout << "Overs Finished" << endl;
        system("pause");
        scoreCard();
    }//than
    
    checkRunsOuts();
    
    
    cout << "Guess The Number Between 1 To 10 To Hit Shot " << endl << endl;
    cin >> guessInput;
    
    
    
    cout << "You Guessed : " << guessInput << endl << "Number Was : " << randomNo << endl;
    
    if (guessInput == randomNo)
    {//then
        cout << "You Hit A SIX " << endl;
        myTeam.setScore(myTeam.getScore() + 6);
        myTeam.setIndividualScore(myTeam.getOnStrikeIndex(), myTeam.getIndividualScore(myTeam.getOnStrikeIndex()) + 6);
    }//then
    else if (guessInput > randomNo - 2 && guessInput < randomNo + 2)
    {
        cout << "You Hit A Four " << endl;
        myTeam.setScore(myTeam.getScore() + 4);
        myTeam.setIndividualScore(myTeam.getOnStrikeIndex(), myTeam.getIndividualScore(myTeam.getOnStrikeIndex()) + 4);
    }
    
    else if (guessInput > randomNo - 3 && guessInput < randomNo + 3)
    {
        cout << "You Hit A Single : ";
        myTeam.setScore(myTeam.getScore() + 1);
        myTeam.setIndividualScore(myTeam.getOnStrikeIndex(), myTeam.getIndividualScore(myTeam.getOnStrikeIndex()) + 1);
        
        int tempStriker;
        
        tempStriker = onBat;
        onBat = offBat;
        offBat = tempStriker;
        
        
        
        myTeam.setOnStrikeIndex(onBat - 1);
        myTeam.setOffStrikeIndex(offBat - 1);
        
        
    }
    
    else
    {
        cout << myTeam.getPlayerName(onBat - 1) << " : Is Out" << endl;
        myTeam.setOutIndex(onBat - 1);
        myTeam.setOuts(myTeam.getOuts() + 1);
        system("pause");
        selectBatsMan();
        
    }
    
    
    oversIncrement();
    
}//random number



void oversIncrement()
{//overs increment
    
    
    
    myTeam.setOvers(myTeam.getOvers() + 0.1);
    if (oversCounter == 6)
    {//then
        myTeam.setOvers(myTeam.getOvers() + 0.4);
        oversCounter = 0; // for bowls
        maxOvers--;
        
        //switch player after over
        int tempSwitch;
        tempSwitch = onBat;
        onBat = offBat;
        offBat = tempSwitch;
        myTeam.setOnStrikeIndex(onBat - 1);
        myTeam.setOffStrikeIndex(offBat - 1);
        //switch player after over
        
        //overs limit to 6 overs
        
        
        
        //overs limit to 6 overs
        
        //switch bowler
        
        randomBowler();
        
        //switch bowler
        
        
    }//then
    
    
    
    
    oversCounter++;
    
    
}//overs increment

void scoreCard()
{//score Card
    system("cls");
    
    string outSign;
    int oppOuts;
    
    cout << "        SCORE CARD" << endl;
    cout << "_________________________________________________________" << endl;
    for (int sc = 0; sc < 10; sc++)
    {//for
        
        if (myTeam.getOutIndex(sc) != 0 && myTeam.getOutIndex(sc) == 1)
        {//than
            outSign = "Out";
        }//than
        else
        {//else
            outSign = "Not Out";
        }//else
        
        
        cout << "    " << sc + 1 << " " << myTeam.getPlayerName(sc) << "        (" << myTeam.getIndividualScore(sc) << ")" << "        " << outSign << endl;
    }//for
    cout << "_________________________________________________________" << endl;
    cout << endl << endl;
    
    //no of outs for opponent team
    while (true)
    {//while
        srand((int)time(0));
        oppOuts = (rand() % 10) + 1;
        
        if (oppOuts < 4 || oppOuts == 10)
        {//than
            //make another value for opp team outs
        }//than
        else
        {
            break;
        }
        
    }//while
    
    
    
    //no of outs for opponent team
    
    
    cout << myTeam.getTeamName() << " : ( " << myTeam.getScore() << " / " << myTeam.getOuts() << " ) ";
    cout << "    " << oppTeam.getTeamName() << " : (" << myTeam.getTargetScore() << " / " << oppOuts << ")";
    
    cout << endl << endl;
    
    if (myTeam.getScore() > myTeam.getTargetScore())
    {//than
        cout << myTeam.getTeamName() << " Beat " << oppTeam.getTeamName() << " By " << 10 - myTeam.getOuts() << " Wickets" << endl;
        cout << "You Won" << endl << endl;
    }//than
    else if (myTeam.getScore() == myTeam.getTargetScore())
    {//else if
        cout << "The Match Is Tie" << endl << endl;
    }//else if
    
    else if (myTeam.getScore() < myTeam.getTargetScore())
    {//else if
        cout << oppTeam.getTeamName() << " Beat " << myTeam.getTeamName() << " By " << myTeam.getTargetScore() - myTeam.getScore() << " Score" << endl;
        cout << "You Lost The Match" << endl << endl;
    }//else if
    
    
    system("pause");
    
    playAgain();
    
    
}//score Card

void targetScore()
{//target score
    
    float pointValue;
    srand((int)time(0));
    bool targeScoreBool = true;
    
    while (targeScoreBool)
    {//while
        
        int targetScore = (rand() % 6) + 1;
        int targetScorePoints = (rand() % 10) + 1;
        pointValue = (float)targetScorePoints / 10;
        pointValue += targetScore;
        
        pointValue *= 10;
        
        if (pointValue > 30)
        {//then
            system("cls");
            myTeam.setTargetScore(pointValue);
            cout << oppTeam.getTeamName() << " Has Scored : " << myTeam.getTargetScore() << endl;
            cout << "Target Score : " << pointValue << endl;
            
            targeScoreBool = false;
        }//then
        
        
        system("pause");
    }//while
}//target score

void randomBowler()
{//random bowler
    
    srand((int)time(0));
    
    int randomBowler = (rand() % 3) + 1;
    if (randomBowler == 1)
    {//then
        oppTeam.setBowler(oppTeam.getPlayerName(7));
    }//then
    else if (randomBowler == 2)
    {//else then
        oppTeam.setBowler(oppTeam.getPlayerName(8));
    }//else then
    else if (randomBowler == 3)
    {//else if
        oppTeam.setBowler(oppTeam.getPlayerName(9));
    }//else if
    
}//random bowler

void checkRunsOuts()
{//check runs outs
    
    if (myTeam.getScore() > myTeam.getTargetScore())
    {//than
        system("cls");
        scoreCard();
    }//than
    
    else if (myTeam.getOuts() >= 9)
    {//else than
        system("cls");
        scoreCard();
    }//else than
    
    
    
}//check runs outs


void playAgain()
{//play again
    
    
    while (true)
    {//while
        
        system("cls");
        char playAgainInput;
        cout << "Do You Want To Play Again...?  (Y/N)" << endl;
        cin >> playAgainInput;
        
        switch (playAgainInput)
        {//switch
            case 'Y':
            case 'y':
            {
                
                main();
                
                break;
            }
            case 'N':
            case 'n':
            {
                
                break;
            }
            default:
            {
                cout << "Invalid Choice !" << endl;
            }
        }//switch
        
    }//while
    
}//play again

