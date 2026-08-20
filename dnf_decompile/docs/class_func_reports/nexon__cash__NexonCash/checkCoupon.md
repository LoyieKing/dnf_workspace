# checkCoupon

`_ZN5nexon4cash9NexonCash11checkCouponEv`

`nexon::cash::NexonCash::checkCoupon()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae3e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae3e8  _ZN5nexon4cash9NexonCash11checkCouponEv
#           nexon::cash::NexonCash::checkCoupon()
# range [0x081ae3e8, 0x081ae3fd]
081ae3e8 +0x00:  push   %ebp
081ae3e9 +0x01:  mov    %esp,%ebp
081ae3eb +0x03:  sub    $0x18,%esp
081ae3ee +0x06:  mov    0x8(%ebp),%eax
081ae3f1 +0x09:  mov    (%eax),%eax
081ae3f3 +0x0b:  mov    %eax,(%esp)
081ae3f6 +0x0e:  call   081aea0a <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x4f9>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x4f9
081ae3fb +0x13:  leave
081ae3fc +0x14:  ret
081ae3fd +0x15:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::checkCoupon @ 0x81ae3e8

/* nexon::cash::NexonCash::checkCoupon() */

void nexon::cash::NexonCash::checkCoupon(void)

{
  NCashImpl::checkCoupon();
  return;
}
```
