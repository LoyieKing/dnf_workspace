# get_mail_data

`_ZN13EventClassify18CAccountFirstLogin13get_mail_dataEv`

`EventClassify::CAccountFirstLogin::get_mail_data()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLogin` | `0x0810decc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810decc  _ZN13EventClassify18CAccountFirstLogin13get_mail_dataEv
#           EventClassify::CAccountFirstLogin::get_mail_data()
# range [0x0810decc, 0x0810ded9]
0810decc +0x00:  push   %ebp
0810decd +0x01:  mov    %esp,%ebp
0810decf +0x03:  mov    0x8(%ebp),%eax
0810ded2 +0x06:  mov    0x1c(%eax),%eax
0810ded5 +0x09:  add    $0xc,%eax
0810ded8 +0x0c:  pop    %ebp
0810ded9 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAccountFirstLogin::get_mail_data @ 0x810decc

/* EventClassify::CAccountFirstLogin::get_mail_data() */

int __thiscall EventClassify::CAccountFirstLogin::get_mail_data(CAccountFirstLogin *this)

{
  return *(int *)(this + 0x1c) + 0xc;
}
```
