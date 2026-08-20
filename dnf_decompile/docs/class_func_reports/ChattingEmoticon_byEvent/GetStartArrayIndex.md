# GetStartArrayIndex

`_ZNK24ChattingEmoticon_byEvent18GetStartArrayIndexEv`

`ChattingEmoticon_byEvent::GetStartArrayIndex() const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byEvent` | `0x080e5d2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5d2e  _ZNK24ChattingEmoticon_byEvent18GetStartArrayIndexEv
#           ChattingEmoticon_byEvent::GetStartArrayIndex() const
# range [0x080e5d2e, 0x080e5d37]
080e5d2e +0x00:  push   %ebp
080e5d2f +0x01:  mov    %esp,%ebp
080e5d31 +0x03:  mov    $0x0,%eax
080e5d36 +0x08:  pop    %ebp
080e5d37 +0x09:  ret
```

## 反编译 C

```c
// ChattingEmoticon_byEvent::GetStartArrayIndex @ 0x80e5d2e

/* ChattingEmoticon_byEvent::GetStartArrayIndex() const */

undefined4 ChattingEmoticon_byEvent::GetStartArrayIndex(void)

{
  return 0;
}
```
