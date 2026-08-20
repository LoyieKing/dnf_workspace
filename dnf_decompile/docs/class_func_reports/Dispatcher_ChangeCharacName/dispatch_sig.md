# dispatch_sig

`_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeCharacName` | `0x08205898` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08205898  _ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)
# range [0x08205898, 0x08205f67]
08205898 +0x000:  push   %ebp
08205899 +0x001:  mov    %esp,%ebp
0820589b +0x003:  push   %edi
0820589c +0x004:  push   %esi
0820589d +0x005:  push   %ebx
0820589e +0x006:  sub    $0xcc,%esp
082058a4 +0x00c:  mov    0xc(%ebp),%eax
082058a7 +0x00f:  mov    %eax,(%esp)
082058aa +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082058af +0x017:  cmp    $0x2,%eax
082058b2 +0x01a:  setne  %al
082058b5 +0x01d:  test   %al,%al
082058b7 +0x01f:  je     082058e2 <+0x4a>
082058b9 +0x021:  movl   $0x0,0xc(%esp)
082058c1 +0x029:  movl   $0x0,0x8(%esp)
082058c9 +0x031:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082058d1 +0x039:  movl   $0x9eb3,(%esp)
082058d8 +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082058dd +0x045:  jmp    08205f5c <+0x6c4>
082058e2 +0x04a:  movb   $0x0,-0x65(%ebp)
082058e6 +0x04e:  movl   $0x0,-0x6c(%ebp)
082058ed +0x055:  movl   $0x0,-0x70(%ebp)
082058f4 +0x05c:  lea    -0x8e(%ebp),%eax
082058fa +0x062:  mov    $0x1e,%ebx
082058ff +0x067:  mov    $0x0,%edx
08205904 +0x06c:  mov    %eax,%ecx
08205906 +0x06e:  and    $0x2,%ecx
08205909 +0x071:  test   %ecx,%ecx
0820590b +0x073:  je     08205916 <+0x7e>
0820590d +0x075:  mov    %dx,(%eax)
08205910 +0x078:  add    $0x2,%eax
08205913 +0x07b:  sub    $0x2,%ebx
08205916 +0x07e:  mov    %ebx,%esi
08205918 +0x080:  and    $0xfffffffc,%esi
0820591b +0x083:  mov    $0x0,%ecx
08205920 +0x088:  mov    %edx,(%eax,%ecx,1)
08205923 +0x08b:  add    $0x4,%ecx
08205926 +0x08e:  cmp    %esi,%ecx
08205928 +0x090:  jb     08205920 <+0x88>
0820592a +0x092:  add    %ecx,%eax
0820592c +0x094:  mov    %ebx,%ecx
0820592e +0x096:  and    $0x2,%ecx
08205931 +0x099:  test   %ecx,%ecx
08205933 +0x09b:  je     0820593b <+0xa3>
08205935 +0x09d:  mov    %dx,(%eax)
08205938 +0x0a0:  add    $0x2,%eax
0820593b +0x0a3:  mov    %ebx,%ecx
0820593d +0x0a5:  and    $0x1,%ecx
08205940 +0x0a8:  test   %ecx,%ecx
08205942 +0x0aa:  je     08205949 <+0xb1>
08205944 +0x0ac:  mov    %dl,(%eax)
08205946 +0x0ae:  add    $0x1,%eax
08205949 +0x0b1:  lea    -0xac(%ebp),%eax
0820594f +0x0b7:  mov    $0x0,%ecx
08205954 +0x0bc:  mov    $0x1e,%edx
08205959 +0x0c1:  mov    %edx,%ebx
0820595b +0x0c3:  and    $0xfffffffc,%ebx
0820595e +0x0c6:  mov    $0x0,%edx
08205963 +0x0cb:  mov    %ecx,(%eax,%edx,1)
08205966 +0x0ce:  add    $0x4,%edx
08205969 +0x0d1:  cmp    %ebx,%edx
0820596b +0x0d3:  jb     08205963 <+0xcb>
0820596d +0x0d5:  add    %edx,%eax
0820596f +0x0d7:  mov    %cx,(%eax)
08205972 +0x0da:  add    $0x2,%eax
08205975 +0x0dd:  lea    -0x65(%ebp),%eax
08205978 +0x0e0:  mov    %eax,0x4(%esp)
0820597c +0x0e4:  mov    0x10(%ebp),%eax
0820597f +0x0e7:  mov    %eax,(%esp)
08205982 +0x0ea:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08205987 +0x0ef:  xor    $0x1,%eax
0820598a +0x0f2:  test   %al,%al
0820598c +0x0f4:  je     082059b3 <+0x11b>
0820598e +0x0f6:  movl   $0x7,0x8(%esp)
08205996 +0x0fe:  movl   $0x8a,0x4(%esp)
0820599e +0x106:  mov    0xc(%ebp),%eax
082059a1 +0x109:  mov    %eax,(%esp)
082059a4 +0x10c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082059a9 +0x111:  mov    $0x0,%eax
082059ae +0x116:  jmp    08205f5c <+0x6c4>
082059b3 +0x11b:  lea    -0x70(%ebp),%eax
082059b6 +0x11e:  mov    %eax,0x4(%esp)
082059ba +0x122:  mov    0x10(%ebp),%eax
082059bd +0x125:  mov    %eax,(%esp)
082059c0 +0x128:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082059c5 +0x12d:  mov    %al,-0x21(%ebp)
082059c8 +0x130:  movzbl -0x21(%ebp),%eax
082059cc +0x134:  xor    $0x1,%eax
082059cf +0x137:  test   %al,%al
082059d1 +0x139:  je     08205a62 <+0x1ca>
082059d7 +0x13f:  movzbl -0x21(%ebp),%edi
082059db +0x143:  mov    -0x70(%ebp),%esi
082059de +0x146:  mov    0xc(%ebp),%eax
082059e1 +0x149:  mov    %eax,(%esp)
082059e4 +0x14c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082059e9 +0x151:  movl   $0x0,0x4(%esp)
082059f1 +0x159:  mov    %eax,(%esp)
082059f4 +0x15c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082059f9 +0x161:  mov    %eax,%ebx
082059fb +0x163:  movl   $0x0,0xc(%esp)
08205a03 +0x16b:  movl   $0x9ec7,0x8(%esp)
08205a0b +0x173:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205a13 +0x17b:  lea    -0x64(%ebp),%eax
08205a16 +0x17e:  mov    %eax,(%esp)
08205a19 +0x181:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08205a1e +0x186:  mov    %edi,0x10(%esp)
08205a22 +0x18a:  mov    %esi,0xc(%esp)
08205a26 +0x18e:  mov    %ebx,0x8(%esp)
08205a2a +0x192:  movl   $"ting : m_id(%s) src char name length(%d), ret(%d)",0x4(%esp)
08205a32 +0x19a:  lea    -0x64(%ebp),%eax
08205a35 +0x19d:  mov    %eax,(%esp)
08205a38 +0x1a0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08205a3d +0x1a5:  movl   $0x7,0x8(%esp)
08205a45 +0x1ad:  movl   $0x8a,0x4(%esp)
08205a4d +0x1b5:  mov    0xc(%ebp),%eax
08205a50 +0x1b8:  mov    %eax,(%esp)
08205a53 +0x1bb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205a58 +0x1c0:  mov    $0x0,%eax
08205a5d +0x1c5:  jmp    08205f5c <+0x6c4>
08205a62 +0x1ca:  mov    -0x70(%ebp),%eax
08205a65 +0x1cd:  mov    %eax,0xc(%esp)
08205a69 +0x1d1:  movl   $0x1e,0x8(%esp)
08205a71 +0x1d9:  lea    -0x8e(%ebp),%eax
08205a77 +0x1df:  mov    %eax,0x4(%esp)
08205a7b +0x1e3:  mov    0x10(%ebp),%eax
08205a7e +0x1e6:  mov    %eax,(%esp)
08205a81 +0x1e9:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08205a86 +0x1ee:  xor    $0x1,%eax
08205a89 +0x1f1:  test   %al,%al
08205a8b +0x1f3:  je     08205ab2 <+0x21a>
08205a8d +0x1f5:  movl   $0x7,0x8(%esp)
08205a95 +0x1fd:  movl   $0x8a,0x4(%esp)
08205a9d +0x205:  mov    0xc(%ebp),%eax
08205aa0 +0x208:  mov    %eax,(%esp)
08205aa3 +0x20b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205aa8 +0x210:  mov    $0x0,%eax
08205aad +0x215:  jmp    08205f5c <+0x6c4>
08205ab2 +0x21a:  lea    -0x6c(%ebp),%eax
08205ab5 +0x21d:  mov    %eax,0x4(%esp)
08205ab9 +0x221:  mov    0x10(%ebp),%eax
08205abc +0x224:  mov    %eax,(%esp)
08205abf +0x227:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08205ac4 +0x22c:  mov    %al,-0x21(%ebp)
08205ac7 +0x22f:  movzbl -0x21(%ebp),%eax
08205acb +0x233:  xor    $0x1,%eax
08205ace +0x236:  test   %al,%al
08205ad0 +0x238:  je     08205b61 <+0x2c9>
08205ad6 +0x23e:  movzbl -0x21(%ebp),%edi
08205ada +0x242:  mov    -0x6c(%ebp),%esi
08205add +0x245:  mov    0xc(%ebp),%eax
08205ae0 +0x248:  mov    %eax,(%esp)
08205ae3 +0x24b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08205ae8 +0x250:  movl   $0x0,0x4(%esp)
08205af0 +0x258:  mov    %eax,(%esp)
08205af3 +0x25b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08205af8 +0x260:  mov    %eax,%ebx
08205afa +0x262:  movl   $0x0,0xc(%esp)
08205b02 +0x26a:  movl   $0x9ed4,0x8(%esp)
08205b0a +0x272:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205b12 +0x27a:  lea    -0x54(%ebp),%eax
08205b15 +0x27d:  mov    %eax,(%esp)
08205b18 +0x280:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08205b1d +0x285:  mov    %edi,0x10(%esp)
08205b21 +0x289:  mov    %esi,0xc(%esp)
08205b25 +0x28d:  mov    %ebx,0x8(%esp)
08205b29 +0x291:  movl   $"ting : m_id(%s) char name length(%d), ret(%d)",0x4(%esp)
08205b31 +0x299:  lea    -0x54(%ebp),%eax
08205b34 +0x29c:  mov    %eax,(%esp)
08205b37 +0x29f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08205b3c +0x2a4:  movl   $0x7,0x8(%esp)
08205b44 +0x2ac:  movl   $0x8a,0x4(%esp)
08205b4c +0x2b4:  mov    0xc(%ebp),%eax
08205b4f +0x2b7:  mov    %eax,(%esp)
08205b52 +0x2ba:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205b57 +0x2bf:  mov    $0x0,%eax
08205b5c +0x2c4:  jmp    08205f5c <+0x6c4>
08205b61 +0x2c9:  mov    -0x6c(%ebp),%eax
08205b64 +0x2cc:  mov    %eax,0xc(%esp)
08205b68 +0x2d0:  movl   $0x1e,0x8(%esp)
08205b70 +0x2d8:  lea    -0xac(%ebp),%eax
08205b76 +0x2de:  mov    %eax,0x4(%esp)
08205b7a +0x2e2:  mov    0x10(%ebp),%eax
08205b7d +0x2e5:  mov    %eax,(%esp)
08205b80 +0x2e8:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08205b85 +0x2ed:  xor    $0x1,%eax
08205b88 +0x2f0:  test   %al,%al
08205b8a +0x2f2:  je     08205bb1 <+0x319>
08205b8c +0x2f4:  movl   $0x7,0x8(%esp)
08205b94 +0x2fc:  movl   $0x8a,0x4(%esp)
08205b9c +0x304:  mov    0xc(%ebp),%eax
08205b9f +0x307:  mov    %eax,(%esp)
08205ba2 +0x30a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205ba7 +0x30f:  mov    $0x0,%eax
08205bac +0x314:  jmp    08205f5c <+0x6c4>
08205bb1 +0x319:  mov    -0x6c(%ebp),%eax
08205bb4 +0x31c:  cmp    $0x3,%eax
08205bb7 +0x31f:  jle    08205bc1 <+0x329>
08205bb9 +0x321:  mov    -0x6c(%ebp),%eax
08205bbc +0x324:  cmp    $0x12,%eax
08205bbf +0x327:  jle    08205be6 <+0x34e>
08205bc1 +0x329:  movl   $0x1,0x8(%esp)
08205bc9 +0x331:  movl   $0x8a,0x4(%esp)
08205bd1 +0x339:  mov    0xc(%ebp),%eax
08205bd4 +0x33c:  mov    %eax,(%esp)
08205bd7 +0x33f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205bdc +0x344:  mov    $0x0,%eax
08205be1 +0x349:  jmp    08205f5c <+0x6c4>
08205be6 +0x34e:  movzbl -0x65(%ebp),%eax
08205bea +0x352:  movzbl %al,%eax
08205bed +0x355:  mov    %eax,0x4(%esp)
08205bf1 +0x359:  mov    0xc(%ebp),%eax
08205bf4 +0x35c:  mov    %eax,(%esp)
08205bf7 +0x35f:  call   0822feb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5560>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5560
08205bfc +0x364:  mov    %eax,-0x20(%ebp)
08205bff +0x367:  cmpl   $0x0,-0x20(%ebp)
08205c03 +0x36b:  je     08205c2a <+0x392>
08205c05 +0x36d:  movl   $0x1d,0x8(%esp)
08205c0d +0x375:  mov    -0x20(%ebp),%eax
08205c10 +0x378:  mov    %eax,0x4(%esp)
08205c14 +0x37c:  lea    -0x8e(%ebp),%eax
08205c1a +0x382:  mov    %eax,(%esp)
08205c1d +0x385:  call   0807e8c0 <_init+0x11b8>
08205c22 +0x38a:  test   %eax,%eax
08205c24 +0x38c:  je     08205cf5 <+0x45d>
08205c2a +0x392:  cmpl   $0x0,-0x20(%ebp)
08205c2e +0x396:  jne    08205c89 <+0x3f1>
08205c30 +0x398:  mov    0xc(%ebp),%eax
08205c33 +0x39b:  mov    %eax,(%esp)
08205c36 +0x39e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08205c3b +0x3a3:  movl   $0x0,0x4(%esp)
08205c43 +0x3ab:  mov    %eax,(%esp)
08205c46 +0x3ae:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08205c4b +0x3b3:  mov    %eax,%ebx
08205c4d +0x3b5:  movl   $0x0,0xc(%esp)
08205c55 +0x3bd:  movl   $0x9ef6,0x8(%esp)
08205c5d +0x3c5:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205c65 +0x3cd:  lea    -0x44(%ebp),%eax
08205c68 +0x3d0:  mov    %eax,(%esp)
08205c6b +0x3d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08205c70 +0x3d8:  mov    %ebx,0x8(%esp)
08205c74 +0x3dc:  movl   $"ting : m_id(%s) srcCharacName2 is null",0x4(%esp)
08205c7c +0x3e4:  lea    -0x44(%ebp),%eax
08205c7f +0x3e7:  mov    %eax,(%esp)
08205c82 +0x3ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08205c87 +0x3ef:  jmp    08205cd0 <+0x438>
08205c89 +0x3f1:  movl   $0x0,0xc(%esp)
08205c91 +0x3f9:  movl   $0x9ef8,0x8(%esp)
08205c99 +0x401:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205ca1 +0x409:  lea    -0x34(%ebp),%eax
08205ca4 +0x40c:  mov    %eax,(%esp)
08205ca7 +0x40f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08205cac +0x414:  mov    -0x20(%ebp),%eax
08205caf +0x417:  mov    %eax,0xc(%esp)
08205cb3 +0x41b:  lea    -0x8e(%ebp),%eax
08205cb9 +0x421:  mov    %eax,0x8(%esp)
08205cbd +0x425:  movl   $"ting : src char name(%s), src server char name(%s)",0x4(%esp)
08205cc5 +0x42d:  lea    -0x34(%ebp),%eax
08205cc8 +0x430:  mov    %eax,(%esp)
08205ccb +0x433:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08205cd0 +0x438:  movl   $0x7,0x8(%esp)
08205cd8 +0x440:  movl   $0x8a,0x4(%esp)
08205ce0 +0x448:  mov    0xc(%ebp),%eax
08205ce3 +0x44b:  mov    %eax,(%esp)
08205ce6 +0x44e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205ceb +0x453:  mov    $0x0,%eax
08205cf0 +0x458:  jmp    08205f5c <+0x6c4>
08205cf5 +0x45d:  lea    -0xad(%ebp),%eax
08205cfb +0x463:  mov    %eax,0x4(%esp)
08205cff +0x467:  mov    0x10(%ebp),%eax
08205d02 +0x46a:  mov    %eax,(%esp)
08205d05 +0x46d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08205d0a +0x472:  xor    $0x1,%eax
08205d0d +0x475:  test   %al,%al
08205d0f +0x477:  je     08205d3a <+0x4a2>
08205d11 +0x479:  movl   $0x0,0xc(%esp)
08205d19 +0x481:  movl   $0x0,0x8(%esp)
08205d21 +0x489:  movl   $&_ZZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205d29 +0x491:  movl   $0x9eff,(%esp)
08205d30 +0x498:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205d35 +0x49d:  jmp    08205f5c <+0x6c4>
08205d3a +0x4a2:  movzbl -0xad(%ebp),%eax
08205d41 +0x4a9:  cmp    $0x2,%al
08205d43 +0x4ab:  jne    08205d98 <+0x500>
08205d45 +0x4ad:  mov    -0x70(%ebp),%ebx
08205d48 +0x4b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08205d4d +0x4b5:  mov    %ebx,0x8(%esp)
08205d51 +0x4b9:  lea    -0x8e(%ebp),%edx
08205d57 +0x4bf:  mov    %edx,0x4(%esp)
08205d5b +0x4c3:  mov    %eax,(%esp)
08205d5e +0x4c6:  call   0836360c <_ZN12CDataManager26hasPreventPrefixCharacNameEPKci>  ; CDataManager::hasPreventPrefixCharacName(char const*, int)
08205d63 +0x4cb:  test   %al,%al
08205d65 +0x4cd:  je     08205d73 <+0x4db>
08205d67 +0x4cf:  movl   $0x2,-0x1c(%ebp)
08205d6e +0x4d6:  jmp    08205ea9 <+0x611>
08205d73 +0x4db:  movl   $0x7,0x8(%esp)
08205d7b +0x4e3:  movl   $0x8a,0x4(%esp)
08205d83 +0x4eb:  mov    0xc(%ebp),%eax
08205d86 +0x4ee:  mov    %eax,(%esp)
08205d89 +0x4f1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205d8e +0x4f6:  mov    $0x0,%eax
08205d93 +0x4fb:  jmp    08205f5c <+0x6c4>
08205d98 +0x500:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08205d9d +0x505:  mov    -0x20(%ebp),%edx
08205da0 +0x508:  mov    %edx,0x4(%esp)
08205da4 +0x50c:  mov    %eax,(%esp)
08205da7 +0x50f:  call   08363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>  ; CDataManager::hasSpecialCharacter(char const*)
08205dac +0x514:  test   %al,%al
08205dae +0x516:  je     08205dbc <+0x524>
08205db0 +0x518:  movl   $0x0,-0x1c(%ebp)
08205db7 +0x51f:  jmp    08205ea9 <+0x611>
08205dbc +0x524:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08205dc1 +0x529:  mov    -0x20(%ebp),%edx
08205dc4 +0x52c:  mov    %edx,0x4(%esp)
08205dc8 +0x530:  mov    %eax,(%esp)
08205dcb +0x533:  call   08363472 <_ZN12CDataManager16hasPreventStringEPKc>  ; CDataManager::hasPreventString(char const*)
08205dd0 +0x538:  test   %al,%al
08205dd2 +0x53a:  jne    08205dec <+0x554>
08205dd4 +0x53c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08205dd9 +0x541:  mov    -0x20(%ebp),%edx
08205ddc +0x544:  mov    %edx,0x4(%esp)
08205de0 +0x548:  mov    %eax,(%esp)
08205de3 +0x54b:  call   0836353a <_ZN12CDataManager20hasPreventStringNameEPKc>  ; CDataManager::hasPreventStringName(char const*)
08205de8 +0x550:  test   %al,%al
08205dea +0x552:  je     08205df3 <+0x55b>
08205dec +0x554:  mov    $0x1,%eax
08205df1 +0x559:  jmp    08205df8 <+0x560>
08205df3 +0x55b:  mov    $0x0,%eax
08205df8 +0x560:  test   %al,%al
08205dfa +0x562:  je     08205e08 <+0x570>
08205dfc +0x564:  movl   $0x1,-0x1c(%ebp)
08205e03 +0x56b:  jmp    08205ea9 <+0x611>
08205e08 +0x570:  movzbl -0x65(%ebp),%eax
08205e0c +0x574:  movzbl %al,%eax
08205e0f +0x577:  mov    %eax,0x4(%esp)
08205e13 +0x57b:  mov    0xc(%ebp),%eax
08205e16 +0x57e:  mov    %eax,(%esp)
08205e19 +0x581:  call   0822ff62 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x560c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x560c
08205e1e +0x586:  xor    $0x1,%eax
08205e21 +0x589:  test   %al,%al
08205e23 +0x58b:  je     08205e4a <+0x5b2>
08205e25 +0x58d:  movl   $0x7,0x8(%esp)
08205e2d +0x595:  movl   $0x8a,0x4(%esp)
08205e35 +0x59d:  mov    0xc(%ebp),%eax
08205e38 +0x5a0:  mov    %eax,(%esp)
08205e3b +0x5a3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205e40 +0x5a8:  mov    $0x0,%eax
08205e45 +0x5ad:  jmp    08205f5c <+0x6c4>
08205e4a +0x5b2:  lea    -0xac(%ebp),%eax
08205e50 +0x5b8:  mov    %eax,(%esp)
08205e53 +0x5bb:  call   0820582b <_Z20checkValidCharacNamePKc>  ; checkValidCharacName(char const*)
08205e58 +0x5c0:  xor    $0x1,%eax
08205e5b +0x5c3:  test   %al,%al
08205e5d +0x5c5:  je     08205e84 <+0x5ec>
08205e5f +0x5c7:  movl   $0x9f,0x8(%esp)
08205e67 +0x5cf:  movl   $0x8a,0x4(%esp)
08205e6f +0x5d7:  mov    0xc(%ebp),%eax
08205e72 +0x5da:  mov    %eax,(%esp)
08205e75 +0x5dd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205e7a +0x5e2:  mov    $0x0,%eax
08205e7f +0x5e7:  jmp    08205f5c <+0x6c4>
08205e84 +0x5ec:  movzbl -0x65(%ebp),%eax
08205e88 +0x5f0:  movzbl %al,%eax
08205e8b +0x5f3:  movl   $0x1,0x8(%esp)
08205e93 +0x5fb:  mov    %eax,0x4(%esp)
08205e97 +0x5ff:  mov    0xc(%ebp),%eax
08205e9a +0x602:  mov    %eax,(%esp)
08205e9d +0x605:  call   0822ffec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5696>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5696
08205ea2 +0x60a:  movl   $0x3,-0x1c(%ebp)
08205ea9 +0x611:  lea    -0xac(%ebp),%eax
08205eaf +0x617:  mov    %eax,(%esp)
08205eb2 +0x61a:  call   08ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>  ; restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)
08205eb7 +0x61f:  xor    $0x1,%eax
08205eba +0x622:  test   %al,%al
08205ebc +0x624:  je     08205ee0 <+0x648>
08205ebe +0x626:  movl   $0x9f,0x8(%esp)
08205ec6 +0x62e:  movl   $0x8a,0x4(%esp)
08205ece +0x636:  mov    0xc(%ebp),%eax
08205ed1 +0x639:  mov    %eax,(%esp)
08205ed4 +0x63c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205ed9 +0x641:  mov    $0x0,%eax
08205ede +0x646:  jmp    08205f5c <+0x6c4>
08205ee0 +0x648:  lea    -0xac(%ebp),%eax
08205ee6 +0x64e:  mov    %eax,(%esp)
08205ee9 +0x651:  call   0820582b <_Z20checkValidCharacNamePKc>  ; checkValidCharacName(char const*)
08205eee +0x656:  xor    $0x1,%eax
08205ef1 +0x659:  test   %al,%al
08205ef3 +0x65b:  je     08205f17 <+0x67f>
08205ef5 +0x65d:  movl   $0x9f,0x8(%esp)
08205efd +0x665:  movl   $0x8a,0x4(%esp)
08205f05 +0x66d:  mov    0xc(%ebp),%eax
08205f08 +0x670:  mov    %eax,(%esp)
08205f0b +0x673:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08205f10 +0x678:  mov    $0x0,%eax
08205f15 +0x67d:  jmp    08205f5c <+0x6c4>
08205f17 +0x67f:  mov    -0x1c(%ebp),%esi
08205f1a +0x682:  movzbl -0x65(%ebp),%eax
08205f1e +0x686:  movzbl %al,%eax
08205f21 +0x689:  mov    %eax,0x4(%esp)
08205f25 +0x68d:  mov    0xc(%ebp),%eax
08205f28 +0x690:  mov    %eax,(%esp)
08205f2b +0x693:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08205f30 +0x698:  mov    %eax,%ebx
08205f32 +0x69a:  mov    0xc(%ebp),%eax
08205f35 +0x69d:  mov    %eax,(%esp)
08205f38 +0x6a0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08205f3d +0x6a5:  mov    %esi,0xc(%esp)
08205f41 +0x6a9:  lea    -0xac(%ebp),%edx
08205f47 +0x6af:  mov    %edx,0x8(%esp)
08205f4b +0x6b3:  mov    %ebx,0x4(%esp)
08205f4f +0x6b7:  mov    %eax,(%esp)
08205f52 +0x6ba:  call   08426590 <_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci>  ; DB_ReqChangeCharacName::makeRequest(int, int, char const*, int)
08205f57 +0x6bf:  mov    $0x0,%eax
08205f5c +0x6c4:  add    $0xcc,%esp
08205f62 +0x6ca:  pop    %ebx
08205f63 +0x6cb:  pop    %esi
08205f64 +0x6cc:  pop    %edi
08205f65 +0x6cd:  pop    %ebp
08205f66 +0x6ce:  ret
08205f67 +0x6cf:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeCharacName::dispatch_sig @ 0x8205898

/* WARNING: Removing unreachable block (ram,0x08205944) */
/* Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeCharacName::dispatch_sig
          (Dispatcher_ChangeCharacName *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CDataManager *pCVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uchar local_b1;
  char local_b0 [4];
  undefined2 auStack_ac [13];
  char local_92 [30];
  int local_74;
  int local_70;
  byte local_69;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [19];
  byte local_25;
  char *local_24;
  int local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 2) {
    uVar4 = LineFunc(0x9eb3,
                     "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar4;
  }
  local_69 = 0;
  local_70 = 0;
  local_74 = 0;
  pcVar5 = local_92;
  uVar10 = 0x1e;
  bVar11 = ((uint)pcVar5 & 2) != 0;
  if (bVar11) {
    local_92[0] = '\0';
    local_92[1] = '\0';
    pcVar5 = local_92 + 2;
    uVar10 = 0x1c;
  }
  uVar9 = 0;
  do {
    pcVar1 = pcVar5 + uVar9;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar9 = uVar9 + 4;
  } while (uVar9 < (uVar10 & 0xfffffffc));
  if (!bVar11) {
    (pcVar5 + uVar9)[0] = '\0';
    (pcVar5 + uVar9)[1] = '\0';
  }
  uVar10 = 0;
  do {
    uVar9 = uVar10;
    *(undefined4 *)((int)auStack_ac + (uVar9 - 4)) = 0;
    uVar10 = uVar9 + 4;
  } while (uVar9 + 4 < 0x1c);
  *(undefined2 *)((int)auStack_ac + uVar9) = 0;
  cVar2 = PacketBuf::get_byte(param_2,&local_69);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  local_25 = PacketBuf::get_int(param_2,&local_74);
  iVar3 = local_74;
  if (local_25 != 1) {
    uVar9 = (uint)local_25;
    uVar10 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar10,0);
    cMyTrace::cMyTrace(local_68,
                       "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",
                       0x9ec7,0);
    cMyTrace::operator()
              (local_68,"ting : m_id(%s) src char name length(%d), ret(%d)",uVar4,iVar3,uVar9);
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_str(param_2,local_92,0x1e,local_74);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  local_25 = PacketBuf::get_int(param_2,&local_70);
  iVar3 = local_70;
  if (local_25 != 1) {
    uVar9 = (uint)local_25;
    uVar10 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar10,0);
    cMyTrace::cMyTrace(local_58,
                       "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",
                       0x9ed4,0);
    cMyTrace::operator()(local_58,"ting : m_id(%s) char name length(%d), ret(%d)",uVar4,iVar3,uVar9)
    ;
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_str(param_2,local_b0,0x1e,local_70);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  if ((local_70 < 4) || (0x12 < local_70)) {
    CUser::SendCmdErrorPacket(param_1,0x8a,1);
    return 0;
  }
  local_24 = (char *)CUser::get_charac_name(param_1,(uint)local_69);
  if ((local_24 == (char *)0x0) || (iVar3 = strncmp(local_92,local_24,0x1d), iVar3 != 0)) {
    if (local_24 == (char *)0x0) {
      uVar10 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar10,0);
      cMyTrace::cMyTrace(local_48,
                         "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)"
                         ,0x9ef6,0);
      cMyTrace::operator()(local_48,"ting : m_id(%s) srcCharacName2 is null",uVar4);
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)"
                         ,0x9ef8,0);
      cMyTrace::operator()
                (local_38,"ting : src char name(%s), src server char name(%s)",local_92,local_24);
    }
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_b1);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9eff,
                     "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar4;
  }
  if (local_b1 == '\x02') {
    pcVar5 = (char *)G_CDataManager();
    cVar2 = CDataManager::hasPreventPrefixCharacName(pcVar5,(int)local_92);
    if (cVar2 == '\0') {
      CUser::SendCmdErrorPacket(param_1,0x8a,7);
      return 0;
    }
    local_20 = 2;
    goto LAB_08205ea9;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasSpecialCharacter(pCVar6,local_24);
  if (cVar2 != '\0') {
    local_20 = 0;
    goto LAB_08205ea9;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar6,local_24);
  if (cVar2 == '\0') {
    pCVar6 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasPreventStringName(pCVar6,local_24);
    if (cVar2 != '\0') goto LAB_08205dec;
    bVar11 = false;
  }
  else {
LAB_08205dec:
    bVar11 = true;
  }
  if (bVar11) {
    local_20 = 1;
  }
  else {
    cVar2 = CUser::CheckPossibleRequestRenameState(param_1,(uint)local_69);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x8a,7);
      return 0;
    }
    cVar2 = checkValidCharacName(local_b0);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
      return 0;
    }
    CUser::SetCharacViewState(param_1,(uint)local_69,1);
    local_20 = 3;
  }
LAB_08205ea9:
  cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange(local_b0);
  if (cVar2 == '\x01') {
    cVar2 = checkValidCharacName(local_b0);
    iVar3 = local_20;
    if (cVar2 == '\x01') {
      iVar7 = CUser::get_charac_no(param_1,(uint)local_69);
      iVar8 = CUser::GetUID(param_1);
      DB_ReqChangeCharacName::makeRequest(iVar8,iVar7,local_b0,iVar3);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
  }
  return 0;
}
```
