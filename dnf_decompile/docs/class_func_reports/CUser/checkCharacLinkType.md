# checkCharacLinkType

`_ZN5CUser19checkCharacLinkTypeEci`

`CUser::checkCharacLinkType(char, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652b90  _ZN5CUser19checkCharacLinkTypeEci
#           CUser::checkCharacLinkType(char, int)
# range [0x08652b90, 0x08652c8d]
08652b90 +0x00:  push   %ebp
08652b91 +0x01:  mov    %esp,%ebp
08652b93 +0x03:  sub    $0x38,%esp
08652b96 +0x06:  mov    0xc(%ebp),%eax
08652b99 +0x09:  mov    %al,-0x1c(%ebp)
08652b9c +0x0c:  mov    0x8(%ebp),%eax
08652b9f +0x0f:  mov    %eax,(%esp)
08652ba2 +0x12:  call   08696b4a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x339f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x339f
08652ba7 +0x17:  movsbl %al,%eax
08652baa +0x1a:  mov    %eax,-0xc(%ebp)
08652bad +0x1d:  movsbl -0x1c(%ebp),%eax
08652bb1 +0x21:  cmp    0x10(%ebp),%eax
08652bb4 +0x24:  jge    08652bbc <+0x2c>
08652bb6 +0x26:  cmpb   $0x0,-0x1c(%ebp)
08652bba +0x2a:  jns    08652bc6 <+0x36>
08652bbc +0x2c:  mov    $0x0,%eax
08652bc1 +0x31:  jmp    08652c8c <+0xfc>
08652bc6 +0x36:  cmpl   $0x2,-0xc(%ebp)
08652bca +0x3a:  jne    08652c2a <+0x9a>
08652bcc +0x3c:  movsbl -0x1c(%ebp),%eax
08652bd0 +0x40:  add    $0x1,%eax
08652bd3 +0x43:  cmp    0x10(%ebp),%eax
08652bd6 +0x46:  jl     08652be2 <+0x52>
08652bd8 +0x48:  mov    $0x0,%eax
08652bdd +0x4d:  jmp    08652c8c <+0xfc>
08652be2 +0x52:  movzbl -0x1c(%ebp),%eax
08652be6 +0x56:  and    $0x1,%eax
08652be9 +0x59:  test   %al,%al
08652beb +0x5b:  je     08652bf7 <+0x67>
08652bed +0x5d:  mov    $0x0,%eax
08652bf2 +0x62:  jmp    08652c8c <+0xfc>
08652bf7 +0x67:  movsbl -0x1c(%ebp),%eax
08652bfb +0x6b:  add    $0x1,%eax
08652bfe +0x6e:  mov    0x8(%ebp),%edx
08652c01 +0x71:  add    $0x796e8,%edx
08652c07 +0x77:  mov    %eax,0x4(%esp)
08652c0b +0x7b:  mov    %edx,(%esp)
08652c0e +0x7e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08652c13 +0x83:  movzbl 0x1246(%eax),%eax
08652c1a +0x8a:  cmp    $0x3,%al
08652c1c +0x8c:  setne  %al
08652c1f +0x8f:  test   %al,%al
08652c21 +0x91:  je     08652c87 <+0xf7>
08652c23 +0x93:  mov    $0x0,%eax
08652c28 +0x98:  jmp    08652c8c <+0xfc>
08652c2a +0x9a:  cmpl   $0x3,-0xc(%ebp)
08652c2e +0x9e:  jne    08652c87 <+0xf7>
08652c30 +0xa0:  movsbl -0x1c(%ebp),%eax
08652c34 +0xa4:  sub    $0x1,%eax
08652c37 +0xa7:  test   %eax,%eax
08652c39 +0xa9:  jns    08652c42 <+0xb2>
08652c3b +0xab:  mov    $0x0,%eax
08652c40 +0xb0:  jmp    08652c8c <+0xfc>
08652c42 +0xb2:  movzbl -0x1c(%ebp),%eax
08652c46 +0xb6:  and    $0x1,%eax
08652c49 +0xb9:  test   %al,%al
08652c4b +0xbb:  jne    08652c54 <+0xc4>
08652c4d +0xbd:  mov    $0x0,%eax
08652c52 +0xc2:  jmp    08652c8c <+0xfc>
08652c54 +0xc4:  movsbl -0x1c(%ebp),%eax
08652c58 +0xc8:  sub    $0x1,%eax
08652c5b +0xcb:  mov    0x8(%ebp),%edx
08652c5e +0xce:  add    $0x796e8,%edx
08652c64 +0xd4:  mov    %eax,0x4(%esp)
08652c68 +0xd8:  mov    %edx,(%esp)
08652c6b +0xdb:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08652c70 +0xe0:  movzbl 0x1246(%eax),%eax
08652c77 +0xe7:  cmp    $0x2,%al
08652c79 +0xe9:  setne  %al
08652c7c +0xec:  test   %al,%al
08652c7e +0xee:  je     08652c87 <+0xf7>
08652c80 +0xf0:  mov    $0x0,%eax
08652c85 +0xf5:  jmp    08652c8c <+0xfc>
08652c87 +0xf7:  mov    $0x1,%eax
08652c8c +0xfc:  leave
08652c8d +0xfd:  ret
```

## 反编译 C

```c
// CUser::checkCharacLinkType @ 0x8652b90

/* CUser::checkCharacLinkType(char, int) */

undefined4 __thiscall CUser::checkCharacLinkType(CUser *this,char param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = CUserCharacInfo::getCharacLinkType((CUserCharacInfo *)this);
  if ((param_2 <= param_1) || (param_1 < '\0')) {
    return 0;
  }
  if (cVar1 == '\x02') {
    if (param_2 <= param_1 + 1) {
      return 0;
    }
    if ((param_1 & 1U) != 0) {
      return 0;
    }
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       (int)param_1 + 1);
    if (*(char *)(iVar2 + 0x1246) != '\x03') {
      return 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (param_1 + -1 < 0) {
      return 0;
    }
    if ((param_1 & 1U) == 0) {
      return 0;
    }
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       (int)param_1 - 1);
    if (*(char *)(iVar2 + 0x1246) != '\x02') {
      return 0;
    }
  }
  return 1;
}
```
