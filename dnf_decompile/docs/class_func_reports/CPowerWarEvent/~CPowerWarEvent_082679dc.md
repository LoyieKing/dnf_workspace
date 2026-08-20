# ~CPowerWarEvent

`_ZN14CPowerWarEventD0Ev`

`CPowerWarEvent::~CPowerWarEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x082679dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082679dc  _ZN14CPowerWarEventD0Ev
#           CPowerWarEvent::~CPowerWarEvent()
# range [0x082679dc, 0x082679f9]
082679dc +0x00:  push   %ebp
082679dd +0x01:  mov    %esp,%ebp
082679df +0x03:  sub    $0x18,%esp
082679e2 +0x06:  mov    0x8(%ebp),%eax
082679e5 +0x09:  mov    %eax,(%esp)
082679e8 +0x0c:  call   082679ac <_ZN14CPowerWarEventD1Ev>  ; CPowerWarEvent::~CPowerWarEvent()
082679ed +0x11:  mov    0x8(%ebp),%eax
082679f0 +0x14:  mov    %eax,(%esp)
082679f3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082679f8 +0x1c:  leave
082679f9 +0x1d:  ret
```

## 反编译 C

```c
// CPowerWarEvent::~CPowerWarEvent @ 0x82679dc

/* CPowerWarEvent::~CPowerWarEvent() */

void __thiscall CPowerWarEvent::~CPowerWarEvent(CPowerWarEvent *this)

{
  ~CPowerWarEvent(this);
  operator_delete(this);
  return;
}
```
