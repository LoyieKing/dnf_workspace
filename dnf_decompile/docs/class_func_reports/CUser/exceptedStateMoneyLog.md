# exceptedStateMoneyLog

`_ZN5CUser21exceptedStateMoneyLogEv`

`CUser::exceptedStateMoneyLog()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f3ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f3ba  _ZN5CUser21exceptedStateMoneyLogEv
#           CUser::exceptedStateMoneyLog()
# range [0x0868f3ba, 0x0868f471]
0868f3ba +0x00:  push   %ebp
0868f3bb +0x01:  mov    %esp,%ebp
0868f3bd +0x03:  sub    $0x18,%esp
0868f3c0 +0x06:  mov    0x8(%ebp),%eax
0868f3c3 +0x09:  mov    %eax,(%esp)
0868f3c6 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868f3cb +0x11:  test   %eax,%eax
0868f3cd +0x13:  setne  %al
0868f3d0 +0x16:  test   %al,%al
0868f3d2 +0x18:  je     0868f434 <+0x7a>
0868f3d4 +0x1a:  mov    0x8(%ebp),%eax
0868f3d7 +0x1d:  mov    %eax,(%esp)
0868f3da +0x20:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868f3df +0x25:  movzwl 0xc4c(%eax),%eax
0868f3e6 +0x2c:  test   %ax,%ax
0868f3e9 +0x2f:  setne  %al
0868f3ec +0x32:  test   %al,%al
0868f3ee +0x34:  je     0868f3f7 <+0x3d>
0868f3f0 +0x36:  mov    $0x1,%eax
0868f3f5 +0x3b:  jmp    0868f470 <+0xb6>
0868f3f7 +0x3d:  mov    0x8(%ebp),%eax
0868f3fa +0x40:  mov    %eax,(%esp)
0868f3fd +0x43:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868f402 +0x48:  mov    0xcac(%eax),%eax
0868f408 +0x4e:  test   %eax,%eax
0868f40a +0x50:  setne  %al
0868f40d +0x53:  test   %al,%al
0868f40f +0x55:  je     0868f434 <+0x7a>
0868f411 +0x57:  mov    0x8(%ebp),%eax
0868f414 +0x5a:  mov    %eax,(%esp)
0868f417 +0x5d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868f41c +0x62:  mov    0xcac(%eax),%eax
0868f422 +0x68:  movzbl 0x89e(%eax),%eax
0868f429 +0x6f:  test   %al,%al
0868f42b +0x71:  je     0868f434 <+0x7a>
0868f42d +0x73:  mov    $0x1,%eax
0868f432 +0x78:  jmp    0868f470 <+0xb6>
0868f434 +0x7a:  mov    0x8(%ebp),%eax
0868f437 +0x7d:  mov    %eax,(%esp)
0868f43a +0x80:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0868f43f +0x85:  cmp    $0x8,%eax
0868f442 +0x88:  sete   %al
0868f445 +0x8b:  test   %al,%al
0868f447 +0x8d:  je     0868f450 <+0x96>
0868f449 +0x8f:  mov    $0x1,%eax
0868f44e +0x94:  jmp    0868f470 <+0xb6>
0868f450 +0x96:  mov    0x8(%ebp),%eax
0868f453 +0x99:  mov    %eax,(%esp)
0868f456 +0x9c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0868f45b +0xa1:  cmp    $0x7,%al
0868f45d +0xa3:  sete   %al
0868f460 +0xa6:  test   %al,%al
0868f462 +0xa8:  je     0868f46b <+0xb1>
0868f464 +0xaa:  mov    $0x1,%eax
0868f469 +0xaf:  jmp    0868f470 <+0xb6>
0868f46b +0xb1:  mov    $0x0,%eax
0868f470 +0xb6:  leave
0868f471 +0xb7:  ret
```

## 反编译 C

```c
// CUser::exceptedStateMoneyLog @ 0x868f3ba

/* CUser::exceptedStateMoneyLog() */

undefined4 __thiscall CUser::exceptedStateMoneyLog(CUser *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = GetParty(this);
  if (iVar2 != 0) {
    iVar2 = GetParty(this);
    if (*(short *)(iVar2 + 0xc4c) != 0) {
      return 1;
    }
    iVar2 = GetParty(this);
    if ((*(int *)(iVar2 + 0xcac) != 0) &&
       (iVar2 = GetParty(this), *(char *)(*(int *)(iVar2 + 0xcac) + 0x89e) != '\0')) {
      return 1;
    }
  }
  iVar2 = get_state(this);
  if (iVar2 == 8) {
    uVar3 = 1;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this);
    if (cVar1 == '\a') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
