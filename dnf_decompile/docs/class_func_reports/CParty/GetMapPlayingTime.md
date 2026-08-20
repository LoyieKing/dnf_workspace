# GetMapPlayingTime

`_ZN6CParty17GetMapPlayingTimeEv`

`CParty::GetMapPlayingTime()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b6768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b6768  _ZN6CParty17GetMapPlayingTimeEv
#           CParty::GetMapPlayingTime()
# range [0x085b6768, 0x085b67c9]
085b6768 +0x00:  push   %ebp
085b6769 +0x01:  mov    %esp,%ebp
085b676b +0x03:  push   %ebx
085b676c +0x04:  sub    $0x14,%esp
085b676f +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085b6776 +0x0e:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085b677b +0x13:  mov    $0x0,%edx
085b6780 +0x18:  mov    0x8(%ebp),%ecx
085b6783 +0x1b:  mov    0x348(%ecx),%ebx
085b6789 +0x21:  mov    0x344(%ecx),%ecx
085b678f +0x27:  sub    %ecx,%eax
085b6791 +0x29:  sbb    %ebx,%edx
085b6793 +0x2b:  mov    0x8(%ebp),%ecx
085b6796 +0x2e:  mov    0x340(%ecx),%ebx
085b679c +0x34:  mov    0x33c(%ecx),%ecx
085b67a2 +0x3a:  sub    %ecx,%eax
085b67a4 +0x3c:  sbb    %ebx,%edx
085b67a6 +0x3e:  mov    0x8(%ebp),%ecx
085b67a9 +0x41:  mov    %eax,0x334(%ecx)
085b67af +0x47:  mov    %edx,0x338(%ecx)
085b67b5 +0x4d:  mov    0x8(%ebp),%eax
085b67b8 +0x50:  mov    0x338(%eax),%edx
085b67be +0x56:  mov    0x334(%eax),%eax
085b67c4 +0x5c:  add    $0x14,%esp
085b67c7 +0x5f:  pop    %ebx
085b67c8 +0x60:  pop    %ebp
085b67c9 +0x61:  ret
```

## 反编译 C

```c
// CParty::GetMapPlayingTime @ 0x85b6768

/* CParty::GetMapPlayingTime() */

undefined8 __thiscall CParty::GetMapPlayingTime(CParty *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  uVar2 = uVar1 - *(uint *)(this + 0x344);
  *(uint *)(this + 0x334) = uVar2 - *(uint *)(this + 0x33c);
  *(uint *)(this + 0x338) =
       ((-(uint)(uVar1 < *(uint *)(this + 0x344)) - *(int *)(this + 0x348)) - *(int *)(this + 0x340)
       ) - (uint)(uVar2 < *(uint *)(this + 0x33c));
  return *(undefined8 *)(this + 0x334);
}
```
