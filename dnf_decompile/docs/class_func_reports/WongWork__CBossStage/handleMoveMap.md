# handleMoveMap

`_ZN8WongWork10CBossStage13handleMoveMapEPt`

`WongWork::CBossStage::handleMoveMap(unsigned short*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814f66a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814f66a  _ZN8WongWork10CBossStage13handleMoveMapEPt
#           WongWork::CBossStage::handleMoveMap(unsigned short*)
# range [0x0814f66a, 0x0814fa75]
0814f66a +0x000:  push   %ebp
0814f66b +0x001:  mov    %esp,%ebp
0814f66d +0x003:  push   %esi
0814f66e +0x004:  push   %ebx
0814f66f +0x005:  sub    $0x50,%esp
0814f672 +0x008:  mov    0x8(%ebp),%eax
0814f675 +0x00b:  mov    (%eax),%eax
0814f677 +0x00d:  add    $0x8,%eax
0814f67a +0x010:  mov    (%eax),%edx
0814f67c +0x012:  mov    0x8(%ebp),%eax
0814f67f +0x015:  mov    %eax,(%esp)
0814f682 +0x018:  call   *%edx
0814f684 +0x01a:  test   %al,%al
0814f686 +0x01c:  je     0814f692 <+0x28>
0814f688 +0x01e:  mov    $0x0,%ebx
0814f68d +0x023:  jmp    0814fa6c <+0x402>
0814f692 +0x028:  movl   $0x0,-0x20(%ebp)
0814f699 +0x02f:  mov    0x8(%ebp),%eax
0814f69c +0x032:  mov    0x9ec(%eax),%edx
0814f6a2 +0x038:  mov    0x8(%ebp),%eax
0814f6a5 +0x03b:  mov    0x9e8(%eax),%eax
0814f6ab +0x041:  mov    %edx,%ecx
0814f6ad +0x043:  sub    %eax,%ecx
0814f6af +0x045:  mov    $0x10624dd3,%edx
0814f6b4 +0x04a:  mov    %ecx,%eax
0814f6b6 +0x04c:  imul   %edx
0814f6b8 +0x04e:  sar    $0x6,%edx
0814f6bb +0x051:  mov    %ecx,%eax
0814f6bd +0x053:  sar    $0x1f,%eax
0814f6c0 +0x056:  mov    %edx,%ecx
0814f6c2 +0x058:  sub    %eax,%ecx
0814f6c4 +0x05a:  mov    %ecx,%eax
0814f6c6 +0x05c:  mov    %eax,-0x20(%ebp)
0814f6c9 +0x05f:  movl   $0x0,-0x1c(%ebp)
0814f6d0 +0x066:  jmp    0814f834 <+0x1ca>
0814f6d5 +0x06b:  mov    0x8(%ebp),%eax
0814f6d8 +0x06e:  mov    0x4(%eax),%eax
0814f6db +0x071:  mov    -0x1c(%ebp),%edx
0814f6de +0x074:  mov    %edx,0x4(%esp)
0814f6e2 +0x078:  mov    %eax,(%esp)
0814f6e5 +0x07b:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0814f6ea +0x080:  mov    %eax,-0x18(%ebp)
0814f6ed +0x083:  cmpl   $0x0,-0x18(%ebp)
0814f6f1 +0x087:  je     0814f70f <+0xa5>
0814f6f3 +0x089:  mov    0x8(%ebp),%eax
0814f6f6 +0x08c:  mov    0x4(%eax),%eax
0814f6f9 +0x08f:  mov    -0x1c(%ebp),%edx
0814f6fc +0x092:  mov    %edx,0x4(%esp)
0814f700 +0x096:  mov    %eax,(%esp)
0814f703 +0x099:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0814f708 +0x09e:  xor    $0x1,%eax
0814f70b +0x0a1:  test   %al,%al
0814f70d +0x0a3:  je     0814f716 <+0xac>
0814f70f +0x0a5:  mov    $0x1,%eax
0814f714 +0x0aa:  jmp    0814f71b <+0xb1>
0814f716 +0x0ac:  mov    $0x0,%eax
0814f71b +0x0b1:  test   %al,%al
0814f71d +0x0b3:  jne    0814f82f <+0x1c5>
0814f723 +0x0b9:  cmpl   $0x4,-0x20(%ebp)
0814f727 +0x0bd:  jg     0814f763 <+0xf9>
0814f729 +0x0bf:  mov    -0x18(%ebp),%eax
0814f72c +0x0c2:  mov    %eax,(%esp)
0814f72f +0x0c5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0814f734 +0x0ca:  movl   $0x0,0x14(%esp)
0814f73c +0x0d2:  movl   $0x0,0x10(%esp)
0814f744 +0x0da:  movl   $0x1,0xc(%esp)
0814f74c +0x0e2:  movl   $0x19f,0x8(%esp)
0814f754 +0x0ea:  mov    -0x18(%ebp),%edx
0814f757 +0x0ed:  mov    %edx,0x4(%esp)
0814f75b +0x0f1:  mov    %eax,(%esp)
0814f75e +0x0f4:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0814f763 +0x0f9:  mov    -0x1c(%ebp),%eax
0814f766 +0x0fc:  add    %eax,%eax
0814f768 +0x0fe:  add    0xc(%ebp),%eax
0814f76b +0x101:  movzwl (%eax),%eax
0814f76e +0x104:  test   %ax,%ax
0814f771 +0x107:  jne    0814f7ad <+0x143>
0814f773 +0x109:  mov    -0x18(%ebp),%eax
0814f776 +0x10c:  mov    %eax,(%esp)
0814f779 +0x10f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0814f77e +0x114:  movl   $0x0,0x14(%esp)
0814f786 +0x11c:  movl   $0x0,0x10(%esp)
0814f78e +0x124:  movl   $0x1,0xc(%esp)
0814f796 +0x12c:  movl   $0x19b,0x8(%esp)
0814f79e +0x134:  mov    -0x18(%ebp),%edx
0814f7a1 +0x137:  mov    %edx,0x4(%esp)
0814f7a5 +0x13b:  mov    %eax,(%esp)
0814f7a8 +0x13e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0814f7ad +0x143:  mov    -0x1c(%ebp),%edx
0814f7b0 +0x146:  mov    0x8(%ebp),%eax
0814f7b3 +0x149:  add    $0x270,%edx
0814f7b9 +0x14f:  mov    0x8(%eax,%edx,4),%eax
0814f7bd +0x153:  test   %eax,%eax
0814f7bf +0x155:  jne    0814f7fb <+0x191>
0814f7c1 +0x157:  mov    -0x18(%ebp),%eax
0814f7c4 +0x15a:  mov    %eax,(%esp)
0814f7c7 +0x15d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0814f7cc +0x162:  movl   $0x0,0x14(%esp)
0814f7d4 +0x16a:  movl   $0x0,0x10(%esp)
0814f7dc +0x172:  movl   $0x1,0xc(%esp)
0814f7e4 +0x17a:  movl   $0xdd,0x8(%esp)
0814f7ec +0x182:  mov    -0x18(%ebp),%edx
0814f7ef +0x185:  mov    %edx,0x4(%esp)
0814f7f3 +0x189:  mov    %eax,(%esp)
0814f7f6 +0x18c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0814f7fb +0x191:  mov    -0x1c(%ebp),%eax
0814f7fe +0x194:  add    %eax,%eax
0814f800 +0x196:  add    0xc(%ebp),%eax
0814f803 +0x199:  movzwl (%eax),%eax
0814f806 +0x19c:  movzwl %ax,%eax
0814f809 +0x19f:  mov    -0x18(%ebp),%edx
0814f80c +0x1a2:  lea    0x79700(%edx),%ecx
0814f812 +0x1a8:  movl   $0x0,0xc(%esp)
0814f81a +0x1b0:  mov    -0x20(%ebp),%edx
0814f81d +0x1b3:  mov    %edx,0x8(%esp)
0814f821 +0x1b7:  mov    %eax,0x4(%esp)
0814f825 +0x1bb:  mov    %ecx,(%esp)
0814f828 +0x1be:  call   08684b22 <_ZN15cUserHistoryLog8MapClearEtii>  ; cUserHistoryLog::MapClear(unsigned short, int, int)
0814f82d +0x1c3:  jmp    0814f830 <+0x1c6>
0814f82f +0x1c5:  nop
0814f830 +0x1c6:  addl   $0x1,-0x1c(%ebp)
0814f834 +0x1ca:  cmpl   $0x3,-0x1c(%ebp)
0814f838 +0x1ce:  setle  %al
0814f83b +0x1d1:  test   %al,%al
0814f83d +0x1d3:  jne    0814f6d5 <+0x6b>
0814f843 +0x1d9:  mov    0x8(%ebp),%eax
0814f846 +0x1dc:  mov    %eax,(%esp)
0814f849 +0x1df:  call   0814d1b6 <_ZN8WongWork10CBossStage13moveNextStageEv>  ; WongWork::CBossStage::moveNextStage()
0814f84e +0x1e4:  test   %al,%al
0814f850 +0x1e6:  je     0814fa67 <+0x3fd>
0814f856 +0x1ec:  movl   $0x0,-0x24(%ebp)
0814f85d +0x1f3:  lea    -0x24(%ebp),%eax
0814f860 +0x1f6:  mov    %eax,0x4(%esp)
0814f864 +0x1fa:  mov    0x8(%ebp),%eax
0814f867 +0x1fd:  mov    %eax,(%esp)
0814f86a +0x200:  call   0814f4fc <_ZN8WongWork10CBossStage14randomMapIndexERi>  ; WongWork::CBossStage::randomMapIndex(int&)
0814f86f +0x205:  xor    $0x1,%eax
0814f872 +0x208:  test   %al,%al
0814f874 +0x20a:  je     0814f880 <+0x216>
0814f876 +0x20c:  mov    $0x0,%ebx
0814f87b +0x211:  jmp    0814fa6c <+0x402>
0814f880 +0x216:  mov    0x8(%ebp),%eax
0814f883 +0x219:  mov    0x4(%eax),%eax
0814f886 +0x21c:  mov    %eax,(%esp)
0814f889 +0x21f:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0814f88e +0x224:  mov    %eax,-0x14(%ebp)
0814f891 +0x227:  mov    -0x14(%ebp),%eax
0814f894 +0x22a:  mov    %eax,(%esp)
0814f897 +0x22d:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0814f89c +0x232:  test   %al,%al
0814f89e +0x234:  je     0814f8f4 <+0x28a>
0814f8a0 +0x236:  mov    -0x14(%ebp),%eax
0814f8a3 +0x239:  mov    0x796d0(%eax),%eax
0814f8a9 +0x23f:  test   %eax,%eax
0814f8ab +0x241:  je     0814f8c6 <+0x25c>
0814f8ad +0x243:  mov    -0x14(%ebp),%eax
0814f8b0 +0x246:  mov    0x796d0(%eax),%eax
0814f8b6 +0x24c:  mov    %eax,-0x24(%ebp)
0814f8b9 +0x24f:  mov    -0x14(%ebp),%eax
0814f8bc +0x252:  movl   $0x0,0x796d0(%eax)
0814f8c6 +0x25c:  mov    -0x14(%ebp),%eax
0814f8c9 +0x25f:  movzbl 0x796cc(%eax),%eax
0814f8d0 +0x266:  test   %al,%al
0814f8d2 +0x268:  je     0814f8f4 <+0x28a>
0814f8d4 +0x26a:  mov    -0x14(%ebp),%eax
0814f8d7 +0x26d:  movzbl 0x796cc(%eax),%eax
0814f8de +0x274:  movsbl %al,%edx
0814f8e1 +0x277:  mov    0x8(%ebp),%eax
0814f8e4 +0x27a:  mov    %edx,0xae8(%eax)
0814f8ea +0x280:  mov    -0x14(%ebp),%eax
0814f8ed +0x283:  movb   $0x0,0x796cc(%eax)
0814f8f4 +0x28a:  mov    -0x24(%ebp),%ebx
0814f8f7 +0x28d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814f8fc +0x292:  mov    %ebx,0x4(%esp)
0814f900 +0x296:  mov    %eax,(%esp)
0814f903 +0x299:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0814f908 +0x29e:  mov    %eax,-0x10(%ebp)
0814f90b +0x2a1:  cmpl   $0x0,-0x10(%ebp)
0814f90f +0x2a5:  jne    0814f91b <+0x2b1>
0814f911 +0x2a7:  mov    $0x0,%ebx
0814f916 +0x2ac:  jmp    0814fa6c <+0x402>
0814f91b +0x2b1:  mov    0x8(%ebp),%eax
0814f91e +0x2b4:  mov    %eax,(%esp)
0814f921 +0x2b7:  call   0814bea2 <_ZN8WongWork10CBossStage5resetEv>  ; WongWork::CBossStage::reset()
0814f926 +0x2bc:  mov    -0x10(%ebp),%eax
0814f929 +0x2bf:  mov    %eax,0x4(%esp)
0814f92d +0x2c3:  mov    0x8(%ebp),%eax
0814f930 +0x2c6:  mov    %eax,(%esp)
0814f933 +0x2c9:  call   0814bef4 <_ZN8WongWork10CBossStage10consistMapEPK4CMap>  ; WongWork::CBossStage::consistMap(CMap const*)
0814f938 +0x2ce:  xor    $0x1,%eax
0814f93b +0x2d1:  test   %al,%al
0814f93d +0x2d3:  je     0814f96b <+0x301>
0814f93f +0x2d5:  movl   $0x4,(%esp)
0814f946 +0x2dc:  call   08725800 <__cxa_allocate_exception>
0814f94b +0x2e1:  mov    %eax,%edx
0814f94d +0x2e3:  movl   $0x1,(%edx)
0814f953 +0x2e9:  movl   $0x0,0x8(%esp)
0814f95b +0x2f1:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0814f963 +0x2f9:  mov    %eax,(%esp)
0814f966 +0x2fc:  call   08724c50 <__cxa_throw>
0814f96b +0x301:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0814f972 +0x308:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0814f977 +0x30d:  mov    %eax,%edx
0814f979 +0x30f:  mov    0x8(%ebp),%eax
0814f97c +0x312:  mov    %edx,0x9e8(%eax)
0814f982 +0x318:  mov    0x8(%ebp),%eax
0814f985 +0x31b:  mov    %eax,(%esp)
0814f988 +0x31e:  call   0814ce12 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv>  ; WongWork::CBossStage::SendMapInfoPacket()
0814f98d +0x323:  mov    $0x1,%ebx
0814f992 +0x328:  jmp    0814fa6c <+0x402>
0814f997 +0x32d:  cmp    $0x1,%edx
0814f99a +0x330:  je     0814f9a4 <+0x33a>
0814f99c +0x332:  mov    %eax,(%esp)
0814f99f +0x335:  call   08ae3750 <_Unwind_Resume>
0814f9a4 +0x33a:  mov    %eax,(%esp)
0814f9a7 +0x33d:  call   08725ce0 <__cxa_begin_catch>
0814f9ac +0x342:  mov    (%eax),%eax
0814f9ae +0x344:  mov    %eax,-0xc(%ebp)
0814f9b1 +0x347:  lea    -0x30(%ebp),%eax
0814f9b4 +0x34a:  mov    %eax,(%esp)
0814f9b7 +0x34d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814f9bc +0x352:  movl   $0x30,0x8(%esp)
0814f9c4 +0x35a:  movl   $0x1,0x4(%esp)
0814f9cc +0x362:  lea    -0x30(%ebp),%eax
0814f9cf +0x365:  mov    %eax,(%esp)
0814f9d2 +0x368:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814f9d7 +0x36d:  movl   $0x0,0x4(%esp)
0814f9df +0x375:  lea    -0x30(%ebp),%eax
0814f9e2 +0x378:  mov    %eax,(%esp)
0814f9e5 +0x37b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f9ea +0x380:  mov    -0xc(%ebp),%eax
0814f9ed +0x383:  mov    %eax,0x4(%esp)
0814f9f1 +0x387:  lea    -0x30(%ebp),%eax
0814f9f4 +0x38a:  mov    %eax,(%esp)
0814f9f7 +0x38d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f9fc +0x392:  movl   $0x1,0x4(%esp)
0814fa04 +0x39a:  lea    -0x30(%ebp),%eax
0814fa07 +0x39d:  mov    %eax,(%esp)
0814fa0a +0x3a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814fa0f +0x3a5:  mov    0x8(%ebp),%eax
0814fa12 +0x3a8:  mov    0x4(%eax),%eax
0814fa15 +0x3ab:  lea    -0x30(%ebp),%edx
0814fa18 +0x3ae:  mov    %edx,0x4(%esp)
0814fa1c +0x3b2:  mov    %eax,(%esp)
0814fa1f +0x3b5:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814fa24 +0x3ba:  mov    $0x0,%ebx
0814fa29 +0x3bf:  lea    -0x30(%ebp),%eax
0814fa2c +0x3c2:  mov    %eax,(%esp)
0814fa2f +0x3c5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814fa34 +0x3ca:  jmp    0814fa60 <+0x3f6>
0814fa36 +0x3cc:  mov    %edx,%ebx
0814fa38 +0x3ce:  mov    %eax,%esi
0814fa3a +0x3d0:  lea    -0x30(%ebp),%eax
0814fa3d +0x3d3:  mov    %eax,(%esp)
0814fa40 +0x3d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814fa45 +0x3db:  mov    %esi,%eax
0814fa47 +0x3dd:  mov    %ebx,%edx
0814fa49 +0x3df:  jmp    0814fa4b <+0x3e1>
0814fa4b +0x3e1:  mov    %edx,%ebx
0814fa4d +0x3e3:  mov    %eax,%esi
0814fa4f +0x3e5:  call   08725c30 <__cxa_end_catch>
0814fa54 +0x3ea:  mov    %esi,%eax
0814fa56 +0x3ec:  mov    %ebx,%edx
0814fa58 +0x3ee:  mov    %eax,(%esp)
0814fa5b +0x3f1:  call   08ae3750 <_Unwind_Resume>
0814fa60 +0x3f6:  call   08725c30 <__cxa_end_catch>
0814fa65 +0x3fb:  jmp    0814fa6c <+0x402>
0814fa67 +0x3fd:  mov    $0x0,%ebx
0814fa6c +0x402:  mov    %ebx,%eax
0814fa6e +0x404:  add    $0x50,%esp
0814fa71 +0x407:  pop    %ebx
0814fa72 +0x408:  pop    %esi
0814fa73 +0x409:  pop    %ebp
0814fa74 +0x40a:  ret
0814fa75 +0x40b:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::handleMoveMap @ 0x814f66a

/* WongWork::CBossStage::handleMoveMap(unsigned short*) */

undefined4 __thiscall WongWork::CBossStage::handleMoveMap(CBossStage *this,ushort *param_1)

{
  bool bVar1;
  char cVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_28;
  int local_24;
  int local_20;
  CUser *local_1c;
  CUser *local_18;
  CMap *local_14;
  
  cVar2 = (**(code **)(*(int *)this + 8))(this);
  if (cVar2 == '\0') {
    local_24 = (*(int *)(this + 0x9ec) - *(int *)(this + 0x9e8)) / 1000;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      local_1c = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_20);
      if (local_1c == (CUser *)0x0) {
LAB_0814f70f:
        bVar1 = true;
      }
      else {
        cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_20);
        if (cVar2 != '\x01') goto LAB_0814f70f;
        bVar1 = false;
      }
      if (!bVar1) {
        if (local_24 < 5) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0x19f,1,0,0);
        }
        if (param_1[local_20] == 0) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0x19b,1,0,0);
        }
        if (*(int *)(this + (local_20 + 0x270) * 4 + 8) == 0) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0xdd,1,0,0);
        }
        cUserHistoryLog::MapClear
                  ((cUserHistoryLog *)(local_1c + 0x79700),param_1[local_20],local_24,0);
      }
    }
    cVar2 = moveNextStage(this);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      local_28 = 0;
                    /* try { // try from 0814f86a to 0814f96a has its CatchHandler @ 0814f997 */
      cVar2 = randomMapIndex(this,&local_28);
      if (cVar2 == '\x01') {
        local_18 = (CUser *)CParty::getManager(*(CParty **)(this + 4));
        cVar2 = CUser::isGMUser(local_18);
        if (cVar2 != '\0') {
          if (*(int *)(local_18 + 0x796d0) != 0) {
            local_28 = *(int *)(local_18 + 0x796d0);
            *(undefined4 *)(local_18 + 0x796d0) = 0;
          }
          if (local_18[0x796cc] != (CUser)0x0) {
            *(int *)(this + 0xae8) = (int)(char)local_18[0x796cc];
            local_18[0x796cc] = (CUser)0x0;
          }
        }
        iVar4 = G_CDataManager();
        local_14 = (CMap *)CDataManager::find_map(iVar4);
        if (local_14 == (CMap *)0x0) {
          uVar6 = 0;
        }
        else {
          reset(this);
          cVar2 = consistMap(this,local_14);
          if (cVar2 != '\x01') {
            puVar5 = (undefined4 *)__cxa_allocate_exception(4);
            *puVar5 = 1;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar5,&ENUM_ERROR::typeinfo,0);
          }
          uVar6 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0x9e8) = uVar6;
          SendMapInfoPacket(this);
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
