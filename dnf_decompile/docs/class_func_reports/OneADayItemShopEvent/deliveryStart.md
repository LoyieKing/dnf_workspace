# deliveryStart

`_ZN20OneADayItemShopEvent13deliveryStartEP9CDelivery`

`OneADayItemShopEvent::deliveryStart(CDelivery*)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba156  _ZN20OneADayItemShopEvent13deliveryStartEP9CDelivery
#           OneADayItemShopEvent::deliveryStart(CDelivery*)
# range [0x081ba156, 0x081ba19b]
081ba156 +0x00:  push   %ebp
081ba157 +0x01:  mov    %esp,%ebp
081ba159 +0x03:  sub    $0x18,%esp
081ba15c +0x06:  cmpl   $0x0,0xc(%ebp)
081ba160 +0x0a:  je     081ba198 <+0x42>
081ba162 +0x0c:  mov    0x8(%ebp),%eax
081ba165 +0x0f:  mov    %eax,0x8(%esp)
081ba169 +0x13:  movl   $0x1,0x4(%esp)
081ba171 +0x1b:  mov    0xc(%ebp),%eax
081ba174 +0x1e:  mov    %eax,(%esp)
081ba177 +0x21:  call   081163fa <_ZN9CDelivery6attachEiP10CEventBase>  ; CDelivery::attach(int, CEventBase*)
081ba17c +0x26:  mov    0x8(%ebp),%eax
081ba17f +0x29:  mov    %eax,0x8(%esp)
081ba183 +0x2d:  movl   $0x2,0x4(%esp)
081ba18b +0x35:  mov    0xc(%ebp),%eax
081ba18e +0x38:  mov    %eax,(%esp)
081ba191 +0x3b:  call   081163fa <_ZN9CDelivery6attachEiP10CEventBase>  ; CDelivery::attach(int, CEventBase*)
081ba196 +0x40:  jmp    081ba199 <+0x43>
081ba198 +0x42:  nop
081ba199 +0x43:  leave
081ba19a +0x44:  ret
081ba19b +0x45:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::deliveryStart @ 0x81ba156

/* OneADayItemShopEvent::deliveryStart(CDelivery*) */

void __thiscall OneADayItemShopEvent::deliveryStart(OneADayItemShopEvent *this,CDelivery *param_1)

{
  if (param_1 != (CDelivery *)0x0) {
    CDelivery::attach(param_1,1,(CEventBase *)this);
    CDelivery::attach(param_1,2,(CEventBase *)this);
  }
  return;
}
```
