# GetExtraWinPoint

`_ZN12CLeagueMatch16GetExtraWinPointEi`

`CLeagueMatch::GetExtraWinPoint(int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d0bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d0bc  _ZN12CLeagueMatch16GetExtraWinPointEi
#           CLeagueMatch::GetExtraWinPoint(int)
# range [0x0855d0bc, 0x0855d103]
0855d0bc +0x00:  push   %ebp
0855d0bd +0x01:  mov    %esp,%ebp
0855d0bf +0x03:  sub    $0x18,%esp
0855d0c2 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0855d0c9 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0855d0ce +0x12:  cmp    $0x4911b4f0,%eax
0855d0d3 +0x17:  jle    0855d0ef <+0x33>
0855d0d5 +0x19:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0855d0dc +0x20:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0855d0e1 +0x25:  cmp    $0x492429ef,%eax
0855d0e6 +0x2a:  jg     0855d0ef <+0x33>
0855d0e8 +0x2c:  mov    $0x1,%eax
0855d0ed +0x31:  jmp    0855d0f4 <+0x38>
0855d0ef +0x33:  mov    $0x0,%eax
0855d0f4 +0x38:  test   %al,%al
0855d0f6 +0x3a:  je     0855d0fd <+0x41>
0855d0f8 +0x3c:  mov    0xc(%ebp),%eax
0855d0fb +0x3f:  jmp    0855d102 <+0x46>
0855d0fd +0x41:  mov    $0x0,%eax
0855d102 +0x46:  leave
0855d103 +0x47:  ret
```

## 反编译 C

```c
// CLeagueMatch::GetExtraWinPoint @ 0x855d0bc

/* CLeagueMatch::GetExtraWinPoint(int) */

int __thiscall CLeagueMatch::GetExtraWinPoint(CLeagueMatch *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((iVar2 < 0x4911b4f1) ||
     (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), 0x492429ef < iVar2))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    param_1 = 0;
  }
  return param_1;
}
```
