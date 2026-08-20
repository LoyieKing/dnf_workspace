# isCommonEmoticon

`_ZNK24ChattingEmoticon_byLevel16isCommonEmoticonERK5CUser`

`ChattingEmoticon_byLevel::isCommonEmoticon(CUser const&) const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byLevel` | `0x080e5e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5e80  _ZNK24ChattingEmoticon_byLevel16isCommonEmoticonERK5CUser
#           ChattingEmoticon_byLevel::isCommonEmoticon(CUser const&) const
# range [0x080e5e80, 0x080e5e89]
080e5e80 +0x00:  push   %ebp
080e5e81 +0x01:  mov    %esp,%ebp
080e5e83 +0x03:  mov    $0x1,%eax
080e5e88 +0x08:  pop    %ebp
080e5e89 +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byLevel::isCommonEmoticon @ 0x80e5e80

/* ChattingEmoticon_byLevel::isCommonEmoticon(CUser const&) const */

undefined4 ChattingEmoticon_byLevel::isCommonEmoticon(CUser *param_1)

{
  return 1;
}
```
