# deliveryEnd

`_ZN20OneADayItemShopEvent11deliveryEndEP9CDelivery`

`OneADayItemShopEvent::deliveryEnd(CDelivery*)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba19c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba19c  _ZN20OneADayItemShopEvent11deliveryEndEP9CDelivery
#           OneADayItemShopEvent::deliveryEnd(CDelivery*)
# range [0x081ba19c, 0x081ba1e1]
081ba19c +0x00:  push   %ebp
081ba19d +0x01:  mov    %esp,%ebp
081ba19f +0x03:  sub    $0x18,%esp
081ba1a2 +0x06:  cmpl   $0x0,0xc(%ebp)
081ba1a6 +0x0a:  je     081ba1de <+0x42>
081ba1a8 +0x0c:  mov    0x8(%ebp),%eax
081ba1ab +0x0f:  mov    %eax,0x8(%esp)
081ba1af +0x13:  movl   $0x1,0x4(%esp)
081ba1b7 +0x1b:  mov    0xc(%ebp),%eax
081ba1ba +0x1e:  mov    %eax,(%esp)
081ba1bd +0x21:  call   081165fa <_ZN9CDelivery6detachEiP10CEventBase>  ; CDelivery::detach(int, CEventBase*)
081ba1c2 +0x26:  mov    0x8(%ebp),%eax
081ba1c5 +0x29:  mov    %eax,0x8(%esp)
081ba1c9 +0x2d:  movl   $0x2,0x4(%esp)
081ba1d1 +0x35:  mov    0xc(%ebp),%eax
081ba1d4 +0x38:  mov    %eax,(%esp)
081ba1d7 +0x3b:  call   081165fa <_ZN9CDelivery6detachEiP10CEventBase>  ; CDelivery::detach(int, CEventBase*)
081ba1dc +0x40:  jmp    081ba1df <+0x43>
081ba1de +0x42:  nop
081ba1df +0x43:  leave
081ba1e0 +0x44:  ret
081ba1e1 +0x45:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::deliveryEnd @ 0x81ba19c

/* OneADayItemShopEvent::deliveryEnd(CDelivery*) */

void __thiscall OneADayItemShopEvent::deliveryEnd(OneADayItemShopEvent *this,CDelivery *param_1)

{
  if (param_1 != (CDelivery *)0x0) {
    CDelivery::detach((int)param_1,(CEventBase *)0x1);
    CDelivery::detach((int)param_1,(CEventBase *)0x2);
  }
  return;
}
```
