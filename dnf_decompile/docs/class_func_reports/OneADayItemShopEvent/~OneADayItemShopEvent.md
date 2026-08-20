# ~OneADayItemShopEvent

`_ZN20OneADayItemShopEventD1Ev`

`OneADayItemShopEvent::~OneADayItemShopEvent()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081b9fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9fd0  _ZN20OneADayItemShopEventD1Ev
#           OneADayItemShopEvent::~OneADayItemShopEvent()
# range [0x081b9fd0, 0x081b9fff]
081b9fd0 +0x00:  push   %ebp
081b9fd1 +0x01:  mov    %esp,%ebp
081b9fd3 +0x03:  sub    $0x18,%esp
081b9fd6 +0x06:  mov    0x8(%ebp),%eax
081b9fd9 +0x09:  movl   $&_ZTV20OneADayItemShopEvent+0x8,(%eax)
081b9fdf +0x0f:  mov    0x8(%ebp),%eax
081b9fe2 +0x12:  mov    %eax,(%esp)
081b9fe5 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b9fea +0x1a:  mov    $0x0,%eax
081b9fef +0x1f:  test   %al,%al
081b9ff1 +0x21:  je     081b9ffe <+0x2e>
081b9ff3 +0x23:  mov    0x8(%ebp),%eax
081b9ff6 +0x26:  mov    %eax,(%esp)
081b9ff9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9ffe +0x2e:  leave
081b9fff +0x2f:  ret
```

## 反编译 C

```c
// OneADayItemShopEvent::~OneADayItemShopEvent @ 0x81b9fd0

/* WARNING: Removing unreachable block (ram,0x081b9ff3) */
/* OneADayItemShopEvent::~OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::~OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  *(undefined ***)this = &PTR__OneADayItemShopEvent_08bbec48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
