# GetUserPosInParty

`_ZN5CUser17GetUserPosInPartyEv`

`CUser::GetUserPosInParty()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688638  _ZN5CUser17GetUserPosInPartyEv
#           CUser::GetUserPosInParty()
# range [0x08688638, 0x0868866d]
08688638 +0x00:  push   %ebp
08688639 +0x01:  mov    %esp,%ebp
0868863b +0x03:  sub    $0x28,%esp
0868863e +0x06:  mov    0x8(%ebp),%eax
08688641 +0x09:  mov    %eax,(%esp)
08688644 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08688649 +0x11:  mov    %eax,-0xc(%ebp)
0868864c +0x14:  cmpl   $0x0,-0xc(%ebp)
08688650 +0x18:  je     08688666 <+0x2e>
08688652 +0x1a:  mov    0x8(%ebp),%eax
08688655 +0x1d:  mov    %eax,0x4(%esp)
08688659 +0x21:  mov    -0xc(%ebp),%eax
0868865c +0x24:  mov    %eax,(%esp)
0868865f +0x27:  call   085b9e20 <_ZN6CParty15GetUserPositionEP5CUser>  ; CParty::GetUserPosition(CUser*)
08688664 +0x2c:  jmp    0868866b <+0x33>
08688666 +0x2e:  mov    $0xffffffff,%eax
0868866b +0x33:  leave
0868866c +0x34:  ret
0868866d +0x35:  nop
```

## 反编译 C

```c
// CUser::GetUserPosInParty @ 0x8688638

/* CUser::GetUserPosInParty() */

undefined4 __thiscall CUser::GetUserPosInParty(CUser *this)

{
  CParty *this_00;
  undefined4 uVar1;
  
  this_00 = (CParty *)GetParty(this);
  if (this_00 == (CParty *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CParty::GetUserPosition(this_00,this);
  }
  return uVar1;
}
```
