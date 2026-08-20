# ~CRestrictCharacCreationEvent

`_ZN28CRestrictCharacCreationEventD0Ev`

`CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent()`

| 类 | 地址 |
|---|---|
| `CRestrictCharacCreationEvent` | `0x08273c9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273c9a  _ZN28CRestrictCharacCreationEventD0Ev
#           CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent()
# range [0x08273c9a, 0x08273cb7]
08273c9a +0x00:  push   %ebp
08273c9b +0x01:  mov    %esp,%ebp
08273c9d +0x03:  sub    $0x18,%esp
08273ca0 +0x06:  mov    0x8(%ebp),%eax
08273ca3 +0x09:  mov    %eax,(%esp)
08273ca6 +0x0c:  call   08273c6a <_ZN28CRestrictCharacCreationEventD1Ev>  ; CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent()
08273cab +0x11:  mov    0x8(%ebp),%eax
08273cae +0x14:  mov    %eax,(%esp)
08273cb1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08273cb6 +0x1c:  leave
08273cb7 +0x1d:  ret
```

## 反编译 C

```c
// CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent @ 0x8273c9a

/* CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent() */

void __thiscall
CRestrictCharacCreationEvent::~CRestrictCharacCreationEvent(CRestrictCharacCreationEvent *this)

{
  ~CRestrictCharacCreationEvent(this);
  operator_delete(this);
  return;
}
```
