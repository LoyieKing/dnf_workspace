# delete_reward_user

`_ZN12COnTimeEvent18delete_reward_userEP5CUser`

`COnTimeEvent::delete_reward_user(CUser*)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bbc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bbc64  _ZN12COnTimeEvent18delete_reward_userEP5CUser
#           COnTimeEvent::delete_reward_user(CUser*)
# range [0x081bbc64, 0x081bbcc7]
081bbc64 +0x00:  push   %ebp
081bbc65 +0x01:  mov    %esp,%ebp
081bbc67 +0x03:  push   %ebx
081bbc68 +0x04:  sub    $0x14,%esp
081bbc6b +0x07:  cmpl   $0x0,0xc(%ebp)
081bbc6f +0x0b:  jne    081bbc78 <+0x14>
081bbc71 +0x0d:  mov    $0x0,%eax
081bbc76 +0x12:  jmp    081bbcc2 <+0x5e>
081bbc78 +0x14:  mov    0x8(%ebp),%eax
081bbc7b +0x17:  mov    %eax,(%esp)
081bbc7e +0x1a:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbc83 +0x1f:  mov    %eax,%ebx
081bbc85 +0x21:  mov    0xc(%ebp),%eax
081bbc88 +0x24:  mov    %eax,(%esp)
081bbc8b +0x27:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
081bbc90 +0x2c:  cmp    %eax,%ebx
081bbc92 +0x2e:  sete   %al
081bbc95 +0x31:  test   %al,%al
081bbc97 +0x33:  je     081bbcbd <+0x59>
081bbc99 +0x35:  mov    0xc(%ebp),%eax
081bbc9c +0x38:  mov    %eax,(%esp)
081bbc9f +0x3b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bbca4 +0x40:  mov    0x8(%ebp),%edx
081bbca7 +0x43:  add    $0x14,%edx
081bbcaa +0x46:  mov    %eax,0x4(%esp)
081bbcae +0x4a:  mov    %edx,(%esp)
081bbcb1 +0x4d:  call   081bb7bc <_ZN15CRewardUserList11delete_markEj>  ; CRewardUserList::delete_mark(unsigned int)
081bbcb6 +0x52:  mov    $0x1,%eax
081bbcbb +0x57:  jmp    081bbcc2 <+0x5e>
081bbcbd +0x59:  mov    $0x0,%eax
081bbcc2 +0x5e:  add    $0x14,%esp
081bbcc5 +0x61:  pop    %ebx
081bbcc6 +0x62:  pop    %ebp
081bbcc7 +0x63:  ret
```

## 反编译 C

```c
// COnTimeEvent::delete_reward_user @ 0x81bbc64

/* COnTimeEvent::delete_reward_user(CUser*) */

undefined4 __thiscall COnTimeEvent::delete_reward_user(COnTimeEvent *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_ontime_id(this);
    iVar3 = CUser::get_ontime_last_recv_idx(param_1);
    if (iVar2 == iVar3) {
      CUser::get_acc_id(param_1);
      CRewardUserList::delete_mark((uint)(this + 0x14));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
