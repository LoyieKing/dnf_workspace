# SeriaRoomAniDecoEvent

`_ZN21SeriaRoomAniDecoEventC1Ev`

`SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b490  _ZN21SeriaRoomAniDecoEventC1Ev
#           SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent()
# range [0x0827b490, 0x0827b4ab]
0827b490 +0x00:  push   %ebp
0827b491 +0x01:  mov    %esp,%ebp
0827b493 +0x03:  sub    $0x18,%esp
0827b496 +0x06:  mov    0x8(%ebp),%eax
0827b499 +0x09:  mov    %eax,(%esp)
0827b49c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0827b4a1 +0x11:  mov    0x8(%ebp),%eax
0827b4a4 +0x14:  movl   $&_ZTV21SeriaRoomAniDecoEvent+0x8,(%eax)
0827b4aa +0x1a:  leave
0827b4ab +0x1b:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent @ 0x827b490

/* SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__SeriaRoomAniDecoEvent_08c07188;
  return;
}
```
