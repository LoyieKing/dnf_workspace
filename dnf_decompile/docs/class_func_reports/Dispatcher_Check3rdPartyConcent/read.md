# read

`_ZN31Dispatcher_Check3rdPartyConcent4readER9PacketBufR8MSG_BASE`

`Dispatcher_Check3rdPartyConcent::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Check3rdPartyConcent` | `0x081df3c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df3c6  _ZN31Dispatcher_Check3rdPartyConcent4readER9PacketBufR8MSG_BASE
#           Dispatcher_Check3rdPartyConcent::read(PacketBuf&, MSG_BASE&)
# range [0x081df3c6, 0x081df3cf]
081df3c6 +0x00:  push   %ebp
081df3c7 +0x01:  mov    %esp,%ebp
081df3c9 +0x03:  mov    $0x0,%eax
081df3ce +0x08:  pop    %ebp
081df3cf +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Check3rdPartyConcent::read @ 0x81df3c6

/* Dispatcher_Check3rdPartyConcent::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Check3rdPartyConcent::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
