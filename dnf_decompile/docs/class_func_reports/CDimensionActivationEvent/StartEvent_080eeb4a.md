# StartEvent

`_ZN25CDimensionActivationEvent10StartEventE10Word_Param`

`CDimensionActivationEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eeb4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eeb4a  _ZN25CDimensionActivationEvent10StartEventE10Word_Param
#           CDimensionActivationEvent::StartEvent(Word_Param)
# range [0x080eeb4a, 0x080eeb63]
080eeb4a +0x00:  push   %ebp
080eeb4b +0x01:  mov    %esp,%ebp
080eeb4d +0x03:  sub    $0x18,%esp
080eeb50 +0x06:  mov    0x8(%ebp),%eax
080eeb53 +0x09:  mov    (%eax),%eax
080eeb55 +0x0b:  add    $0x8,%eax
080eeb58 +0x0e:  mov    (%eax),%edx
080eeb5a +0x10:  mov    0x8(%ebp),%eax
080eeb5d +0x13:  mov    %eax,(%esp)
080eeb60 +0x16:  call   *%edx
080eeb62 +0x18:  leave
080eeb63 +0x19:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::StartEvent @ 0x80eeb4a

/* CDimensionActivationEvent::StartEvent(Word_Param) */

void CDimensionActivationEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
```
