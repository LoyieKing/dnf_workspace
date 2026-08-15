# _ZN6CGuild13BuyGuildSkillEiisj

`CGuild::BuyGuildSkill(int, int, short, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e42e` | `0x30f` | `0x8054354` | `0x302` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,217 +1,210 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x64,%esp
 mov    0x14(%ebp),%eax
 mov    %ax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x303>
+jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x29>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x2fc>
 mov    0x8(%ebp),%eax
 movzwl 0x62(%eax),%eax
 movzwl %ax,%edx
 movswl -0x3c(%ebp),%eax
 cmp    %eax,%edx
-jge    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0xa3>
+jge    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0xa6>
+movl   $0x3d2,0x8(%esp)
+movl   $"BuyGuildSkill",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 movzwl 0x62(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
-movl   $0x3d2,0x8(%esp)
-movl   $&_ZZN6CGuild13BuyGuildSkillEiisjE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzwl %ax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x18(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), gsp(%d)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x308>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x2fc>
 mov    0x8(%ebp),%eax
 mov    0xc0(%eax),%eax
 cmp    0x18(%ebp),%eax
-jae    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x11d>
-mov    0x8(%ebp),%eax
-mov    0xc0(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
+jae    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x11e>
 movl   $0x3d9,0x8(%esp)
 movl   $&_ZZN6CGuild13BuyGuildSkillEiisjE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0xc0(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x18(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), guildfund(%d)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x308>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x2fc>
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12SubGuildFundEj>
 movl   $0xffffffff,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x166>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x167>
 mov    -0x10(%ebp),%edx
 mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0x60,%eax
 mov    0x5(%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x162>
+jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x163>
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x171>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x172>
 addl   $0x1,-0x10(%ebp)
 cmpl   $0xf,-0x10(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x13f>
+jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x140>
 cmpl   $0xffffffff,-0x14(%ebp)
-jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x242>
+jne    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x241>
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0xf,%al
-jbe    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x1f2>
-mov    -0xc(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
+jbe    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x1f1>
 movl   $0x3ee,0x8(%esp)
-movl   $&_ZZN6CGuild13BuyGuildSkillEiisjE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movl   $"BuyGuildSkill",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"BUY_SKILL_ERR, GKey(%d) , Learn Cnt(%d)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 movb   $0xf,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x308>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x2fc>
 mov    -0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 lea    0x60(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x5(%edx)
 mov    -0xc(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0x10(%ebp),%eax
 mov    %eax,%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x60,%eax
 mov    %cl,0x9(%eax)
 mov    -0xc(%ebp),%eax
 movzbl (%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %dl,(%eax)
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x25d>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x25c>
 mov    -0x14(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,%ecx
 mov    0x8(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x60,%eax
 mov    %cl,0x9(%eax)
 mov    0x8(%ebp),%eax
-movzwl 0x62(%eax),%eax
-movzwl %ax,%edx
-movswl -0x3c(%ebp),%eax
-cmp    %eax,%edx
-jl     <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x286>
+movzwl 0x62(%eax),%edx
+movzwl -0x3c(%ebp),%eax
+cmp    %ax,%dx
+jb     <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x283>
 mov    0x8(%ebp),%eax
 movzwl 0x62(%eax),%edx
 movzwl -0x3c(%ebp),%eax
 sub    %ax,%dx
 mov    0x8(%ebp),%eax
 mov    %dx,0x62(%eax)
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x28f>
+jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x28c>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x62(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x62(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
 movl   $0x403,0x8(%esp)
 movl   $&_ZZN6CGuild13BuyGuildSkillEiisjE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x18(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+movzwl 0x62(%eax),%eax
+movzwl %ax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x18(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"BUY_SKILL, GKey(%d) , Idx(%d), lev(%d), gsp(%d)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild13BuyGuildSkillEiisj+0x308>
-mov    $0x0,%eax
-add    $0x60,%esp
+add    $0x64,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::BuyGuildSkill(int, int, short, unsigned int) */

undefined4 __thiscall
CGuild::_ZN6CGuild13BuyGuildSkillEiisj
          (CGuild *this,int param_1,int param_2,short param_3,uint param_4)

{
  CGuild CVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [8];
  int local_18;
  int local_14;
  CGuild *local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    uVar3 = 0;
  }
  else if ((int)(uint)*(ushort *)(this + 0x62) < (int)param_3) {
    uVar2 = *(ushort *)(this + 0x62);
    uVar3 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_38,"BuyGuildSkill",0x3d2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/GuildSkill","BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), gsp(%d)",uVar3
               ,param_1,param_2,(uint)uVar2);
    uVar3 = 0;
  }
  else if (*(uint *)(this + 0xc0) < param_4) {
    uVar3 = *(undefined4 *)(this + 0xc0);
    uVar4 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_30,"BuyGuildSkill",0x3d9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/GuildSkill","BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), guildfund(%d)"
               ,uVar4,param_1,param_2,uVar3);
    uVar3 = 0;
  }
  else {
    _ZN6CGuild12SubGuildFundEj(this,param_4);
    local_18 = -1;
    for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
      if (*(int *)(this + local_14 * 5 + 0x65) == param_1) {
        local_18 = local_14;
        break;
      }
    }
    if (local_18 == -1) {
      local_10 = this + 100;
      if (0xf < (byte)*local_10) {
        CVar1 = *local_10;
        uVar3 = GetGuildKey(this);
        CMyFileLog::CMyFileLog(local_28,"BuyGuildSkill",0x3ee);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/GuildSkill","BUY_SKILL_ERR, GKey(%d) , Learn Cnt(%d)",uVar3,
                   (uint)(byte)CVar1);
        *local_10 = (CGuild)0xf;
        return 0;
      }
      *(int *)(this + (uint)(byte)*local_10 * 5 + 0x65) = param_1;
      this[(uint)(byte)*local_10 * 5 + 0x69] = SUB41(param_2,0);
      *local_10 = (CGuild)((char)*local_10 + 1);
    }
    else {
      this[local_18 * 5 + 0x69] = SUB41(param_2,0);
    }
    if ((int)(uint)*(ushort *)(this + 0x62) < (int)param_3) {
      *(undefined2 *)(this + 0x62) = 0;
    }
    else {
      *(short *)(this + 0x62) = *(short *)(this + 0x62) - param_3;
    }
    this[0x4d96] = (CGuild)0x1;
    uVar2 = *(ushort *)(this + 0x62);
    uVar3 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_20,"BuyGuildSkill",0x403);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_20,"./log/GuildSkill","BUY_SKILL, GKey(%d) , Idx(%d), lev(%d), gsp(%d)",uVar3,
               param_1,param_2,(uint)uVar2);
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 991 行）：

```cpp
bool CGuild::BuyGuildSkill(int skillId, int slot, short param, unsigned int charNo)
{
    if ((m_guildDBFlag & 4) == 0)
    {
        return 0;
    }
    if ((int)m_dbInfo.m_info.m_guildSkillPoint < (int)(short)param)
    {
        CMyFileLog log("BuyGuildSkill", 0x3d2);
        log("./log/GuildSkill", "BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), gsp(%d)",
            GetGuildKey(), skillId, slot, (unsigned int)m_dbInfo.m_info.m_guildSkillPoint);
        return 0;
    }
    if (m_dbInfo.m_info.m_guildFund < charNo)
    {
        CMyFileLog log(__FUNCTION__, 0x3d9);
        log("./log/GuildSkill", "BUY_SKILL_1, GKey(%d) , Idx(%d), lev(%d), guildfund(%d)",
            GetGuildKey(), skillId, slot, m_dbInfo.m_info.m_guildFund);
        return 0;
    }
    SubGuildFund(charNo);
    int found = -1;
    for (int i = 0; i <= 0xf; i++)
    {
        if ((unsigned int)m_dbInfo.m_info.m_skills[i].m0 == (unsigned int)skillId)
        {
            found = i;
            break;
        }
    }
    if (found == -1)
    {
        unsigned char* learnCnt = &m_dbInfo.m_info.m_skillLearnCnt;
        if (*learnCnt > 0xf)
        {
            CMyFileLog log("BuyGuildSkill", 0x3ee);
            log("./log/GuildSkill", "BUY_SKILL_ERR, GKey(%d) , Learn Cnt(%d)", GetGuildKey(),
                (unsigned int)*learnCnt);
            *learnCnt = 0xf;
            return 0;
        }
        m_dbInfo.m_info.m_skills[(unsigned int)*learnCnt].m0 = skillId;
        m_dbInfo.m_info.m_skills[(unsigned int)*learnCnt].m4 = (unsigned char)slot;
        *learnCnt += 1;
    }
    else
    {
        m_dbInfo.m_info.m_skills[found].m4 = (unsigned char)slot;
    }
    if (m_dbInfo.m_info.m_guildSkillPoint >= (unsigned short)param)
    {
        m_dbInfo.m_info.m_guildSkillPoint -= (unsigned short)param;
    }
    else
    {
        m_dbInfo.m_info.m_guildSkillPoint = 0;
    }
    m_dBSaveFlag = 1;
    CMyFileLog log(__FUNCTION__, 0x403);
    log("./log/GuildSkill", "BUY_SKILL, GKey(%d) , Idx(%d), lev(%d), gsp(%d)", GetGuildKey(),
        skillId, slot, (unsigned int)m_dbInfo.m_info.m_guildSkillPoint);
    return 1;
}
```
