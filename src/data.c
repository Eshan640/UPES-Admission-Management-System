#include "data.h"

/* Business quiz */
QuizQ business_q[10] = {
    {"Full form of MBA?", {"Master of Business Administration","Master of Basic Administration","Management of Business Administration","Master of Bank Administration"}, 'A'},
    {"Primary focus of BBA?", {"Business operations","Business law","Business management","Business marketing"}, 'C'},
    {"Strategy for lowest cost production?", {"Cost leadership","Differentiation","Focus","Innovation"}, 'A'},
    {"Objective of business ethics?", {"Maximize profit","Ensure fair trade","Understand consumer behavior","Implement company policy"}, 'B'},
    {"Industry where 'ROI' is used?", {"Healthcare","Finance","Technology","Marketing"}, 'B'},
    {"Meaning of SWOT?", {"Strength Weakness Opportunity Threat","Strategy Work Order Task","Sales Workers Orders Trends","Systematic Work Optimization Tool"}, 'A'},
    {"Which is a financial statement?", {"Budget","Profit & Loss Account","Marketing Plan","Org Chart"}, 'B'},
    {"Meaning of B2B?", {"Business to Business","Business to Customer","Business to Bank","Business to Govt"}, 'A'},
    {"Capital structure?", {"Market share","Mix of debt & equity","Hierarchy","Marketing strategy"}, 'B'},
    {"Market segmentation?", {"Dividing market by demographics","Creating new market","Maximizing profit","Building share"}, 'A'}
};

/* Law quiz */
QuizQ law_q[10] = {
    {"LL.B stands for?", {"Bachelor of Legislative Laws","Master of Legal Laws","Bachelor of Legal Studies","Bachelor of Law"}, 'D'},
    {"Full form of BA LL.B?", {"BA in Legislative Laws","BA in Legal Studies","BA in Law","BA in Legislative Science"}, 'C'},
    {"Focus of Constitutional Law?", {"Criminal justice","Rights & freedoms","Family Law","Business Law"}, 'B'},
    {"Meaning of Precedent?", {"Ruling by lower court","Previous case used as example","New law passed","Document"}, 'B'},
    {"Framework of govt?", {"Civil code","Constitution","Legal Code","Bill of Rights"}, 'B'},
    {"Tort law relates to?", {"Contracts","Family issues","Civil wrongs","Business contracts"}, 'C'},
    {"Court power to hear case?", {"Jurisdiction","Precedent","Mandate","Doctrine"}, 'A'},
    {"Meaning of Due Process?", {"Right to be heard","Filing lawsuit","Fair procedure","Legal strategy"}, 'C'},
    {"Defense attorney represents?", {"Victim","Prosecution","Accused","Judge"}, 'C'},
    {"Meaning of Habeas Corpus?", {"Fair trial","Right silent","Be brought to court","Property right"}, 'C'}
};

/* CS quiz */
QuizQ cs_q[10] = {
    {"B.Tech stands for?", {"Bachelor of Technology","Basic Tech","Binary Tech","Build Tech"}, 'A'},
    {"Web development language?", {"JavaScript","Java","C++","Python"}, 'A'},
    {"OOP language?", {"Java","HTML","CSS","SQL"}, 'A'},
    {"HTML stands for?", {"HyperText Markup Language","Hyper Model Lang","Home Tool ML","HyperLink ML"}, 'A'},
    {"DBMS example?", {"MySQL","HTML","Java","C++"}, 'A'},
    {"HTTP stands for?", {"HyperText Transfer Protocol","Hyper Transfer Text Protocol","HomeText TP","HyperTime Protocol"}, 'A'},
    {"IP stands for?", {"Internet Protocol","Integrated Programming","Information Protocol","Internal Processing"}, 'A'},
    {"IDE stands for?", {"Internet Dev Env","Integrated Dev Environment","Internet Data Eng","Intelligent Data Entry"}, 'B'},
    {"Algorithm is?", {"Steps to solve problem","Database","Programming lang","Data storage"}, 'A'},
    {"Web framework?", {"Angular","SQL","C++","Python"}, 'A'}
};

School schools[3] = {
    {"School of Business", {"BBA", "MBA"}, 2, business_q, 10},
    {"School of Law", {"BA LL.B", "BBA LL.B", "LL.B", "LL.M"}, 4, law_q, 10},
    {"School of Computer Science", {"B.Tech", "B.Sc", "M.Tech", "MCA", "BCA"}, 5, cs_q, 10}
};
