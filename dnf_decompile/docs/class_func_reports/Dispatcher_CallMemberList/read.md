# read

`_ZN25Dispatcher_CallMemberList4readER9PacketBufR8MSG_BASE`

`Dispatcher_CallMemberList::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallMemberList` | `0x081cbd3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbd3a  _ZN25Dispatcher_CallMemberList4readER9PacketBufR8MSG_BASE
#           Dispatcher_CallMemberList::read(PacketBuf&, MSG_BASE&)
# range [0x081cbd3a, 0x081cbd43]
081cbd3a +0x00:  push   %ebp
081cbd3b +0x01:  mov    %esp,%ebp
081cbd3d +0x03:  mov    $0x0,%eax
081cbd42 +0x08:  pop    %ebp
081cbd43 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_CallMemberList::read @ 0x81cbd3a

/* Dispatcher_CallMemberList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CallMemberList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
