# ~CExpDoubleEvent

`_ZN15CExpDoubleEventD0Ev`

`CExpDoubleEvent::~CExpDoubleEvent()`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849ac9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ac9a  _ZN15CExpDoubleEventD0Ev
#           CExpDoubleEvent::~CExpDoubleEvent()
# range [0x0849ac9a, 0x0849acb7]
0849ac9a +0x00:  push   %ebp
0849ac9b +0x01:  mov    %esp,%ebp
0849ac9d +0x03:  sub    $0x18,%esp
0849aca0 +0x06:  mov    0x8(%ebp),%eax
0849aca3 +0x09:  mov    %eax,(%esp)
0849aca6 +0x0c:  call   0849ac6a <_ZN15CExpDoubleEventD1Ev>  ; CExpDoubleEvent::~CExpDoubleEvent()
0849acab +0x11:  mov    0x8(%ebp),%eax
0849acae +0x14:  mov    %eax,(%esp)
0849acb1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0849acb6 +0x1c:  leave
0849acb7 +0x1d:  ret
```

## 反编译 C

```c
// CExpDoubleEvent::~CExpDoubleEvent @ 0x849ac9a

/* CExpDoubleEvent::~CExpDoubleEvent() */

void __thiscall CExpDoubleEvent::~CExpDoubleEvent(CExpDoubleEvent *this)

{
  ~CExpDoubleEvent(this);
  operator_delete(this);
  return;
}
```
