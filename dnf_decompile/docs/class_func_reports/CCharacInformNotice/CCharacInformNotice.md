# CCharacInformNotice

`_ZN19CCharacInformNoticeC1Ev`

`CCharacInformNotice::CCharacInformNotice()`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4790  _ZN19CCharacInformNoticeC1Ev
#           CCharacInformNotice::CCharacInformNotice()
# range [0x080e4790, 0x080e47b7]
080e4790 +0x00:  push   %ebp
080e4791 +0x01:  mov    %esp,%ebp
080e4793 +0x03:  sub    $0x18,%esp
080e4796 +0x06:  mov    0x8(%ebp),%eax
080e4799 +0x09:  mov    %eax,(%esp)
080e479c +0x0c:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
080e47a1 +0x11:  mov    0x8(%ebp),%eax
080e47a4 +0x14:  movl   $&_ZTV19CCharacInformNotice+0x8,(%eax)
080e47aa +0x1a:  mov    0x8(%ebp),%eax
080e47ad +0x1d:  mov    %eax,(%esp)
080e47b0 +0x20:  call   080e4ab8 <_ZN19CCharacInformNotice6_resetEv>  ; CCharacInformNotice::_reset()
080e47b5 +0x25:  leave
080e47b6 +0x26:  ret
080e47b7 +0x27:  nop
```

## 反编译 C

```c
// CCharacInformNotice::CCharacInformNotice @ 0x80e4790

/* CCharacInformNotice::CCharacInformNotice() */

void __thiscall CCharacInformNotice::CCharacInformNotice(CCharacInformNotice *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b2e968;
  _reset(this);
  return;
}
```
