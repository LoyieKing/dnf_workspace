# dispatch_sig

`_ZN30DisPatcher_SetWarRoomSeatState12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetWarRoomSeatState` | `0x082022ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082022ca  _ZN30DisPatcher_SetWarRoomSeatState12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&)
# range [0x082022ca, 0x082022f5]
082022ca +0x00:  push   %ebp
082022cb +0x01:  mov    %esp,%ebp
082022cd +0x03:  sub    $0x38,%esp
082022d0 +0x06:  movl   $0x0,0xc(%esp)
082022d8 +0x0e:  movl   $0x0,0x8(%esp)
082022e0 +0x16:  movl   $&_ZZN30DisPatcher_SetWarRoomSeatState12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082022e8 +0x1e:  movl   $0x9848,(%esp)
082022ef +0x25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082022f4 +0x2a:  leave
082022f5 +0x2b:  ret
```

## 反编译 C

```c
// DisPatcher_SetWarRoomSeatState::dispatch_sig @ 0x82022ca

/* DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9848,"virtual int DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&)",0,0
          );
  return;
}
```
