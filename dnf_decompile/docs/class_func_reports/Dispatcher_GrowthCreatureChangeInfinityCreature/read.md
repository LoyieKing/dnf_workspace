# read

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4readER9PacketBufR8MSG_BASE`

`Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e85a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e85a2  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4readER9PacketBufR8MSG_BASE
#           Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf&, MSG_BASE&)
# range [0x081e85a2, 0x081e85ab]
081e85a2 +0x00:  push   %ebp
081e85a3 +0x01:  mov    %esp,%ebp
081e85a5 +0x03:  mov    $0x0,%eax
081e85aa +0x08:  pop    %ebp
081e85ab +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::read @ 0x81e85a2

/* Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf&, MSG_BASE&) */

undefined4
Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
