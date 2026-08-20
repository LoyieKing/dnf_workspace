# put_disjoint_machine_info

`_ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard`

`expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointMachine` | `0x085d1bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1bc0  _ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard
#           expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&)
# range [0x085d1bc0, 0x085d1cc1]
085d1bc0 +0x000:  push   %ebp
085d1bc1 +0x001:  mov    %esp,%ebp
085d1bc3 +0x003:  push   %ebx
085d1bc4 +0x004:  sub    $0x14,%esp
085d1bc7 +0x007:  mov    0x8(%ebp),%eax
085d1bca +0x00a:  mov    0x14(%eax),%eax
085d1bcd +0x00d:  mov    %eax,(%esp)
085d1bd0 +0x010:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085d1bd5 +0x015:  movzwl %ax,%edx
085d1bd8 +0x018:  mov    0xc(%ebp),%eax
085d1bdb +0x01b:  mov    %edx,0x4(%esp)
085d1bdf +0x01f:  mov    %eax,(%esp)
085d1be2 +0x022:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d1be7 +0x027:  mov    0x8(%ebp),%eax
085d1bea +0x02a:  add    $0x18,%eax
085d1bed +0x02d:  mov    %eax,(%esp)
085d1bf0 +0x030:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
085d1bf5 +0x035:  mov    %eax,%edx
085d1bf7 +0x037:  mov    0xc(%ebp),%eax
085d1bfa +0x03a:  mov    %edx,0x4(%esp)
085d1bfe +0x03e:  mov    %eax,(%esp)
085d1c01 +0x041:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d1c06 +0x046:  mov    0x8(%ebp),%eax
085d1c09 +0x049:  add    $0x18,%eax
085d1c0c +0x04c:  mov    %eax,(%esp)
085d1c0f +0x04f:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
085d1c14 +0x054:  mov    %eax,%ebx
085d1c16 +0x056:  mov    0x8(%ebp),%eax
085d1c19 +0x059:  add    $0x18,%eax
085d1c1c +0x05c:  mov    %eax,(%esp)
085d1c1f +0x05f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085d1c24 +0x064:  mov    0xc(%ebp),%edx
085d1c27 +0x067:  mov    %ebx,0x8(%esp)
085d1c2b +0x06b:  mov    %eax,0x4(%esp)
085d1c2f +0x06f:  mov    %edx,(%esp)
085d1c32 +0x072:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085d1c37 +0x077:  mov    0x8(%ebp),%eax
085d1c3a +0x07a:  mov    0x14(%eax),%eax
085d1c3d +0x07d:  mov    %eax,(%esp)
085d1c40 +0x080:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d1c45 +0x085:  movsbl %al,%edx
085d1c48 +0x088:  mov    0xc(%ebp),%eax
085d1c4b +0x08b:  mov    %edx,0x4(%esp)
085d1c4f +0x08f:  mov    %eax,(%esp)
085d1c52 +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d1c57 +0x097:  mov    0x8(%ebp),%eax
085d1c5a +0x09a:  mov    0x14(%eax),%eax
085d1c5d +0x09d:  movl   $0x0,0x4(%esp)
085d1c65 +0x0a5:  mov    %eax,(%esp)
085d1c68 +0x0a8:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d1c6d +0x0ad:  mov    0xc(%ebp),%edx
085d1c70 +0x0b0:  mov    %eax,0x4(%esp)
085d1c74 +0x0b4:  mov    %edx,(%esp)
085d1c77 +0x0b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d1c7c +0x0bc:  mov    0x8(%ebp),%eax
085d1c7f +0x0bf:  mov    0x24(%eax),%edx
085d1c82 +0x0c2:  mov    0xc(%ebp),%eax
085d1c85 +0x0c5:  mov    %edx,0x4(%esp)
085d1c89 +0x0c9:  mov    %eax,(%esp)
085d1c8c +0x0cc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d1c91 +0x0d1:  mov    0x8(%ebp),%eax
085d1c94 +0x0d4:  mov    0x28(%eax),%edx
085d1c97 +0x0d7:  mov    0xc(%ebp),%eax
085d1c9a +0x0da:  mov    %edx,0x4(%esp)
085d1c9e +0x0de:  mov    %eax,(%esp)
085d1ca1 +0x0e1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d1ca6 +0x0e6:  mov    0x8(%ebp),%eax
085d1ca9 +0x0e9:  mov    0x1c(%eax),%edx
085d1cac +0x0ec:  mov    0xc(%ebp),%eax
085d1caf +0x0ef:  mov    %edx,0x4(%esp)
085d1cb3 +0x0f3:  mov    %eax,(%esp)
085d1cb6 +0x0f6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d1cbb +0x0fb:  add    $0x14,%esp
085d1cbe +0x0fe:  pop    %ebx
085d1cbf +0x0ff:  pop    %ebp
085d1cc0 +0x100:  ret
085d1cc1 +0x101:  nop
```

## 反编译 C

```c
// expert_job::CDisjointMachine::put_disjoint_machine_info @ 0x85d1bc0

/* expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&) */

void __thiscall
expert_job::CDisjointMachine::put_disjoint_machine_info(CDisjointMachine *this,PacketGuard *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
  iVar3 = std::string::length((string *)(this + 0x18));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar3);
  iVar3 = std::string::length((string *)(this + 0x18));
  pcVar4 = (char *)std::string::c_str((string *)(this + 0x18));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,pcVar4,iVar3);
  cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  iVar3 = CUser::get_area(*(CUser **)(this + 0x14),false);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x24));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x1c));
  return;
}
```
