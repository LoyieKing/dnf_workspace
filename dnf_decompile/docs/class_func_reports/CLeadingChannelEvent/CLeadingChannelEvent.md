# CLeadingChannelEvent

`_ZN20CLeadingChannelEventC1Ev`

`CLeadingChannelEvent::CLeadingChannelEvent()`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fd64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fd64  _ZN20CLeadingChannelEventC1Ev
#           CLeadingChannelEvent::CLeadingChannelEvent()
# range [0x0811fd64, 0x0811fd89]
0811fd64 +0x00:  push   %ebp
0811fd65 +0x01:  mov    %esp,%ebp
0811fd67 +0x03:  sub    $0x18,%esp
0811fd6a +0x06:  mov    0x8(%ebp),%eax
0811fd6d +0x09:  mov    %eax,(%esp)
0811fd70 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811fd75 +0x11:  mov    0x8(%ebp),%eax
0811fd78 +0x14:  movl   $&_ZTV20CLeadingChannelEvent+0x8,(%eax)
0811fd7e +0x1a:  mov    0x8(%ebp),%eax
0811fd81 +0x1d:  movl   $0x64,0xc(%eax)
0811fd88 +0x24:  leave
0811fd89 +0x25:  ret
```

## 反编译 C

```c
// CLeadingChannelEvent::CLeadingChannelEvent @ 0x811fd64

/* CLeadingChannelEvent::CLeadingChannelEvent() */

void __thiscall CLeadingChannelEvent::CLeadingChannelEvent(CLeadingChannelEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CLeadingChannelEvent_08b588a8;
  *(undefined4 *)(this + 0xc) = 100;
  return;
}
```
