# read

`_ZN24Dispatcher_MouseRegister4readER9PacketBufR8MSG_BASE`

`Dispatcher_MouseRegister::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x08263210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08263210  _ZN24Dispatcher_MouseRegister4readER9PacketBufR8MSG_BASE
#           Dispatcher_MouseRegister::read(PacketBuf&, MSG_BASE&)
# range [0x08263210, 0x08263223]
08263210 +0x00:  push   %ebp
08263211 +0x01:  mov    %esp,%ebp
08263213 +0x03:  sub    $0x10,%esp
08263216 +0x06:  mov    0x10(%ebp),%eax
08263219 +0x09:  mov    %eax,-0x4(%ebp)
0826321c +0x0c:  mov    $0x0,%eax
08263221 +0x11:  leave
08263222 +0x12:  ret
08263223 +0x13:  nop
```

## 反编译 C

```c
// Dispatcher_MouseRegister::read @ 0x8263210

/* Dispatcher_MouseRegister::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_MouseRegister::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
