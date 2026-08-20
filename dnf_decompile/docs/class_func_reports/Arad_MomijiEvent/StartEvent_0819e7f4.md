# StartEvent

`_ZN16Arad_MomijiEvent10StartEventE10Word_Param`

`Arad_MomijiEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e7f4  _ZN16Arad_MomijiEvent10StartEventE10Word_Param
#           Arad_MomijiEvent::StartEvent(Word_Param)
# range [0x0819e7f4, 0x0819e80d]
0819e7f4 +0x00:  push   %ebp
0819e7f5 +0x01:  mov    %esp,%ebp
0819e7f7 +0x03:  sub    $0x18,%esp
0819e7fa +0x06:  mov    0x8(%ebp),%eax
0819e7fd +0x09:  mov    (%eax),%eax
0819e7ff +0x0b:  add    $0x8,%eax
0819e802 +0x0e:  mov    (%eax),%edx
0819e804 +0x10:  mov    0x8(%ebp),%eax
0819e807 +0x13:  mov    %eax,(%esp)
0819e80a +0x16:  call   *%edx
0819e80c +0x18:  leave
0819e80d +0x19:  ret
```

## 反编译 C

```c
// Arad_MomijiEvent::StartEvent @ 0x819e7f4

/* Arad_MomijiEvent::StartEvent(Word_Param) */

void Arad_MomijiEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
```
