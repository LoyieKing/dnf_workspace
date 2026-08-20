# getInformNoticeFlag

`_ZN5CUser19getInformNoticeFlagEi`

`CUser::getInformNoticeFlag(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fa76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fa76  _ZN5CUser19getInformNoticeFlagEi
#           CUser::getInformNoticeFlag(int)
# range [0x0868fa76, 0x0868fa89]
0868fa76 +0x00:  push   %ebp
0868fa77 +0x01:  mov    %esp,%ebp
0868fa79 +0x03:  mov    0xc(%ebp),%eax
0868fa7c +0x06:  mov    0x8(%ebp),%edx
0868fa7f +0x09:  movzbl 0x8ebb1(%edx,%eax,1),%eax
0868fa87 +0x11:  pop    %ebp
0868fa88 +0x12:  ret
0868fa89 +0x13:  nop
```

## 反编译 C

```c
// CUser::getInformNoticeFlag @ 0x868fa76

/* CUser::getInformNoticeFlag(int) */

CUser __thiscall CUser::getInformNoticeFlag(CUser *this,int param_1)

{
  return this[param_1 + 0x8ebb1];
}
```
