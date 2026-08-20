# release

`_ZN12EpollHandler7releaseEv`

`EpollHandler::release()`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c1c0  _ZN12EpollHandler7releaseEv
#           EpollHandler::release()
# range [0x0857c1c0, 0x0857c1c5]
0857c1c0 +0x00:  push   %ebp
0857c1c1 +0x01:  mov    %esp,%ebp
0857c1c3 +0x03:  pop    %ebp
0857c1c4 +0x04:  ret
0857c1c5 +0x05:  nop
```

## 反编译 C

```c
// EpollHandler::release @ 0x857c1c0

/* EpollHandler::release() */

void EpollHandler::release(void)

{
  return;
}
```
