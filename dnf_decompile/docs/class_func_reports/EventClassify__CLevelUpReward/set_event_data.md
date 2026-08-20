# set_event_data

`_ZN13EventClassify14CLevelUpReward14set_event_dataEiP17InGameEventScript`

`EventClassify::CLevelUpReward::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e168` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e168  _ZN13EventClassify14CLevelUpReward14set_event_dataEiP17InGameEventScript
#           EventClassify::CLevelUpReward::set_event_data(int, InGameEventScript*)
# range [0x0810e168, 0x0810e191]
0810e168 +0x00:  push   %ebp
0810e169 +0x01:  mov    %esp,%ebp
0810e16b +0x03:  sub    $0x18,%esp
0810e16e +0x06:  mov    0x8(%ebp),%eax
0810e171 +0x09:  mov    (%eax),%eax
0810e173 +0x0b:  add    $0x18,%eax
0810e176 +0x0e:  mov    (%eax),%ecx
0810e178 +0x10:  mov    0x8(%ebp),%eax
0810e17b +0x13:  mov    0xc(%ebp),%edx
0810e17e +0x16:  mov    %edx,0x4(%esp)
0810e182 +0x1a:  mov    %eax,(%esp)
0810e185 +0x1d:  call   *%ecx
0810e187 +0x1f:  mov    0x10(%ebp),%edx
0810e18a +0x22:  mov    0x8(%ebp),%eax
0810e18d +0x25:  mov    %edx,0x1c(%eax)
0810e190 +0x28:  leave
0810e191 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::set_event_data @ 0x810e168

/* EventClassify::CLevelUpReward::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CLevelUpReward::set_event_data
          (CLevelUpReward *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
