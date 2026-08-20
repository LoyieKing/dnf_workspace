# handle_cash_error

`_ZN5nexon4cash9NCashImpl17handle_cash_errorEi`

`nexon::cash::NCashImpl::handle_cash_error(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad1e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad1e0  _ZN5nexon4cash9NCashImpl17handle_cash_errorEi
#           nexon::cash::NCashImpl::handle_cash_error(int)
# range [0x081ad1e0, 0x081ad2bf]
081ad1e0 +0x00:  push   %ebp
081ad1e1 +0x01:  mov    %esp,%ebp
081ad1e3 +0x03:  sub    $0x28,%esp
081ad1e6 +0x06:  movl   $0x10,-0xc(%ebp)
081ad1ed +0x0d:  mov    0xc(%ebp),%eax
081ad1f0 +0x10:  sub    $0x5,%eax
081ad1f3 +0x13:  cmp    $0x5,%eax
081ad1f6 +0x16:  ja     081ad299 <+0xb9>
081ad1fc +0x1c:  mov    &data#d7ac1283(.rodata)(,%eax,4),%eax
081ad203 +0x23:  jmp    *%eax
081ad205 +0x25:  movl   $0x4,-0xc(%ebp)
081ad20c +0x2c:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad214 +0x34:  movl   $"[%s] DB error occur\n",(%esp)
081ad21b +0x3b:  call   0807db60 <_init+0x458>
081ad220 +0x40:  jmp    081ad2bb <+0xdb>
081ad225 +0x45:  movl   $0x3,-0xc(%ebp)
081ad22c +0x4c:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad234 +0x54:  movl   $"[%s] NO REMIN CASH\n",(%esp)
081ad23b +0x5b:  call   0807db60 <_init+0x458>
081ad240 +0x60:  jmp    081ad2bb <+0xdb>
081ad242 +0x62:  movl   $0x5,-0xc(%ebp)
081ad249 +0x69:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad251 +0x71:  movl   $"[%s] E_GIFT_LIMIT_OVER Remain cash\n",(%esp)
081ad258 +0x78:  call   0807db60 <_init+0x458>
081ad25d +0x7d:  jmp    081ad2bb <+0xdb>
081ad25f +0x7f:  movl   $0x6,-0xc(%ebp)
081ad266 +0x86:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad26e +0x8e:  movl   $"[%s] E_GIFT_NOT_READY error\n",(%esp)
081ad275 +0x95:  call   0807db60 <_init+0x458>
081ad27a +0x9a:  jmp    081ad2bb <+0xdb>
081ad27c +0x9c:  movl   $0x7,-0xc(%ebp)
081ad283 +0xa3:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad28b +0xab:  movl   $"[%s] E_GIFT_UNDER_AGE error\n",(%esp)
081ad292 +0xb2:  call   0807db60 <_init+0x458>
081ad297 +0xb7:  jmp    081ad2bb <+0xdb>
081ad299 +0xb9:  movl   $0x10,-0xc(%ebp)
081ad2a0 +0xc0:  mov    0xc(%ebp),%eax
081ad2a3 +0xc3:  mov    %eax,0x8(%esp)
081ad2a7 +0xc7:  movl   $&_ZZN5nexon4cash9NCashImpl17handle_cash_errorEiE12__FUNCTION__,0x4(%esp)
081ad2af +0xcf:  movl   $"[%s] Undefined cash error: %u\n",(%esp)
081ad2b6 +0xd6:  call   0807db60 <_init+0x458>
081ad2bb +0xdb:  mov    -0xc(%ebp),%eax
081ad2be +0xde:  leave
081ad2bf +0xdf:  ret
```

## 反编译 C

```c
// nexon::cash::NCashImpl::handle_cash_error @ 0x81ad1e0

/* nexon::cash::NCashImpl::handle_cash_error(int) */

undefined4 __thiscall nexon::cash::NCashImpl::handle_cash_error(NCashImpl *this,int param_1)

{
  undefined4 local_10;
  
  switch(param_1) {
  case 5:
    local_10 = 3;
    printf("[%s] NO REMIN CASH\n","handle_cash_error");
    break;
  case 6:
    local_10 = 4;
    printf("[%s] DB error occur\n","handle_cash_error");
    break;
  default:
    local_10 = 0x10;
    printf("[%s] Undefined cash error: %u\n","handle_cash_error",param_1);
    break;
  case 8:
    local_10 = 5;
    printf("[%s] E_GIFT_LIMIT_OVER Remain cash\n","handle_cash_error");
    break;
  case 9:
    local_10 = 6;
    printf("[%s] E_GIFT_NOT_READY error\n","handle_cash_error");
    break;
  case 10:
    local_10 = 7;
    printf("[%s] E_GIFT_UNDER_AGE error\n","handle_cash_error");
  }
  return local_10;
}
```
