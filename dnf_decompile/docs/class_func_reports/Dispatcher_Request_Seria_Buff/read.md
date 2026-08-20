# read

`_ZN29Dispatcher_Request_Seria_Buff4readER9PacketBufR8MSG_BASE`

`Dispatcher_Request_Seria_Buff::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Request_Seria_Buff` | `0x081dbcce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbcce  _ZN29Dispatcher_Request_Seria_Buff4readER9PacketBufR8MSG_BASE
#           Dispatcher_Request_Seria_Buff::read(PacketBuf&, MSG_BASE&)
# range [0x081dbcce, 0x081dbcd7]
081dbcce +0x00:  push   %ebp
081dbccf +0x01:  mov    %esp,%ebp
081dbcd1 +0x03:  mov    $0x0,%eax
081dbcd6 +0x08:  pop    %ebp
081dbcd7 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Request_Seria_Buff::read @ 0x81dbcce

/* Dispatcher_Request_Seria_Buff::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Request_Seria_Buff::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
