# stop

`_ZN15ThreadInterface4stopEv`

`ThreadInterface::stop()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630c14  _ZN15ThreadInterface4stopEv
#           ThreadInterface::stop()
# range [0x08630c14, 0x08630c19]
08630c14 +0x00:  push   %ebp
08630c15 +0x01:  mov    %esp,%ebp
08630c17 +0x03:  pop    %ebp
08630c18 +0x04:  ret
08630c19 +0x05:  nop
```

## 反编译 C

```c
// ThreadInterface::stop @ 0x8630c14

/* ThreadInterface::stop() */

void ThreadInterface::stop(void)

{
  return;
}
```
