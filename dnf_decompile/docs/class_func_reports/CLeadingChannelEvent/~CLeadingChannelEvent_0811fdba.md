# ~CLeadingChannelEvent

`_ZN20CLeadingChannelEventD0Ev`

`CLeadingChannelEvent::~CLeadingChannelEvent()`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fdba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fdba  _ZN20CLeadingChannelEventD0Ev
#           CLeadingChannelEvent::~CLeadingChannelEvent()
# range [0x0811fdba, 0x0811fdd7]
0811fdba +0x00:  push   %ebp
0811fdbb +0x01:  mov    %esp,%ebp
0811fdbd +0x03:  sub    $0x18,%esp
0811fdc0 +0x06:  mov    0x8(%ebp),%eax
0811fdc3 +0x09:  mov    %eax,(%esp)
0811fdc6 +0x0c:  call   0811fd8a <_ZN20CLeadingChannelEventD1Ev>  ; CLeadingChannelEvent::~CLeadingChannelEvent()
0811fdcb +0x11:  mov    0x8(%ebp),%eax
0811fdce +0x14:  mov    %eax,(%esp)
0811fdd1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811fdd6 +0x1c:  leave
0811fdd7 +0x1d:  ret
```

## 反编译 C

```c
// CLeadingChannelEvent::~CLeadingChannelEvent @ 0x811fdba

/* CLeadingChannelEvent::~CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::~CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  ~CLeadingChannelEvent(this);
  operator_delete(this);
  return;
}
```
