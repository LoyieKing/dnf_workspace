# set_event_data

`_ZN13EventClassify11CAttendance14set_event_dataEiP17InGameEventScript`

`EventClassify::CAttendance::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810eadc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810eadc  _ZN13EventClassify11CAttendance14set_event_dataEiP17InGameEventScript
#           EventClassify::CAttendance::set_event_data(int, InGameEventScript*)
# range [0x0810eadc, 0x0810eb05]
0810eadc +0x00:  push   %ebp
0810eadd +0x01:  mov    %esp,%ebp
0810eadf +0x03:  sub    $0x18,%esp
0810eae2 +0x06:  mov    0x8(%ebp),%eax
0810eae5 +0x09:  mov    (%eax),%eax
0810eae7 +0x0b:  add    $0x18,%eax
0810eaea +0x0e:  mov    (%eax),%ecx
0810eaec +0x10:  mov    0x8(%ebp),%eax
0810eaef +0x13:  mov    0xc(%ebp),%edx
0810eaf2 +0x16:  mov    %edx,0x4(%esp)
0810eaf6 +0x1a:  mov    %eax,(%esp)
0810eaf9 +0x1d:  call   *%ecx
0810eafb +0x1f:  mov    0x10(%ebp),%edx
0810eafe +0x22:  mov    0x8(%ebp),%eax
0810eb01 +0x25:  mov    %edx,0x1c(%eax)
0810eb04 +0x28:  leave
0810eb05 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CAttendance::set_event_data @ 0x810eadc

/* EventClassify::CAttendance::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAttendance::set_event_data(CAttendance *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
