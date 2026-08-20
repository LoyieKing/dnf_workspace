# read

`_ZN33Dispatcher_CharacSlotExtendEffect4readER9PacketBufR8MSG_BASE`

`Dispatcher_CharacSlotExtendEffect::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CharacSlotExtendEffect` | `0x081d7fac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7fac  _ZN33Dispatcher_CharacSlotExtendEffect4readER9PacketBufR8MSG_BASE
#           Dispatcher_CharacSlotExtendEffect::read(PacketBuf&, MSG_BASE&)
# range [0x081d7fac, 0x081d7fb5]
081d7fac +0x00:  push   %ebp
081d7fad +0x01:  mov    %esp,%ebp
081d7faf +0x03:  mov    $0x0,%eax
081d7fb4 +0x08:  pop    %ebp
081d7fb5 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_CharacSlotExtendEffect::read @ 0x81d7fac

/* Dispatcher_CharacSlotExtendEffect::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CharacSlotExtendEffect::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
