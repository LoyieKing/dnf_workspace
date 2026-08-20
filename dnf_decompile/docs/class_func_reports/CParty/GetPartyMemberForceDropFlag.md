# GetPartyMemberForceDropFlag

`_ZN6CParty27GetPartyMemberForceDropFlagEv`

`CParty::GetPartyMemberForceDropFlag()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bdc00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bdc00  _ZN6CParty27GetPartyMemberForceDropFlagEv
#           CParty::GetPartyMemberForceDropFlag()
# range [0x085bdc00, 0x085bdc75]
085bdc00 +0x00:  push   %ebp
085bdc01 +0x01:  mov    %esp,%ebp
085bdc03 +0x03:  sub    $0x28,%esp
085bdc06 +0x06:  movl   $0x0,-0x10(%ebp)
085bdc0d +0x0d:  jmp    085bdc64 <+0x64>
085bdc0f +0x0f:  mov    -0x10(%ebp),%eax
085bdc12 +0x12:  mov    %eax,0x4(%esp)
085bdc16 +0x16:  mov    0x8(%ebp),%eax
085bdc19 +0x19:  mov    %eax,(%esp)
085bdc1c +0x1c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bdc21 +0x21:  mov    %eax,-0xc(%ebp)
085bdc24 +0x24:  cmpl   $0x0,-0xc(%ebp)
085bdc28 +0x28:  je     085bdc5f <+0x5f>
085bdc2a +0x2a:  mov    -0xc(%ebp),%eax
085bdc2d +0x2d:  mov    %eax,(%esp)
085bdc30 +0x30:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
085bdc35 +0x35:  test   %al,%al
085bdc37 +0x37:  je     085bdc4f <+0x4f>
085bdc39 +0x39:  mov    -0xc(%ebp),%eax
085bdc3c +0x3c:  mov    %eax,(%esp)
085bdc3f +0x3f:  call   0868f716 <_ZN5CUser16getForceDropFlagEv>  ; CUser::getForceDropFlag()
085bdc44 +0x44:  test   %al,%al
085bdc46 +0x46:  je     085bdc4f <+0x4f>
085bdc48 +0x48:  mov    $0x1,%eax
085bdc4d +0x4d:  jmp    085bdc54 <+0x54>
085bdc4f +0x4f:  mov    $0x0,%eax
085bdc54 +0x54:  test   %al,%al
085bdc56 +0x56:  je     085bdc60 <+0x60>
085bdc58 +0x58:  mov    $0x1,%eax
085bdc5d +0x5d:  jmp    085bdc74 <+0x74>
085bdc5f +0x5f:  nop
085bdc60 +0x60:  addl   $0x1,-0x10(%ebp)
085bdc64 +0x64:  cmpl   $0x3,-0x10(%ebp)
085bdc68 +0x68:  setle  %al
085bdc6b +0x6b:  test   %al,%al
085bdc6d +0x6d:  jne    085bdc0f <+0xf>
085bdc6f +0x6f:  mov    $0x0,%eax
085bdc74 +0x74:  leave
085bdc75 +0x75:  ret
```

## 反编译 C

```c
// CParty::GetPartyMemberForceDropFlag @ 0x85bdc00

/* CParty::GetPartyMemberForceDropFlag() */

undefined4 __thiscall CParty::GetPartyMemberForceDropFlag(CParty *this)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    this_00 = (CUser *)get_user(this,local_14);
    if (this_00 != (CUser *)0x0) {
      cVar2 = CUser::isGMUser(this_00);
      if ((cVar2 == '\0') || (cVar2 = CUser::getForceDropFlag(this_00), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
