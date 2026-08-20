# set_event_data

`_ZN13EventClassify16CFatigueQuantity14set_event_dataEiP17InGameEventScript`

`EventClassify::CFatigueQuantity::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CFatigueQuantity` | `0x0810f95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f95e  _ZN13EventClassify16CFatigueQuantity14set_event_dataEiP17InGameEventScript
#           EventClassify::CFatigueQuantity::set_event_data(int, InGameEventScript*)
# range [0x0810f95e, 0x0810f987]
0810f95e +0x00:  push   %ebp
0810f95f +0x01:  mov    %esp,%ebp
0810f961 +0x03:  sub    $0x18,%esp
0810f964 +0x06:  mov    0x8(%ebp),%eax
0810f967 +0x09:  mov    (%eax),%eax
0810f969 +0x0b:  add    $0x18,%eax
0810f96c +0x0e:  mov    (%eax),%ecx
0810f96e +0x10:  mov    0x8(%ebp),%eax
0810f971 +0x13:  mov    0xc(%ebp),%edx
0810f974 +0x16:  mov    %edx,0x4(%esp)
0810f978 +0x1a:  mov    %eax,(%esp)
0810f97b +0x1d:  call   *%ecx
0810f97d +0x1f:  mov    0x10(%ebp),%edx
0810f980 +0x22:  mov    0x8(%ebp),%eax
0810f983 +0x25:  mov    %edx,0x1c(%eax)
0810f986 +0x28:  leave
0810f987 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CFatigueQuantity::set_event_data @ 0x810f95e

/* EventClassify::CFatigueQuantity::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CFatigueQuantity::set_event_data
          (CFatigueQuantity *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
