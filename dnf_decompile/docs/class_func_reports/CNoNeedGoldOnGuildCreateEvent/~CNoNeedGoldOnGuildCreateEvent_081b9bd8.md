# ~CNoNeedGoldOnGuildCreateEvent

`_ZN29CNoNeedGoldOnGuildCreateEventD0Ev`

`CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent()`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9bd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9bd8  _ZN29CNoNeedGoldOnGuildCreateEventD0Ev
#           CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent()
# range [0x081b9bd8, 0x081b9bf5]
081b9bd8 +0x00:  push   %ebp
081b9bd9 +0x01:  mov    %esp,%ebp
081b9bdb +0x03:  sub    $0x18,%esp
081b9bde +0x06:  mov    0x8(%ebp),%eax
081b9be1 +0x09:  mov    %eax,(%esp)
081b9be4 +0x0c:  call   081b9ba8 <_ZN29CNoNeedGoldOnGuildCreateEventD1Ev>  ; CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent()
081b9be9 +0x11:  mov    0x8(%ebp),%eax
081b9bec +0x14:  mov    %eax,(%esp)
081b9bef +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9bf4 +0x1c:  leave
081b9bf5 +0x1d:  ret
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent @ 0x81b9bd8

/* CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::~CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  ~CNoNeedGoldOnGuildCreateEvent(this);
  operator_delete(this);
  return;
}
```
