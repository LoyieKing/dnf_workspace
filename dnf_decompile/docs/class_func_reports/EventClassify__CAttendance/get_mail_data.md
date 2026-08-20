# get_mail_data

`_ZN13EventClassify11CAttendance13get_mail_dataEv`

`EventClassify::CAttendance::get_mail_data()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e7da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e7da  _ZN13EventClassify11CAttendance13get_mail_dataEv
#           EventClassify::CAttendance::get_mail_data()
# range [0x0810e7da, 0x0810e7e7]
0810e7da +0x00:  push   %ebp
0810e7db +0x01:  mov    %esp,%ebp
0810e7dd +0x03:  mov    0x8(%ebp),%eax
0810e7e0 +0x06:  mov    0x1c(%eax),%eax
0810e7e3 +0x09:  add    $0x2c,%eax
0810e7e6 +0x0c:  pop    %ebp
0810e7e7 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAttendance::get_mail_data @ 0x810e7da

/* EventClassify::CAttendance::get_mail_data() */

int __thiscall EventClassify::CAttendance::get_mail_data(CAttendance *this)

{
  return *(int *)(this + 0x1c) + 0x2c;
}
```
