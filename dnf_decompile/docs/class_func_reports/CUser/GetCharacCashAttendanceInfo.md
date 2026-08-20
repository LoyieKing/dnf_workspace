# GetCharacCashAttendanceInfo

`_ZNK5CUser27GetCharacCashAttendanceInfoER20SIG_ATTENDANCE_EVENT`

`CUser::GetCharacCashAttendanceInfo(SIG_ATTENDANCE_EVENT&) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086910a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086910a6  _ZNK5CUser27GetCharacCashAttendanceInfoER20SIG_ATTENDANCE_EVENT
#           CUser::GetCharacCashAttendanceInfo(SIG_ATTENDANCE_EVENT&) const
# range [0x086910a6, 0x086910b1]
086910a6 +0x00:  push   %ebp
086910a7 +0x01:  mov    %esp,%ebp
086910a9 +0x03:  mov    0xc(%ebp),%eax
086910ac +0x06:  movb   $0x0,(%eax)
086910af +0x09:  pop    %ebp
086910b0 +0x0a:  ret
086910b1 +0x0b:  nop
```

## 反编译 C

```c
// CUser::GetCharacCashAttendanceInfo @ 0x86910a6

/* CUser::GetCharacCashAttendanceInfo(SIG_ATTENDANCE_EVENT&) const */

void __thiscall CUser::GetCharacCashAttendanceInfo(CUser *this,SIG_ATTENDANCE_EVENT *param_1)

{
  *param_1 = (SIG_ATTENDANCE_EVENT)0x0;
  return;
}
```
