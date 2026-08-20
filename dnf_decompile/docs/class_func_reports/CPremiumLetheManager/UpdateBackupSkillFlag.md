# UpdateBackupSkillFlag

`_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c3f30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3f30  _ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
# range [0x085c3f30, 0x085c4007]
085c3f30 +0x00:  push   %ebp
085c3f31 +0x01:  mov    %esp,%ebp
085c3f33 +0x03:  push   %ebx
085c3f34 +0x04:  sub    $0x24,%esp
085c3f37 +0x07:  mov    0x10(%ebp),%eax
085c3f3a +0x0a:  cmp    $0xffffffff,%eax
085c3f3d +0x0d:  je     085c3f46 <+0x16>
085c3f3f +0x0f:  mov    0x10(%ebp),%eax
085c3f42 +0x12:  test   %eax,%eax
085c3f44 +0x14:  jne    085c3f6b <+0x3b>
085c3f46 +0x16:  mov    0xc(%ebp),%eax
085c3f49 +0x19:  mov    %eax,(%esp)
085c3f4c +0x1c:  call   085c4b8c <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x1c>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x1c
085c3f51 +0x21:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
085c3f58 +0x28:  cmp    %dl,%al
085c3f5a +0x2a:  setne  %al
085c3f5d +0x2d:  test   %al,%al
085c3f5f +0x2f:  je     085c3f8d <+0x5d>
085c3f61 +0x31:  mov    $0x0,%eax
085c3f66 +0x36:  jmp    085c4001 <+0xd1>
085c3f6b +0x3b:  mov    0xc(%ebp),%eax
085c3f6e +0x3e:  mov    %eax,(%esp)
085c3f71 +0x41:  call   085c4bb0 <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x40>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x40
085c3f76 +0x46:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
085c3f7d +0x4d:  cmp    %dl,%al
085c3f7f +0x4f:  setne  %al
085c3f82 +0x52:  test   %al,%al
085c3f84 +0x54:  je     085c3f8e <+0x5e>
085c3f86 +0x56:  mov    $0x0,%eax
085c3f8b +0x5b:  jmp    085c4001 <+0xd1>
085c3f8d +0x5d:  nop
085c3f8e +0x5e:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
085c3f95 +0x65:  movzbl %al,%eax
085c3f98 +0x68:  mov    0x10(%ebp),%edx
085c3f9b +0x6b:  mov    %edx,0xc(%esp)
085c3f9f +0x6f:  mov    %eax,0x8(%esp)
085c3fa3 +0x73:  mov    0xc(%ebp),%eax
085c3fa6 +0x76:  mov    %eax,0x4(%esp)
085c3faa +0x7a:  mov    0x8(%ebp),%eax
085c3fad +0x7d:  mov    %eax,(%esp)
085c3fb0 +0x80:  call   085c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
085c3fb5 +0x85:  mov    0xc(%ebp),%eax
085c3fb8 +0x88:  mov    %eax,(%esp)
085c3fbb +0x8b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c3fc0 +0x90:  mov    %eax,%ebx
085c3fc2 +0x92:  movl   $0x0,0xc(%esp)
085c3fca +0x9a:  movl   $0x69,0x8(%esp)
085c3fd2 +0xa2:  movl   $&_ZZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x4(%esp)
085c3fda +0xaa:  lea    -0x18(%ebp),%eax
085c3fdd +0xad:  mov    %eax,(%esp)
085c3fe0 +0xb0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c3fe5 +0xb5:  mov    %ebx,0x8(%esp)
085c3fe9 +0xb9:  movl   $"ONE_DAY_LETHE : SUCCESS_INIT_FOR_LEGACY_LETHE, char(%s)",0x4(%esp)
085c3ff1 +0xc1:  lea    -0x18(%ebp),%eax
085c3ff4 +0xc4:  mov    %eax,(%esp)
085c3ff7 +0xc7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c3ffc +0xcc:  mov    $0x1,%eax
085c4001 +0xd1:  add    $0x24,%esp
085c4004 +0xd4:  pop    %ebx
085c4005 +0xd5:  pop    %ebp
085c4006 +0xd6:  ret
085c4007 +0xd7:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::UpdateBackupSkillFlag @ 0x85c3f30

/* CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
CPremiumLetheManager::UpdateBackupSkillFlag
          (CPremiumLetheManager *this,CUserCharacInfo *param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if ((param_3 == -1) || (param_3 == 0)) {
    cVar1 = CUserCharacInfo::GetOneDayLetheFlag(param_1);
    if (cVar1 != NOT_USE_LETHE_STATE) {
      return 0;
    }
  }
  else {
    cVar1 = CUserCharacInfo::GetOneDayLetheFlag2ND(param_1);
    if (cVar1 != NOT_USE_LETHE_STATE) {
      return 0;
    }
  }
  _update(this,param_1,NOT_USE_LETHE_STATE,param_3);
  uVar2 = CUserCharacInfo::getCurCharacName(param_1);
  cMyTrace::cMyTrace(local_1c,
                     "bool CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)"
                     ,0x69,0);
  cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : SUCCESS_INIT_FOR_LEGACY_LETHE, char(%s)",uVar2);
  return 1;
}
```
