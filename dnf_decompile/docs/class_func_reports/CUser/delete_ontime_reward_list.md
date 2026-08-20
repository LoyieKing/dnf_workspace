# delete_ontime_reward_list

`_ZN5CUser25delete_ontime_reward_listEv`

`CUser::delete_ontime_reward_list()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868c3bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868c3bc  _ZN5CUser25delete_ontime_reward_listEv
#           CUser::delete_ontime_reward_list()
# range [0x0868c3bc, 0x0868c45d]
0868c3bc +0x00:  push   %ebp
0868c3bd +0x01:  mov    %esp,%ebp
0868c3bf +0x03:  sub    $0x38,%esp
0868c3c2 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0868c3c7 +0x0b:  movl   $0x33,0x4(%esp)
0868c3cf +0x13:  mov    %eax,(%esp)
0868c3d2 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0868c3d7 +0x1b:  mov    %eax,-0xc(%ebp)
0868c3da +0x1e:  cmpl   $0x0,-0xc(%ebp)
0868c3de +0x22:  je     0868c408 <+0x4c>
0868c3e0 +0x24:  mov    -0xc(%ebp),%eax
0868c3e3 +0x27:  mov    (%eax),%eax
0868c3e5 +0x29:  add    $0x34,%eax
0868c3e8 +0x2c:  mov    (%eax),%edx
0868c3ea +0x2e:  mov    -0xc(%ebp),%eax
0868c3ed +0x31:  movl   $0x0,0x4(%esp)
0868c3f5 +0x39:  mov    %eax,(%esp)
0868c3f8 +0x3c:  call   *%edx
0868c3fa +0x3e:  xor    $0x1,%eax
0868c3fd +0x41:  test   %al,%al
0868c3ff +0x43:  je     0868c445 <+0x89>
0868c401 +0x45:  mov    $0x0,%eax
0868c406 +0x4a:  jmp    0868c45c <+0xa0>
0868c408 +0x4c:  movl   $0x5,0xc(%esp)
0868c410 +0x54:  movl   $0xa828,0x8(%esp)
0868c418 +0x5c:  movl   $&_ZZN5CUser25delete_ontime_reward_listEvE19__PRETTY_FUNCTION__,0x4(%esp)
0868c420 +0x64:  lea    -0x1c(%ebp),%eax
0868c423 +0x67:  mov    %eax,(%esp)
0868c426 +0x6a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0868c42b +0x6f:  movl   $"[ON_TIME_EVENT]delete_ontime_reward_list() error",0x4(%esp)
0868c433 +0x77:  lea    -0x1c(%ebp),%eax
0868c436 +0x7a:  mov    %eax,(%esp)
0868c439 +0x7d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0868c43e +0x82:  mov    $0x0,%eax
0868c443 +0x87:  jmp    0868c45c <+0xa0>
0868c445 +0x89:  mov    0x8(%ebp),%eax
0868c448 +0x8c:  mov    %eax,0x4(%esp)
0868c44c +0x90:  mov    -0xc(%ebp),%eax
0868c44f +0x93:  mov    %eax,(%esp)
0868c452 +0x96:  call   081bbc64 <_ZN12COnTimeEvent18delete_reward_userEP5CUser>  ; COnTimeEvent::delete_reward_user(CUser*)
0868c457 +0x9b:  mov    $0x1,%eax
0868c45c +0xa0:  leave
0868c45d +0xa1:  ret
```

## 反编译 C

```c
// CUser::delete_ontime_reward_list @ 0x868c3bc

/* CUser::delete_ontime_reward_list() */

undefined4 __thiscall CUser::delete_ontime_reward_list(CUser *this)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  COnTimeEvent *local_10;
  
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_10 == (COnTimeEvent *)0x0) {
    cMyTrace::cMyTrace(local_20,"bool CUser::delete_ontime_reward_list()",0xa828,5);
    cMyTrace::operator()(local_20,"[ON_TIME_EVENT]delete_ontime_reward_list() error");
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar1 == '\x01') {
      COnTimeEvent::delete_reward_user(local_10,this);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
