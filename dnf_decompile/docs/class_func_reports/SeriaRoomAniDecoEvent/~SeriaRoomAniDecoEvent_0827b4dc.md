# ~SeriaRoomAniDecoEvent

`_ZN21SeriaRoomAniDecoEventD0Ev`

`SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b4dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b4dc  _ZN21SeriaRoomAniDecoEventD0Ev
#           SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent()
# range [0x0827b4dc, 0x0827b4f9]
0827b4dc +0x00:  push   %ebp
0827b4dd +0x01:  mov    %esp,%ebp
0827b4df +0x03:  sub    $0x18,%esp
0827b4e2 +0x06:  mov    0x8(%ebp),%eax
0827b4e5 +0x09:  mov    %eax,(%esp)
0827b4e8 +0x0c:  call   0827b4ac <_ZN21SeriaRoomAniDecoEventD1Ev>  ; SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent()
0827b4ed +0x11:  mov    0x8(%ebp),%eax
0827b4f0 +0x14:  mov    %eax,(%esp)
0827b4f3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0827b4f8 +0x1c:  leave
0827b4f9 +0x1d:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent @ 0x827b4dc

/* SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  ~SeriaRoomAniDecoEvent(this);
  operator_delete(this);
  return;
}
```
