# StartEvent

`_ZN15CConditionEvent10StartEventE10Word_Param`

`CConditionEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CConditionEvent` | `0x0818490e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818490e  _ZN15CConditionEvent10StartEventE10Word_Param
#           CConditionEvent::StartEvent(Word_Param)
# range [0x0818490e, 0x08184927]
0818490e +0x00:  push   %ebp
0818490f +0x01:  mov    %esp,%ebp
08184911 +0x03:  sub    $0x18,%esp
08184914 +0x06:  mov    0x8(%ebp),%eax
08184917 +0x09:  mov    (%eax),%eax
08184919 +0x0b:  add    $0x8,%eax
0818491c +0x0e:  mov    (%eax),%edx
0818491e +0x10:  mov    0x8(%ebp),%eax
08184921 +0x13:  mov    %eax,(%esp)
08184924 +0x16:  call   *%edx
08184926 +0x18:  leave
08184927 +0x19:  ret
```

## 反编译 C

```c
// CConditionEvent::StartEvent @ 0x818490e

/* CConditionEvent::StartEvent(Word_Param) */

void CConditionEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
```
