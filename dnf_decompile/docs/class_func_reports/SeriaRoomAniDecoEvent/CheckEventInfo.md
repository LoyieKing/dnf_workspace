# CheckEventInfo

`_ZN21SeriaRoomAniDecoEvent14CheckEventInfoER5CUser`

`SeriaRoomAniDecoEvent::CheckEventInfo(CUser&)`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827ba48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ba48  _ZN21SeriaRoomAniDecoEvent14CheckEventInfoER5CUser
#           SeriaRoomAniDecoEvent::CheckEventInfo(CUser&)
# range [0x0827ba48, 0x0827ba51]
0827ba48 +0x00:  push   %ebp
0827ba49 +0x01:  mov    %esp,%ebp
0827ba4b +0x03:  mov    $0x0,%eax
0827ba50 +0x08:  pop    %ebp
0827ba51 +0x09:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::CheckEventInfo @ 0x827ba48

/* SeriaRoomAniDecoEvent::CheckEventInfo(CUser&) */

undefined4 SeriaRoomAniDecoEvent::CheckEventInfo(CUser *param_1)

{
  return 0;
}
```
