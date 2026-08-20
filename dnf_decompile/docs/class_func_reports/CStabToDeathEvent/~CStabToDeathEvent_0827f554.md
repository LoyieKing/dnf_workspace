# ~CStabToDeathEvent

`_ZN17CStabToDeathEventD0Ev`

`CStabToDeathEvent::~CStabToDeathEvent()`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f554  _ZN17CStabToDeathEventD0Ev
#           CStabToDeathEvent::~CStabToDeathEvent()
# range [0x0827f554, 0x0827f571]
0827f554 +0x00:  push   %ebp
0827f555 +0x01:  mov    %esp,%ebp
0827f557 +0x03:  sub    $0x18,%esp
0827f55a +0x06:  mov    0x8(%ebp),%eax
0827f55d +0x09:  mov    %eax,(%esp)
0827f560 +0x0c:  call   0827f524 <_ZN17CStabToDeathEventD1Ev>  ; CStabToDeathEvent::~CStabToDeathEvent()
0827f565 +0x11:  mov    0x8(%ebp),%eax
0827f568 +0x14:  mov    %eax,(%esp)
0827f56b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827f570 +0x1c:  leave
0827f571 +0x1d:  ret
```

## 反编译 C

```c
// CStabToDeathEvent::~CStabToDeathEvent @ 0x827f554

/* CStabToDeathEvent::~CStabToDeathEvent() */

void __thiscall CStabToDeathEvent::~CStabToDeathEvent(CStabToDeathEvent *this)

{
  ~CStabToDeathEvent(this);
  operator_delete(this);
  return;
}
```
