# disableSaveInformNoticeFlag

`_ZN5CUser27disableSaveInformNoticeFlagEv`

`CUser::disableSaveInformNoticeFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fa66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fa66  _ZN5CUser27disableSaveInformNoticeFlagEv
#           CUser::disableSaveInformNoticeFlag()
# range [0x0868fa66, 0x0868fa75]
0868fa66 +0x00:  push   %ebp
0868fa67 +0x01:  mov    %esp,%ebp
0868fa69 +0x03:  mov    0x8(%ebp),%eax
0868fa6c +0x06:  movb   $0x0,0x8ebc1(%eax)
0868fa73 +0x0d:  pop    %ebp
0868fa74 +0x0e:  ret
0868fa75 +0x0f:  nop
```

## 反编译 C

```c
// CUser::disableSaveInformNoticeFlag @ 0x868fa66

/* CUser::disableSaveInformNoticeFlag() */

void __thiscall CUser::disableSaveInformNoticeFlag(CUser *this)

{
  this[0x8ebc1] = (CUser)0x0;
  return;
}
```
