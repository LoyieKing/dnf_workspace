# read

`_ZN26Dispatcher_TutorialLevelUp4readER9PacketBufR8MSG_BASE`

`Dispatcher_TutorialLevelUp::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TutorialLevelUp` | `0x081e371a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e371a  _ZN26Dispatcher_TutorialLevelUp4readER9PacketBufR8MSG_BASE
#           Dispatcher_TutorialLevelUp::read(PacketBuf&, MSG_BASE&)
# range [0x081e371a, 0x081e3723]
081e371a +0x00:  push   %ebp
081e371b +0x01:  mov    %esp,%ebp
081e371d +0x03:  mov    $0x0,%eax
081e3722 +0x08:  pop    %ebp
081e3723 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_TutorialLevelUp::read @ 0x81e371a

/* Dispatcher_TutorialLevelUp::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_TutorialLevelUp::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
