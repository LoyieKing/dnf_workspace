# ~CAutoMarketConditionsControlEvent

`_ZN33CAutoMarketConditionsControlEventD0Ev`

`CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109c60  _ZN33CAutoMarketConditionsControlEventD0Ev
#           CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent()
# range [0x08109c60, 0x08109c7d]
08109c60 +0x00:  push   %ebp
08109c61 +0x01:  mov    %esp,%ebp
08109c63 +0x03:  sub    $0x18,%esp
08109c66 +0x06:  mov    0x8(%ebp),%eax
08109c69 +0x09:  mov    %eax,(%esp)
08109c6c +0x0c:  call   08109c30 <_ZN33CAutoMarketConditionsControlEventD1Ev>  ; CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent()
08109c71 +0x11:  mov    0x8(%ebp),%eax
08109c74 +0x14:  mov    %eax,(%esp)
08109c77 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08109c7c +0x1c:  leave
08109c7d +0x1d:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent @ 0x8109c60

/* CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::~CAutoMarketConditionsControlEvent
          (CAutoMarketConditionsControlEvent *this)

{
  ~CAutoMarketConditionsControlEvent(this);
  operator_delete(this);
  return;
}
```
