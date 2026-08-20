# dispatch_sig

`_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MakePVP` | `0x081f803e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f803e  _ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f803e, 0x081f81b9]
081f803e +0x000:  push   %ebp
081f803f +0x001:  mov    %esp,%ebp
081f8041 +0x003:  push   %esi
081f8042 +0x004:  push   %ebx
081f8043 +0x005:  sub    $0x60,%esp
081f8046 +0x008:  movl   $0x3d,0x8(%esp)
081f804e +0x010:  movl   $0x0,0x4(%esp)
081f8056 +0x018:  lea    -0x4d(%ebp),%eax
081f8059 +0x01b:  mov    %eax,(%esp)
081f805c +0x01e:  call   0807dcc0 <_init+0x5b8>
081f8061 +0x023:  lea    -0x4d(%ebp),%eax
081f8064 +0x026:  mov    %eax,0x8(%esp)
081f8068 +0x02a:  mov    0x10(%ebp),%eax
081f806b +0x02d:  mov    %eax,0x4(%esp)
081f806f +0x031:  mov    0x8(%ebp),%eax
081f8072 +0x034:  mov    %eax,(%esp)
081f8075 +0x037:  call   081f81ba <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM>  ; DisPatcher_MakePVP::ExtractPacket(PacketBuf&, MSG_MAKE_PVP_ROOM&)
081f807a +0x03c:  xor    $0x1,%eax
081f807d +0x03f:  test   %al,%al
081f807f +0x041:  je     081f80ac <+0x6e>
081f8081 +0x043:  movl   $0x0,0xc(%esp)
081f8089 +0x04b:  movl   $0x0,0x8(%esp)
081f8091 +0x053:  movl   $&_ZZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f8099 +0x05b:  movl   $0x85b6,(%esp)
081f80a0 +0x062:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f80a5 +0x067:  mov    %eax,%ebx
081f80a7 +0x069:  jmp    081f81b0 <+0x172>
081f80ac +0x06e:  lea    -0x9(%ebp),%eax
081f80af +0x071:  mov    %eax,(%esp)
081f80b2 +0x074:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081f80b7 +0x079:  lea    -0x9(%ebp),%eax
081f80ba +0x07c:  mov    %eax,0x8(%esp)
081f80be +0x080:  lea    -0x4d(%ebp),%eax
081f80c1 +0x083:  add    $0xe,%eax
081f80c4 +0x086:  mov    %eax,0x4(%esp)
081f80c8 +0x08a:  lea    -0x10(%ebp),%eax
081f80cb +0x08d:  mov    %eax,(%esp)
081f80ce +0x090:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081f80d3 +0x095:  jmp    081f80f0 <+0xb2>
081f80d5 +0x097:  mov    %edx,%ebx
081f80d7 +0x099:  mov    %eax,%esi
081f80d9 +0x09b:  lea    -0x9(%ebp),%eax
081f80dc +0x09e:  mov    %eax,(%esp)
081f80df +0x0a1:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081f80e4 +0x0a6:  mov    %esi,%eax
081f80e6 +0x0a8:  mov    %ebx,%edx
081f80e8 +0x0aa:  mov    %eax,(%esp)
081f80eb +0x0ad:  call   08ae3750 <_Unwind_Resume>
081f80f0 +0x0b2:  lea    -0x9(%ebp),%eax
081f80f3 +0x0b5:  mov    %eax,(%esp)
081f80f6 +0x0b8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081f80fb +0x0bd:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081f8100 +0x0c2:  lea    -0x10(%ebp),%edx
081f8103 +0x0c5:  mov    %edx,0x4(%esp)
081f8107 +0x0c9:  mov    %eax,(%esp)
081f810a +0x0cc:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081f810f +0x0d1:  test   %al,%al
081f8111 +0x0d3:  je     081f8135 <+0xf7>
081f8113 +0x0d5:  movl   $0x9f,0x8(%esp)
081f811b +0x0dd:  movl   $0x35,0x4(%esp)
081f8123 +0x0e5:  mov    0xc(%ebp),%eax
081f8126 +0x0e8:  mov    %eax,(%esp)
081f8129 +0x0eb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f812e +0x0f0:  mov    $0x0,%ebx
081f8133 +0x0f5:  jmp    081f81a5 <+0x167>
081f8135 +0x0f7:  movzbl -0x11(%ebp),%eax
081f8139 +0x0fb:  test   %al,%al
081f813b +0x0fd:  je     081f8161 <+0x123>
081f813d +0x0ff:  movl   $0x6,0xc(%esp)
081f8145 +0x107:  movl   $0x35,0x8(%esp)
081f814d +0x10f:  lea    -0x4d(%ebp),%eax
081f8150 +0x112:  mov    %eax,0x4(%esp)
081f8154 +0x116:  mov    0xc(%ebp),%eax
081f8157 +0x119:  mov    %eax,(%esp)
081f815a +0x11c:  call   081f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>  ; MakePVPRoom(CUser*, MSG_MAKE_PVP_ROOM&, ENUM_CMDPACKET, PVP_BATTLE_MODE)
081f815f +0x121:  jmp    081f8183 <+0x145>
081f8161 +0x123:  movl   $0x2,0xc(%esp)
081f8169 +0x12b:  movl   $0x35,0x8(%esp)
081f8171 +0x133:  lea    -0x4d(%ebp),%eax
081f8174 +0x136:  mov    %eax,0x4(%esp)
081f8178 +0x13a:  mov    0xc(%ebp),%eax
081f817b +0x13d:  mov    %eax,(%esp)
081f817e +0x140:  call   081f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>  ; MakePVPRoom(CUser*, MSG_MAKE_PVP_ROOM&, ENUM_CMDPACKET, PVP_BATTLE_MODE)
081f8183 +0x145:  mov    $0x0,%ebx
081f8188 +0x14a:  jmp    081f81a5 <+0x167>
081f818a +0x14c:  mov    %edx,%ebx
081f818c +0x14e:  mov    %eax,%esi
081f818e +0x150:  lea    -0x10(%ebp),%eax
081f8191 +0x153:  mov    %eax,(%esp)
081f8194 +0x156:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f8199 +0x15b:  mov    %esi,%eax
081f819b +0x15d:  mov    %ebx,%edx
081f819d +0x15f:  mov    %eax,(%esp)
081f81a0 +0x162:  call   08ae3750 <_Unwind_Resume>
081f81a5 +0x167:  lea    -0x10(%ebp),%eax
081f81a8 +0x16a:  mov    %eax,(%esp)
081f81ab +0x16d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081f81b0 +0x172:  mov    %ebx,%eax
081f81b2 +0x174:  add    $0x60,%esp
081f81b5 +0x177:  pop    %ebx
081f81b6 +0x178:  pop    %esi
081f81b7 +0x179:  pop    %ebp
081f81b8 +0x17a:  ret
081f81b9 +0x17b:  nop
```

## 反编译 C

```c
// DisPatcher_MakePVP::dispatch_sig @ 0x81f803e

/* DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_MakePVP::dispatch_sig(DisPatcher_MakePVP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CSyncSlangFilter *this_00;
  MSG_MAKE_PVP_ROOM local_51 [14];
  char acStack_43 [46];
  char local_15;
  string local_14;
  allocator<char> local_d;
  
  memset(local_51,0,0x3d);
  cVar1 = ExtractPacket(this,param_2,local_51);
  if (cVar1 == '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 081f80ce to 081f80d2 has its CatchHandler @ 081f80d5 */
    std::string::string((string *)&local_14,acStack_43,(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
                    /* try { // try from 081f80fb to 081f8182 has its CatchHandler @ 081f818a */
    this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_14);
    if (cVar1 == '\0') {
      if (local_15 == '\0') {
        MakePVPRoom(param_1,local_51,0x35,2);
      }
      else {
        MakePVPRoom(param_1,local_51,0x35,6);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x35,0x9f);
    }
    uVar2 = 0;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar2 = LineFunc(0x85b6,"virtual int DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar2;
}
```
