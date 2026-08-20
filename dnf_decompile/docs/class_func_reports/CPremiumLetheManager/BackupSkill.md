# BackupSkill

`_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c46e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c46e8  _ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x085c46e8, 0x085c4841]
085c46e8 +0x000:  push   %ebp
085c46e9 +0x001:  mov    %esp,%ebp
085c46eb +0x003:  sub    $0x18,%esp
085c46ee +0x006:  mov    0xc(%ebp),%eax
085c46f1 +0x009:  mov    %eax,(%esp)
085c46f4 +0x00c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c46f9 +0x011:  test   %eax,%eax
085c46fb +0x013:  sete   %al
085c46fe +0x016:  test   %al,%al
085c4700 +0x018:  je     085c470c <+0x24>
085c4702 +0x01a:  mov    $0x0,%eax
085c4707 +0x01f:  jmp    085c4840 <+0x158>
085c470c +0x024:  mov    0x10(%ebp),%eax
085c470f +0x027:  cmp    $0xffffffff,%eax
085c4712 +0x02a:  je     085c471b <+0x33>
085c4714 +0x02c:  mov    0x10(%ebp),%eax
085c4717 +0x02f:  test   %eax,%eax
085c4719 +0x031:  jne    085c4761 <+0x79>
085c471b +0x033:  mov    0xc(%ebp),%eax
085c471e +0x036:  mov    %eax,(%esp)
085c4721 +0x039:  call   085c4b8c <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x1c>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x1c
085c4726 +0x03e:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
085c472d +0x045:  cmp    %dl,%al
085c472f +0x047:  je     085c474e <+0x66>
085c4731 +0x049:  mov    0xc(%ebp),%eax
085c4734 +0x04c:  mov    %eax,(%esp)
085c4737 +0x04f:  call   085c4b8c <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x1c>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x1c
085c473c +0x054:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%edx
085c4743 +0x05b:  cmp    %dl,%al
085c4745 +0x05d:  je     085c474e <+0x66>
085c4747 +0x05f:  mov    $0x1,%eax
085c474c +0x064:  jmp    085c4753 <+0x6b>
085c474e +0x066:  mov    $0x0,%eax
085c4753 +0x06b:  test   %al,%al
085c4755 +0x06d:  je     085c47a7 <+0xbf>
085c4757 +0x06f:  mov    $0x0,%eax
085c475c +0x074:  jmp    085c4840 <+0x158>
085c4761 +0x079:  mov    0xc(%ebp),%eax
085c4764 +0x07c:  mov    %eax,(%esp)
085c4767 +0x07f:  call   085c4bb0 <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x40>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x40
085c476c +0x084:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
085c4773 +0x08b:  cmp    %dl,%al
085c4775 +0x08d:  je     085c4794 <+0xac>
085c4777 +0x08f:  mov    0xc(%ebp),%eax
085c477a +0x092:  mov    %eax,(%esp)
085c477d +0x095:  call   085c4bb0 <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x40>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x40
085c4782 +0x09a:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%edx
085c4789 +0x0a1:  cmp    %dl,%al
085c478b +0x0a3:  je     085c4794 <+0xac>
085c478d +0x0a5:  mov    $0x1,%eax
085c4792 +0x0aa:  jmp    085c4799 <+0xb1>
085c4794 +0x0ac:  mov    $0x0,%eax
085c4799 +0x0b1:  test   %al,%al
085c479b +0x0b3:  je     085c47a8 <+0xc0>
085c479d +0x0b5:  mov    $0x0,%eax
085c47a2 +0x0ba:  jmp    085c4840 <+0x158>
085c47a7 +0x0bf:  nop
085c47a8 +0x0c0:  mov    0x10(%ebp),%eax
085c47ab +0x0c3:  cmp    $0xffffffff,%eax
085c47ae +0x0c6:  je     085c47b7 <+0xcf>
085c47b0 +0x0c8:  mov    0x10(%ebp),%eax
085c47b3 +0x0cb:  test   %eax,%eax
085c47b5 +0x0cd:  jne    085c47fa <+0x112>
085c47b7 +0x0cf:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c47be +0x0d6:  movzbl %al,%edx
085c47c1 +0x0d9:  mov    0xc(%ebp),%eax
085c47c4 +0x0dc:  mov    %edx,0x4(%esp)
085c47c8 +0x0e0:  mov    %eax,(%esp)
085c47cb +0x0e3:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
085c47d0 +0x0e8:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c47d7 +0x0ef:  movzbl %al,%eax
085c47da +0x0f2:  movl   $0x0,0xc(%esp)
085c47e2 +0x0fa:  mov    %eax,0x8(%esp)
085c47e6 +0x0fe:  mov    0xc(%ebp),%eax
085c47e9 +0x101:  mov    %eax,0x4(%esp)
085c47ed +0x105:  mov    0x8(%ebp),%eax
085c47f0 +0x108:  mov    %eax,(%esp)
085c47f3 +0x10b:  call   085c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
085c47f8 +0x110:  jmp    085c483b <+0x153>
085c47fa +0x112:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c4801 +0x119:  movzbl %al,%edx
085c4804 +0x11c:  mov    0xc(%ebp),%eax
085c4807 +0x11f:  mov    %edx,0x4(%esp)
085c480b +0x123:  mov    %eax,(%esp)
085c480e +0x126:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
085c4813 +0x12b:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c481a +0x132:  movzbl %al,%eax
085c481d +0x135:  movl   $0x1,0xc(%esp)
085c4825 +0x13d:  mov    %eax,0x8(%esp)
085c4829 +0x141:  mov    0xc(%ebp),%eax
085c482c +0x144:  mov    %eax,0x4(%esp)
085c4830 +0x148:  mov    0x8(%ebp),%eax
085c4833 +0x14b:  mov    %eax,(%esp)
085c4836 +0x14e:  call   085c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
085c483b +0x153:  mov    $0x1,%eax
085c4840 +0x158:  leave
085c4841 +0x159:  ret
```

## 反编译 C

```c
// CPremiumLetheManager::BackupSkill @ 0x85c46e8

/* CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::BackupSkill(CPremiumLetheManager *this,CUserCharacInfo *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::getCurCharacR(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if ((param_3 == -1) || (param_3 == 0)) {
    cVar2 = CUserCharacInfo::GetOneDayLetheFlag(param_1);
    if ((cVar2 == NOT_USE_LETHE_STATE) ||
       (cVar2 = CUserCharacInfo::GetOneDayLetheFlag(param_1), cVar2 == SKILL_CONFIRM_STATE)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
  }
  else {
    cVar2 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1);
    if ((cVar2 == NOT_USE_LETHE_STATE) ||
       (cVar2 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1), cVar2 == SKILL_CONFIRM_STATE)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
  }
  if ((param_3 == -1) || (param_3 == 0)) {
    CUserCharacInfo::SetOneDayLetheFlag(param_1,USE_LETHE_STATE);
    _update(this,param_1,USE_LETHE_STATE,0);
  }
  else {
    CUserCharacInfo::SetOneDayLetheFlag2ND(param_1,USE_LETHE_STATE);
    _update(this,param_1,USE_LETHE_STATE,1);
  }
  return 1;
}
```
