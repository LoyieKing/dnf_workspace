# GetEndArrayIndex

`_ZNK26ChattingEmoticon_byPremium16GetEndArrayIndexEv`

`ChattingEmoticon_byPremium::GetEndArrayIndex() const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byPremium` | `0x080e5dd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5dd4  _ZNK26ChattingEmoticon_byPremium16GetEndArrayIndexEv
#           ChattingEmoticon_byPremium::GetEndArrayIndex() const
# range [0x080e5dd4, 0x080e5ddd]
080e5dd4 +0x00:  push   %ebp
080e5dd5 +0x01:  mov    %esp,%ebp
080e5dd7 +0x03:  mov    $0x11,%eax
080e5ddc +0x08:  pop    %ebp
080e5ddd +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byPremium::GetEndArrayIndex @ 0x80e5dd4

/* ChattingEmoticon_byPremium::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byPremium::GetEndArrayIndex(void)

{
  return 0x11;
}
```
