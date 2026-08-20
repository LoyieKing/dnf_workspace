# read

`_ZN33Dispatcher_UpgradeDisjointMachine4readER9PacketBufR8MSG_BASE`

`Dispatcher_UpgradeDisjointMachine::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeDisjointMachine` | `0x081cff2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cff2a  _ZN33Dispatcher_UpgradeDisjointMachine4readER9PacketBufR8MSG_BASE
#           Dispatcher_UpgradeDisjointMachine::read(PacketBuf&, MSG_BASE&)
# range [0x081cff2a, 0x081cff33]
081cff2a +0x00:  push   %ebp
081cff2b +0x01:  mov    %esp,%ebp
081cff2d +0x03:  mov    $0x0,%eax
081cff32 +0x08:  pop    %ebp
081cff33 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeDisjointMachine::read @ 0x81cff2a

/* Dispatcher_UpgradeDisjointMachine::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_UpgradeDisjointMachine::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
