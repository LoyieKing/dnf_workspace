# ResetDaily

`_ZN19CCharacBloodDungeon10ResetDailyEv`

`CCharacBloodDungeon::ResetDaily()`

| 类 | 地址 |
|---|---|
| `CCharacBloodDungeon` | `0x0832a5b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a5b6  _ZN19CCharacBloodDungeon10ResetDailyEv
#           CCharacBloodDungeon::ResetDaily()
# range [0x0832a5b6, 0x0832a638]
0832a5b6 +0x00:  push   %ebp
0832a5b7 +0x01:  mov    %esp,%ebp
0832a5b9 +0x03:  sub    $0x58,%esp
0832a5bc +0x06:  mov    0x8(%ebp),%eax
0832a5bf +0x09:  movl   $0x0,0x18(%eax)
0832a5c6 +0x10:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0832a5cd +0x17:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0832a5d2 +0x1c:  mov    %eax,-0x10(%ebp)
0832a5d5 +0x1f:  lea    -0x3c(%ebp),%eax
0832a5d8 +0x22:  mov    %eax,0x4(%esp)
0832a5dc +0x26:  lea    -0x10(%ebp),%eax
0832a5df +0x29:  mov    %eax,(%esp)
0832a5e2 +0x2c:  call   0807e360 <_init+0xc58>
0832a5e7 +0x31:  mov    %eax,-0xc(%ebp)
0832a5ea +0x34:  mov    -0xc(%ebp),%eax
0832a5ed +0x37:  mov    0x18(%eax),%eax
0832a5f0 +0x3a:  cmp    $0x1,%eax
0832a5f3 +0x3d:  jne    0832a61a <+0x64>
0832a5f5 +0x3f:  mov    0x8(%ebp),%eax
0832a5f8 +0x42:  movl   $0x0,0x8(%eax)
0832a5ff +0x49:  mov    0x8(%ebp),%eax
0832a602 +0x4c:  movl   $0x0,0xc(%eax)
0832a609 +0x53:  mov    0x8(%ebp),%eax
0832a60c +0x56:  movl   $0x0,0x10(%eax)
0832a613 +0x5d:  mov    0x8(%ebp),%eax
0832a616 +0x60:  movb   $0x0,0x20(%eax)
0832a61a +0x64:  mov    -0xc(%ebp),%eax
0832a61d +0x67:  movl   $0x0,0x8(%eax)
0832a624 +0x6e:  mov    -0xc(%ebp),%eax
0832a627 +0x71:  movl   $0x0,0x4(%eax)
0832a62e +0x78:  mov    -0xc(%ebp),%eax
0832a631 +0x7b:  movl   $0x0,(%eax)
0832a637 +0x81:  leave
0832a638 +0x82:  ret
```

## 反编译 C

```c
// CCharacBloodDungeon::ResetDaily @ 0x832a5b6

/* CCharacBloodDungeon::ResetDaily() */

void __thiscall CCharacBloodDungeon::ResetDaily(CCharacBloodDungeon *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  *(undefined4 *)(this + 0x18) = 0;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  ptVar1 = localtime_r(local_14,&local_40);
  if (ptVar1->tm_wday == 1) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x20] = (CCharacBloodDungeon)0x0;
  }
  ptVar1->tm_hour = 0;
  ptVar1->tm_min = 0;
  ptVar1->tm_sec = 0;
  return;
}
```
