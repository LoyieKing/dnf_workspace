# dispatch_sig

`_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreatureScriptMessage` | `0x08204d8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08204d8e  _ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)
# range [0x08204d8e, 0x082051cf]
08204d8e +0x000:  push   %ebp
08204d8f +0x001:  mov    %esp,%ebp
08204d91 +0x003:  push   %edi
08204d92 +0x004:  push   %esi
08204d93 +0x005:  push   %ebx
08204d94 +0x006:  sub    $0x2cc,%esp
08204d9a +0x00c:  mov    0xc(%ebp),%eax
08204d9d +0x00f:  mov    %eax,(%esp)
08204da0 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08204da5 +0x017:  cmp    $0x2,%eax
08204da8 +0x01a:  setle  %al
08204dab +0x01d:  test   %al,%al
08204dad +0x01f:  je     08204db9 <+0x2b>
08204daf +0x021:  mov    $0x0,%eax
08204db4 +0x026:  jmp    082051c5 <+0x437>
08204db9 +0x02b:  mov    0xc(%ebp),%eax
08204dbc +0x02e:  mov    %eax,(%esp)
08204dbf +0x031:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08204dc4 +0x036:  test   %al,%al
08204dc6 +0x038:  sete   %al
08204dc9 +0x03b:  test   %al,%al
08204dcb +0x03d:  je     08204dd7 <+0x49>
08204dcd +0x03f:  mov    $0x0,%eax
08204dd2 +0x044:  jmp    082051c5 <+0x437>
08204dd7 +0x049:  mov    0xc(%ebp),%eax
08204dda +0x04c:  mov    %eax,(%esp)
08204ddd +0x04f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08204de2 +0x054:  test   %eax,%eax
08204de4 +0x056:  sete   %al
08204de7 +0x059:  test   %al,%al
08204de9 +0x05b:  je     08204df5 <+0x67>
08204deb +0x05d:  mov    $0x0,%eax
08204df0 +0x062:  jmp    082051c5 <+0x437>
08204df5 +0x067:  mov    0xc(%ebp),%eax
08204df8 +0x06a:  mov    %eax,(%esp)
08204dfb +0x06d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08204e00 +0x072:  mov    %eax,(%esp)
08204e03 +0x075:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
08204e08 +0x07a:  mov    %eax,(%esp)
08204e0b +0x07d:  call   0822d3a8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a52>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a52
08204e10 +0x082:  xor    $0x1,%eax
08204e13 +0x085:  test   %al,%al
08204e15 +0x087:  je     08204e21 <+0x93>
08204e17 +0x089:  mov    $0x0,%eax
08204e1c +0x08e:  jmp    082051c5 <+0x437>
08204e21 +0x093:  lea    -0x157(%ebp),%eax
08204e27 +0x099:  add    $0xd,%eax
08204e2a +0x09c:  mov    %eax,0x4(%esp)
08204e2e +0x0a0:  mov    0x10(%ebp),%eax
08204e31 +0x0a3:  mov    %eax,(%esp)
08204e34 +0x0a6:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08204e39 +0x0ab:  xor    $0x1,%eax
08204e3c +0x0ae:  test   %al,%al
08204e3e +0x0b0:  je     08204e69 <+0xdb>
08204e40 +0x0b2:  movl   $0x0,0xc(%esp)
08204e48 +0x0ba:  movl   $0x0,0x8(%esp)
08204e50 +0x0c2:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204e58 +0x0ca:  movl   $0x9cf3,(%esp)
08204e5f +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204e64 +0x0d6:  jmp    082051c5 <+0x437>
08204e69 +0x0db:  lea    -0x157(%ebp),%eax
08204e6f +0x0e1:  add    $0xe,%eax
08204e72 +0x0e4:  mov    %eax,0x4(%esp)
08204e76 +0x0e8:  mov    0x10(%ebp),%eax
08204e79 +0x0eb:  mov    %eax,(%esp)
08204e7c +0x0ee:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08204e81 +0x0f3:  xor    $0x1,%eax
08204e84 +0x0f6:  test   %al,%al
08204e86 +0x0f8:  je     08204eb1 <+0x123>
08204e88 +0x0fa:  movl   $0x0,0xc(%esp)
08204e90 +0x102:  movl   $0x0,0x8(%esp)
08204e98 +0x10a:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204ea0 +0x112:  movl   $0x9cf4,(%esp)
08204ea7 +0x119:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204eac +0x11e:  jmp    082051c5 <+0x437>
08204eb1 +0x123:  lea    -0x157(%ebp),%eax
08204eb7 +0x129:  add    $0x10,%eax
08204eba +0x12c:  mov    %eax,0x4(%esp)
08204ebe +0x130:  mov    0x10(%ebp),%eax
08204ec1 +0x133:  mov    %eax,(%esp)
08204ec4 +0x136:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08204ec9 +0x13b:  xor    $0x1,%eax
08204ecc +0x13e:  test   %al,%al
08204ece +0x140:  je     08204ef9 <+0x16b>
08204ed0 +0x142:  movl   $0x0,0xc(%esp)
08204ed8 +0x14a:  movl   $0x0,0x8(%esp)
08204ee0 +0x152:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204ee8 +0x15a:  movl   $0x9cf5,(%esp)
08204eef +0x161:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204ef4 +0x166:  jmp    082051c5 <+0x437>
08204ef9 +0x16b:  lea    -0x157(%ebp),%eax
08204eff +0x171:  add    $0x36,%eax
08204f02 +0x174:  mov    %eax,0x4(%esp)
08204f06 +0x178:  mov    0x10(%ebp),%eax
08204f09 +0x17b:  mov    %eax,(%esp)
08204f0c +0x17e:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08204f11 +0x183:  xor    $0x1,%eax
08204f14 +0x186:  test   %al,%al
08204f16 +0x188:  je     08204f41 <+0x1b3>
08204f18 +0x18a:  movl   $0x0,0xc(%esp)
08204f20 +0x192:  movl   $0x0,0x8(%esp)
08204f28 +0x19a:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204f30 +0x1a2:  movl   $0x9cf6,(%esp)
08204f37 +0x1a9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204f3c +0x1ae:  jmp    082051c5 <+0x437>
08204f41 +0x1b3:  mov    -0x121(%ebp),%eax
08204f47 +0x1b9:  mov    %eax,0xc(%esp)
08204f4b +0x1bd:  movl   $0x100,0x8(%esp)
08204f53 +0x1c5:  lea    -0x157(%ebp),%eax
08204f59 +0x1cb:  add    $0x3a,%eax
08204f5c +0x1ce:  mov    %eax,0x4(%esp)
08204f60 +0x1d2:  mov    0x10(%ebp),%eax
08204f63 +0x1d5:  mov    %eax,(%esp)
08204f66 +0x1d8:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08204f6b +0x1dd:  xor    $0x1,%eax
08204f6e +0x1e0:  test   %al,%al
08204f70 +0x1e2:  je     08204f9b <+0x20d>
08204f72 +0x1e4:  movl   $0x0,0xc(%esp)
08204f7a +0x1ec:  movl   $0x0,0x8(%esp)
08204f82 +0x1f4:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204f8a +0x1fc:  movl   $0x9cf7,(%esp)
08204f91 +0x203:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204f96 +0x208:  jmp    082051c5 <+0x437>
08204f9b +0x20d:  movzbl -0x14a(%ebp),%eax
08204fa2 +0x214:  cmp    $0x7,%al
08204fa4 +0x216:  je     08204fb5 <+0x227>
08204fa6 +0x218:  movzbl -0x14a(%ebp),%eax
08204fad +0x21f:  cmp    $0x1,%al
08204faf +0x221:  jne    0820514b <+0x3bd>
08204fb5 +0x227:  lea    -0x157(%ebp),%eax
08204fbb +0x22d:  add    $0x14,%eax
08204fbe +0x230:  mov    %eax,0x4(%esp)
08204fc2 +0x234:  mov    0x10(%ebp),%eax
08204fc5 +0x237:  mov    %eax,(%esp)
08204fc8 +0x23a:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08204fcd +0x23f:  xor    $0x1,%eax
08204fd0 +0x242:  test   %al,%al
08204fd2 +0x244:  je     08204ffd <+0x26f>
08204fd4 +0x246:  movl   $0x0,0xc(%esp)
08204fdc +0x24e:  movl   $0x0,0x8(%esp)
08204fe4 +0x256:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204fec +0x25e:  movl   $0x9cfb,(%esp)
08204ff3 +0x265:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204ff8 +0x26a:  jmp    082051c5 <+0x437>
08204ffd +0x26f:  mov    -0x143(%ebp),%eax
08205003 +0x275:  mov    %eax,0xc(%esp)
08205007 +0x279:  movl   $0x1e,0x8(%esp)
0820500f +0x281:  lea    -0x157(%ebp),%eax
08205015 +0x287:  add    $0x18,%eax
08205018 +0x28a:  mov    %eax,0x4(%esp)
0820501c +0x28e:  mov    0x10(%ebp),%eax
0820501f +0x291:  mov    %eax,(%esp)
08205022 +0x294:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08205027 +0x299:  xor    $0x1,%eax
0820502a +0x29c:  test   %al,%al
0820502c +0x29e:  je     08205057 <+0x2c9>
0820502e +0x2a0:  movl   $0x0,0xc(%esp)
08205036 +0x2a8:  movl   $0x0,0x8(%esp)
0820503e +0x2b0:  movl   $&_ZZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205046 +0x2b8:  movl   $0x9cfc,(%esp)
0820504d +0x2bf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205052 +0x2c4:  jmp    082051c5 <+0x437>
08205057 +0x2c9:  movzbl -0x14a(%ebp),%eax
0820505e +0x2d0:  cmp    $0x7,%al
08205060 +0x2d2:  jne    0820514b <+0x3bd>
08205066 +0x2d8:  lea    -0x292(%ebp),%eax
0820506c +0x2de:  mov    %eax,(%esp)
0820506f +0x2e1:  call   0822b8e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf90
08205074 +0x2e6:  mov    0xc(%ebp),%eax
08205077 +0x2e9:  mov    %eax,(%esp)
0820507a +0x2ec:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0820507f +0x2f1:  mov    %eax,-0x27f(%ebp)
08205085 +0x2f7:  mov    -0x143(%ebp),%eax
0820508b +0x2fd:  mov    %al,-0x277(%ebp)
08205091 +0x303:  mov    -0x143(%ebp),%eax
08205097 +0x309:  mov    %eax,0x8(%esp)
0820509b +0x30d:  lea    -0x157(%ebp),%eax
082050a1 +0x313:  add    $0x18,%eax
082050a4 +0x316:  mov    %eax,0x4(%esp)
082050a8 +0x31a:  lea    -0x292(%ebp),%eax
082050ae +0x320:  add    $0x1c,%eax
082050b1 +0x323:  mov    %eax,(%esp)
082050b4 +0x326:  call   0807d8a0 <_init+0x198>
082050b9 +0x32b:  mov    -0x121(%ebp),%eax
082050bf +0x331:  mov    %al,-0x258(%ebp)
082050c5 +0x337:  mov    -0x121(%ebp),%eax
082050cb +0x33d:  mov    %eax,0x8(%esp)
082050cf +0x341:  lea    -0x157(%ebp),%eax
082050d5 +0x347:  add    $0x3a,%eax
082050d8 +0x34a:  mov    %eax,0x4(%esp)
082050dc +0x34e:  lea    -0x292(%ebp),%eax
082050e2 +0x354:  add    $0x3b,%eax
082050e5 +0x357:  mov    %eax,(%esp)
082050e8 +0x35a:  call   0807d8a0 <_init+0x198>
082050ed +0x35f:  movzbl -0x258(%ebp),%eax
082050f4 +0x366:  movzbl %al,%eax
082050f7 +0x369:  add    $0x3b,%eax
082050fa +0x36c:  mov    %ax,-0x290(%ebp)
08205101 +0x373:  movzwl -0x290(%ebp),%eax
08205108 +0x37a:  movzwl %ax,%eax
0820510b +0x37d:  mov    %eax,-0x1c(%ebp)
0820510e +0x380:  lea    -0x292(%ebp),%ebx
08205114 +0x386:  mov    0xc(%ebp),%eax
08205117 +0x389:  mov    %eax,(%esp)
0820511a +0x38c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0820511f +0x391:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08205125 +0x397:  mov    %eax,0x4(%esp)
08205129 +0x39b:  mov    %edx,(%esp)
0820512c +0x39e:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08205131 +0x3a3:  mov    -0x1c(%ebp),%edx
08205134 +0x3a6:  mov    %edx,0x8(%esp)
08205138 +0x3aa:  mov    %ebx,0x4(%esp)
0820513c +0x3ae:  mov    %eax,(%esp)
0820513f +0x3b1:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08205144 +0x3b6:  mov    $0x0,%eax
08205149 +0x3bb:  jmp    082051c5 <+0x437>
0820514b +0x3bd:  mov    -0x121(%ebp),%eax
08205151 +0x3c3:  mov    %eax,-0x29c(%ebp)
08205157 +0x3c9:  mov    -0x147(%ebp),%edi
0820515d +0x3cf:  movzwl -0x149(%ebp),%eax
08205164 +0x3d6:  movzwl %ax,%esi
08205167 +0x3d9:  movzbl -0x14a(%ebp),%eax
0820516e +0x3e0:  movsbl %al,%ebx
08205171 +0x3e3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08205176 +0x3e8:  movl   $0x77,0x24(%esp)
0820517e +0x3f0:  movl   $0x0,0x20(%esp)
08205186 +0x3f8:  movl   $0x0,0x1c(%esp)
0820518e +0x400:  mov    -0x29c(%ebp),%edx
08205194 +0x406:  mov    %edx,0x18(%esp)
08205198 +0x40a:  lea    -0x157(%ebp),%edx
0820519e +0x410:  add    $0x3a,%edx
082051a1 +0x413:  mov    %edx,0x14(%esp)
082051a5 +0x417:  mov    %edi,0x10(%esp)
082051a9 +0x41b:  mov    %esi,0xc(%esp)
082051ad +0x41f:  mov    %ebx,0x8(%esp)
082051b1 +0x423:  mov    0xc(%ebp),%edx
082051b4 +0x426:  mov    %edx,0x4(%esp)
082051b8 +0x42a:  mov    %eax,(%esp)
082051bb +0x42d:  call   086c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>  ; GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)
082051c0 +0x432:  mov    $0x0,%eax
082051c5 +0x437:  add    $0x2cc,%esp
082051cb +0x43d:  pop    %ebx
082051cc +0x43e:  pop    %esi
082051cd +0x43f:  pop    %edi
082051ce +0x440:  pop    %ebp
082051cf +0x441:  ret
```

## 反编译 C

```c
// Dispatcher_CreatureScriptMessage::dispatch_sig @ 0x8204d8e

/* Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatureScriptMessage::dispatch_sig
          (Dispatcher_CreatureScriptMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this_00;
  CCreatureMgr *this_01;
  CMonitorServerProxy *this_02;
  GameWorld *pGVar4;
  Packet_Monitor_Other_Channel_Chat local_296 [2];
  ushort local_294;
  undefined4 local_283;
  undefined1 local_27b;
  undefined1 auStack_27a [30];
  byte local_25c;
  undefined1 auStack_25b [269];
  char local_14e;
  ushort local_14d;
  uint local_14b;
  size_t local_147;
  char acStack_143 [30];
  size_t local_125;
  char acStack_121 [257];
  uint local_20;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
        cVar1 = user_creature::CCreatureMgr::IsEquippedCreature(this_01);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_2,&local_14e);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_14d);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,&local_14b);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_2,(int *)&local_125);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_str(param_2,acStack_121,0x100,local_125);
                  if (cVar1 == '\x01') {
                    if ((local_14e == '\a') || (local_14e == '\x01')) {
                      cVar1 = PacketBuf::get_int(param_2,(int *)&local_147);
                      if (cVar1 != '\x01') {
                        uVar3 = LineFunc(0x9cfb,
                                         "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar3;
                      }
                      cVar1 = PacketBuf::get_str(param_2,acStack_143,0x1e,local_147);
                      if (cVar1 != '\x01') {
                        uVar3 = LineFunc(0x9cfc,
                                         "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar3;
                      }
                      if (local_14e == '\a') {
                        Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                  (local_296);
                        local_283 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        local_27b = (undefined1)local_147;
                        memcpy(auStack_27a,acStack_143,local_147);
                        local_25c = (byte)local_125;
                        memcpy(auStack_25b,acStack_121,local_125);
                        local_294 = local_25c + 0x3b;
                        local_20 = (uint)local_294;
                        uVar3 = CUser::GetServerGroup(param_1);
                        this_02 = (CMonitorServerProxy *)
                                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                            (GlobalData::s_monitor_proxy_mgr,uVar3);
                        CMonitorServerProxy::SendPacket(this_02,(char *)local_296,local_20);
                        return 0;
                      }
                    }
                    pGVar4 = (GameWorld *)G_GameWorld();
                    GameWorld::send_chat_msg
                              (pGVar4,param_1,(int)local_14e,local_14d,local_14b,acStack_121,
                               local_125,0,0,0x77);
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = LineFunc(0x9cf7,
                                     "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x9cf6,
                                   "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x9cf5,
                                 "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9cf4,
                               "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9cf3,
                             "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}
```
