# get_quest

`_ZNK9UserQuest9get_questEP14SIG_LOAD_QUEST`

`UserQuest::get_quest(SIG_LOAD_QUEST*) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086abad6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086abad6  _ZNK9UserQuest9get_questEP14SIG_LOAD_QUEST
#           UserQuest::get_quest(SIG_LOAD_QUEST*) const
# range [0x086abad6, 0x086abba7]
086abad6 +0x00:  push   %ebp
086abad7 +0x01:  mov    %esp,%ebp
086abad9 +0x03:  sub    $0x28,%esp
086abadc +0x06:  mov    0xc(%ebp),%eax
086abadf +0x09:  movl   $0x0,0x4(%eax)
086abae6 +0x10:  movl   $0x0,-0xc(%ebp)
086abaed +0x17:  jmp    086abb2a <+0x54>
086abaef +0x19:  mov    -0xc(%ebp),%edx
086abaf2 +0x1c:  mov    -0xc(%ebp),%ecx
086abaf5 +0x1f:  mov    0x8(%ebp),%eax
086abaf8 +0x22:  add    $0x1d4c,%ecx
086abafe +0x28:  mov    0x8(%eax,%ecx,4),%ecx
086abb02 +0x2c:  mov    0xc(%ebp),%eax
086abb05 +0x2f:  mov    %ecx,0xc(%eax,%edx,4)
086abb09 +0x33:  mov    -0xc(%ebp),%ecx
086abb0c +0x36:  mov    -0xc(%ebp),%edx
086abb0f +0x39:  mov    0x8(%ebp),%eax
086abb12 +0x3c:  add    $0x1d60,%edx
086abb18 +0x42:  mov    0x8(%eax,%edx,4),%edx
086abb1c +0x46:  mov    0xc(%ebp),%eax
086abb1f +0x49:  add    $0x14,%ecx
086abb22 +0x4c:  mov    %edx,0xc(%eax,%ecx,4)
086abb26 +0x50:  addl   $0x1,-0xc(%ebp)
086abb2a +0x54:  cmpl   $0x13,-0xc(%ebp)
086abb2e +0x58:  setle  %al
086abb31 +0x5b:  test   %al,%al
086abb33 +0x5d:  jne    086abaef <+0x19>
086abb35 +0x5f:  mov    0x8(%ebp),%eax
086abb38 +0x62:  add    $0x4,%eax
086abb3b +0x65:  mov    %eax,(%esp)
086abb3e +0x68:  call   0808bb80 <_ZNK8WongWork11CQuestClear15getClearedQuestEv>  ; WongWork::CQuestClear::getClearedQuest() const
086abb43 +0x6d:  mov    0xc(%ebp),%edx
086abb46 +0x70:  add    $0xb0,%edx
086abb4c +0x76:  movl   $0x7530,0x8(%esp)
086abb54 +0x7e:  mov    %eax,0x4(%esp)
086abb58 +0x82:  mov    %edx,(%esp)
086abb5b +0x85:  call   0807d8a0 <_init+0x198>
086abb60 +0x8a:  mov    0x8(%ebp),%eax
086abb63 +0x8d:  mov    (%eax),%eax
086abb65 +0x8f:  mov    %eax,(%esp)
086abb68 +0x92:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086abb6d +0x97:  mov    0x75f0(%eax),%edx
086abb73 +0x9d:  mov    0xc(%ebp),%eax
086abb76 +0xa0:  mov    %edx,0xac(%eax)
086abb7c +0xa6:  mov    0x8(%ebp),%eax
086abb7f +0xa9:  lea    0x75f4(%eax),%edx
086abb85 +0xaf:  mov    0xc(%ebp),%eax
086abb88 +0xb2:  add    $0x75e0,%eax
086abb8d +0xb7:  movl   $0x28,0x8(%esp)
086abb95 +0xbf:  mov    %edx,0x4(%esp)
086abb99 +0xc3:  mov    %eax,(%esp)
086abb9c +0xc6:  call   0807d8a0 <_init+0x198>
086abba1 +0xcb:  mov    $0x1,%eax
086abba6 +0xd0:  leave
086abba7 +0xd1:  ret
```

## 反编译 C

```c
// UserQuest::get_quest @ 0x86abad6

/* UserQuest::get_quest(SIG_LOAD_QUEST*) const */

undefined4 __thiscall UserQuest::get_quest(UserQuest *this,SIG_LOAD_QUEST *param_1)

{
  void *__src;
  int iVar1;
  int local_10;
  
  *(undefined4 *)(param_1 + 4) = 0;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined4 *)(param_1 + local_10 * 4 + 0xc) =
         *(undefined4 *)(this + (local_10 + 0x1d4c) * 4 + 8);
    *(undefined4 *)(param_1 + (local_10 + 0x14) * 4 + 0xc) =
         *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8);
  }
  __src = (void *)WongWork::CQuestClear::getClearedQuest((CQuestClear *)(this + 4));
  memcpy(param_1 + 0xb0,__src,30000);
  iVar1 = CUser::getCurCharacQuestR(*(CUser **)this);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar1 + 0x75f0);
  memcpy(param_1 + 0x75e0,this + 0x75f4,0x28);
  return 1;
}
```
