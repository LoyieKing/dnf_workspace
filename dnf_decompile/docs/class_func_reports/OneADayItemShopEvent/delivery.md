# delivery

`_ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg`

`OneADayItemShopEvent::delivery(DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba116  _ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg
#           OneADayItemShopEvent::delivery(DeliveryMsg&)
# range [0x081ba116, 0x081ba155]
081ba116 +0x00:  push   %ebp
081ba117 +0x01:  mov    %esp,%ebp
081ba119 +0x03:  sub    $0x18,%esp
081ba11c +0x06:  mov    0xc(%ebp),%eax
081ba11f +0x09:  mov    (%eax),%eax
081ba121 +0x0b:  cmp    $0x1,%eax
081ba124 +0x0e:  je     081ba12d <+0x17>
081ba126 +0x10:  cmp    $0x2,%eax
081ba129 +0x13:  je     081ba141 <+0x2b>
081ba12b +0x15:  jmp    081ba153 <+0x3d>
081ba12d +0x17:  mov    0xc(%ebp),%eax
081ba130 +0x1a:  mov    %eax,0x4(%esp)
081ba134 +0x1e:  mov    0x8(%ebp),%eax
081ba137 +0x21:  mov    %eax,(%esp)
081ba13a +0x24:  call   081ba21e <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg>  ; OneADayItemShopEvent::questClearLog(DeliveryMsg&)
081ba13f +0x29:  jmp    081ba153 <+0x3d>
081ba141 +0x2b:  mov    0xc(%ebp),%eax
081ba144 +0x2e:  mov    %eax,0x4(%esp)
081ba148 +0x32:  mov    0x8(%ebp),%eax
081ba14b +0x35:  mov    %eax,(%esp)
081ba14e +0x38:  call   081ba5e8 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg>  ; OneADayItemShopEvent::buyItemLog(DeliveryMsg&)
081ba153 +0x3d:  leave
081ba154 +0x3e:  ret
081ba155 +0x3f:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::delivery @ 0x81ba116

/* OneADayItemShopEvent::delivery(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::delivery(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  if (*(int *)param_1 == 1) {
    questClearLog(this,param_1);
  }
  else if (*(int *)param_1 == 2) {
    buyItemLog(this,param_1);
  }
  return;
}
```
