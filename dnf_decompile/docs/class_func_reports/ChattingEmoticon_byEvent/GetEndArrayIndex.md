# GetEndArrayIndex

`_ZNK24ChattingEmoticon_byEvent16GetEndArrayIndexEv`

`ChattingEmoticon_byEvent::GetEndArrayIndex() const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byEvent` | `0x080e5d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5d38  _ZNK24ChattingEmoticon_byEvent16GetEndArrayIndexEv
#           ChattingEmoticon_byEvent::GetEndArrayIndex() const
# range [0x080e5d38, 0x080e5d41]
080e5d38 +0x00:  push   %ebp
080e5d39 +0x01:  mov    %esp,%ebp
080e5d3b +0x03:  mov    $0x5,%eax
080e5d40 +0x08:  pop    %ebp
080e5d41 +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byEvent::GetEndArrayIndex @ 0x80e5d38

/* ChattingEmoticon_byEvent::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byEvent::GetEndArrayIndex(void)

{
  return 5;
}
```
