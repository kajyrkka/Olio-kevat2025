#include "sonclass.h"

SonClass::SonClass()
{
   cout<<"SonClass created"<<endl;
   setEducation("AMK-engineer");

}

SonClass::~SonClass()
{
    cout<<"SonClass deleted"<<endl;
}

void SonClass::showSonData()
{
    cout<<"Son's education = "<< education<<endl;
 //   cout<<"Son inherited from father "<< getSkill()<<endl;
}

void SonClass::setEducation(string s)
{
    education = s;
}
