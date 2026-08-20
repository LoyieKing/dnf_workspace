# locale

`_ZNSt6localeC1ERKS_`

`std::locale::locale(std::locale const&)`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dadf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dadf0  _ZNSt6localeC1ERKS_
#           std::locale::locale(std::locale const&)
# range [0x086dadf0, 0x086dae1f]
086dadf0 +0x00:  push   %ebp
086dadf1 +0x01:  mov    %esp,%ebp
086dadf3 +0x03:  mov    0xc(%ebp),%eax
086dadf6 +0x06:  mov    0x8(%ebp),%edx
086dadf9 +0x09:  mov    (%eax),%eax
086dadfb +0x0b:  mov    %eax,(%edx)
086dadfd +0x0d:  mov    $&data#bb92cc41(.plt),%edx
086dae02 +0x12:  test   %edx,%edx
086dae04 +0x14:  je     086dae0c <+0x1c>
086dae06 +0x16:  lock addl $0x1,(%eax)
086dae0a +0x1a:  pop    %ebp
086dae0b +0x1b:  ret
086dae0c +0x1c:  addl   $0x1,(%eax)
086dae0f +0x1f:  pop    %ebp
086dae10 +0x20:  ret
086dae11 +0x21:  nop
086dae12 +0x22:  nop
086dae13 +0x23:  nop
086dae14 +0x24:  nop
086dae15 +0x25:  nop
086dae16 +0x26:  nop
086dae17 +0x27:  nop
086dae18 +0x28:  nop
086dae19 +0x29:  nop
086dae1a +0x2a:  nop
086dae1b +0x2b:  nop
086dae1c +0x2c:  nop
086dae1d +0x2d:  nop
086dae1e +0x2e:  nop
086dae1f +0x2f:  nop
```

## 反编译 C

```c
// std::locale::locale @ 0x86dadf0

/* WARNING: Removing unreachable block (ram,0x086dae0c) */
/* std::locale::locale(std::locale const&) */

void __thiscall std::locale::locale(locale *this,locale *param_1)

{
  _Impl *p_Var1;
  
  p_Var1 = param_1->_M_impl;
  this->_M_impl = p_Var1;
  LOCK();
  p_Var1->_M_refcount = p_Var1->_M_refcount + 1;
  UNLOCK();
  return;
}
```
