# process_set_reward_start

`_ZN12COnTimeEvent24process_set_reward_startEiiii`

`COnTimeEvent::process_set_reward_start(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bbce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bbce0  _ZN12COnTimeEvent24process_set_reward_startEiiii
#           COnTimeEvent::process_set_reward_start(int, int, int, int)
# range [0x081bbce0, 0x081bbd45]
081bbce0 +0x00:  push   %ebp
081bbce1 +0x01:  mov    %esp,%ebp
081bbce3 +0x03:  sub    $0x18,%esp
081bbce6 +0x06:  movl   $0x0,0x4(%esp)
081bbcee +0x0e:  mov    0x8(%ebp),%eax
081bbcf1 +0x11:  mov    %eax,(%esp)
081bbcf4 +0x14:  call   081bb978 <_ZN12COnTimeEvent16set_reward_stateEi>  ; COnTimeEvent::set_reward_state(int)
081bbcf9 +0x19:  mov    0xc(%ebp),%eax
081bbcfc +0x1c:  mov    %eax,0x4(%esp)
081bbd00 +0x20:  mov    0x8(%ebp),%eax
081bbd03 +0x23:  mov    %eax,(%esp)
081bbd06 +0x26:  call   081bb986 <_ZN12COnTimeEvent13set_ontime_idEi>  ; COnTimeEvent::set_ontime_id(int)
081bbd0b +0x2b:  mov    0x14(%ebp),%eax
081bbd0e +0x2e:  mov    %eax,0x8(%esp)
081bbd12 +0x32:  mov    0x10(%ebp),%eax
081bbd15 +0x35:  mov    %eax,0x4(%esp)
081bbd19 +0x39:  mov    0x8(%ebp),%eax
081bbd1c +0x3c:  mov    %eax,(%esp)
081bbd1f +0x3f:  call   081bbcc8 <_ZN12COnTimeEvent22set_ontime_reward_itemEii>  ; COnTimeEvent::set_ontime_reward_item(int, int)
081bbd24 +0x44:  mov    0x18(%ebp),%eax
081bbd27 +0x47:  mov    %eax,0x4(%esp)
081bbd2b +0x4b:  mov    0x8(%ebp),%eax
081bbd2e +0x4e:  mov    %eax,(%esp)
081bbd31 +0x51:  call   081bb994 <_ZN12COnTimeEvent19set_reward_end_timeEi>  ; COnTimeEvent::set_reward_end_time(int)
081bbd36 +0x56:  mov    0x8(%ebp),%eax
081bbd39 +0x59:  add    $0x14,%eax
081bbd3c +0x5c:  mov    %eax,(%esp)
081bbd3f +0x5f:  call   081bc042 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0xdc>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0xdc
081bbd44 +0x64:  leave
081bbd45 +0x65:  ret
```

## 反编译 C

```c
// COnTimeEvent::process_set_reward_start @ 0x81bbce0

/* COnTimeEvent::process_set_reward_start(int, int, int, int) */

void __thiscall
COnTimeEvent::process_set_reward_start
          (COnTimeEvent *this,int param_1,int param_2,int param_3,int param_4)

{
  set_reward_state(this,0);
  set_ontime_id(this,param_1);
  set_ontime_reward_item(this,param_2,param_3);
  set_reward_end_time(this,param_4);
  CRewardUserList::clear((CRewardUserList *)(this + 0x14));
  return;
}
```
