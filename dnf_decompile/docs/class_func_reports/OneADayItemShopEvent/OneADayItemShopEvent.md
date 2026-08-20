# OneADayItemShopEvent

`_ZN20OneADayItemShopEventC1Ev`

`OneADayItemShopEvent::OneADayItemShopEvent()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081b9fb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9fb4  _ZN20OneADayItemShopEventC1Ev
#           OneADayItemShopEvent::OneADayItemShopEvent()
# range [0x081b9fb4, 0x081b9fcf]
081b9fb4 +0x00:  push   %ebp
081b9fb5 +0x01:  mov    %esp,%ebp
081b9fb7 +0x03:  sub    $0x18,%esp
081b9fba +0x06:  mov    0x8(%ebp),%eax
081b9fbd +0x09:  mov    %eax,(%esp)
081b9fc0 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b9fc5 +0x11:  mov    0x8(%ebp),%eax
081b9fc8 +0x14:  movl   $&_ZTV20OneADayItemShopEvent+0x8,(%eax)
081b9fce +0x1a:  leave
081b9fcf +0x1b:  ret
```

## 反编译 C

```c
// OneADayItemShopEvent::OneADayItemShopEvent @ 0x81b9fb4

/* OneADayItemShopEvent::OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__OneADayItemShopEvent_08bbec48;
  return;
}
```
