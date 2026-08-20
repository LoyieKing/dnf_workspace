# CGuildWarEvent

`_ZN14CGuildWarEventC1Ev`

`CGuildWarEvent::CGuildWarEvent()`

| 类 | 地址 |
|---|---|
| `CGuildWarEvent` | `0x0811cfa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cfa8  _ZN14CGuildWarEventC1Ev
#           CGuildWarEvent::CGuildWarEvent()
# range [0x0811cfa8, 0x0811cfd5]
0811cfa8 +0x00:  push   %ebp
0811cfa9 +0x01:  mov    %esp,%ebp
0811cfab +0x03:  sub    $0x18,%esp
0811cfae +0x06:  mov    0x8(%ebp),%eax
0811cfb1 +0x09:  mov    %eax,(%esp)
0811cfb4 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811cfb9 +0x11:  mov    0x8(%ebp),%eax
0811cfbc +0x14:  movl   $&_ZTV14CGuildWarEvent+0x8,(%eax)
0811cfc2 +0x1a:  mov    0x8(%ebp),%eax
0811cfc5 +0x1d:  movw   $0x5,0xa(%eax)
0811cfcb +0x23:  mov    0x8(%ebp),%eax
0811cfce +0x26:  movw   $0x0,0xc(%eax)
0811cfd4 +0x2c:  leave
0811cfd5 +0x2d:  ret
```

## 反编译 C

```c
// CGuildWarEvent::CGuildWarEvent @ 0x811cfa8

/* CGuildWarEvent::CGuildWarEvent() */

void __thiscall CGuildWarEvent::CGuildWarEvent(CGuildWarEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGuildWarEvent_08b553a8;
  *(undefined2 *)(this + 10) = 5;
  *(undefined2 *)(this + 0xc) = 0;
  return;
}
```
