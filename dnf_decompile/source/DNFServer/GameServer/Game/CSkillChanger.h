#ifndef _WONGWORK_CSKILLCHANGER_H_
#define _WONGWORK_CSKILLCHANGER_H_

class CUser;

namespace WongWork
{
class CSkillChanger
{
public:
    CSkillChanger();
    ~CSkillChanger();
    void SkillInitialize(CUser* user, int kind, bool flag);

private:
    char m_pad[0x40];
};
}

#endif // _WONGWORK_CSKILLCHANGER_H_
