# get_reward_state

`_ZN12COnTimeEvent16get_reward_stateEv`

`COnTimeEvent::get_reward_state()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb96c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb96c  _ZN12COnTimeEvent16get_reward_stateEv
#           COnTimeEvent::get_reward_state()
# range [0x081bb96c, 0x081bb977]
081bb96c +0x00:  push   %ebp
081bb96d +0x01:  mov    %esp,%ebp
081bb96f +0x03:  mov    0x8(%ebp),%eax
081bb972 +0x06:  mov    0x10(%eax),%eax
081bb975 +0x09:  pop    %ebp
081bb976 +0x0a:  ret
081bb977 +0x0b:  nop
```

## 反编译 C

```c
// COnTimeEvent::get_reward_state @ 0x81bb96c

/* COnTimeEvent::get_reward_state() */

undefined4 __thiscall COnTimeEvent::get_reward_state(COnTimeEvent *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
