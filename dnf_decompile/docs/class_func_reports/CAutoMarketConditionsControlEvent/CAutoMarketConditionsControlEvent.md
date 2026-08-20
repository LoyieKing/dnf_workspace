# CAutoMarketConditionsControlEvent

`_ZN33CAutoMarketConditionsControlEventC1Ev`

`CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109c14  _ZN33CAutoMarketConditionsControlEventC1Ev
#           CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent()
# range [0x08109c14, 0x08109c2f]
08109c14 +0x00:  push   %ebp
08109c15 +0x01:  mov    %esp,%ebp
08109c17 +0x03:  sub    $0x18,%esp
08109c1a +0x06:  mov    0x8(%ebp),%eax
08109c1d +0x09:  mov    %eax,(%esp)
08109c20 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08109c25 +0x11:  mov    0x8(%ebp),%eax
08109c28 +0x14:  movl   $&_ZTV33CAutoMarketConditionsControlEvent+0x8,(%eax)
08109c2e +0x1a:  leave
08109c2f +0x1b:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent @ 0x8109c14

/* CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CAutoMarketConditionsControlEvent_08b46348;
  return;
}
```
