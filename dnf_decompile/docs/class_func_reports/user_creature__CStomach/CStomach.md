# CStomach

`_ZN13user_creature8CStomachC1Ev`

`user_creature::CStomach::CStomach()`

| 类 | 地址 |
|---|---|
| `user_creature::CStomach` | `0x08336cd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336cd8  _ZN13user_creature8CStomachC1Ev
#           user_creature::CStomach::CStomach()
# range [0x08336cd8, 0x08336cfb]
08336cd8 +0x00:  push   %ebp
08336cd9 +0x01:  mov    %esp,%ebp
08336cdb +0x03:  sub    $0x18,%esp
08336cde +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08336ce5 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08336cea +0x12:  mov    0x8(%ebp),%edx
08336ced +0x15:  mov    %eax,(%edx)
08336cef +0x17:  mov    0x8(%ebp),%eax
08336cf2 +0x1a:  mov    $0x42c80000,%edx
08336cf7 +0x1f:  mov    %edx,0x4(%eax)
08336cfa +0x22:  leave
08336cfb +0x23:  ret
```

## 反编译 C

```c
// user_creature::CStomach::CStomach @ 0x8336cd8

/* user_creature::CStomach::CStomach() */

void __thiscall user_creature::CStomach::CStomach(CStomach *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = 0x42c80000;
  return;
}
```
