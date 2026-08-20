# read

`_ZN30Dispatcher_VerifyCreatureQuest4readER9PacketBufR8MSG_BASE`

`Dispatcher_VerifyCreatureQuest::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_VerifyCreatureQuest` | `0x081e3242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3242  _ZN30Dispatcher_VerifyCreatureQuest4readER9PacketBufR8MSG_BASE
#           Dispatcher_VerifyCreatureQuest::read(PacketBuf&, MSG_BASE&)
# range [0x081e3242, 0x081e324b]
081e3242 +0x00:  push   %ebp
081e3243 +0x01:  mov    %esp,%ebp
081e3245 +0x03:  mov    $0x0,%eax
081e324a +0x08:  pop    %ebp
081e324b +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_VerifyCreatureQuest::read @ 0x81e3242

/* Dispatcher_VerifyCreatureQuest::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_VerifyCreatureQuest::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
