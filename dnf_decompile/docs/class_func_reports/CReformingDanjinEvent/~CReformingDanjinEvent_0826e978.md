# ~CReformingDanjinEvent

`_ZN21CReformingDanjinEventD0Ev`

`CReformingDanjinEvent::~CReformingDanjinEvent()`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826e978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826e978  _ZN21CReformingDanjinEventD0Ev
#           CReformingDanjinEvent::~CReformingDanjinEvent()
# range [0x0826e978, 0x0826e995]
0826e978 +0x00:  push   %ebp
0826e979 +0x01:  mov    %esp,%ebp
0826e97b +0x03:  sub    $0x18,%esp
0826e97e +0x06:  mov    0x8(%ebp),%eax
0826e981 +0x09:  mov    %eax,(%esp)
0826e984 +0x0c:  call   0826e948 <_ZN21CReformingDanjinEventD1Ev>  ; CReformingDanjinEvent::~CReformingDanjinEvent()
0826e989 +0x11:  mov    0x8(%ebp),%eax
0826e98c +0x14:  mov    %eax,(%esp)
0826e98f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826e994 +0x1c:  leave
0826e995 +0x1d:  ret
```

## 反编译 C

```c
// CReformingDanjinEvent::~CReformingDanjinEvent @ 0x826e978

/* CReformingDanjinEvent::~CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::~CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  ~CReformingDanjinEvent(this);
  operator_delete(this);
  return;
}
```
