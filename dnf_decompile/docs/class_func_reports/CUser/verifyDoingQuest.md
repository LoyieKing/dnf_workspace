# verifyDoingQuest

`_ZN5CUser16verifyDoingQuestEv`

`CUser::verifyDoingQuest()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d144  _ZN5CUser16verifyDoingQuestEv
#           CUser::verifyDoingQuest()
# range [0x0868d144, 0x0868d1eb]
0868d144 +0x00:  push   %ebp
0868d145 +0x01:  mov    %esp,%ebp
0868d147 +0x03:  sub    $0x28,%esp
0868d14a +0x06:  movl   $0x0,-0x10(%ebp)
0868d151 +0x0d:  jmp    0868d1db <+0x97>
0868d156 +0x12:  movl   $0x0,-0xc(%ebp)
0868d15d +0x19:  mov    0x8(%ebp),%eax
0868d160 +0x1c:  mov    %eax,(%esp)
0868d163 +0x1f:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0868d168 +0x24:  mov    -0x10(%ebp),%edx
0868d16b +0x27:  add    $0x1d4c,%edx
0868d171 +0x2d:  mov    0x8(%eax,%edx,4),%eax
0868d175 +0x31:  mov    %eax,-0xc(%ebp)
0868d178 +0x34:  cmpl   $0x0,-0xc(%ebp)
0868d17c +0x38:  je     0868d1d6 <+0x92>
0868d17e +0x3a:  mov    0x8(%ebp),%eax
0868d181 +0x3d:  mov    %eax,(%esp)
0868d184 +0x40:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0868d189 +0x45:  mov    -0xc(%ebp),%edx
0868d18c +0x48:  mov    %edx,0x4(%esp)
0868d190 +0x4c:  mov    %eax,(%esp)
0868d193 +0x4f:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
0868d198 +0x54:  test   %al,%al
0868d19a +0x56:  je     0868d1d7 <+0x93>
0868d19c +0x58:  mov    0x8(%ebp),%eax
0868d19f +0x5b:  mov    %eax,(%esp)
0868d1a2 +0x5e:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0868d1a7 +0x63:  mov    -0x10(%ebp),%edx
0868d1aa +0x66:  add    $0x1d4c,%edx
0868d1b0 +0x6c:  movl   $0x0,0x8(%eax,%edx,4)
0868d1b8 +0x74:  mov    0x8(%ebp),%eax
0868d1bb +0x77:  mov    %eax,(%esp)
0868d1be +0x7a:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0868d1c3 +0x7f:  mov    -0x10(%ebp),%edx
0868d1c6 +0x82:  add    $0x1d60,%edx
0868d1cc +0x88:  movl   $0x0,0x8(%eax,%edx,4)
0868d1d4 +0x90:  jmp    0868d1d7 <+0x93>
0868d1d6 +0x92:  nop
0868d1d7 +0x93:  addl   $0x1,-0x10(%ebp)
0868d1db +0x97:  cmpl   $0x13,-0x10(%ebp)
0868d1df +0x9b:  setle  %al
0868d1e2 +0x9e:  test   %al,%al
0868d1e4 +0xa0:  jne    0868d156 <+0x12>
0868d1ea +0xa6:  leave
0868d1eb +0xa7:  ret
```

## 反编译 C

```c
// CUser::verifyDoingQuest @ 0x868d144

/* CUser::verifyDoingQuest() */

void __thiscall CUser::verifyDoingQuest(CUser *this)

{
  char cVar1;
  int iVar2;
  UserQuest *this_00;
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    iVar2 = getCurCharacQuestR(this);
    iVar2 = *(int *)(iVar2 + 8 + (local_14 + 0x1d4c) * 4);
    if (iVar2 != 0) {
      this_00 = (UserQuest *)getCurCharacQuestR(this);
      cVar1 = UserQuest::isClearQuest(this_00,iVar2);
      if (cVar1 != '\0') {
        iVar2 = getCurCharacQuestW(this);
        *(undefined4 *)(iVar2 + 8 + (local_14 + 0x1d4c) * 4) = 0;
        iVar2 = getCurCharacQuestW(this);
        *(undefined4 *)(iVar2 + 8 + (local_14 + 0x1d60) * 4) = 0;
      }
    }
  }
  return;
}
```
