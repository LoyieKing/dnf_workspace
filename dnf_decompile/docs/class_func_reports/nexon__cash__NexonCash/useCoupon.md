# useCoupon

`_ZN5nexon4cash9NexonCash9useCouponEv`

`nexon::cash::NexonCash::useCoupon()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae3fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae3fe  _ZN5nexon4cash9NexonCash9useCouponEv
#           nexon::cash::NexonCash::useCoupon()
# range [0x081ae3fe, 0x081ae413]
081ae3fe +0x00:  push   %ebp
081ae3ff +0x01:  mov    %esp,%ebp
081ae401 +0x03:  sub    $0x18,%esp
081ae404 +0x06:  mov    0x8(%ebp),%eax
081ae407 +0x09:  mov    (%eax),%eax
081ae409 +0x0b:  mov    %eax,(%esp)
081ae40c +0x0e:  call   081aea14 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x503>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x503
081ae411 +0x13:  leave
081ae412 +0x14:  ret
081ae413 +0x15:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::useCoupon @ 0x81ae3fe

/* nexon::cash::NexonCash::useCoupon() */

void nexon::cash::NexonCash::useCoupon(void)

{
  NCashImpl::useCoupon();
  return;
}
```
