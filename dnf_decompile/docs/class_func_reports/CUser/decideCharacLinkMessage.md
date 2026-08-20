# decideCharacLinkMessage

`_ZN5CUser23decideCharacLinkMessageEv`

`CUser::decideCharacLinkMessage()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652a58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652a58  _ZN5CUser23decideCharacLinkMessageEv
#           CUser::decideCharacLinkMessage()
# range [0x08652a58, 0x08652b05]
08652a58 +0x00:  push   %ebp
08652a59 +0x01:  mov    %esp,%ebp
08652a5b +0x03:  sub    $0x28,%esp
08652a5e +0x06:  mov    0x8(%ebp),%eax
08652a61 +0x09:  mov    %eax,(%esp)
08652a64 +0x0c:  call   086973cc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c21>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c21
08652a69 +0x11:  test   %al,%al
08652a6b +0x13:  jne    08652b02 <+0xaa>
08652a71 +0x19:  movl   $0x0,-0xc(%ebp)
08652a78 +0x20:  jmp    08652ae2 <+0x8a>
08652a7a +0x22:  mov    -0xc(%ebp),%eax
08652a7d +0x25:  mov    0x8(%ebp),%edx
08652a80 +0x28:  add    $0x796e8,%edx
08652a86 +0x2e:  mov    %eax,0x4(%esp)
08652a8a +0x32:  mov    %edx,(%esp)
08652a8d +0x35:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08652a92 +0x3a:  movzwl 0x27(%eax),%eax
08652a96 +0x3e:  cmp    $0x3b,%ax
08652a9a +0x42:  jle    08652ab5 <+0x5d>
08652a9c +0x44:  mov    0x8(%ebp),%eax
08652a9f +0x47:  mov    %eax,(%esp)
08652aa2 +0x4a:  call   086973cc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c21>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c21
08652aa7 +0x4f:  xor    $0x1,%eax
08652aaa +0x52:  test   %al,%al
08652aac +0x54:  je     08652ab5 <+0x5d>
08652aae +0x56:  mov    $0x1,%eax
08652ab3 +0x5b:  jmp    08652aba <+0x62>
08652ab5 +0x5d:  mov    $0x0,%eax
08652aba +0x62:  test   %al,%al
08652abc +0x64:  je     08652ade <+0x86>
08652abe +0x66:  mov    0x8(%ebp),%eax
08652ac1 +0x69:  mov    %eax,(%esp)
08652ac4 +0x6c:  call   086529ca <_ZN5CUser21sendCharacLinkMessageEv>  ; CUser::sendCharacLinkMessage()
08652ac9 +0x71:  movl   $0x1,0x4(%esp)
08652ad1 +0x79:  mov    0x8(%ebp),%eax
08652ad4 +0x7c:  mov    %eax,(%esp)
08652ad7 +0x7f:  call   086528b4 <_ZN5CUser25saveCharacLinkMessageFlagEb>  ; CUser::saveCharacLinkMessageFlag(bool)
08652adc +0x84:  jmp    08652b03 <+0xab>
08652ade +0x86:  addl   $0x1,-0xc(%ebp)
08652ae2 +0x8a:  mov    0x8(%ebp),%eax
08652ae5 +0x8d:  add    $0x796e8,%eax
08652aea +0x92:  mov    %eax,(%esp)
08652aed +0x95:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08652af2 +0x9a:  cmp    -0xc(%ebp),%eax
08652af5 +0x9d:  setg   %al
08652af8 +0xa0:  test   %al,%al
08652afa +0xa2:  jne    08652a7a <+0x22>
08652b00 +0xa8:  jmp    08652b03 <+0xab>
08652b02 +0xaa:  nop
08652b03 +0xab:  leave
08652b04 +0xac:  ret
08652b05 +0xad:  nop
```

## 反编译 C

```c
// CUser::decideCharacLinkMessage @ 0x8652a58

/* CUser::decideCharacLinkMessage() */

void __thiscall CUser::decideCharacLinkMessage(CUser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint local_10;
  
  cVar2 = isCharacLinkMessageFlag(this);
  if (cVar2 == '\0') {
    for (local_10 = 0;
        iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
        (int)local_10 < iVar3; local_10 = local_10 + 1) {
      iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_10);
      if ((*(short *)(iVar3 + 0x27) < 0x3c) ||
         (cVar2 = isCharacLinkMessageFlag(this), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        sendCharacLinkMessage(this);
        saveCharacLinkMessageFlag(this,true);
        return;
      }
    }
  }
  return;
}
```
