# handle_coupon_error

`_ZN5nexon4cash9NCashImpl19handle_coupon_errorEi`

`nexon::cash::NCashImpl::handle_coupon_error(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad2c0  _ZN5nexon4cash9NCashImpl19handle_coupon_errorEi
#           nexon::cash::NCashImpl::handle_coupon_error(int)
# range [0x081ad2c0, 0x081ad315]
081ad2c0 +0x00:  push   %ebp
081ad2c1 +0x01:  mov    %esp,%ebp
081ad2c3 +0x03:  sub    $0x28,%esp
081ad2c6 +0x06:  movl   $0x10,-0xc(%ebp)
081ad2cd +0x0d:  mov    0xc(%ebp),%eax
081ad2d0 +0x10:  cmp    $0x1,%eax
081ad2d3 +0x13:  je     081ad307 <+0x47>
081ad2d5 +0x15:  cmp    $0x1,%eax
081ad2d8 +0x18:  jg     081ad2e0 <+0x20>
081ad2da +0x1a:  test   %eax,%eax
081ad2dc +0x1c:  je     081ad30a <+0x4a>
081ad2de +0x1e:  jmp    081ad2ea <+0x2a>
081ad2e0 +0x20:  cmp    $0x2,%eax
081ad2e3 +0x23:  je     081ad30d <+0x4d>
081ad2e5 +0x25:  cmp    $0x3,%eax
081ad2e8 +0x28:  je     081ad310 <+0x50>
081ad2ea +0x2a:  mov    0xc(%ebp),%eax
081ad2ed +0x2d:  mov    %eax,0x8(%esp)
081ad2f1 +0x31:  movl   $&_ZZN5nexon4cash9NCashImpl19handle_coupon_errorEiE12__FUNCTION__,0x4(%esp)
081ad2f9 +0x39:  movl   $"[%s] Invalid coupon packet_id: %u\n",(%esp)
081ad300 +0x40:  call   0807db60 <_init+0x458>
081ad305 +0x45:  jmp    081ad311 <+0x51>
081ad307 +0x47:  nop
081ad308 +0x48:  jmp    081ad311 <+0x51>
081ad30a +0x4a:  nop
081ad30b +0x4b:  jmp    081ad311 <+0x51>
081ad30d +0x4d:  nop
081ad30e +0x4e:  jmp    081ad311 <+0x51>
081ad310 +0x50:  nop
081ad311 +0x51:  mov    -0xc(%ebp),%eax
081ad314 +0x54:  leave
081ad315 +0x55:  ret
```

## 反编译 C

```c
// nexon::cash::NCashImpl::handle_coupon_error @ 0x81ad2c0

/* nexon::cash::NCashImpl::handle_coupon_error(int) */

undefined4 __thiscall nexon::cash::NCashImpl::handle_coupon_error(NCashImpl *this,int param_1)

{
  if (param_1 != 1) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        return 0x10;
      }
    }
    else {
      if (param_1 == 2) {
        return 0x10;
      }
      if (param_1 == 3) {
        return 0x10;
      }
    }
    printf("[%s] Invalid coupon packet_id: %u\n","handle_coupon_error",param_1);
  }
  return 0x10;
}
```
