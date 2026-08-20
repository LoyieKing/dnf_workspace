# CheckDungeonClear

`_ZN5CUser17CheckDungeonClearEi`

`CUser::CheckDungeonClear(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866d934` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866d934  _ZN5CUser17CheckDungeonClearEi
#           CUser::CheckDungeonClear(int)
# range [0x0866d934, 0x0866d971]
0866d934 +0x00:  push   %ebp
0866d935 +0x01:  mov    %esp,%ebp
0866d937 +0x03:  sub    $0x18,%esp
0866d93a +0x06:  mov    0x8(%ebp),%eax
0866d93d +0x09:  mov    %eax,(%esp)
0866d940 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0866d945 +0x11:  test   %eax,%eax
0866d947 +0x13:  sete   %al
0866d94a +0x16:  test   %al,%al
0866d94c +0x18:  je     0866d955 <+0x21>
0866d94e +0x1a:  mov    $0x0,%eax
0866d953 +0x1f:  jmp    0866d96f <+0x3b>
0866d955 +0x21:  mov    0x8(%ebp),%eax
0866d958 +0x24:  mov    %eax,(%esp)
0866d95b +0x27:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0866d960 +0x2c:  mov    0xc(%ebp),%edx
0866d963 +0x2f:  mov    %edx,0x4(%esp)
0866d967 +0x33:  mov    %eax,(%esp)
0866d96a +0x36:  call   086ac954 <_ZNK9UserQuest17item_reward_questEi>  ; UserQuest::item_reward_quest(int) const
0866d96f +0x3b:  leave
0866d970 +0x3c:  ret
0866d971 +0x3d:  nop
```

## 反编译 C

```c
// CUser::CheckDungeonClear @ 0x866d934

/* CUser::CheckDungeonClear(int) */

undefined4 __thiscall CUser::CheckDungeonClear(CUser *this,int param_1)

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
    uVar2 = UserQuest::item_reward_quest(this_00,param_1);
  }
  return uVar2;
}
```
