# GetEndArrayIndex

`_ZNK24ChattingEmoticon_byLevel16GetEndArrayIndexEv`

`ChattingEmoticon_byLevel::GetEndArrayIndex() const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byLevel` | `0x080e5e76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5e76  _ZNK24ChattingEmoticon_byLevel16GetEndArrayIndexEv
#           ChattingEmoticon_byLevel::GetEndArrayIndex() const
# range [0x080e5e76, 0x080e5e7f]
080e5e76 +0x00:  push   %ebp
080e5e77 +0x01:  mov    %esp,%ebp
080e5e79 +0x03:  mov    $0x17,%eax
080e5e7e +0x08:  pop    %ebp
080e5e7f +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byLevel::GetEndArrayIndex @ 0x80e5e76

/* ChattingEmoticon_byLevel::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byLevel::GetEndArrayIndex(void)

{
  return 0x17;
}
```
