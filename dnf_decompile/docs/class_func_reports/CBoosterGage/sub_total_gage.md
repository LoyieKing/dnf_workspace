# sub_total_gage

`_ZN12CBoosterGage14sub_total_gageEi`

`CBoosterGage::sub_total_gage(int)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dc664` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc664  _ZN12CBoosterGage14sub_total_gageEi
#           CBoosterGage::sub_total_gage(int)
# range [0x080dc664, 0x080dc69b]
080dc664 +0x00:  push   %ebp
080dc665 +0x01:  mov    %esp,%ebp
080dc667 +0x03:  sub    $0x18,%esp
080dc66a +0x06:  mov    0x8(%ebp),%eax
080dc66d +0x09:  mov    %eax,(%esp)
080dc670 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080dc675 +0x11:  mov    0x8(%ebp),%eax
080dc678 +0x14:  mov    0x8(%eax),%eax
080dc67b +0x17:  mov    %eax,%edx
080dc67d +0x19:  sub    0xc(%ebp),%edx
080dc680 +0x1c:  mov    0x8(%ebp),%eax
080dc683 +0x1f:  mov    %edx,0x8(%eax)
080dc686 +0x22:  mov    0x8(%ebp),%eax
080dc689 +0x25:  mov    0x8(%eax),%eax
080dc68c +0x28:  test   %eax,%eax
080dc68e +0x2a:  jns    080dc69a <+0x36>
080dc690 +0x2c:  mov    0x8(%ebp),%eax
080dc693 +0x2f:  movl   $0x0,0x8(%eax)
080dc69a +0x36:  leave
080dc69b +0x37:  ret
```

## 反编译 C

```c
// CBoosterGage::sub_total_gage @ 0x80dc664

/* CBoosterGage::sub_total_gage(int) */

void __thiscall CBoosterGage::sub_total_gage(CBoosterGage *this,int param_1)

{
  charac_expand::CData::alter((CData *)this);
  *(int *)(this + 8) = *(int *)(this + 8) - param_1;
  if (*(int *)(this + 8) < 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}
```
