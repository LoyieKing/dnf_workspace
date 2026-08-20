# ~CCharacInformNotice

`_ZN19CCharacInformNoticeD1Ev`

`CCharacInformNotice::~CCharacInformNotice()`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e47b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e47b8  _ZN19CCharacInformNoticeD1Ev
#           CCharacInformNotice::~CCharacInformNotice()
# range [0x080e47b8, 0x080e47e7]
080e47b8 +0x00:  push   %ebp
080e47b9 +0x01:  mov    %esp,%ebp
080e47bb +0x03:  sub    $0x18,%esp
080e47be +0x06:  mov    0x8(%ebp),%eax
080e47c1 +0x09:  movl   $&_ZTV19CCharacInformNotice+0x8,(%eax)
080e47c7 +0x0f:  mov    0x8(%ebp),%eax
080e47ca +0x12:  mov    %eax,(%esp)
080e47cd +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
080e47d2 +0x1a:  mov    $0x0,%eax
080e47d7 +0x1f:  test   %al,%al
080e47d9 +0x21:  je     080e47e6 <+0x2e>
080e47db +0x23:  mov    0x8(%ebp),%eax
080e47de +0x26:  mov    %eax,(%esp)
080e47e1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e47e6 +0x2e:  leave
080e47e7 +0x2f:  ret
```

## 反编译 C

```c
// CCharacInformNotice::~CCharacInformNotice @ 0x80e47b8

/* WARNING: Removing unreachable block (ram,0x080e47db) */
/* CCharacInformNotice::~CCharacInformNotice() */

void __thiscall CCharacInformNotice::~CCharacInformNotice(CCharacInformNotice *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b2e968;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
