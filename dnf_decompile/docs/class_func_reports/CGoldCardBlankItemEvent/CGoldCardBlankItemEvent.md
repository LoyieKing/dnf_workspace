# CGoldCardBlankItemEvent

`_ZN23CGoldCardBlankItemEventC1Ev`

`CGoldCardBlankItemEvent::CGoldCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811ce24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ce24  _ZN23CGoldCardBlankItemEventC1Ev
#           CGoldCardBlankItemEvent::CGoldCardBlankItemEvent()
# range [0x0811ce24, 0x0811ce3f]
0811ce24 +0x00:  push   %ebp
0811ce25 +0x01:  mov    %esp,%ebp
0811ce27 +0x03:  sub    $0x18,%esp
0811ce2a +0x06:  mov    0x8(%ebp),%eax
0811ce2d +0x09:  mov    %eax,(%esp)
0811ce30 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811ce35 +0x11:  mov    0x8(%ebp),%eax
0811ce38 +0x14:  movl   $&_ZTV23CGoldCardBlankItemEvent+0x8,(%eax)
0811ce3e +0x1a:  leave
0811ce3f +0x1b:  ret
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::CGoldCardBlankItemEvent @ 0x811ce24

/* CGoldCardBlankItemEvent::CGoldCardBlankItemEvent() */

void __thiscall CGoldCardBlankItemEvent::CGoldCardBlankItemEvent(CGoldCardBlankItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGoldCardBlankItemEvent_08b545a8;
  return;
}
```
