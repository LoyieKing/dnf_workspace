# ~OneADayItemShopEvent

`_ZN20OneADayItemShopEventD0Ev`

`OneADayItemShopEvent::~OneADayItemShopEvent()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba000  _ZN20OneADayItemShopEventD0Ev
#           OneADayItemShopEvent::~OneADayItemShopEvent()
# range [0x081ba000, 0x081ba01d]
081ba000 +0x00:  push   %ebp
081ba001 +0x01:  mov    %esp,%ebp
081ba003 +0x03:  sub    $0x18,%esp
081ba006 +0x06:  mov    0x8(%ebp),%eax
081ba009 +0x09:  mov    %eax,(%esp)
081ba00c +0x0c:  call   081b9fd0 <_ZN20OneADayItemShopEventD1Ev>  ; OneADayItemShopEvent::~OneADayItemShopEvent()
081ba011 +0x11:  mov    0x8(%ebp),%eax
081ba014 +0x14:  mov    %eax,(%esp)
081ba017 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081ba01c +0x1c:  leave
081ba01d +0x1d:  ret
```

## 反编译 C

```c
// OneADayItemShopEvent::~OneADayItemShopEvent @ 0x81ba000

/* OneADayItemShopEvent::~OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::~OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  ~OneADayItemShopEvent(this);
  operator_delete(this);
  return;
}
```
