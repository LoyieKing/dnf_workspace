# BackToPre

`_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c3e2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3e2a  _ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)
# range [0x085c3e2a, 0x085c3f2f]
085c3e2a +0x000:  push   %ebp
085c3e2b +0x001:  mov    %esp,%ebp
085c3e2d +0x003:  push   %ebx
085c3e2e +0x004:  sub    $0x24,%esp
085c3e31 +0x007:  mov    0xc(%ebp),%eax
085c3e34 +0x00a:  mov    %eax,(%esp)
085c3e37 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c3e3c +0x012:  test   %eax,%eax
085c3e3e +0x014:  sete   %al
085c3e41 +0x017:  test   %al,%al
085c3e43 +0x019:  je     085c3e4f <+0x25>
085c3e45 +0x01b:  mov    $0x0,%eax
085c3e4a +0x020:  jmp    085c3f29 <+0xff>
085c3e4f +0x025:  mov    0x14(%ebp),%eax
085c3e52 +0x028:  mov    %eax,0xc(%esp)
085c3e56 +0x02c:  movl   $0x0,0x8(%esp)
085c3e5e +0x034:  mov    0xc(%ebp),%eax
085c3e61 +0x037:  mov    %eax,0x4(%esp)
085c3e65 +0x03b:  mov    0x8(%ebp),%eax
085c3e68 +0x03e:  mov    %eax,(%esp)
085c3e6b +0x041:  call   085c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)
085c3e70 +0x046:  mov    0x14(%ebp),%eax
085c3e73 +0x049:  mov    %eax,0x8(%esp)
085c3e77 +0x04d:  mov    0x10(%ebp),%eax
085c3e7a +0x050:  mov    %eax,0x4(%esp)
085c3e7e +0x054:  mov    0xc(%ebp),%eax
085c3e81 +0x057:  mov    %eax,(%esp)
085c3e84 +0x05a:  call   0866b53e <_ZN5CUser17master_new_skillsEP15_Mastered_skill20ENUM_SKILL_TREE_KIND>  ; CUser::master_new_skills(_Mastered_skill*, ENUM_SKILL_TREE_KIND)
085c3e89 +0x05f:  xor    $0x1,%eax
085c3e8c +0x062:  test   %al,%al
085c3e8e +0x064:  je     085c3e9a <+0x70>
085c3e90 +0x066:  mov    $0x0,%eax
085c3e95 +0x06b:  jmp    085c3f29 <+0xff>
085c3e9a +0x070:  mov    0x14(%ebp),%eax
085c3e9d +0x073:  cmp    $0xffffffff,%eax
085c3ea0 +0x076:  je     085c3ea9 <+0x7f>
085c3ea2 +0x078:  mov    0x14(%ebp),%eax
085c3ea5 +0x07b:  test   %eax,%eax
085c3ea7 +0x07d:  jne    085c3ec4 <+0x9a>
085c3ea9 +0x07f:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
085c3eb0 +0x086:  movzbl %al,%edx
085c3eb3 +0x089:  mov    0xc(%ebp),%eax
085c3eb6 +0x08c:  mov    %edx,0x4(%esp)
085c3eba +0x090:  mov    %eax,(%esp)
085c3ebd +0x093:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
085c3ec2 +0x098:  jmp    085c3edd <+0xb3>
085c3ec4 +0x09a:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
085c3ecb +0x0a1:  movzbl %al,%edx
085c3ece +0x0a4:  mov    0xc(%ebp),%eax
085c3ed1 +0x0a7:  mov    %edx,0x4(%esp)
085c3ed5 +0x0ab:  mov    %eax,(%esp)
085c3ed8 +0x0ae:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
085c3edd +0x0b3:  mov    0xc(%ebp),%eax
085c3ee0 +0x0b6:  mov    %eax,(%esp)
085c3ee3 +0x0b9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c3ee8 +0x0be:  mov    %eax,%ebx
085c3eea +0x0c0:  movl   $0x0,0xc(%esp)
085c3ef2 +0x0c8:  movl   $0x4f,0x8(%esp)
085c3efa +0x0d0:  movl   $&_ZZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
085c3f02 +0x0d8:  lea    -0x18(%ebp),%eax
085c3f05 +0x0db:  mov    %eax,(%esp)
085c3f08 +0x0de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c3f0d +0x0e3:  mov    %ebx,0x8(%esp)
085c3f11 +0x0e7:  movl   $"ONE_DAY_LETHE : SUCCESS_BACK_TO_PRE, char(%s)",0x4(%esp)
085c3f19 +0x0ef:  lea    -0x18(%ebp),%eax
085c3f1c +0x0f2:  mov    %eax,(%esp)
085c3f1f +0x0f5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c3f24 +0x0fa:  mov    $0x1,%eax
085c3f29 +0x0ff:  add    $0x24,%esp
085c3f2c +0x102:  pop    %ebx
085c3f2d +0x103:  pop    %ebp
085c3f2e +0x104:  ret
085c3f2f +0x105:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::BackToPre @ 0x85c3e2a

/* CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::BackToPre
          (CPremiumLetheManager *this,CUser *param_1,undefined4 param_2,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [20];
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    InitSkill(this,param_1,0,param_4);
    cVar1 = CUser::master_new_skills(param_1,param_2,param_4);
    if (cVar1 == '\x01') {
      if ((param_4 == -1) || (param_4 == 0)) {
        CUserCharacInfo::SetOneDayLetheFlag((CUserCharacInfo *)param_1,NOT_USE_LETHE_STATE);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND((CUserCharacInfo *)param_1,NOT_USE_LETHE_STATE);
      }
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_1c,
                         "bool CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)"
                         ,0x4f,0);
      cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_BACK_TO_PRE, char(%s)",uVar3);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
