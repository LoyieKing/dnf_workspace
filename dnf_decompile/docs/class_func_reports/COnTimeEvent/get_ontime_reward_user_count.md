# get_ontime_reward_user_count

`_ZN12COnTimeEvent28get_ontime_reward_user_countEv`

`COnTimeEvent::get_ontime_reward_user_count()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb9c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb9c6  _ZN12COnTimeEvent28get_ontime_reward_user_countEv
#           COnTimeEvent::get_ontime_reward_user_count()
# range [0x081bb9c6, 0x081bb9db]
081bb9c6 +0x00:  push   %ebp
081bb9c7 +0x01:  mov    %esp,%ebp
081bb9c9 +0x03:  sub    $0x18,%esp
081bb9cc +0x06:  mov    0x8(%ebp),%eax
081bb9cf +0x09:  add    $0x14,%eax
081bb9d2 +0x0c:  mov    %eax,(%esp)
081bb9d5 +0x0f:  call   081bc064 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0xfe>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0xfe
081bb9da +0x14:  leave
081bb9db +0x15:  ret
```

## 反编译 C

```c
// COnTimeEvent::get_ontime_reward_user_count @ 0x81bb9c6

/* COnTimeEvent::get_ontime_reward_user_count() */

void __thiscall COnTimeEvent::get_ontime_reward_user_count(COnTimeEvent *this)

{
  CRewardUserList::get_index_size((CRewardUserList *)(this + 0x14));
  return;
}
```
