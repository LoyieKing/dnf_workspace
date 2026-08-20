# CPcRoomCardBlankItemEvent

`_ZN25CPcRoomCardBlankItemEventC1Ev`

`CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent()`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x0826743c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826743c  _ZN25CPcRoomCardBlankItemEventC1Ev
#           CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent()
# range [0x0826743c, 0x08267457]
0826743c +0x00:  push   %ebp
0826743d +0x01:  mov    %esp,%ebp
0826743f +0x03:  sub    $0x18,%esp
08267442 +0x06:  mov    0x8(%ebp),%eax
08267445 +0x09:  mov    %eax,(%esp)
08267448 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0826744d +0x11:  mov    0x8(%ebp),%eax
08267450 +0x14:  movl   $&_ZTV25CPcRoomCardBlankItemEvent+0x8,(%eax)
08267456 +0x1a:  leave
08267457 +0x1b:  ret
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent @ 0x826743c

/* CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent() */

void __thiscall
CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent(CPcRoomCardBlankItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPcRoomCardBlankItemEvent_08beefc8;
  return;
}
```
