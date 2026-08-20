# ~COnlinePreliminaryEvent

`_ZN23COnlinePreliminaryEventD0Ev`

`COnlinePreliminaryEvent::~COnlinePreliminaryEvent()`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb4dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb4dc  _ZN23COnlinePreliminaryEventD0Ev
#           COnlinePreliminaryEvent::~COnlinePreliminaryEvent()
# range [0x081bb4dc, 0x081bb4f9]
081bb4dc +0x00:  push   %ebp
081bb4dd +0x01:  mov    %esp,%ebp
081bb4df +0x03:  sub    $0x18,%esp
081bb4e2 +0x06:  mov    0x8(%ebp),%eax
081bb4e5 +0x09:  mov    %eax,(%esp)
081bb4e8 +0x0c:  call   081bb4ac <_ZN23COnlinePreliminaryEventD1Ev>  ; COnlinePreliminaryEvent::~COnlinePreliminaryEvent()
081bb4ed +0x11:  mov    0x8(%ebp),%eax
081bb4f0 +0x14:  mov    %eax,(%esp)
081bb4f3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bb4f8 +0x1c:  leave
081bb4f9 +0x1d:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::~COnlinePreliminaryEvent @ 0x81bb4dc

/* COnlinePreliminaryEvent::~COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::~COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  ~COnlinePreliminaryEvent(this);
  operator_delete(this);
  return;
}
```
