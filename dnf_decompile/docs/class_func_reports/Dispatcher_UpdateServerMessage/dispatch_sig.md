# dispatch_sig

`_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpdateServerMessage` | `0x0821d9ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d9ee  _ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d9ee, 0x0821df69]
0821d9ee +0x000:  push   %ebp
0821d9ef +0x001:  mov    %esp,%ebp
0821d9f1 +0x003:  push   %esi
0821d9f2 +0x004:  push   %ebx
0821d9f3 +0x005:  sub    $0xb0,%esp
0821d9f9 +0x00b:  mov    0xc(%ebp),%eax
0821d9fc +0x00e:  mov    %eax,(%esp)
0821d9ff +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821da04 +0x016:  cmp    $0x3,%eax
0821da07 +0x019:  setne  %al
0821da0a +0x01c:  test   %al,%al
0821da0c +0x01e:  je     0821daa5 <+0xb7>
0821da12 +0x024:  mov    0xc(%ebp),%eax
0821da15 +0x027:  mov    %eax,(%esp)
0821da18 +0x02a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0821da1d +0x02f:  movl   $0x0,0x4(%esp)
0821da25 +0x037:  mov    %eax,(%esp)
0821da28 +0x03a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0821da2d +0x03f:  mov    %eax,%ebx
0821da2f +0x041:  mov    0xc(%ebp),%eax
0821da32 +0x044:  mov    %eax,(%esp)
0821da35 +0x047:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821da3a +0x04c:  mov    %eax,%esi
0821da3c +0x04e:  movl   $0x0,0xc(%esp)
0821da44 +0x056:  movl   $0xd1c6,0x8(%esp)
0821da4c +0x05e:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821da54 +0x066:  lea    -0x20(%ebp),%eax
0821da57 +0x069:  mov    %eax,(%esp)
0821da5a +0x06c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0821da5f +0x071:  mov    %ebx,0xc(%esp)
0821da63 +0x075:  mov    %esi,0x8(%esp)
0821da67 +0x079:  movl   $"ServerMessage : Dispatcher_UpdateServerMessage => User State : %d, m_id : %s",0x4(%esp)
0821da6f +0x081:  lea    -0x20(%ebp),%eax
0821da72 +0x084:  mov    %eax,(%esp)
0821da75 +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0821da7a +0x08c:  movl   $0x0,0xc(%esp)
0821da82 +0x094:  movl   $0x0,0x8(%esp)
0821da8a +0x09c:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821da92 +0x0a4:  movl   $0xd1c7,(%esp)
0821da99 +0x0ab:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821da9e +0x0b0:  mov    %eax,%ebx
0821daa0 +0x0b2:  jmp    0821df5e <+0x570>
0821daa5 +0x0b7:  lea    -0x2c(%ebp),%eax
0821daa8 +0x0ba:  mov    %eax,(%esp)
0821daab +0x0bd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821dab0 +0x0c2:  movl   $0xdd,0x8(%esp)
0821dab8 +0x0ca:  movl   $0x1,0x4(%esp)
0821dac0 +0x0d2:  lea    -0x2c(%ebp),%eax
0821dac3 +0x0d5:  mov    %eax,(%esp)
0821dac6 +0x0d8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821dacb +0x0dd:  movb   $0x0,-0x2d(%ebp)
0821dacf +0x0e1:  lea    -0x2d(%ebp),%eax
0821dad2 +0x0e4:  mov    %eax,0x4(%esp)
0821dad6 +0x0e8:  mov    0x10(%ebp),%eax
0821dad9 +0x0eb:  mov    %eax,(%esp)
0821dadc +0x0ee:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821dae1 +0x0f3:  xor    $0x1,%eax
0821dae4 +0x0f6:  test   %al,%al
0821dae6 +0x0f8:  je     0821db13 <+0x125>
0821dae8 +0x0fa:  movl   $0x0,0xc(%esp)
0821daf0 +0x102:  movl   $0x0,0x8(%esp)
0821daf8 +0x10a:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821db00 +0x112:  movl   $0xd1d0,(%esp)
0821db07 +0x119:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821db0c +0x11e:  mov    %eax,%ebx
0821db0e +0x120:  jmp    0821df53 <+0x565>
0821db13 +0x125:  movl   $0x0,-0x34(%ebp)
0821db1a +0x12c:  lea    -0x34(%ebp),%eax
0821db1d +0x12f:  mov    %eax,0x4(%esp)
0821db21 +0x133:  mov    0x10(%ebp),%eax
0821db24 +0x136:  mov    %eax,(%esp)
0821db27 +0x139:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821db2c +0x13e:  xor    $0x1,%eax
0821db2f +0x141:  test   %al,%al
0821db31 +0x143:  je     0821db5e <+0x170>
0821db33 +0x145:  movl   $0x0,0xc(%esp)
0821db3b +0x14d:  movl   $0x0,0x8(%esp)
0821db43 +0x155:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821db4b +0x15d:  movl   $0xd1d5,(%esp)
0821db52 +0x164:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821db57 +0x169:  mov    %eax,%ebx
0821db59 +0x16b:  jmp    0821df53 <+0x565>
0821db5e +0x170:  mov    -0x34(%ebp),%eax
0821db61 +0x173:  test   %eax,%eax
0821db63 +0x175:  js     0821db6d <+0x17f>
0821db65 +0x177:  mov    -0x34(%ebp),%eax
0821db68 +0x17a:  cmp    $0x31,%eax
0821db6b +0x17d:  jle    0821dbc2 <+0x1d4>
0821db6d +0x17f:  movl   $0x0,0x4(%esp)
0821db75 +0x187:  lea    -0x2c(%ebp),%eax
0821db78 +0x18a:  mov    %eax,(%esp)
0821db7b +0x18d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821db80 +0x192:  movl   $0x1,0x4(%esp)
0821db88 +0x19a:  lea    -0x2c(%ebp),%eax
0821db8b +0x19d:  mov    %eax,(%esp)
0821db8e +0x1a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821db93 +0x1a5:  movl   $0x1,0x4(%esp)
0821db9b +0x1ad:  lea    -0x2c(%ebp),%eax
0821db9e +0x1b0:  mov    %eax,(%esp)
0821dba1 +0x1b3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821dba6 +0x1b8:  lea    -0x2c(%ebp),%eax
0821dba9 +0x1bb:  mov    %eax,0x4(%esp)
0821dbad +0x1bf:  mov    0xc(%ebp),%eax
0821dbb0 +0x1c2:  mov    %eax,(%esp)
0821dbb3 +0x1c5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821dbb8 +0x1ca:  mov    $0x0,%ebx
0821dbbd +0x1cf:  jmp    0821df53 <+0x565>
0821dbc2 +0x1d4:  mov    -0x34(%ebp),%eax
0821dbc5 +0x1d7:  mov    %eax,0xc(%esp)
0821dbc9 +0x1db:  movl   $0x32,0x8(%esp)
0821dbd1 +0x1e3:  lea    -0x8e(%ebp),%eax
0821dbd7 +0x1e9:  mov    %eax,0x4(%esp)
0821dbdb +0x1ed:  mov    0x10(%ebp),%eax
0821dbde +0x1f0:  mov    %eax,(%esp)
0821dbe1 +0x1f3:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0821dbe6 +0x1f8:  xor    $0x1,%eax
0821dbe9 +0x1fb:  test   %al,%al
0821dbeb +0x1fd:  je     0821dc18 <+0x22a>
0821dbed +0x1ff:  movl   $0x0,0xc(%esp)
0821dbf5 +0x207:  movl   $0x0,0x8(%esp)
0821dbfd +0x20f:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821dc05 +0x217:  movl   $0xd1e4,(%esp)
0821dc0c +0x21e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821dc11 +0x223:  mov    %eax,%ebx
0821dc13 +0x225:  jmp    0821df53 <+0x565>
0821dc18 +0x22a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821dc1d +0x22f:  lea    -0x8e(%ebp),%edx
0821dc23 +0x235:  mov    %edx,0x4(%esp)
0821dc27 +0x239:  mov    %eax,(%esp)
0821dc2a +0x23c:  call   08363472 <_ZN12CDataManager16hasPreventStringEPKc>  ; CDataManager::hasPreventString(char const*)
0821dc2f +0x241:  test   %al,%al
0821dc31 +0x243:  je     0821dc88 <+0x29a>
0821dc33 +0x245:  movl   $0x0,0x4(%esp)
0821dc3b +0x24d:  lea    -0x2c(%ebp),%eax
0821dc3e +0x250:  mov    %eax,(%esp)
0821dc41 +0x253:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821dc46 +0x258:  movl   $0x17,0x4(%esp)
0821dc4e +0x260:  lea    -0x2c(%ebp),%eax
0821dc51 +0x263:  mov    %eax,(%esp)
0821dc54 +0x266:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821dc59 +0x26b:  movl   $0x1,0x4(%esp)
0821dc61 +0x273:  lea    -0x2c(%ebp),%eax
0821dc64 +0x276:  mov    %eax,(%esp)
0821dc67 +0x279:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821dc6c +0x27e:  lea    -0x2c(%ebp),%eax
0821dc6f +0x281:  mov    %eax,0x4(%esp)
0821dc73 +0x285:  mov    0xc(%ebp),%eax
0821dc76 +0x288:  mov    %eax,(%esp)
0821dc79 +0x28b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821dc7e +0x290:  mov    $0x0,%ebx
0821dc83 +0x295:  jmp    0821df53 <+0x565>
0821dc88 +0x29a:  movl   $0x0,-0x38(%ebp)
0821dc8f +0x2a1:  lea    -0x38(%ebp),%eax
0821dc92 +0x2a4:  mov    %eax,0x4(%esp)
0821dc96 +0x2a8:  mov    0x10(%ebp),%eax
0821dc99 +0x2ab:  mov    %eax,(%esp)
0821dc9c +0x2ae:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821dca1 +0x2b3:  xor    $0x1,%eax
0821dca4 +0x2b6:  test   %al,%al
0821dca6 +0x2b8:  je     0821dcd3 <+0x2e5>
0821dca8 +0x2ba:  movl   $0x0,0xc(%esp)
0821dcb0 +0x2c2:  movl   $0x0,0x8(%esp)
0821dcb8 +0x2ca:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821dcc0 +0x2d2:  movl   $0xd1f4,(%esp)
0821dcc7 +0x2d9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821dccc +0x2de:  mov    %eax,%ebx
0821dcce +0x2e0:  jmp    0821df53 <+0x565>
0821dcd3 +0x2e5:  lea    -0x56(%ebp),%eax
0821dcd6 +0x2e8:  mov    $0x1e,%ebx
0821dcdb +0x2ed:  mov    $0x0,%edx
0821dce0 +0x2f2:  mov    %eax,%ecx
0821dce2 +0x2f4:  and    $0x2,%ecx
0821dce5 +0x2f7:  test   %ecx,%ecx
0821dce7 +0x2f9:  je     0821dcf2 <+0x304>
0821dce9 +0x2fb:  mov    %dx,(%eax)
0821dcec +0x2fe:  add    $0x2,%eax
0821dcef +0x301:  sub    $0x2,%ebx
0821dcf2 +0x304:  mov    %ebx,%esi
0821dcf4 +0x306:  and    $0xfffffffc,%esi
0821dcf7 +0x309:  mov    $0x0,%ecx
0821dcfc +0x30e:  mov    %edx,(%eax,%ecx,1)
0821dcff +0x311:  add    $0x4,%ecx
0821dd02 +0x314:  cmp    %esi,%ecx
0821dd04 +0x316:  jb     0821dcfc <+0x30e>
0821dd06 +0x318:  add    %ecx,%eax
0821dd08 +0x31a:  mov    %ebx,%ecx
0821dd0a +0x31c:  and    $0x2,%ecx
0821dd0d +0x31f:  test   %ecx,%ecx
0821dd0f +0x321:  je     0821dd17 <+0x329>
0821dd11 +0x323:  mov    %dx,(%eax)
0821dd14 +0x326:  add    $0x2,%eax
0821dd17 +0x329:  mov    %ebx,%ecx
0821dd19 +0x32b:  and    $0x1,%ecx
0821dd1c +0x32e:  test   %ecx,%ecx
0821dd1e +0x330:  je     0821dd25 <+0x337>
0821dd20 +0x332:  mov    %dl,(%eax)
0821dd22 +0x334:  add    $0x1,%eax
0821dd25 +0x337:  mov    -0x38(%ebp),%eax
0821dd28 +0x33a:  mov    %eax,0xc(%esp)
0821dd2c +0x33e:  movl   $0x1e,0x8(%esp)
0821dd34 +0x346:  lea    -0x56(%ebp),%eax
0821dd37 +0x349:  mov    %eax,0x4(%esp)
0821dd3b +0x34d:  mov    0x10(%ebp),%eax
0821dd3e +0x350:  mov    %eax,(%esp)
0821dd41 +0x353:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0821dd46 +0x358:  xor    $0x1,%eax
0821dd49 +0x35b:  test   %al,%al
0821dd4b +0x35d:  je     0821dd78 <+0x38a>
0821dd4d +0x35f:  movl   $0x0,0xc(%esp)
0821dd55 +0x367:  movl   $0x0,0x8(%esp)
0821dd5d +0x36f:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821dd65 +0x377:  movl   $0xd1f9,(%esp)
0821dd6c +0x37e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821dd71 +0x383:  mov    %eax,%ebx
0821dd73 +0x385:  jmp    0821df53 <+0x565>
0821dd78 +0x38a:  mov    0xc(%ebp),%eax
0821dd7b +0x38d:  mov    %eax,(%esp)
0821dd7e +0x390:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0821dd83 +0x395:  mov    %eax,0x4(%esp)
0821dd87 +0x399:  lea    -0x56(%ebp),%eax
0821dd8a +0x39c:  mov    %eax,(%esp)
0821dd8d +0x39f:  call   0807e4e0 <_init+0xdd8>
0821dd92 +0x3a4:  test   %eax,%eax
0821dd94 +0x3a6:  setne  %al
0821dd97 +0x3a9:  test   %al,%al
0821dd99 +0x3ab:  je     0821ddc6 <+0x3d8>
0821dd9b +0x3ad:  movl   $0x0,0xc(%esp)
0821dda3 +0x3b5:  movl   $0x0,0x8(%esp)
0821ddab +0x3bd:  movl   $&_ZZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ddb3 +0x3c5:  movl   $0xd1fd,(%esp)
0821ddba +0x3cc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ddbf +0x3d1:  mov    %eax,%ebx
0821ddc1 +0x3d3:  jmp    0821df53 <+0x565>
0821ddc6 +0x3d8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0821ddcd +0x3df:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0821ddd2 +0x3e4:  mov    %eax,-0x10(%ebp)
0821ddd5 +0x3e7:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821ddda +0x3ec:  mov    %eax,(%esp)
0821dddd +0x3ef:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
0821dde2 +0x3f4:  mov    %eax,-0xc(%ebp)
0821dde5 +0x3f7:  cmpl   $0x0,-0xc(%ebp)
0821dde9 +0x3fb:  je     0821def6 <+0x508>
0821ddef +0x401:  movl   $0x0,-0x5c(%ebp)
0821ddf6 +0x408:  movzbl -0x2d(%ebp),%eax
0821ddfa +0x40c:  movzbl %al,%eax
0821ddfd +0x40f:  lea    -0x5c(%ebp),%edx
0821de00 +0x412:  mov    %edx,0xc(%esp)
0821de04 +0x416:  mov    %eax,0x8(%esp)
0821de08 +0x41a:  mov    0xc(%ebp),%eax
0821de0b +0x41d:  mov    %eax,0x4(%esp)
0821de0f +0x421:  mov    -0xc(%ebp),%eax
0821de12 +0x424:  mov    %eax,(%esp)
0821de15 +0x427:  call   08600dcc <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi>  ; CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&)
0821de1a +0x42c:  test   %al,%al
0821de1c +0x42e:  je     0821deb5 <+0x4c7>
0821de22 +0x434:  mov    -0x10(%ebp),%edx
0821de25 +0x437:  movzbl -0x2d(%ebp),%eax
0821de29 +0x43b:  movzbl %al,%eax
0821de2c +0x43e:  mov    %edx,0x8(%esp)
0821de30 +0x442:  mov    %eax,0x4(%esp)
0821de34 +0x446:  mov    -0xc(%ebp),%eax
0821de37 +0x449:  mov    %eax,(%esp)
0821de3a +0x44c:  call   08600cc8 <_ZN27CSharedServerMessageManager18IsChangableMessageEii>  ; CSharedServerMessageManager::IsChangableMessage(int, int)
0821de3f +0x451:  test   %al,%al
0821de41 +0x453:  je     0821de8d <+0x49f>
0821de43 +0x455:  mov    -0x10(%ebp),%edx
0821de46 +0x458:  movzbl -0x2d(%ebp),%eax
0821de4a +0x45c:  movzbl %al,%eax
0821de4d +0x45f:  mov    %edx,0x14(%esp)
0821de51 +0x463:  lea    -0x56(%ebp),%edx
0821de54 +0x466:  mov    %edx,0x10(%esp)
0821de58 +0x46a:  lea    -0x8e(%ebp),%edx
0821de5e +0x470:  mov    %edx,0xc(%esp)
0821de62 +0x474:  mov    %eax,0x8(%esp)
0821de66 +0x478:  mov    0xc(%ebp),%eax
0821de69 +0x47b:  mov    %eax,0x4(%esp)
0821de6d +0x47f:  mov    -0xc(%ebp),%eax
0821de70 +0x482:  mov    %eax,(%esp)
0821de73 +0x485:  call   08600ec0 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i>  ; CSharedServerMessageManager::UpdateServerMessage(CUser*, int, char*, char*, int)
0821de78 +0x48a:  movl   $0x1,0x4(%esp)
0821de80 +0x492:  lea    -0x2c(%ebp),%eax
0821de83 +0x495:  mov    %eax,(%esp)
0821de86 +0x498:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821de8b +0x49d:  jmp    0821def6 <+0x508>
0821de8d +0x49f:  movl   $0x0,0x4(%esp)
0821de95 +0x4a7:  lea    -0x2c(%ebp),%eax
0821de98 +0x4aa:  mov    %eax,(%esp)
0821de9b +0x4ad:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821dea0 +0x4b2:  movl   $0x1,0x4(%esp)
0821dea8 +0x4ba:  lea    -0x2c(%ebp),%eax
0821deab +0x4bd:  mov    %eax,(%esp)
0821deae +0x4c0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821deb3 +0x4c5:  jmp    0821def6 <+0x508>
0821deb5 +0x4c7:  movl   $0x0,0x4(%esp)
0821debd +0x4cf:  lea    -0x2c(%ebp),%eax
0821dec0 +0x4d2:  mov    %eax,(%esp)
0821dec3 +0x4d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821dec8 +0x4da:  mov    -0x5c(%ebp),%eax
0821decb +0x4dd:  test   %eax,%eax
0821decd +0x4df:  je     0821dee3 <+0x4f5>
0821decf +0x4e1:  mov    -0x5c(%ebp),%eax
0821ded2 +0x4e4:  mov    %eax,0x4(%esp)
0821ded6 +0x4e8:  lea    -0x2c(%ebp),%eax
0821ded9 +0x4eb:  mov    %eax,(%esp)
0821dedc +0x4ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821dee1 +0x4f3:  jmp    0821def6 <+0x508>
0821dee3 +0x4f5:  movl   $0x3,0x4(%esp)
0821deeb +0x4fd:  lea    -0x2c(%ebp),%eax
0821deee +0x500:  mov    %eax,(%esp)
0821def1 +0x503:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821def6 +0x508:  movzbl -0x2d(%ebp),%eax
0821defa +0x50c:  movzbl %al,%eax
0821defd +0x50f:  mov    %eax,0x4(%esp)
0821df01 +0x513:  lea    -0x2c(%ebp),%eax
0821df04 +0x516:  mov    %eax,(%esp)
0821df07 +0x519:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821df0c +0x51e:  movl   $0x1,0x4(%esp)
0821df14 +0x526:  lea    -0x2c(%ebp),%eax
0821df17 +0x529:  mov    %eax,(%esp)
0821df1a +0x52c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821df1f +0x531:  lea    -0x2c(%ebp),%eax
0821df22 +0x534:  mov    %eax,0x4(%esp)
0821df26 +0x538:  mov    0xc(%ebp),%eax
0821df29 +0x53b:  mov    %eax,(%esp)
0821df2c +0x53e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821df31 +0x543:  mov    $0x0,%ebx
0821df36 +0x548:  jmp    0821df53 <+0x565>
0821df38 +0x54a:  mov    %edx,%ebx
0821df3a +0x54c:  mov    %eax,%esi
0821df3c +0x54e:  lea    -0x2c(%ebp),%eax
0821df3f +0x551:  mov    %eax,(%esp)
0821df42 +0x554:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821df47 +0x559:  mov    %esi,%eax
0821df49 +0x55b:  mov    %ebx,%edx
0821df4b +0x55d:  mov    %eax,(%esp)
0821df4e +0x560:  call   08ae3750 <_Unwind_Resume>
0821df53 +0x565:  lea    -0x2c(%ebp),%eax
0821df56 +0x568:  mov    %eax,(%esp)
0821df59 +0x56b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821df5e +0x570:  mov    %ebx,%eax
0821df60 +0x572:  add    $0xb0,%esp
0821df66 +0x578:  pop    %ebx
0821df67 +0x579:  pop    %esi
0821df68 +0x57a:  pop    %ebp
0821df69 +0x57b:  ret
```

## 反编译 C

```c
// Dispatcher_UpdateServerMessage::dispatch_sig @ 0x821d9ee

/* WARNING: Removing unreachable block (ram,0x0821dd20) */
/* Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpdateServerMessage::dispatch_sig
          (Dispatcher_UpdateServerMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDataManager *this_00;
  char *pcVar7;
  CGameManager *this_01;
  uint uVar8;
  bool bVar9;
  char local_92 [50];
  int local_60;
  char local_5a [30];
  int local_3c;
  int local_38;
  byte local_31;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  CSharedServerMessageManager *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0821dac6 to 0821df30 has its CatchHandler @ 0821df38 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xdd);
    local_31 = 0;
    cVar2 = PacketBuf::get_byte(param_2,&local_31);
    if (cVar2 == '\x01') {
      local_38 = 0;
      cVar2 = PacketBuf::get_int(param_2,&local_38);
      if (cVar2 == '\x01') {
        if ((local_38 < 0) || (0x31 < local_38)) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
          CUser::Send(param_1,local_30);
          uVar5 = 0;
        }
        else {
          cVar2 = PacketBuf::get_str(param_2,local_92,0x32,local_38);
          if (cVar2 == '\x01') {
            this_00 = (CDataManager *)G_CDataManager();
            cVar2 = CDataManager::hasPreventString(this_00,local_92);
            if (cVar2 == '\0') {
              local_3c = 0;
              cVar2 = PacketBuf::get_int(param_2,&local_3c);
              if (cVar2 == '\x01') {
                pcVar7 = local_5a;
                uVar4 = 0x1e;
                bVar9 = ((uint)pcVar7 & 2) != 0;
                if (bVar9) {
                  local_5a[0] = '\0';
                  local_5a[1] = '\0';
                  pcVar7 = local_5a + 2;
                  uVar4 = 0x1c;
                }
                uVar8 = 0;
                do {
                  pcVar1 = pcVar7 + uVar8;
                  pcVar1[0] = '\0';
                  pcVar1[1] = '\0';
                  pcVar1[2] = '\0';
                  pcVar1[3] = '\0';
                  uVar8 = uVar8 + 4;
                } while (uVar8 < (uVar4 & 0xfffffffc));
                if (!bVar9) {
                  (pcVar7 + uVar8)[0] = '\0';
                  (pcVar7 + uVar8)[1] = '\0';
                }
                cVar2 = PacketBuf::get_str(param_2,local_5a,0x1e,local_3c);
                if (cVar2 == '\x01') {
                  pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  iVar3 = strcmp(local_5a,pcVar7);
                  if (iVar3 == 0) {
                    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    this_01 = (CGameManager *)G_CGameManager();
                    local_10 = (CSharedServerMessageManager *)
                               CGameManager::GetSharedServerMessageManager(this_01);
                    if (local_10 != (CSharedServerMessageManager *)0x0) {
                      local_60 = 0;
                      cVar2 = CSharedServerMessageManager::CheckUserCondition
                                        ((CUser *)local_10,(int)param_1,(int *)(uint)local_31);
                      if (cVar2 == '\0') {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                        if (local_60 == 0) {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,3);
                        }
                        else {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_60);
                        }
                      }
                      else {
                        cVar2 = CSharedServerMessageManager::IsChangableMessage
                                          (local_10,(uint)local_31,local_14);
                        if (cVar2 == '\0') {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
                        }
                        else {
                          CSharedServerMessageManager::UpdateServerMessage
                                    (local_10,param_1,(uint)local_31,local_92,local_5a,local_14);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
                        }
                      }
                    }
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_31);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                    CUser::Send(param_1,local_30);
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = LineFunc(0xd1fd,
                                     "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar5 = LineFunc(0xd1f9,
                                   "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar5 = LineFunc(0xd1f4,
                                 "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x17);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              uVar5 = 0;
            }
          }
          else {
            uVar5 = LineFunc(0xd1e4,
                             "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar5 = LineFunc(0xd1d5,
                         "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xd1d0,
                       "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    PacketGuard::~PacketGuard(local_30);
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    uVar5 = NumberToString(uVar4,0);
    uVar6 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd1c6,0);
    cMyTrace::operator()
              (local_24,
               "ServerMessage : Dispatcher_UpdateServerMessage => User State : %d, m_id : %s",uVar6,
               uVar5);
    uVar5 = LineFunc(0xd1c7,
                     "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar5;
}
```
