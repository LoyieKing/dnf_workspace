# set_ontime_reward_item

`_ZN12COnTimeEvent22set_ontime_reward_itemEii`

`COnTimeEvent::set_ontime_reward_item(int, int)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bbcc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bbcc8  _ZN12COnTimeEvent22set_ontime_reward_itemEii
#           COnTimeEvent::set_ontime_reward_item(int, int)
# range [0x081bbcc8, 0x081bbcdf]
081bbcc8 +0x00:  push   %ebp
081bbcc9 +0x01:  mov    %esp,%ebp
081bbccb +0x03:  mov    0x8(%ebp),%eax
081bbcce +0x06:  mov    0xc(%ebp),%edx
081bbcd1 +0x09:  mov    %edx,0x58(%eax)
081bbcd4 +0x0c:  mov    0x8(%ebp),%eax
081bbcd7 +0x0f:  mov    0x10(%ebp),%edx
081bbcda +0x12:  mov    %edx,0x5c(%eax)
081bbcdd +0x15:  pop    %ebp
081bbcde +0x16:  ret
081bbcdf +0x17:  nop
```

## 反编译 C

```c
// COnTimeEvent::set_ontime_reward_item @ 0x81bbcc8

/* COnTimeEvent::set_ontime_reward_item(int, int) */

void __thiscall COnTimeEvent::set_ontime_reward_item(COnTimeEvent *this,int param_1,int param_2)

{
  *(int *)(this + 0x58) = param_1;
  *(int *)(this + 0x5c) = param_2;
  return;
}
```
