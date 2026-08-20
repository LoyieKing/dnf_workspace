# GetStartArrayIndex

`_ZNK24ChattingEmoticon_byLevel18GetStartArrayIndexEv`

`ChattingEmoticon_byLevel::GetStartArrayIndex() const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byLevel` | `0x080e5e6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5e6c  _ZNK24ChattingEmoticon_byLevel18GetStartArrayIndexEv
#           ChattingEmoticon_byLevel::GetStartArrayIndex() const
# range [0x080e5e6c, 0x080e5e75]
080e5e6c +0x00:  push   %ebp
080e5e6d +0x01:  mov    %esp,%ebp
080e5e6f +0x03:  mov    $0x12,%eax
080e5e74 +0x08:  pop    %ebp
080e5e75 +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byLevel::GetStartArrayIndex @ 0x80e5e6c

/* ChattingEmoticon_byLevel::GetStartArrayIndex() const */

undefined4 ChattingEmoticon_byLevel::GetStartArrayIndex(void)

{
  return 0x12;
}
```
