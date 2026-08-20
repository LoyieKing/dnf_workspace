# set_charac_guildkey_in_login

`_ZN5CUser28set_charac_guildkey_in_loginEjj`

`CUser::set_charac_guildkey_in_login(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c04e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c04e  _ZN5CUser28set_charac_guildkey_in_loginEjj
#           CUser::set_charac_guildkey_in_login(unsigned int, unsigned int)
# range [0x0866c04e, 0x0866c0d9]
0866c04e +0x00:  push   %ebp
0866c04f +0x01:  mov    %esp,%ebp
0866c051 +0x03:  sub    $0x28,%esp
0866c054 +0x06:  mov    0x8(%ebp),%eax
0866c057 +0x09:  mov    %eax,(%esp)
0866c05a +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0866c05f +0x11:  cmp    $0x2,%eax
0866c062 +0x14:  sete   %al
0866c065 +0x17:  test   %al,%al
0866c067 +0x19:  je     0866c0d7 <+0x89>
0866c069 +0x1b:  movl   $0x0,-0xc(%ebp)
0866c070 +0x22:  jmp    0866c0bd <+0x6f>
0866c072 +0x24:  mov    -0xc(%ebp),%eax
0866c075 +0x27:  mov    0x8(%ebp),%edx
0866c078 +0x2a:  add    $0x796e8,%edx
0866c07e +0x30:  mov    %eax,0x4(%esp)
0866c082 +0x34:  mov    %edx,(%esp)
0866c085 +0x37:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0866c08a +0x3c:  mov    (%eax),%eax
0866c08c +0x3e:  cmp    0x10(%ebp),%eax
0866c08f +0x41:  sete   %al
0866c092 +0x44:  test   %al,%al
0866c094 +0x46:  je     0866c0b9 <+0x6b>
0866c096 +0x48:  mov    -0xc(%ebp),%eax
0866c099 +0x4b:  mov    0x8(%ebp),%edx
0866c09c +0x4e:  add    $0x796e8,%edx
0866c0a2 +0x54:  mov    %eax,0x4(%esp)
0866c0a6 +0x58:  mov    %edx,(%esp)
0866c0a9 +0x5b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0866c0ae +0x60:  mov    0xc(%ebp),%edx
0866c0b1 +0x63:  mov    %edx,0xdbe(%eax)
0866c0b7 +0x69:  jmp    0866c0d7 <+0x89>
0866c0b9 +0x6b:  addl   $0x1,-0xc(%ebp)
0866c0bd +0x6f:  mov    0x8(%ebp),%eax
0866c0c0 +0x72:  add    $0x796e8,%eax
0866c0c5 +0x77:  mov    %eax,(%esp)
0866c0c8 +0x7a:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0866c0cd +0x7f:  cmp    -0xc(%ebp),%eax
0866c0d0 +0x82:  setg   %al
0866c0d3 +0x85:  test   %al,%al
0866c0d5 +0x87:  jne    0866c072 <+0x24>
0866c0d7 +0x89:  leave
0866c0d8 +0x8a:  ret
0866c0d9 +0x8b:  nop
```

## 反编译 C

```c
// CUser::set_charac_guildkey_in_login @ 0x866c04e

/* CUser::set_charac_guildkey_in_login(unsigned int, unsigned int) */

void __thiscall CUser::set_charac_guildkey_in_login(CUser *this,uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_10;
  
  iVar1 = get_state(this);
  if (iVar1 == 2) {
    for (local_10 = 0;
        iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
        (int)local_10 < iVar1; local_10 = local_10 + 1) {
      puVar2 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                 ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                  (this + 0x796e8),local_10);
      if (*puVar2 == param_2) {
        iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           local_10);
        *(uint *)(iVar1 + 0xdbe) = param_1;
        return;
      }
    }
  }
  return;
}
```
