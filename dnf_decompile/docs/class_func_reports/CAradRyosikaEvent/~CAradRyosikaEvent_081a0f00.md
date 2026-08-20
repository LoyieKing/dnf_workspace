# ~CAradRyosikaEvent

`_ZN17CAradRyosikaEventD0Ev`

`CAradRyosikaEvent::~CAradRyosikaEvent()`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0f00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0f00  _ZN17CAradRyosikaEventD0Ev
#           CAradRyosikaEvent::~CAradRyosikaEvent()
# range [0x081a0f00, 0x081a0f1d]
081a0f00 +0x00:  push   %ebp
081a0f01 +0x01:  mov    %esp,%ebp
081a0f03 +0x03:  sub    $0x18,%esp
081a0f06 +0x06:  mov    0x8(%ebp),%eax
081a0f09 +0x09:  mov    %eax,(%esp)
081a0f0c +0x0c:  call   081a0ed0 <_ZN17CAradRyosikaEventD1Ev>  ; CAradRyosikaEvent::~CAradRyosikaEvent()
081a0f11 +0x11:  mov    0x8(%ebp),%eax
081a0f14 +0x14:  mov    %eax,(%esp)
081a0f17 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a0f1c +0x1c:  leave
081a0f1d +0x1d:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::~CAradRyosikaEvent @ 0x81a0f00

/* CAradRyosikaEvent::~CAradRyosikaEvent() */

void __thiscall CAradRyosikaEvent::~CAradRyosikaEvent(CAradRyosikaEvent *this)

{
  ~CAradRyosikaEvent(this);
  operator_delete(this);
  return;
}
```
