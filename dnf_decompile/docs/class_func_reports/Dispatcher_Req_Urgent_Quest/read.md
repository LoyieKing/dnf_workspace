# read

`_ZN27Dispatcher_Req_Urgent_Quest4readER9PacketBufR8MSG_BASE`

`Dispatcher_Req_Urgent_Quest::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Req_Urgent_Quest` | `0x081df422` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df422  _ZN27Dispatcher_Req_Urgent_Quest4readER9PacketBufR8MSG_BASE
#           Dispatcher_Req_Urgent_Quest::read(PacketBuf&, MSG_BASE&)
# range [0x081df422, 0x081df42b]
081df422 +0x00:  push   %ebp
081df423 +0x01:  mov    %esp,%ebp
081df425 +0x03:  mov    $0x0,%eax
081df42a +0x08:  pop    %ebp
081df42b +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Req_Urgent_Quest::read @ 0x81df422

/* Dispatcher_Req_Urgent_Quest::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Req_Urgent_Quest::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
