# ~CDimensionActivationEvent

`_ZN25CDimensionActivationEventD0Ev`

`CDimensionActivationEvent::~CDimensionActivationEvent()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eead0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eead0  _ZN25CDimensionActivationEventD0Ev
#           CDimensionActivationEvent::~CDimensionActivationEvent()
# range [0x080eead0, 0x080eeaed]
080eead0 +0x00:  push   %ebp
080eead1 +0x01:  mov    %esp,%ebp
080eead3 +0x03:  sub    $0x18,%esp
080eead6 +0x06:  mov    0x8(%ebp),%eax
080eead9 +0x09:  mov    %eax,(%esp)
080eeadc +0x0c:  call   080eeaa0 <_ZN25CDimensionActivationEventD1Ev>  ; CDimensionActivationEvent::~CDimensionActivationEvent()
080eeae1 +0x11:  mov    0x8(%ebp),%eax
080eeae4 +0x14:  mov    %eax,(%esp)
080eeae7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080eeaec +0x1c:  leave
080eeaed +0x1d:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::~CDimensionActivationEvent @ 0x80eead0

/* CDimensionActivationEvent::~CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::~CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  ~CDimensionActivationEvent(this);
  operator_delete(this);
  return;
}
```
