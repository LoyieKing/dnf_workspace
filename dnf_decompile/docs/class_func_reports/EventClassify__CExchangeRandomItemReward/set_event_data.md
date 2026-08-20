# set_event_data

`_ZN13EventClassify25CExchangeRandomItemReward14set_event_dataEiP17InGameEventScript`

`EventClassify::CExchangeRandomItemReward::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CExchangeRandomItemReward` | `0x0810eb06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810eb06  _ZN13EventClassify25CExchangeRandomItemReward14set_event_dataEiP17InGameEventScript
#           EventClassify::CExchangeRandomItemReward::set_event_data(int, InGameEventScript*)
# range [0x0810eb06, 0x0810eb2f]
0810eb06 +0x00:  push   %ebp
0810eb07 +0x01:  mov    %esp,%ebp
0810eb09 +0x03:  sub    $0x18,%esp
0810eb0c +0x06:  mov    0x8(%ebp),%eax
0810eb0f +0x09:  mov    (%eax),%eax
0810eb11 +0x0b:  add    $0x18,%eax
0810eb14 +0x0e:  mov    (%eax),%ecx
0810eb16 +0x10:  mov    0x8(%ebp),%eax
0810eb19 +0x13:  mov    0xc(%ebp),%edx
0810eb1c +0x16:  mov    %edx,0x4(%esp)
0810eb20 +0x1a:  mov    %eax,(%esp)
0810eb23 +0x1d:  call   *%ecx
0810eb25 +0x1f:  mov    0x10(%ebp),%edx
0810eb28 +0x22:  mov    0x8(%ebp),%eax
0810eb2b +0x25:  mov    %edx,0x1c(%eax)
0810eb2e +0x28:  leave
0810eb2f +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CExchangeRandomItemReward::set_event_data @ 0x810eb06

/* EventClassify::CExchangeRandomItemReward::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CExchangeRandomItemReward::set_event_data
          (CExchangeRandomItemReward *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
