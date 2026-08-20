# StartEvent

`_ZN16HeroMissionEvent10StartEventE10Word_Param`

`HeroMissionEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x081666e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081666e6  _ZN16HeroMissionEvent10StartEventE10Word_Param
#           HeroMissionEvent::StartEvent(Word_Param)
# range [0x081666e6, 0x081666ff]
081666e6 +0x00:  push   %ebp
081666e7 +0x01:  mov    %esp,%ebp
081666e9 +0x03:  sub    $0x18,%esp
081666ec +0x06:  mov    0x8(%ebp),%eax
081666ef +0x09:  mov    (%eax),%eax
081666f1 +0x0b:  add    $0x8,%eax
081666f4 +0x0e:  mov    (%eax),%edx
081666f6 +0x10:  mov    0x8(%ebp),%eax
081666f9 +0x13:  mov    %eax,(%esp)
081666fc +0x16:  call   *%edx
081666fe +0x18:  leave
081666ff +0x19:  ret
```

## 反编译 C

```c
// HeroMissionEvent::StartEvent @ 0x81666e6

/* HeroMissionEvent::StartEvent(Word_Param) */

void HeroMissionEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
```
