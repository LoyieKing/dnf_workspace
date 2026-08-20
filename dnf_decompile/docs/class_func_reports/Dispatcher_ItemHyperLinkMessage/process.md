# process

`_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemHyperLinkMessage` | `0x081d9c4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d9c4a  _ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d9c4a, 0x081da513]
081d9c4a +0x000:  push   %ebp
081d9c4b +0x001:  mov    %esp,%ebp
081d9c4d +0x003:  push   %esi
081d9c4e +0x004:  push   %ebx
081d9c4f +0x005:  sub    $0x2e0,%esp
081d9c55 +0x00b:  mov    0x14(%ebp),%eax
081d9c58 +0x00e:  mov    %eax,-0x54(%ebp)
081d9c5b +0x011:  mov    0x10(%ebp),%eax
081d9c5e +0x014:  mov    %eax,0x8(%esp)
081d9c62 +0x018:  mov    0xc(%ebp),%eax
081d9c65 +0x01b:  mov    %eax,0x4(%esp)
081d9c69 +0x01f:  mov    0x8(%ebp),%eax
081d9c6c +0x022:  mov    %eax,(%esp)
081d9c6f +0x025:  call   081da514 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ItemHyperLinkMessage::check_error(CUser*, MSG_BASE&)
081d9c74 +0x02a:  mov    -0x54(%ebp),%edx
081d9c77 +0x02d:  mov    %eax,0x4(%edx)
081d9c7a +0x030:  mov    -0x54(%ebp),%eax
081d9c7d +0x033:  mov    0x4(%eax),%eax
081d9c80 +0x036:  test   %eax,%eax
081d9c82 +0x038:  jle    081d9c8e <+0x44>
081d9c84 +0x03a:  mov    $0x0,%eax
081d9c89 +0x03f:  jmp    081da50a <+0x8c0>
081d9c8e +0x044:  mov    -0x54(%ebp),%eax
081d9c91 +0x047:  mov    0x4(%eax),%eax
081d9c94 +0x04a:  test   %eax,%eax
081d9c96 +0x04c:  jns    081d9cc3 <+0x79>
081d9c98 +0x04e:  mov    -0x54(%ebp),%eax
081d9c9b +0x051:  mov    0x4(%eax),%eax
081d9c9e +0x054:  movl   $0x0,0xc(%esp)
081d9ca6 +0x05c:  mov    %eax,0x8(%esp)
081d9caa +0x060:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d9cb2 +0x068:  movl   $0x47aa,(%esp)
081d9cb9 +0x06f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9cbe +0x074:  jmp    081da50a <+0x8c0>
081d9cc3 +0x079:  mov    0x10(%ebp),%eax
081d9cc6 +0x07c:  mov    %eax,-0x50(%ebp)
081d9cc9 +0x07f:  mov    -0x50(%ebp),%eax
081d9ccc +0x082:  lea    0x18(%eax),%ebx
081d9ccf +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d9cd4 +0x08a:  mov    %ebx,0x8(%esp)
081d9cd8 +0x08e:  mov    0xc(%ebp),%edx
081d9cdb +0x091:  mov    %edx,0x4(%esp)
081d9cdf +0x095:  mov    %eax,(%esp)
081d9ce2 +0x098:  call   0835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>  ; CDataManager::rewriteUsableEmoticon(CUser const&, char*)
081d9ce7 +0x09d:  mov    0xc(%ebp),%eax
081d9cea +0x0a0:  mov    %eax,(%esp)
081d9ced +0x0a3:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081d9cf2 +0x0a8:  test   %al,%al
081d9cf4 +0x0aa:  je     081d9d26 <+0xdc>
081d9cf6 +0x0ac:  mov    -0x50(%ebp),%eax
081d9cf9 +0x0af:  movzbl 0xd(%eax),%eax
081d9cfd +0x0b3:  movzbl %al,%eax
081d9d00 +0x0b6:  cmp    $0x8,%eax
081d9d03 +0x0b9:  ja     081d9d1b <+0xd1>
081d9d05 +0x0bb:  mov    $0x1,%edx
081d9d0a +0x0c0:  mov    %edx,%ebx
081d9d0c +0x0c2:  mov    %eax,%ecx
081d9d0e +0x0c4:  shl    %cl,%ebx
081d9d10 +0x0c6:  mov    %ebx,%eax
081d9d12 +0x0c8:  and    $0x144,%eax
081d9d17 +0x0cd:  test   %eax,%eax
081d9d19 +0x0cf:  jne    081d9d25 <+0xdb>
081d9d1b +0x0d1:  mov    $0x0,%eax
081d9d20 +0x0d6:  jmp    081da50a <+0x8c0>
081d9d25 +0x0db:  nop
081d9d26 +0x0dc:  mov    -0x50(%ebp),%eax
081d9d29 +0x0df:  movzbl 0xd(%eax),%eax
081d9d2d +0x0e3:  cmp    $0x26,%al
081d9d2f +0x0e5:  jne    081d9eaf <+0x265>
081d9d35 +0x0eb:  lea    -0x2c8(%ebp),%eax
081d9d3b +0x0f1:  mov    %eax,(%esp)
081d9d3e +0x0f4:  call   0822c3e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1a90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1a90
081d9d43 +0x0f9:  movl   $0x1,-0x2be(%ebp)
081d9d4d +0x103:  mov    0xc(%ebp),%eax
081d9d50 +0x106:  mov    %eax,(%esp)
081d9d53 +0x109:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d9d58 +0x10e:  mov    %eax,-0x2ba(%ebp)
081d9d5e +0x114:  mov    0xc(%ebp),%eax
081d9d61 +0x117:  mov    %eax,(%esp)
081d9d64 +0x11a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d9d69 +0x11f:  mov    %eax,-0x2b5(%ebp)
081d9d6f +0x125:  mov    -0x50(%ebp),%eax
081d9d72 +0x128:  movzbl 0x13a(%eax),%eax
081d9d79 +0x12f:  mov    %al,-0x2b6(%ebp)
081d9d7f +0x135:  mov    -0x50(%ebp),%eax
081d9d82 +0x138:  mov    0x10(%eax),%eax
081d9d85 +0x13b:  mov    %eax,-0x2b1(%ebp)
081d9d8b +0x141:  mov    -0x50(%ebp),%eax
081d9d8e +0x144:  mov    0x118(%eax),%eax
081d9d94 +0x14a:  mov    %al,-0x2ad(%ebp)
081d9d9a +0x150:  mov    -0x50(%ebp),%eax
081d9d9d +0x153:  mov    0x14(%eax),%eax
081d9da0 +0x156:  mov    %al,-0x155(%ebp)
081d9da6 +0x15c:  mov    -0x50(%ebp),%eax
081d9da9 +0x15f:  mov    0x118(%eax),%eax
081d9daf +0x165:  mov    -0x50(%ebp),%edx
081d9db2 +0x168:  add    $0x11c,%edx
081d9db8 +0x16e:  mov    %eax,0x8(%esp)
081d9dbc +0x172:  mov    %edx,0x4(%esp)
081d9dc0 +0x176:  lea    -0x2c8(%ebp),%eax
081d9dc6 +0x17c:  add    $0x1c,%eax
081d9dc9 +0x17f:  mov    %eax,(%esp)
081d9dcc +0x182:  call   0807d8a0 <_init+0x198>
081d9dd1 +0x187:  mov    -0x50(%ebp),%eax
081d9dd4 +0x18a:  mov    0x14(%eax),%eax
081d9dd7 +0x18d:  mov    -0x50(%ebp),%edx
081d9dda +0x190:  add    $0x18,%edx
081d9ddd +0x193:  mov    %eax,0x8(%esp)
081d9de1 +0x197:  mov    %edx,0x4(%esp)
081d9de5 +0x19b:  lea    -0x2c8(%ebp),%eax
081d9deb +0x1a1:  add    $0x174,%eax
081d9df0 +0x1a6:  mov    %eax,(%esp)
081d9df3 +0x1a9:  call   0807d8a0 <_init+0x198>
081d9df8 +0x1ae:  mov    -0x50(%ebp),%eax
081d9dfb +0x1b1:  movzbl 0x13b(%eax),%eax
081d9e02 +0x1b8:  mov    %al,-0x28e(%ebp)
081d9e08 +0x1be:  movl   $0x0,-0x48(%ebp)
081d9e0f +0x1c5:  jmp    081d9e4e <+0x204>
081d9e11 +0x1c7:  mov    -0x48(%ebp),%eax
081d9e14 +0x1ca:  imul   $0x68,%eax,%eax
081d9e17 +0x1cd:  add    $0x130,%eax
081d9e1c +0x1d2:  add    -0x50(%ebp),%eax
081d9e1f +0x1d5:  lea    0xc(%eax),%edx
081d9e22 +0x1d8:  mov    -0x48(%ebp),%ecx
081d9e25 +0x1db:  lea    -0x2c8(%ebp),%eax
081d9e2b +0x1e1:  imul   $0x68,%ecx,%ecx
081d9e2e +0x1e4:  add    $0x30,%ecx
081d9e31 +0x1e7:  add    %ecx,%eax
081d9e33 +0x1e9:  add    $0xb,%eax
081d9e36 +0x1ec:  movl   $0x68,0x8(%esp)
081d9e3e +0x1f4:  mov    %edx,0x4(%esp)
081d9e42 +0x1f8:  mov    %eax,(%esp)
081d9e45 +0x1fb:  call   0807d8a0 <_init+0x198>
081d9e4a +0x200:  addl   $0x1,-0x48(%ebp)
081d9e4e +0x204:  mov    -0x50(%ebp),%eax
081d9e51 +0x207:  movzbl 0x13b(%eax),%eax
081d9e58 +0x20e:  movzbl %al,%eax
081d9e5b +0x211:  cmp    -0x48(%ebp),%eax
081d9e5e +0x214:  setg   %al
081d9e61 +0x217:  test   %al,%al
081d9e63 +0x219:  jne    081d9e11 <+0x1c7>
081d9e65 +0x21b:  movzbl -0x155(%ebp),%eax
081d9e6c +0x222:  movzbl %al,%eax
081d9e6f +0x225:  add    $0x174,%ax
081d9e73 +0x229:  mov    %ax,-0x2c6(%ebp)
081d9e7a +0x230:  movzwl -0x2c6(%ebp),%eax
081d9e81 +0x237:  movzwl %ax,%eax
081d9e84 +0x23a:  mov    %eax,-0x4c(%ebp)
081d9e87 +0x23d:  lea    -0x2c8(%ebp),%edx
081d9e8d +0x243:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
081d9e92 +0x248:  mov    -0x4c(%ebp),%ecx
081d9e95 +0x24b:  mov    %ecx,0x8(%esp)
081d9e99 +0x24f:  mov    %edx,0x4(%esp)
081d9e9d +0x253:  mov    %eax,(%esp)
081d9ea0 +0x256:  call   0846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>  ; CCommunityServerProxy::SendTcpPacket(char*, int)
081d9ea5 +0x25b:  mov    $0x0,%eax
081d9eaa +0x260:  jmp    081da50a <+0x8c0>
081d9eaf +0x265:  mov    -0x50(%ebp),%eax
081d9eb2 +0x268:  movzbl 0xd(%eax),%eax
081d9eb6 +0x26c:  cmp    $0xb,%al
081d9eb8 +0x26e:  je     081d9ed4 <+0x28a>
081d9eba +0x270:  mov    -0x50(%ebp),%eax
081d9ebd +0x273:  movzbl 0xd(%eax),%eax
081d9ec1 +0x277:  cmp    $0xc,%al
081d9ec3 +0x279:  je     081d9ed4 <+0x28a>
081d9ec5 +0x27b:  mov    -0x50(%ebp),%eax
081d9ec8 +0x27e:  movzbl 0xd(%eax),%eax
081d9ecc +0x282:  cmp    $0x23,%al
081d9ece +0x284:  jne    081da047 <+0x3fd>
081d9ed4 +0x28a:  mov    -0x50(%ebp),%eax
081d9ed7 +0x28d:  movzwl 0xe(%eax),%eax
081d9edb +0x291:  movzwl %ax,%eax
081d9ede +0x294:  mov    %eax,-0x44(%ebp)
081d9ee1 +0x297:  mov    -0x50(%ebp),%eax
081d9ee4 +0x29a:  mov    0x10(%eax),%eax
081d9ee7 +0x29d:  mov    %eax,-0x40(%ebp)
081d9eea +0x2a0:  mov    -0x44(%ebp),%eax
081d9eed +0x2a3:  mov    %eax,(%esp)
081d9ef0 +0x2a6:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d9ef5 +0x2ab:  mov    %eax,%ebx
081d9ef7 +0x2ad:  mov    0xc(%ebp),%eax
081d9efa +0x2b0:  mov    %eax,(%esp)
081d9efd +0x2b3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d9f02 +0x2b8:  mov    -0x40(%ebp),%edx
081d9f05 +0x2bb:  mov    %edx,0x8(%esp)
081d9f09 +0x2bf:  mov    %ebx,0x4(%esp)
081d9f0d +0x2c3:  mov    %eax,(%esp)
081d9f10 +0x2c6:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081d9f15 +0x2cb:  mov    %eax,-0x3c(%ebp)
081d9f18 +0x2ce:  cmpl   $0x0,-0x3c(%ebp)
081d9f1c +0x2d2:  je     081d9f5d <+0x313>
081d9f1e +0x2d4:  mov    -0x3c(%ebp),%eax
081d9f21 +0x2d7:  mov    0x2(%eax),%eax
081d9f24 +0x2da:  cmp    $0x24,%eax
081d9f27 +0x2dd:  je     081d9f8d <+0x343>
081d9f29 +0x2df:  mov    -0x3c(%ebp),%eax
081d9f2c +0x2e2:  mov    0x2(%eax),%eax
081d9f2f +0x2e5:  cmp    $0x382,%eax
081d9f34 +0x2ea:  je     081d9f8d <+0x343>
081d9f36 +0x2ec:  mov    -0x3c(%ebp),%eax
081d9f39 +0x2ef:  mov    0x2(%eax),%eax
081d9f3c +0x2f2:  cmp    $0x28d150,%eax
081d9f41 +0x2f7:  je     081d9f8d <+0x343>
081d9f43 +0x2f9:  mov    -0x3c(%ebp),%eax
081d9f46 +0x2fc:  mov    0x2(%eax),%eax
081d9f49 +0x2ff:  cmp    $0x292090dd,%eax
081d9f4e +0x304:  je     081d9f8d <+0x343>
081d9f50 +0x306:  mov    -0x3c(%ebp),%eax
081d9f53 +0x309:  mov    0x2(%eax),%eax
081d9f56 +0x30c:  cmp    $0x29209138,%eax
081d9f5b +0x311:  je     081d9f8d <+0x343>
081d9f5d +0x313:  mov    0xc(%ebp),%eax
081d9f60 +0x316:  mov    %eax,(%esp)
081d9f63 +0x319:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d9f68 +0x31e:  mov    %eax,0xc(%esp)
081d9f6c +0x322:  movl   $0x0,0x8(%esp)
081d9f74 +0x32a:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d9f7c +0x332:  movl   $0x4801,(%esp)
081d9f83 +0x339:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d9f88 +0x33e:  jmp    081da50a <+0x8c0>
081d9f8d +0x343:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081d9f92 +0x348:  movl   $0x24,0x8(%esp)
081d9f9a +0x350:  mov    0xc(%ebp),%edx
081d9f9d +0x353:  mov    %edx,0x4(%esp)
081d9fa1 +0x357:  mov    %eax,(%esp)
081d9fa4 +0x35a:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081d9fa9 +0x35f:  mov    %eax,-0x38(%ebp)
081d9fac +0x362:  cmpl   $0x0,-0x38(%ebp)
081d9fb0 +0x366:  je     081d9fc5 <+0x37b>
081d9fb2 +0x368:  mov    -0x54(%ebp),%eax
081d9fb5 +0x36b:  mov    -0x38(%ebp),%edx
081d9fb8 +0x36e:  mov    %edx,0x4(%eax)
081d9fbb +0x371:  mov    $0x0,%eax
081d9fc0 +0x376:  jmp    081da50a <+0x8c0>
081d9fc5 +0x37b:  mov    -0x44(%ebp),%eax
081d9fc8 +0x37e:  mov    %eax,(%esp)
081d9fcb +0x381:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d9fd0 +0x386:  mov    -0x40(%ebp),%edx
081d9fd3 +0x389:  mov    %edx,0x8(%esp)
081d9fd7 +0x38d:  mov    %eax,0x4(%esp)
081d9fdb +0x391:  mov    0xc(%ebp),%eax
081d9fde +0x394:  mov    %eax,(%esp)
081d9fe1 +0x397:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081d9fe6 +0x39c:  test   %al,%al
081d9fe8 +0x39e:  je     081d9ffe <+0x3b4>
081d9fea +0x3a0:  mov    -0x54(%ebp),%eax
081d9fed +0x3a3:  movl   $0xd5,0x4(%eax)
081d9ff4 +0x3aa:  mov    $0x0,%eax
081d9ff9 +0x3af:  jmp    081da50a <+0x8c0>
081d9ffe +0x3b4:  mov    -0x40(%ebp),%eax
081da001 +0x3b7:  cwtl
081da002 +0x3b8:  movl   $0xffffffff,0x10(%esp)
081da00a +0x3c0:  movl   $0xffffffff,0xc(%esp)
081da012 +0x3c8:  mov    -0x44(%ebp),%edx
081da015 +0x3cb:  mov    %edx,0x8(%esp)
081da019 +0x3cf:  mov    %eax,0x4(%esp)
081da01d +0x3d3:  mov    0xc(%ebp),%eax
081da020 +0x3d6:  mov    %eax,(%esp)
081da023 +0x3d9:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081da028 +0x3de:  xor    $0x1,%eax
081da02b +0x3e1:  test   %al,%al
081da02d +0x3e3:  je     081da492 <+0x848>
081da033 +0x3e9:  mov    -0x54(%ebp),%eax
081da036 +0x3ec:  movl   $0x11,0x4(%eax)
081da03d +0x3f3:  mov    $0x0,%eax
081da042 +0x3f8:  jmp    081da50a <+0x8c0>
081da047 +0x3fd:  mov    -0x50(%ebp),%eax
081da04a +0x400:  movzbl 0xd(%eax),%eax
081da04e +0x404:  cmp    $0xd,%al
081da050 +0x406:  je     081da061 <+0x417>
081da052 +0x408:  mov    -0x50(%ebp),%eax
081da055 +0x40b:  movzbl 0xd(%eax),%eax
081da059 +0x40f:  cmp    $0xf,%al
081da05b +0x411:  jne    081da1f3 <+0x5a9>
081da061 +0x417:  mov    -0x50(%ebp),%eax
081da064 +0x41a:  movzwl 0xe(%eax),%eax
081da068 +0x41e:  movzwl %ax,%eax
081da06b +0x421:  mov    %eax,-0x34(%ebp)
081da06e +0x424:  mov    -0x50(%ebp),%eax
081da071 +0x427:  mov    0x10(%eax),%eax
081da074 +0x42a:  mov    %eax,-0x30(%ebp)
081da077 +0x42d:  mov    -0x34(%ebp),%eax
081da07a +0x430:  mov    %eax,(%esp)
081da07d +0x433:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081da082 +0x438:  mov    %eax,%ebx
081da084 +0x43a:  mov    0xc(%ebp),%eax
081da087 +0x43d:  mov    %eax,(%esp)
081da08a +0x440:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081da08f +0x445:  mov    -0x30(%ebp),%edx
081da092 +0x448:  mov    %edx,0x8(%esp)
081da096 +0x44c:  mov    %ebx,0x4(%esp)
081da09a +0x450:  mov    %eax,(%esp)
081da09d +0x453:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081da0a2 +0x458:  mov    %eax,-0x2c(%ebp)
081da0a5 +0x45b:  cmpl   $0x0,-0x2c(%ebp)
081da0a9 +0x45f:  jne    081da0db <+0x491>
081da0ab +0x461:  mov    0xc(%ebp),%eax
081da0ae +0x464:  mov    %eax,(%esp)
081da0b1 +0x467:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da0b6 +0x46c:  mov    %eax,0xc(%esp)
081da0ba +0x470:  movl   $0x0,0x8(%esp)
081da0c2 +0x478:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da0ca +0x480:  movl   $0x4821,(%esp)
081da0d1 +0x487:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da0d6 +0x48c:  jmp    081da50a <+0x8c0>
081da0db +0x491:  mov    -0x2c(%ebp),%eax
081da0de +0x494:  mov    0x2(%eax),%eax
081da0e1 +0x497:  cmp    $0x25,%eax
081da0e4 +0x49a:  jne    081da0f1 <+0x4a7>
081da0e6 +0x49c:  mov    -0x50(%ebp),%eax
081da0e9 +0x49f:  movzbl 0xd(%eax),%eax
081da0ed +0x4a3:  cmp    $0xd,%al
081da0ef +0x4a5:  je     081da139 <+0x4ef>
081da0f1 +0x4a7:  mov    -0x2c(%ebp),%eax
081da0f4 +0x4aa:  mov    0x2(%eax),%eax
081da0f7 +0x4ad:  cmp    $0x28992f,%eax
081da0fc +0x4b2:  jne    081da109 <+0x4bf>
081da0fe +0x4b4:  mov    -0x50(%ebp),%eax
081da101 +0x4b7:  movzbl 0xd(%eax),%eax
081da105 +0x4bb:  cmp    $0xf,%al
081da107 +0x4bd:  je     081da139 <+0x4ef>
081da109 +0x4bf:  mov    0xc(%ebp),%eax
081da10c +0x4c2:  mov    %eax,(%esp)
081da10f +0x4c5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da114 +0x4ca:  mov    %eax,0xc(%esp)
081da118 +0x4ce:  movl   $0x0,0x8(%esp)
081da120 +0x4d6:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da128 +0x4de:  movl   $0x4826,(%esp)
081da12f +0x4e5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da134 +0x4ea:  jmp    081da50a <+0x8c0>
081da139 +0x4ef:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081da13e +0x4f4:  movl   $0x24,0x8(%esp)
081da146 +0x4fc:  mov    0xc(%ebp),%edx
081da149 +0x4ff:  mov    %edx,0x4(%esp)
081da14d +0x503:  mov    %eax,(%esp)
081da150 +0x506:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081da155 +0x50b:  mov    %eax,-0x28(%ebp)
081da158 +0x50e:  cmpl   $0x0,-0x28(%ebp)
081da15c +0x512:  je     081da171 <+0x527>
081da15e +0x514:  mov    -0x54(%ebp),%eax
081da161 +0x517:  mov    -0x28(%ebp),%edx
081da164 +0x51a:  mov    %edx,0x4(%eax)
081da167 +0x51d:  mov    $0x0,%eax
081da16c +0x522:  jmp    081da50a <+0x8c0>
081da171 +0x527:  mov    -0x34(%ebp),%eax
081da174 +0x52a:  mov    %eax,(%esp)
081da177 +0x52d:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081da17c +0x532:  mov    -0x30(%ebp),%edx
081da17f +0x535:  mov    %edx,0x8(%esp)
081da183 +0x539:  mov    %eax,0x4(%esp)
081da187 +0x53d:  mov    0xc(%ebp),%eax
081da18a +0x540:  mov    %eax,(%esp)
081da18d +0x543:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081da192 +0x548:  test   %al,%al
081da194 +0x54a:  je     081da1aa <+0x560>
081da196 +0x54c:  mov    -0x54(%ebp),%eax
081da199 +0x54f:  movl   $0xd5,0x4(%eax)
081da1a0 +0x556:  mov    $0x0,%eax
081da1a5 +0x55b:  jmp    081da50a <+0x8c0>
081da1aa +0x560:  mov    -0x30(%ebp),%eax
081da1ad +0x563:  cwtl
081da1ae +0x564:  movl   $0xffffffff,0x10(%esp)
081da1b6 +0x56c:  movl   $0xffffffff,0xc(%esp)
081da1be +0x574:  mov    -0x34(%ebp),%edx
081da1c1 +0x577:  mov    %edx,0x8(%esp)
081da1c5 +0x57b:  mov    %eax,0x4(%esp)
081da1c9 +0x57f:  mov    0xc(%ebp),%eax
081da1cc +0x582:  mov    %eax,(%esp)
081da1cf +0x585:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081da1d4 +0x58a:  xor    $0x1,%eax
081da1d7 +0x58d:  test   %al,%al
081da1d9 +0x58f:  je     081da495 <+0x84b>
081da1df +0x595:  mov    -0x54(%ebp),%eax
081da1e2 +0x598:  movl   $0x11,0x4(%eax)
081da1e9 +0x59f:  mov    $0x0,%eax
081da1ee +0x5a4:  jmp    081da50a <+0x8c0>
081da1f3 +0x5a9:  mov    -0x50(%ebp),%eax
081da1f6 +0x5ac:  movzbl 0xd(%eax),%eax
081da1fa +0x5b0:  cmp    $0xe,%al
081da1fc +0x5b2:  jne    081da326 <+0x6dc>
081da202 +0x5b8:  mov    -0x50(%ebp),%eax
081da205 +0x5bb:  movzwl 0xe(%eax),%eax
081da209 +0x5bf:  movzwl %ax,%eax
081da20c +0x5c2:  mov    %eax,-0x24(%ebp)
081da20f +0x5c5:  mov    -0x50(%ebp),%eax
081da212 +0x5c8:  mov    0x10(%eax),%eax
081da215 +0x5cb:  mov    %eax,-0x20(%ebp)
081da218 +0x5ce:  mov    -0x24(%ebp),%eax
081da21b +0x5d1:  mov    %eax,(%esp)
081da21e +0x5d4:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081da223 +0x5d9:  mov    %eax,%ebx
081da225 +0x5db:  mov    0xc(%ebp),%eax
081da228 +0x5de:  mov    %eax,(%esp)
081da22b +0x5e1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081da230 +0x5e6:  mov    -0x20(%ebp),%edx
081da233 +0x5e9:  mov    %edx,0x8(%esp)
081da237 +0x5ed:  mov    %ebx,0x4(%esp)
081da23b +0x5f1:  mov    %eax,(%esp)
081da23e +0x5f4:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081da243 +0x5f9:  mov    %eax,-0x1c(%ebp)
081da246 +0x5fc:  cmpl   $0x0,-0x1c(%ebp)
081da24a +0x600:  je     081da259 <+0x60f>
081da24c +0x602:  mov    -0x1c(%ebp),%eax
081da24f +0x605:  mov    0x2(%eax),%eax
081da252 +0x608:  cmp    $0x460,%eax
081da257 +0x60d:  je     081da289 <+0x63f>
081da259 +0x60f:  mov    0xc(%ebp),%eax
081da25c +0x612:  mov    %eax,(%esp)
081da25f +0x615:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da264 +0x61a:  mov    %eax,0xc(%esp)
081da268 +0x61e:  movl   $0x0,0x8(%esp)
081da270 +0x626:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da278 +0x62e:  movl   $0x4847,(%esp)
081da27f +0x635:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da284 +0x63a:  jmp    081da50a <+0x8c0>
081da289 +0x63f:  mov    0xc(%ebp),%eax
081da28c +0x642:  mov    %eax,(%esp)
081da28f +0x645:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da294 +0x64a:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081da29a +0x650:  mov    %eax,0x4(%esp)
081da29e +0x654:  mov    %edx,(%esp)
081da2a1 +0x657:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081da2a6 +0x65c:  xor    $0x1,%eax
081da2a9 +0x65f:  test   %al,%al
081da2ab +0x661:  je     081da2dd <+0x693>
081da2ad +0x663:  mov    0xc(%ebp),%eax
081da2b0 +0x666:  mov    %eax,(%esp)
081da2b3 +0x669:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da2b8 +0x66e:  mov    %eax,0xc(%esp)
081da2bc +0x672:  movl   $0x0,0x8(%esp)
081da2c4 +0x67a:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da2cc +0x682:  movl   $0x484b,(%esp)
081da2d3 +0x689:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da2d8 +0x68e:  jmp    081da50a <+0x8c0>
081da2dd +0x693:  mov    -0x20(%ebp),%eax
081da2e0 +0x696:  cwtl
081da2e1 +0x697:  movl   $0xffffffff,0x10(%esp)
081da2e9 +0x69f:  movl   $0xffffffff,0xc(%esp)
081da2f1 +0x6a7:  mov    -0x24(%ebp),%edx
081da2f4 +0x6aa:  mov    %edx,0x8(%esp)
081da2f8 +0x6ae:  mov    %eax,0x4(%esp)
081da2fc +0x6b2:  mov    0xc(%ebp),%eax
081da2ff +0x6b5:  mov    %eax,(%esp)
081da302 +0x6b8:  call   0865e0ae <_ZN5CUser13use_stackableEsiii>  ; CUser::use_stackable(short, int, int, int)
081da307 +0x6bd:  xor    $0x1,%eax
081da30a +0x6c0:  test   %al,%al
081da30c +0x6c2:  je     081da496 <+0x84c>
081da312 +0x6c8:  mov    -0x54(%ebp),%eax
081da315 +0x6cb:  movl   $0x11,0x4(%eax)
081da31c +0x6d2:  mov    $0x0,%eax
081da321 +0x6d7:  jmp    081da50a <+0x8c0>
081da326 +0x6dc:  mov    -0x50(%ebp),%eax
081da329 +0x6df:  movzbl 0xd(%eax),%eax
081da32d +0x6e3:  cmp    $0x22,%al
081da32f +0x6e5:  jne    081da496 <+0x84c>
081da335 +0x6eb:  mov    -0x50(%ebp),%eax
081da338 +0x6ee:  movzwl 0xe(%eax),%eax
081da33c +0x6f2:  movzwl %ax,%eax
081da33f +0x6f5:  mov    %eax,-0x18(%ebp)
081da342 +0x6f8:  mov    -0x50(%ebp),%eax
081da345 +0x6fb:  mov    0x10(%eax),%eax
081da348 +0x6fe:  mov    %eax,-0x14(%ebp)
081da34b +0x701:  mov    0xc(%ebp),%eax
081da34e +0x704:  mov    %eax,(%esp)
081da351 +0x707:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081da356 +0x70c:  cmp    $0x3,%eax
081da359 +0x70f:  setne  %al
081da35c +0x712:  test   %al,%al
081da35e +0x714:  je     081da36a <+0x720>
081da360 +0x716:  mov    $0x0,%eax
081da365 +0x71b:  jmp    081da50a <+0x8c0>
081da36a +0x720:  mov    -0x18(%ebp),%eax
081da36d +0x723:  mov    %eax,(%esp)
081da370 +0x726:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081da375 +0x72b:  mov    %eax,%ebx
081da377 +0x72d:  mov    0xc(%ebp),%eax
081da37a +0x730:  mov    %eax,(%esp)
081da37d +0x733:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081da382 +0x738:  mov    -0x14(%ebp),%edx
081da385 +0x73b:  mov    %edx,0x8(%esp)
081da389 +0x73f:  mov    %ebx,0x4(%esp)
081da38d +0x743:  mov    %eax,(%esp)
081da390 +0x746:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081da395 +0x74b:  mov    %eax,-0x10(%ebp)
081da398 +0x74e:  cmpl   $0x0,-0x10(%ebp)
081da39c +0x752:  je     081da3ab <+0x761>
081da39e +0x754:  mov    -0x10(%ebp),%eax
081da3a1 +0x757:  mov    0x2(%eax),%eax
081da3a4 +0x75a:  cmp    $0x1d9e,%eax
081da3a9 +0x75f:  je     081da3db <+0x791>
081da3ab +0x761:  mov    0xc(%ebp),%eax
081da3ae +0x764:  mov    %eax,(%esp)
081da3b1 +0x767:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da3b6 +0x76c:  mov    %eax,0xc(%esp)
081da3ba +0x770:  movl   $0x0,0x8(%esp)
081da3c2 +0x778:  movl   $&_ZZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081da3ca +0x780:  movl   $0x485d,(%esp)
081da3d1 +0x787:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da3d6 +0x78c:  jmp    081da50a <+0x8c0>
081da3db +0x791:  mov    -0x10(%ebp),%eax
081da3de +0x794:  mov    0x2(%eax),%eax
081da3e1 +0x797:  mov    %eax,%ebx
081da3e3 +0x799:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081da3e8 +0x79e:  mov    %ebx,0x4(%esp)
081da3ec +0x7a2:  mov    %eax,(%esp)
081da3ef +0x7a5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081da3f4 +0x7aa:  mov    %eax,-0xc(%ebp)
081da3f7 +0x7ad:  cmpl   $0x0,-0xc(%ebp)
081da3fb +0x7b1:  jne    081da411 <+0x7c7>
081da3fd +0x7b3:  mov    -0x54(%ebp),%eax
081da400 +0x7b6:  movl   $0x11,0x4(%eax)
081da407 +0x7bd:  mov    $0x0,%eax
081da40c +0x7c2:  jmp    081da50a <+0x8c0>
081da411 +0x7c7:  mov    -0xc(%ebp),%eax
081da414 +0x7ca:  mov    %eax,(%esp)
081da417 +0x7cd:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081da41c +0x7d2:  xor    $0x1,%eax
081da41f +0x7d5:  test   %al,%al
081da421 +0x7d7:  je     081da437 <+0x7ed>
081da423 +0x7d9:  mov    -0x54(%ebp),%eax
081da426 +0x7dc:  movl   $0x11,0x4(%eax)
081da42d +0x7e3:  mov    $0x0,%eax
081da432 +0x7e8:  jmp    081da50a <+0x8c0>
081da437 +0x7ed:  mov    -0x18(%ebp),%eax
081da43a +0x7f0:  mov    %eax,(%esp)
081da43d +0x7f3:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081da442 +0x7f8:  mov    %eax,%ebx
081da444 +0x7fa:  mov    0xc(%ebp),%eax
081da447 +0x7fd:  mov    %eax,(%esp)
081da44a +0x800:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081da44f +0x805:  movl   $0x1,0x14(%esp)
081da457 +0x80d:  movl   $0x3,0x10(%esp)
081da45f +0x815:  movl   $0x1,0xc(%esp)
081da467 +0x81d:  mov    -0x14(%ebp),%edx
081da46a +0x820:  mov    %edx,0x8(%esp)
081da46e +0x824:  mov    %ebx,0x4(%esp)
081da472 +0x828:  mov    %eax,(%esp)
081da475 +0x82b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081da47a +0x830:  xor    $0x1,%eax
081da47d +0x833:  test   %al,%al
081da47f +0x835:  je     081da496 <+0x84c>
081da481 +0x837:  mov    -0x54(%ebp),%eax
081da484 +0x83a:  movl   $0x11,0x4(%eax)
081da48b +0x841:  mov    $0x0,%eax
081da490 +0x846:  jmp    081da50a <+0x8c0>
081da492 +0x848:  nop
081da493 +0x849:  jmp    081da496 <+0x84c>
081da495 +0x84b:  nop
081da496 +0x84c:  mov    0xc(%ebp),%eax
081da499 +0x84f:  mov    %eax,(%esp)
081da49c +0x852:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081da4a1 +0x857:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081da4a7 +0x85d:  mov    %eax,0x4(%esp)
081da4ab +0x861:  mov    %edx,(%esp)
081da4ae +0x864:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081da4b3 +0x869:  test   %al,%al
081da4b5 +0x86b:  je     081da4e2 <+0x898>
081da4b7 +0x86d:  mov    -0x50(%ebp),%eax
081da4ba +0x870:  lea    0x18(%eax),%esi
081da4bd +0x873:  mov    -0x50(%ebp),%eax
081da4c0 +0x876:  movzbl 0xd(%eax),%eax
081da4c4 +0x87a:  movsbl %al,%ebx
081da4c7 +0x87d:  mov    0xc(%ebp),%eax
081da4ca +0x880:  mov    %eax,(%esp)
081da4cd +0x883:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081da4d2 +0x888:  mov    %esi,0x8(%esp)
081da4d6 +0x88c:  mov    %ebx,0x4(%esp)
081da4da +0x890:  mov    %eax,(%esp)
081da4dd +0x893:  call   0843c6aa <_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc>  ; DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*)
081da4e2 +0x898:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081da4e7 +0x89d:  movl   $0x172,0xc(%esp)
081da4ef +0x8a5:  mov    -0x50(%ebp),%edx
081da4f2 +0x8a8:  mov    %edx,0x8(%esp)
081da4f6 +0x8ac:  mov    0xc(%ebp),%edx
081da4f9 +0x8af:  mov    %edx,0x4(%esp)
081da4fd +0x8b3:  mov    %eax,(%esp)
081da500 +0x8b6:  call   086cfa10 <_ZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>  ; GameWorld::send_chat_msg_hyper_link(CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
081da505 +0x8bb:  mov    $0x0,%eax
081da50a +0x8c0:  add    $0x2e0,%esp
081da510 +0x8c6:  pop    %ebx
081da511 +0x8c7:  pop    %esi
081da512 +0x8c8:  pop    %ebp
081da513 +0x8c9:  ret
```

## 反编译 C

```c
// Dispatcher_ItemHyperLinkMessage::process @ 0x81d9c4a

/* Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::process
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  MSG_BASE *pMVar1;
  MSG_BASE MVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  uint uVar8;
  GameWorld *pGVar9;
  Packet_Monitor_Other_Channel_Chat_Hyper_Link local_2cc [2];
  ushort local_2ca;
  undefined4 local_2c2;
  undefined4 local_2be;
  MSG_BASE local_2ba;
  undefined4 local_2b9;
  undefined4 local_2b5;
  undefined1 local_2b1;
  undefined1 auStack_2b0 [30];
  MSG_BASE local_292;
  undefined1 auStack_291 [312];
  byte local_159;
  undefined1 auStack_158 [256];
  ParamBase *local_58;
  MSG_BASE *local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_58 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_58 + 4) = uVar4;
  if (*(int *)(local_58 + 4) < 1) {
    if (*(int *)(local_58 + 4) < 0) {
      uVar4 = LineFunc(0x47aa,
                       "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_58 + 4),0);
    }
    else {
      local_54 = param_2;
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::rewriteUsableEmoticon(pCVar5,param_1,(char *)(param_2 + 0x18));
      cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
      if ((cVar3 == '\0') ||
         (((byte)local_54[0xd] < 9 && ((1 << ((byte)local_54[0xd] & 0x1f) & 0x144U) != 0)))) {
        if (local_54[0xd] == (MSG_BASE)0x26) {
          Packet_Monitor_Other_Channel_Chat_Hyper_Link::Packet_Monitor_Other_Channel_Chat_Hyper_Link
                    (local_2cc);
          local_2c2 = 1;
          local_2be = CUser::get_acc_id(param_1);
          local_2b9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          local_2ba = local_54[0x13a];
          local_2b5 = *(undefined4 *)(local_54 + 0x10);
          local_2b1 = (undefined1)*(undefined4 *)(local_54 + 0x118);
          local_159 = (byte)*(undefined4 *)(local_54 + 0x14);
          memcpy(auStack_2b0,local_54 + 0x11c,*(size_t *)(local_54 + 0x118));
          memcpy(auStack_158,local_54 + 0x18,*(size_t *)(local_54 + 0x14));
          local_292 = local_54[0x13b];
          for (local_4c = 0; local_4c < (int)(uint)(byte)local_54[0x13b]; local_4c = local_4c + 1) {
            memcpy(auStack_291 + local_4c * 0x68,local_54 + local_4c * 0x68 + 0x13c,0x68);
          }
          local_2ca = local_159 + 0x174;
          local_50 = (uint)local_2ca;
          CCommunityServerProxy::SendTcpPacket
                    (GlobalData::s_community_proxy,(char *)local_2cc,local_50);
          uVar4 = 0;
        }
        else {
          if (((local_54[0xd] == (MSG_BASE)0xb) || (local_54[0xd] == (MSG_BASE)0xc)) ||
             (local_54[0xd] == (MSG_BASE)0x23)) {
            local_48 = (uint)*(ushort *)(local_54 + 0xe);
            local_44 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_48);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_40 = CInventory::GetInvenRef(pCVar7,iVar6,local_44);
            if ((local_40 == 0) ||
               (((*(int *)(local_40 + 2) != 0x24 && (*(int *)(local_40 + 2) != 0x382)) &&
                ((*(int *)(local_40 + 2) != 0x28d150 &&
                 ((*(int *)(local_40 + 2) != 0x292090dd && (*(int *)(local_40 + 2) != 0x29209138))))
                )))) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4801,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            local_3c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x24)
            ;
            if (local_3c != 0) {
              *(int *)(local_58 + 4) = local_3c;
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_48);
            cVar3 = CUser::CheckItemLock(param_1,iVar6,local_44);
            if (cVar3 != '\0') {
              *(undefined4 *)(local_58 + 4) = 0xd5;
              return 0;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_44,local_48,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if ((local_54[0xd] == (MSG_BASE)0xd) || (local_54[0xd] == (MSG_BASE)0xf)) {
            local_38 = (uint)*(ushort *)(local_54 + 0xe);
            local_34 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_38);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_30 = CInventory::GetInvenRef(pCVar7,iVar6,local_34);
            if (local_30 == 0) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4821,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            if (((*(int *)(local_30 + 2) != 0x25) || (local_54[0xd] != (MSG_BASE)0xd)) &&
               ((*(int *)(local_30 + 2) != 0x28992f || (local_54[0xd] != (MSG_BASE)0xf)))) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4826,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x24)
            ;
            if (local_2c != 0) {
              *(int *)(local_58 + 4) = local_2c;
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_38);
            cVar3 = CUser::CheckItemLock(param_1,iVar6,local_34);
            if (cVar3 != '\0') {
              *(undefined4 *)(local_58 + 4) = 0xd5;
              return 0;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_34,local_38,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if (local_54[0xd] == (MSG_BASE)0xe) {
            local_28 = (uint)*(ushort *)(local_54 + 0xe);
            local_24 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_28);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_20 = CInventory::GetInvenRef(pCVar7,iVar6,local_24);
            if ((local_20 == 0) || (*(int *)(local_20 + 2) != 0x460)) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4847,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            uVar8 = CUser::get_acc_id(param_1);
            cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar8);
            if (cVar3 != '\x01') {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x484b,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_24,local_28,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if (local_54[0xd] == (MSG_BASE)0x22) {
            local_1c = (uint)*(ushort *)(local_54 + 0xe);
            local_18 = *(int *)(local_54 + 0x10);
            iVar6 = CUser::get_state(param_1);
            if (iVar6 != 3) {
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_1c);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_14 = CInventory::GetInvenRef(pCVar7,iVar6,local_18);
            if ((local_14 == 0) || (*(int *)(local_14 + 2) != 0x1d9e)) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x485d,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            iVar6 = *(int *)(local_14 + 2);
            pCVar5 = (CDataManager *)G_CDataManager();
            local_10 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
            if (local_10 == (CItem *)0x0) {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
            cVar3 = CItem::is_stackable(local_10);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
            uVar4 = GetInvenTypeFromItemSpace(local_1c);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar3 = CInventory::delete_item(pCVar7,uVar4,local_18,1,3,1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          uVar8 = CUser::get_acc_id(param_1);
          cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar8);
          if (cVar3 != '\0') {
            pMVar1 = local_54 + 0x18;
            MVar2 = local_54[0xd];
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            DB_InsertPoliceSaveChatting::makeRequest(uVar8,(char)MVar2,(char *)pMVar1);
          }
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_chat_msg_hyper_link(pGVar9,param_1,local_54,0x172);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
