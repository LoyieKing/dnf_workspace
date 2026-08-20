# read

`_ZN38Dispatcher_TournamentRewardSelectState4readER9PacketBufR8MSG_BASE`

`Dispatcher_TournamentRewardSelectState::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelectState` | `0x081dfc98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dfc98  _ZN38Dispatcher_TournamentRewardSelectState4readER9PacketBufR8MSG_BASE
#           Dispatcher_TournamentRewardSelectState::read(PacketBuf&, MSG_BASE&)
# range [0x081dfc98, 0x081dfca1]
081dfc98 +0x00:  push   %ebp
081dfc99 +0x01:  mov    %esp,%ebp
081dfc9b +0x03:  mov    $0x0,%eax
081dfca0 +0x08:  pop    %ebp
081dfca1 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelectState::read @ 0x81dfc98

/* Dispatcher_TournamentRewardSelectState::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelectState::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
