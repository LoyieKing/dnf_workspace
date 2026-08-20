# ~CIntegratedPvPServerMatchEvent

`_ZN30CIntegratedPvPServerMatchEventD0Ev`

`CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent()`

| 类 | 地址 |
|---|---|
| `CIntegratedPvPServerMatchEvent` | `0x0811d484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d484  _ZN30CIntegratedPvPServerMatchEventD0Ev
#           CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent()
# range [0x0811d484, 0x0811d4a1]
0811d484 +0x00:  push   %ebp
0811d485 +0x01:  mov    %esp,%ebp
0811d487 +0x03:  sub    $0x18,%esp
0811d48a +0x06:  mov    0x8(%ebp),%eax
0811d48d +0x09:  mov    %eax,(%esp)
0811d490 +0x0c:  call   0811d454 <_ZN30CIntegratedPvPServerMatchEventD1Ev>  ; CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent()
0811d495 +0x11:  mov    0x8(%ebp),%eax
0811d498 +0x14:  mov    %eax,(%esp)
0811d49b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811d4a0 +0x1c:  leave
0811d4a1 +0x1d:  ret
```

## 反编译 C

```c
// CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent @ 0x811d484

/* CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::~CIntegratedPvPServerMatchEvent
          (CIntegratedPvPServerMatchEvent *this)

{
  ~CIntegratedPvPServerMatchEvent(this);
  operator_delete(this);
  return;
}
```
