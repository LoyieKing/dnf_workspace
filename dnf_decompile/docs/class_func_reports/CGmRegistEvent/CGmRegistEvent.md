# CGmRegistEvent

`_ZN14CGmRegistEventC1Ev`

`CGmRegistEvent::CGmRegistEvent()`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811cc78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cc78  _ZN14CGmRegistEventC1Ev
#           CGmRegistEvent::CGmRegistEvent()
# range [0x0811cc78, 0x0811cc93]
0811cc78 +0x00:  push   %ebp
0811cc79 +0x01:  mov    %esp,%ebp
0811cc7b +0x03:  sub    $0x18,%esp
0811cc7e +0x06:  mov    0x8(%ebp),%eax
0811cc81 +0x09:  mov    %eax,(%esp)
0811cc84 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811cc89 +0x11:  mov    0x8(%ebp),%eax
0811cc8c +0x14:  movl   $&_ZTV14CGmRegistEvent+0x8,(%eax)
0811cc92 +0x1a:  leave
0811cc93 +0x1b:  ret
```

## 反编译 C

```c
// CGmRegistEvent::CGmRegistEvent @ 0x811cc78

/* CGmRegistEvent::CGmRegistEvent() */

void __thiscall CGmRegistEvent::CGmRegistEvent(CGmRegistEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGmRegistEvent_08b53e48;
  return;
}
```
