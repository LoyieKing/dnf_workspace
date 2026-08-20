# set_event_data

`_ZN13EventClassify23CAccountFirstLoginDaily14set_event_dataEiP17InGameEventScript`

`EventClassify::CAccountFirstLoginDaily::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLoginDaily` | `0x0810dfc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810dfc6  _ZN13EventClassify23CAccountFirstLoginDaily14set_event_dataEiP17InGameEventScript
#           EventClassify::CAccountFirstLoginDaily::set_event_data(int, InGameEventScript*)
# range [0x0810dfc6, 0x0810dfe7]
0810dfc6 +0x00:  push   %ebp
0810dfc7 +0x01:  mov    %esp,%ebp
0810dfc9 +0x03:  sub    $0x18,%esp
0810dfcc +0x06:  mov    0x8(%ebp),%eax
0810dfcf +0x09:  mov    0x10(%ebp),%edx
0810dfd2 +0x0c:  mov    %edx,0x8(%esp)
0810dfd6 +0x10:  mov    0xc(%ebp),%edx
0810dfd9 +0x13:  mov    %edx,0x4(%esp)
0810dfdd +0x17:  mov    %eax,(%esp)
0810dfe0 +0x1a:  call   0810deda <_ZN13EventClassify18CAccountFirstLogin14set_event_dataEiP17InGameEventScript>  ; EventClassify::CAccountFirstLogin::set_event_data(int, InGameEventScript*)
0810dfe5 +0x1f:  leave
0810dfe6 +0x20:  ret
0810dfe7 +0x21:  nop
```

## 反编译 C

```c
// EventClassify::CAccountFirstLoginDaily::set_event_data @ 0x810dfc6

/* EventClassify::CAccountFirstLoginDaily::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAccountFirstLoginDaily::set_event_data
          (CAccountFirstLoginDaily *this,int param_1,InGameEventScript *param_2)

{
  CAccountFirstLogin::set_event_data((CAccountFirstLogin *)this,param_1,param_2);
  return;
}
```
