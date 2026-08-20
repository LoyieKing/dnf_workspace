# read

`_ZN36Dispatcher_Skill_Command_All_Default4readER9PacketBufR8MSG_BASE`

`Dispatcher_Skill_Command_All_Default::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_All_Default` | `0x081d2eee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2eee  _ZN36Dispatcher_Skill_Command_All_Default4readER9PacketBufR8MSG_BASE
#           Dispatcher_Skill_Command_All_Default::read(PacketBuf&, MSG_BASE&)
# range [0x081d2eee, 0x081d2ef7]
081d2eee +0x00:  push   %ebp
081d2eef +0x01:  mov    %esp,%ebp
081d2ef1 +0x03:  mov    $0x0,%eax
081d2ef6 +0x08:  pop    %ebp
081d2ef7 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Skill_Command_All_Default::read @ 0x81d2eee

/* Dispatcher_Skill_Command_All_Default::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Skill_Command_All_Default::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
