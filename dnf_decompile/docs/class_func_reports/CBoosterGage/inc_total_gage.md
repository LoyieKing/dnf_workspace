# inc_total_gage

`_ZN12CBoosterGage14inc_total_gageEi`

`CBoosterGage::inc_total_gage(int)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dc640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc640  _ZN12CBoosterGage14inc_total_gageEi
#           CBoosterGage::inc_total_gage(int)
# range [0x080dc640, 0x080dc663]
080dc640 +0x00:  push   %ebp
080dc641 +0x01:  mov    %esp,%ebp
080dc643 +0x03:  sub    $0x18,%esp
080dc646 +0x06:  mov    0x8(%ebp),%eax
080dc649 +0x09:  mov    %eax,(%esp)
080dc64c +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080dc651 +0x11:  mov    0x8(%ebp),%eax
080dc654 +0x14:  mov    0x8(%eax),%eax
080dc657 +0x17:  mov    %eax,%edx
080dc659 +0x19:  add    0xc(%ebp),%edx
080dc65c +0x1c:  mov    0x8(%ebp),%eax
080dc65f +0x1f:  mov    %edx,0x8(%eax)
080dc662 +0x22:  leave
080dc663 +0x23:  ret
```

## 反编译 C

```c
// CBoosterGage::inc_total_gage @ 0x80dc640

/* CBoosterGage::inc_total_gage(int) */

void __thiscall CBoosterGage::inc_total_gage(CBoosterGage *this,int param_1)

{
  charac_expand::CData::alter((CData *)this);
  *(int *)(this + 8) = *(int *)(this + 8) + param_1;
  return;
}
```
