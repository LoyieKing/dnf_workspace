# set_reward_state

`_ZN12COnTimeEvent16set_reward_stateEi`

`COnTimeEvent::set_reward_state(int)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb978  _ZN12COnTimeEvent16set_reward_stateEi
#           COnTimeEvent::set_reward_state(int)
# range [0x081bb978, 0x081bb985]
081bb978 +0x00:  push   %ebp
081bb979 +0x01:  mov    %esp,%ebp
081bb97b +0x03:  mov    0x8(%ebp),%eax
081bb97e +0x06:  mov    0xc(%ebp),%edx
081bb981 +0x09:  mov    %edx,0x10(%eax)
081bb984 +0x0c:  pop    %ebp
081bb985 +0x0d:  ret
```

## 反编译 C

```c
// COnTimeEvent::set_reward_state @ 0x81bb978

/* COnTimeEvent::set_reward_state(int) */

void __thiscall COnTimeEvent::set_reward_state(COnTimeEvent *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}
```
