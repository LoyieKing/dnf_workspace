# CheckQuestMap

`_ZN5CUser13CheckQuestMapEi`

`CUser::CheckQuestMap(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866cac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866cac6  _ZN5CUser13CheckQuestMapEi
#           CUser::CheckQuestMap(int)
# range [0x0866cac6, 0x0866cb03]
0866cac6 +0x00:  push   %ebp
0866cac7 +0x01:  mov    %esp,%ebp
0866cac9 +0x03:  sub    $0x18,%esp
0866cacc +0x06:  mov    0x8(%ebp),%eax
0866cacf +0x09:  mov    %eax,(%esp)
0866cad2 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0866cad7 +0x11:  test   %eax,%eax
0866cad9 +0x13:  sete   %al
0866cadc +0x16:  test   %al,%al
0866cade +0x18:  je     0866cae7 <+0x21>
0866cae0 +0x1a:  mov    $0x0,%eax
0866cae5 +0x1f:  jmp    0866cb01 <+0x3b>
0866cae7 +0x21:  mov    0x8(%ebp),%eax
0866caea +0x24:  mov    %eax,(%esp)
0866caed +0x27:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866caf2 +0x2c:  mov    0xc(%ebp),%edx
0866caf5 +0x2f:  mov    %edx,0x4(%esp)
0866caf9 +0x33:  mov    %eax,(%esp)
0866cafc +0x36:  call   086aca16 <_ZNK9UserQuest19get_rescue_questmapEi>  ; UserQuest::get_rescue_questmap(int) const
0866cb01 +0x3b:  leave
0866cb02 +0x3c:  ret
0866cb03 +0x3d:  nop
```

## 反编译 C

```c
// CUser::CheckQuestMap @ 0x866cac6

/* CUser::CheckQuestMap(int) */

undefined4 __thiscall CUser::CheckQuestMap(CUser *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  UserQuest *this_00;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    this_00 = (UserQuest *)getCurCharacQuestR(this);
    uVar2 = UserQuest::get_rescue_questmap(this_00,param_1);
  }
  return uVar2;
}
```
