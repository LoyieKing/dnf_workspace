# ResetDaily

`_ZN12CBoosterGage10ResetDailyEv`

`CBoosterGage::ResetDaily()`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd322  _ZN12CBoosterGage10ResetDailyEv
#           CBoosterGage::ResetDaily()
# range [0x080dd322, 0x080dd33f]
080dd322 +0x00:  push   %ebp
080dd323 +0x01:  mov    %esp,%ebp
080dd325 +0x03:  sub    $0x18,%esp
080dd328 +0x06:  mov    0x8(%ebp),%eax
080dd32b +0x09:  mov    %eax,(%esp)
080dd32e +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080dd333 +0x11:  mov    0x8(%ebp),%eax
080dd336 +0x14:  movl   $0x0,0x8(%eax)
080dd33d +0x1b:  leave
080dd33e +0x1c:  ret
080dd33f +0x1d:  nop
```

## 反编译 C

```c
// CBoosterGage::ResetDaily @ 0x80dd322

/* CBoosterGage::ResetDaily() */

void __thiscall CBoosterGage::ResetDaily(CBoosterGage *this)

{
  charac_expand::CData::alter((CData *)this);
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
