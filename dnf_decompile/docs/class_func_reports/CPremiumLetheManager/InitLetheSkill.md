# InitLetheSkill

`_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c4008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4008  _ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x085c4008, 0x085c40a9]
085c4008 +0x00:  push   %ebp
085c4009 +0x01:  mov    %esp,%ebp
085c400b +0x03:  push   %ebx
085c400c +0x04:  sub    $0x24,%esp
085c400f +0x07:  movl   $0x21,0x4(%esp)
085c4017 +0x0f:  mov    0xc(%ebp),%eax
085c401a +0x12:  mov    %eax,(%esp)
085c401d +0x15:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085c4022 +0x1a:  xor    $0x1,%eax
085c4025 +0x1d:  test   %al,%al
085c4027 +0x1f:  je     085c4030 <+0x28>
085c4029 +0x21:  mov    $0x0,%eax
085c402e +0x26:  jmp    085c40a3 <+0x9b>
085c4030 +0x28:  movzbl &_ZN20CPremiumLetheManager16INIT_LETHE_SKILLE,%eax
085c4037 +0x2f:  movzbl %al,%eax
085c403a +0x32:  mov    0x10(%ebp),%edx
085c403d +0x35:  mov    %edx,0xc(%esp)
085c4041 +0x39:  mov    %eax,0x8(%esp)
085c4045 +0x3d:  mov    0xc(%ebp),%eax
085c4048 +0x40:  mov    %eax,0x4(%esp)
085c404c +0x44:  mov    0x8(%ebp),%eax
085c404f +0x47:  mov    %eax,(%esp)
085c4052 +0x4a:  call   085c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
085c4057 +0x4f:  mov    0xc(%ebp),%eax
085c405a +0x52:  mov    %eax,(%esp)
085c405d +0x55:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c4062 +0x5a:  mov    %eax,%ebx
085c4064 +0x5c:  movl   $0x0,0xc(%esp)
085c406c +0x64:  movl   $0x75,0x8(%esp)
085c4074 +0x6c:  movl   $&_ZZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
085c407c +0x74:  lea    -0x18(%ebp),%eax
085c407f +0x77:  mov    %eax,(%esp)
085c4082 +0x7a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c4087 +0x7f:  mov    %ebx,0x8(%esp)
085c408b +0x83:  movl   $"ONE_DAY_LETHE : SUCCESS_INIT_FOR_1ST_GROW_CHAR, char(%s)",0x4(%esp)
085c4093 +0x8b:  lea    -0x18(%ebp),%eax
085c4096 +0x8e:  mov    %eax,(%esp)
085c4099 +0x91:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c409e +0x96:  mov    $0x1,%eax
085c40a3 +0x9b:  add    $0x24,%esp
085c40a6 +0x9e:  pop    %ebx
085c40a7 +0x9f:  pop    %ebp
085c40a8 +0xa0:  ret
085c40a9 +0xa1:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::InitLetheSkill @ 0x85c4008

/* CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND) */

bool __thiscall
CPremiumLetheManager::InitLetheSkill(CPremiumLetheManager *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  cVar1 = CUser::isAffectedPremium(param_1,0x21);
  if (cVar1 == '\x01') {
    _update(this,param_1,INIT_LETHE_SKILL,param_3);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_1c,
                       "bool CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)",
                       0x75,0);
    cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_INIT_FOR_1ST_GROW_CHAR, char(%s)",uVar2);
  }
  return cVar1 == '\x01';
}
```
