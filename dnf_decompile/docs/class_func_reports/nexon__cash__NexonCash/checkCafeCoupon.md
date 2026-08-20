# checkCafeCoupon

`_ZN5nexon4cash9NexonCash15checkCafeCouponEv`

`nexon::cash::NexonCash::checkCafeCoupon()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae414` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae414  _ZN5nexon4cash9NexonCash15checkCafeCouponEv
#           nexon::cash::NexonCash::checkCafeCoupon()
# range [0x081ae414, 0x081ae429]
081ae414 +0x00:  push   %ebp
081ae415 +0x01:  mov    %esp,%ebp
081ae417 +0x03:  sub    $0x18,%esp
081ae41a +0x06:  mov    0x8(%ebp),%eax
081ae41d +0x09:  mov    (%eax),%eax
081ae41f +0x0b:  mov    %eax,(%esp)
081ae422 +0x0e:  call   081aea1e <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x50d>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x50d
081ae427 +0x13:  leave
081ae428 +0x14:  ret
081ae429 +0x15:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::checkCafeCoupon @ 0x81ae414

/* nexon::cash::NexonCash::checkCafeCoupon() */

void nexon::cash::NexonCash::checkCafeCoupon(void)

{
  NCashImpl::checkCafeCoupon();
  return;
}
```
