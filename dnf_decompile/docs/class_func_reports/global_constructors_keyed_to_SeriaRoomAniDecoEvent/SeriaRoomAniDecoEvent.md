# SeriaRoomAniDecoEvent

`_GLOBAL__I__ZN21SeriaRoomAniDecoEventC2Ev`

`global constructors keyed to SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to SeriaRoomAniDecoEvent` | `0x0827bc30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827bc30  _GLOBAL__I__ZN21SeriaRoomAniDecoEventC2Ev
#           global constructors keyed to SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent()
# range [0x0827bc30, 0x0827bc67]
0827bc30 +0x00:  push   %ebp
0827bc31 +0x01:  mov    %esp,%ebp
0827bc33 +0x03:  sub    $0x18,%esp
0827bc36 +0x06:  movl   $0xffff,0x4(%esp)
0827bc3e +0x0e:  movl   $0x1,(%esp)
0827bc45 +0x15:  call   0827bbf0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0827bc4a +0x1a:  leave
0827bc4b +0x1b:  ret
0827bc4c +0x1c:  push   %ebp
0827bc4d +0x1d:  mov    %esp,%ebp
0827bc4f +0x1f:  sub    $0x18,%esp
0827bc52 +0x22:  mov    0x8(%ebp),%eax
0827bc55 +0x25:  mov    0xc(%ebp),%edx
0827bc58 +0x28:  mov    %edx,0x4(%esp)
0827bc5c +0x2c:  mov    %eax,(%esp)
0827bc5f +0x2f:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
0827bc64 +0x34:  leave
0827bc65 +0x35:  ret
0827bc66 +0x36:  nop
0827bc67 +0x37:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827bc30

/* SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent() */

void SeriaRoomAniDecoEvent::_GLOBAL__I_SeriaRoomAniDecoEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
