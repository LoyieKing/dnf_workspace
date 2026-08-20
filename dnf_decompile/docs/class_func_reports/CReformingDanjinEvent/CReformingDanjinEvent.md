# CReformingDanjinEvent

`_ZN21CReformingDanjinEventC1Ev`

`CReformingDanjinEvent::CReformingDanjinEvent()`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826e92c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826e92c  _ZN21CReformingDanjinEventC1Ev
#           CReformingDanjinEvent::CReformingDanjinEvent()
# range [0x0826e92c, 0x0826e947]
0826e92c +0x00:  push   %ebp
0826e92d +0x01:  mov    %esp,%ebp
0826e92f +0x03:  sub    $0x18,%esp
0826e932 +0x06:  mov    0x8(%ebp),%eax
0826e935 +0x09:  mov    %eax,(%esp)
0826e938 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0826e93d +0x11:  mov    0x8(%ebp),%eax
0826e940 +0x14:  movl   $&_ZTV21CReformingDanjinEvent+0x8,(%eax)
0826e946 +0x1a:  leave
0826e947 +0x1b:  ret
```

## 反编译 C

```c
// CReformingDanjinEvent::CReformingDanjinEvent @ 0x826e92c

/* CReformingDanjinEvent::CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CReformingDanjinEvent_08bf8f48;
  return;
}
```
