# _checkMemberDie

`_ZN8WongWork9CBossPlay15_checkMemberDieEv`

`WongWork::CBossPlay::_checkMemberDie()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149382` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149382  _ZN8WongWork9CBossPlay15_checkMemberDieEv
#           WongWork::CBossPlay::_checkMemberDie()
# range [0x08149382, 0x081493fd]
08149382 +0x00:  push   %ebp
08149383 +0x01:  mov    %esp,%ebp
08149385 +0x03:  sub    $0x28,%esp
08149388 +0x06:  movl   $0x0,-0xc(%ebp)
0814938f +0x0d:  movl   $0x0,-0xc(%ebp)
08149396 +0x14:  jmp    081493db <+0x59>
08149398 +0x16:  mov    -0xc(%ebp),%edx
0814939b +0x19:  mov    0x8(%ebp),%eax
0814939e +0x1c:  mov    0x4(%eax),%eax
081493a1 +0x1f:  mov    %edx,0x4(%esp)
081493a5 +0x23:  mov    %eax,(%esp)
081493a8 +0x26:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081493ad +0x2b:  test   %al,%al
081493af +0x2d:  je     081493ce <+0x4c>
081493b1 +0x2f:  mov    -0xc(%ebp),%eax
081493b4 +0x32:  mov    %eax,0x4(%esp)
081493b8 +0x36:  mov    0x8(%ebp),%eax
081493bb +0x39:  mov    %eax,(%esp)
081493be +0x3c:  call   08145682 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x105>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x105
081493c3 +0x41:  test   %al,%al
081493c5 +0x43:  je     081493ce <+0x4c>
081493c7 +0x45:  mov    $0x1,%eax
081493cc +0x4a:  jmp    081493d3 <+0x51>
081493ce +0x4c:  mov    $0x0,%eax
081493d3 +0x51:  test   %al,%al
081493d5 +0x53:  jne    081493e8 <+0x66>
081493d7 +0x55:  addl   $0x1,-0xc(%ebp)
081493db +0x59:  cmpl   $0x3,-0xc(%ebp)
081493df +0x5d:  setbe  %al
081493e2 +0x60:  test   %al,%al
081493e4 +0x62:  jne    08149398 <+0x16>
081493e6 +0x64:  jmp    081493e9 <+0x67>
081493e8 +0x66:  nop
081493e9 +0x67:  cmpl   $0x4,-0xc(%ebp)
081493ed +0x6b:  jne    081493f6 <+0x74>
081493ef +0x6d:  mov    $0x1,%eax
081493f4 +0x72:  jmp    081493fb <+0x79>
081493f6 +0x74:  mov    $0x0,%eax
081493fb +0x79:  leave
081493fc +0x7a:  ret
081493fd +0x7b:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::_checkMemberDie @ 0x8149382

/* WongWork::CBossPlay::_checkMemberDie() */

bool __thiscall WongWork::CBossPlay::_checkMemberDie(CBossPlay *this)

{
  bool bVar1;
  char cVar2;
  uint local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if ((cVar2 == '\0') || (cVar2 = isMemberAlive(this,local_10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
  }
  return local_10 == 4;
}
```
