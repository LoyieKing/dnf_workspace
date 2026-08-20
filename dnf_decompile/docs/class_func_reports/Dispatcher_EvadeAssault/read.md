# read

`_ZN23Dispatcher_EvadeAssault4readER9PacketBufR8MSG_BASE`

`Dispatcher_EvadeAssault::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EvadeAssault` | `0x081ce4ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce4ee  _ZN23Dispatcher_EvadeAssault4readER9PacketBufR8MSG_BASE
#           Dispatcher_EvadeAssault::read(PacketBuf&, MSG_BASE&)
# range [0x081ce4ee, 0x081ce4f7]
081ce4ee +0x00:  push   %ebp
081ce4ef +0x01:  mov    %esp,%ebp
081ce4f1 +0x03:  mov    $0x0,%eax
081ce4f6 +0x08:  pop    %ebp
081ce4f7 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_EvadeAssault::read @ 0x81ce4ee

/* Dispatcher_EvadeAssault::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_EvadeAssault::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
