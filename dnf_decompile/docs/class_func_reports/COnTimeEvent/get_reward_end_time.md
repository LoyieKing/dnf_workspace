# get_reward_end_time

`_ZN12COnTimeEvent19get_reward_end_timeEv`

`COnTimeEvent::get_reward_end_time()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb9ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb9ba  _ZN12COnTimeEvent19get_reward_end_timeEv
#           COnTimeEvent::get_reward_end_time()
# range [0x081bb9ba, 0x081bb9c5]
081bb9ba +0x00:  push   %ebp
081bb9bb +0x01:  mov    %esp,%ebp
081bb9bd +0x03:  mov    0x8(%ebp),%eax
081bb9c0 +0x06:  mov    0x54(%eax),%eax
081bb9c3 +0x09:  pop    %ebp
081bb9c4 +0x0a:  ret
081bb9c5 +0x0b:  nop
```

## 反编译 C

```c
// COnTimeEvent::get_reward_end_time @ 0x81bb9ba

/* COnTimeEvent::get_reward_end_time() */

undefined4 __thiscall COnTimeEvent::get_reward_end_time(COnTimeEvent *this)

{
  return *(undefined4 *)(this + 0x54);
}
```
