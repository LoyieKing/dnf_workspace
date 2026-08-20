# isValidKeyGenTime

`_ZN8Sanicova4CPad17isValidKeyGenTimeEv`

`Sanicova::CPad::isValidKeyGenTime()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x085998a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085998a6  _ZN8Sanicova4CPad17isValidKeyGenTimeEv
#           Sanicova::CPad::isValidKeyGenTime()
# range [0x085998a6, 0x085998e9]
085998a6 +0x00:  push   %ebp
085998a7 +0x01:  mov    %esp,%ebp
085998a9 +0x03:  sub    $0x18,%esp
085998ac +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085998b3 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085998b8 +0x12:  mov    0x8(%ebp),%edx
085998bb +0x15:  mov    0x30(%edx),%edx
085998be +0x18:  sub    %edx,%eax
085998c0 +0x1a:  cmp    $0x14,%eax
085998c3 +0x1d:  setg   %al
085998c6 +0x20:  test   %al,%al
085998c8 +0x22:  je     085998e3 <+0x3d>
085998ca +0x24:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085998d1 +0x2b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085998d6 +0x30:  mov    0x8(%ebp),%edx
085998d9 +0x33:  mov    %eax,0x30(%edx)
085998dc +0x36:  mov    $0x1,%eax
085998e1 +0x3b:  jmp    085998e8 <+0x42>
085998e3 +0x3d:  mov    $0x0,%eax
085998e8 +0x42:  leave
085998e9 +0x43:  ret
```

## 反编译 C

```c
// Sanicova::CPad::isValidKeyGenTime @ 0x85998a6

/* Sanicova::CPad::isValidKeyGenTime() */

bool __thiscall Sanicova::CPad::isValidKeyGenTime(CPad *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  bVar1 = 0x14 < iVar2 - *(int *)(this + 0x30);
  if (bVar1) {
    uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x30) = uVar3;
  }
  return bVar1;
}
```
