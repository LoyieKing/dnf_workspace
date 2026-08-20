# read

`_ZN33DisPatcher_EventDungeon_ClearRoom4readER9PacketBufR8MSG_BASE`

`DisPatcher_EventDungeon_ClearRoom::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_ClearRoom` | `0x0812be82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812be82  _ZN33DisPatcher_EventDungeon_ClearRoom4readER9PacketBufR8MSG_BASE
#           DisPatcher_EventDungeon_ClearRoom::read(PacketBuf&, MSG_BASE&)
# range [0x0812be82, 0x0812beaf]
0812be82 +0x00:  push   %ebp
0812be83 +0x01:  mov    %esp,%ebp
0812be85 +0x03:  sub    $0x28,%esp
0812be88 +0x06:  mov    0x10(%ebp),%eax
0812be8b +0x09:  mov    %eax,-0xc(%ebp)
0812be8e +0x0c:  mov    -0xc(%ebp),%eax
0812be91 +0x0f:  movl   $0x14,0x8(%esp)
0812be99 +0x17:  mov    %eax,0x4(%esp)
0812be9d +0x1b:  mov    0xc(%ebp),%eax
0812bea0 +0x1e:  mov    %eax,(%esp)
0812bea3 +0x21:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0812bea8 +0x26:  mov    $0x0,%eax
0812bead +0x2b:  leave
0812beae +0x2c:  ret
0812beaf +0x2d:  nop
```

## 反编译 C

```c
// DisPatcher_EventDungeon_ClearRoom::read @ 0x812be82

/* DisPatcher_EventDungeon_ClearRoom::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_EventDungeon_ClearRoom::read
          (DisPatcher_EventDungeon_ClearRoom *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x14);
  return 0;
}
```
