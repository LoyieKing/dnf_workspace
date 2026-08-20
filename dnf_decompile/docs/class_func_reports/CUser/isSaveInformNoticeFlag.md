# isSaveInformNoticeFlag

`_ZN5CUser22isSaveInformNoticeFlagEv`

`CUser::isSaveInformNoticeFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fa46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fa46  _ZN5CUser22isSaveInformNoticeFlagEv
#           CUser::isSaveInformNoticeFlag()
# range [0x0868fa46, 0x0868fa55]
0868fa46 +0x00:  push   %ebp
0868fa47 +0x01:  mov    %esp,%ebp
0868fa49 +0x03:  mov    0x8(%ebp),%eax
0868fa4c +0x06:  movzbl 0x8ebc1(%eax),%eax
0868fa53 +0x0d:  pop    %ebp
0868fa54 +0x0e:  ret
0868fa55 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isSaveInformNoticeFlag @ 0x868fa46

/* CUser::isSaveInformNoticeFlag() */

CUser __thiscall CUser::isSaveInformNoticeFlag(CUser *this)

{
  return this[0x8ebc1];
}
```
