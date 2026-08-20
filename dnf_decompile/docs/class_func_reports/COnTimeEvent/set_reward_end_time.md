# set_reward_end_time

`_ZN12COnTimeEvent19set_reward_end_timeEi`

`COnTimeEvent::set_reward_end_time(int)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb994  _ZN12COnTimeEvent19set_reward_end_timeEi
#           COnTimeEvent::set_reward_end_time(int)
# range [0x081bb994, 0x081bb9b9]
081bb994 +0x00:  push   %ebp
081bb995 +0x01:  mov    %esp,%ebp
081bb997 +0x03:  sub    $0x28,%esp
081bb99a +0x06:  movl   $0x0,(%esp)
081bb9a1 +0x0d:  call   0807d750 <_init+0x48>
081bb9a6 +0x12:  mov    %eax,-0xc(%ebp)
081bb9a9 +0x15:  mov    0xc(%ebp),%eax
081bb9ac +0x18:  mov    -0xc(%ebp),%edx
081bb9af +0x1b:  add    %eax,%edx
081bb9b1 +0x1d:  mov    0x8(%ebp),%eax
081bb9b4 +0x20:  mov    %edx,0x54(%eax)
081bb9b7 +0x23:  leave
081bb9b8 +0x24:  ret
081bb9b9 +0x25:  nop
```

## 反编译 C

```c
// COnTimeEvent::set_reward_end_time @ 0x81bb994

/* COnTimeEvent::set_reward_end_time(int) */

void __thiscall COnTimeEvent::set_reward_end_time(COnTimeEvent *this,int param_1)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  *(time_t *)(this + 0x54) = tVar1 + param_1;
  return;
}
```
