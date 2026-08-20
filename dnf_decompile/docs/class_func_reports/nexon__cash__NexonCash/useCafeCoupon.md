# useCafeCoupon

`_ZN5nexon4cash9NexonCash13useCafeCouponEv`

`nexon::cash::NexonCash::useCafeCoupon()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae42a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae42a  _ZN5nexon4cash9NexonCash13useCafeCouponEv
#           nexon::cash::NexonCash::useCafeCoupon()
# range [0x081ae42a, 0x081ae43f]
081ae42a +0x00:  push   %ebp
081ae42b +0x01:  mov    %esp,%ebp
081ae42d +0x03:  sub    $0x18,%esp
081ae430 +0x06:  mov    0x8(%ebp),%eax
081ae433 +0x09:  mov    (%eax),%eax
081ae435 +0x0b:  mov    %eax,(%esp)
081ae438 +0x0e:  call   081aea28 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x517>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x517
081ae43d +0x13:  leave
081ae43e +0x14:  ret
081ae43f +0x15:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::useCafeCoupon @ 0x81ae42a

/* nexon::cash::NexonCash::useCafeCoupon() */

void nexon::cash::NexonCash::useCafeCoupon(void)

{
  NCashImpl::useCafeCoupon();
  return;
}
```
