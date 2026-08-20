# update_next_end_cool_time

`_ZN8Teleport25update_next_end_cool_timeEP5CUser`

`Teleport::update_next_end_cool_time(CUser*)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283e30  _ZN8Teleport25update_next_end_cool_timeEP5CUser
#           Teleport::update_next_end_cool_time(CUser*)
# range [0x08283e30, 0x08283eb9]
08283e30 +0x00:  push   %ebp
08283e31 +0x01:  mov    %esp,%ebp
08283e33 +0x03:  sub    $0x28,%esp
08283e36 +0x06:  cmpl   $0x0,0xc(%ebp)
08283e3a +0x0a:  je     08283eb7 <+0x87>
08283e3c +0x0c:  movl   $0x0,-0x10(%ebp)
08283e43 +0x13:  lea    -0x10(%ebp),%eax
08283e46 +0x16:  mov    %eax,0x8(%esp)
08283e4a +0x1a:  movl   $0x2,0x4(%esp)
08283e52 +0x22:  mov    0xc(%ebp),%eax
08283e55 +0x25:  mov    %eax,(%esp)
08283e58 +0x28:  call   0868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>  ; CUser::is_equip_aura_avatar(char, int&)
08283e5d +0x2d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08283e64 +0x34:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08283e69 +0x39:  mov    -0x10(%ebp),%edx
08283e6c +0x3c:  add    %edx,%eax
08283e6e +0x3e:  mov    %eax,-0xc(%ebp)
08283e71 +0x41:  mov    0xc(%ebp),%eax
08283e74 +0x44:  mov    -0xc(%ebp),%edx
08283e77 +0x47:  mov    %edx,0x8(%esp)
08283e7b +0x4b:  movl   $0x2,0x4(%esp)
08283e83 +0x53:  mov    %eax,(%esp)
08283e86 +0x56:  call   08284490 <_GLOBAL__I__ZN8TeleportC2Ev+0xfd>  ; global constructors keyed to Teleport::Teleport()+0xfd
08283e8b +0x5b:  movl   $0x2,0x4(%esp)
08283e93 +0x63:  mov    0xc(%ebp),%eax
08283e96 +0x66:  mov    %eax,(%esp)
08283e99 +0x69:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
08283e9e +0x6e:  mov    %eax,0x8(%esp)
08283ea2 +0x72:  movl   $0x2,0x4(%esp)
08283eaa +0x7a:  mov    0xc(%ebp),%eax
08283ead +0x7d:  mov    %eax,(%esp)
08283eb0 +0x80:  call   0868de0a <_ZN5CUser22UpdateAuraAvatarOptionEii>  ; CUser::UpdateAuraAvatarOption(int, int)
08283eb5 +0x85:  jmp    08283eb8 <+0x88>
08283eb7 +0x87:  nop
08283eb8 +0x88:  leave
08283eb9 +0x89:  ret
```

## 反编译 C

```c
// Teleport::update_next_end_cool_time @ 0x8283e30

/* Teleport::update_next_end_cool_time(CUser*) */

void __thiscall Teleport::update_next_end_cool_time(Teleport *this,CUser *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_14 = 0;
    CUser::is_equip_aura_avatar(param_1,'\x02',&local_14);
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_10 + local_14;
    CUserCharacInfo::set_aura_avatar_option_value((CUserCharacInfo *)param_1,2,local_10);
    iVar1 = CUser::get_aura_avatar_option_value(param_1,2);
    CUser::UpdateAuraAvatarOption(param_1,2,iVar1);
  }
  return;
}
```
