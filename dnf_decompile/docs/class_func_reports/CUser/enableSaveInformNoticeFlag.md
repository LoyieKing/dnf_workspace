# enableSaveInformNoticeFlag

`_ZN5CUser26enableSaveInformNoticeFlagEv`

`CUser::enableSaveInformNoticeFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fa56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fa56  _ZN5CUser26enableSaveInformNoticeFlagEv
#           CUser::enableSaveInformNoticeFlag()
# range [0x0868fa56, 0x0868fa65]
0868fa56 +0x00:  push   %ebp
0868fa57 +0x01:  mov    %esp,%ebp
0868fa59 +0x03:  mov    0x8(%ebp),%eax
0868fa5c +0x06:  movb   $0x1,0x8ebc1(%eax)
0868fa63 +0x0d:  pop    %ebp
0868fa64 +0x0e:  ret
0868fa65 +0x0f:  nop
```

## 反编译 C

```c
// CUser::enableSaveInformNoticeFlag @ 0x868fa56

/* CUser::enableSaveInformNoticeFlag() */

void __thiscall CUser::enableSaveInformNoticeFlag(CUser *this)

{
  this[0x8ebc1] = (CUser)0x1;
  return;
}
```
