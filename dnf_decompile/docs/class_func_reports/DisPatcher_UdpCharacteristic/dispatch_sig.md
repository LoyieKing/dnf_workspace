# dispatch_sig

`_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UdpCharacteristic` | `0x0821abe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821abe0  _ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821abe0, 0x0821afbb]
0821abe0 +0x000:  push   %ebp
0821abe1 +0x001:  mov    %esp,%ebp
0821abe3 +0x003:  push   %ebx
0821abe4 +0x004:  sub    $0x44,%esp
0821abe7 +0x007:  movw   $0x0,-0xa(%ebp)
0821abed +0x00d:  movb   $0x0,-0xb(%ebp)
0821abf1 +0x011:  lea    -0xa(%ebp),%eax
0821abf4 +0x014:  mov    %eax,0x4(%esp)
0821abf8 +0x018:  mov    0x10(%ebp),%eax
0821abfb +0x01b:  mov    %eax,(%esp)
0821abfe +0x01e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821ac03 +0x023:  xor    $0x1,%eax
0821ac06 +0x026:  test   %al,%al
0821ac08 +0x028:  je     0821ac33 <+0x53>
0821ac0a +0x02a:  movl   $0x0,0xc(%esp)
0821ac12 +0x032:  movl   $0x0,0x8(%esp)
0821ac1a +0x03a:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ac22 +0x042:  movl   $0xce12,(%esp)
0821ac29 +0x049:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ac2e +0x04e:  jmp    0821afb5 <+0x3d5>
0821ac33 +0x053:  lea    -0xb(%ebp),%eax
0821ac36 +0x056:  mov    %eax,0x4(%esp)
0821ac3a +0x05a:  mov    0x10(%ebp),%eax
0821ac3d +0x05d:  mov    %eax,(%esp)
0821ac40 +0x060:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821ac45 +0x065:  xor    $0x1,%eax
0821ac48 +0x068:  test   %al,%al
0821ac4a +0x06a:  je     0821ac75 <+0x95>
0821ac4c +0x06c:  movl   $0x0,0xc(%esp)
0821ac54 +0x074:  movl   $0x0,0x8(%esp)
0821ac5c +0x07c:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ac64 +0x084:  movl   $0xce14,(%esp)
0821ac6b +0x08b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ac70 +0x090:  jmp    0821afb5 <+0x3d5>
0821ac75 +0x095:  movzwl -0xa(%ebp),%eax
0821ac79 +0x099:  movzwl %ax,%eax
0821ac7c +0x09c:  cmp    $0x1,%eax
0821ac7f +0x09f:  je     0821ad73 <+0x193>
0821ac85 +0x0a5:  cmp    $0x2,%eax
0821ac88 +0x0a8:  je     0821aeb3 <+0x2d3>
0821ac8e +0x0ae:  test   %eax,%eax
0821ac90 +0x0b0:  jne    0821af8a <+0x3aa>
0821ac96 +0x0b6:  lea    -0x19(%ebp),%eax
0821ac99 +0x0b9:  mov    %eax,(%esp)
0821ac9c +0x0bc:  call   0822bd60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x140a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x140a
0821aca1 +0x0c1:  lea    -0x19(%ebp),%eax
0821aca4 +0x0c4:  add    $0xa,%eax
0821aca7 +0x0c7:  mov    %eax,0x4(%esp)
0821acab +0x0cb:  mov    0x10(%ebp),%eax
0821acae +0x0ce:  mov    %eax,(%esp)
0821acb1 +0x0d1:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821acb6 +0x0d6:  xor    $0x1,%eax
0821acb9 +0x0d9:  test   %al,%al
0821acbb +0x0db:  je     0821ace6 <+0x106>
0821acbd +0x0dd:  movl   $0x0,0xc(%esp)
0821acc5 +0x0e5:  movl   $0x0,0x8(%esp)
0821accd +0x0ed:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821acd5 +0x0f5:  movl   $0xce1d,(%esp)
0821acdc +0x0fc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ace1 +0x101:  jmp    0821afb5 <+0x3d5>
0821ace6 +0x106:  lea    -0x19(%ebp),%eax
0821ace9 +0x109:  add    $0xc,%eax
0821acec +0x10c:  mov    %eax,0x4(%esp)
0821acf0 +0x110:  mov    0x10(%ebp),%eax
0821acf3 +0x113:  mov    %eax,(%esp)
0821acf6 +0x116:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821acfb +0x11b:  xor    $0x1,%eax
0821acfe +0x11e:  test   %al,%al
0821ad00 +0x120:  je     0821ad2b <+0x14b>
0821ad02 +0x122:  movl   $0x0,0xc(%esp)
0821ad0a +0x12a:  movl   $0x0,0x8(%esp)
0821ad12 +0x132:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ad1a +0x13a:  movl   $0xce1e,(%esp)
0821ad21 +0x141:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ad26 +0x146:  jmp    0821afb5 <+0x3d5>
0821ad2b +0x14b:  movzwl -0xd(%ebp),%edx
0821ad2f +0x14f:  movzwl -0xf(%ebp),%eax
0821ad33 +0x153:  lea    (%edx,%eax,1),%eax
0821ad36 +0x156:  mov    %ax,-0xd(%ebp)
0821ad3a +0x15a:  lea    -0x19(%ebp),%ebx
0821ad3d +0x15d:  mov    0xc(%ebp),%eax
0821ad40 +0x160:  mov    %eax,(%esp)
0821ad43 +0x163:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821ad48 +0x168:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821ad4e +0x16e:  mov    %eax,0x4(%esp)
0821ad52 +0x172:  mov    %edx,(%esp)
0821ad55 +0x175:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821ad5a +0x17a:  movl   $0xe,0x8(%esp)
0821ad62 +0x182:  mov    %ebx,0x4(%esp)
0821ad66 +0x186:  mov    %eax,(%esp)
0821ad69 +0x189:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821ad6e +0x18e:  jmp    0821afb0 <+0x3d0>
0821ad73 +0x193:  movw   $0x0,-0x1c(%ebp)
0821ad79 +0x199:  movw   $0x0,-0x1e(%ebp)
0821ad7f +0x19f:  lea    -0x1c(%ebp),%eax
0821ad82 +0x1a2:  mov    %eax,0x4(%esp)
0821ad86 +0x1a6:  mov    0x10(%ebp),%eax
0821ad89 +0x1a9:  mov    %eax,(%esp)
0821ad8c +0x1ac:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821ad91 +0x1b1:  xor    $0x1,%eax
0821ad94 +0x1b4:  test   %al,%al
0821ad96 +0x1b6:  je     0821adc1 <+0x1e1>
0821ad98 +0x1b8:  movl   $0x0,0xc(%esp)
0821ada0 +0x1c0:  movl   $0x0,0x8(%esp)
0821ada8 +0x1c8:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821adb0 +0x1d0:  movl   $0xce30,(%esp)
0821adb7 +0x1d7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821adbc +0x1dc:  jmp    0821afb5 <+0x3d5>
0821adc1 +0x1e1:  lea    -0x1e(%ebp),%eax
0821adc4 +0x1e4:  mov    %eax,0x4(%esp)
0821adc8 +0x1e8:  mov    0x10(%ebp),%eax
0821adcb +0x1eb:  mov    %eax,(%esp)
0821adce +0x1ee:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821add3 +0x1f3:  xor    $0x1,%eax
0821add6 +0x1f6:  test   %al,%al
0821add8 +0x1f8:  je     0821ae03 <+0x223>
0821adda +0x1fa:  movl   $0x0,0xc(%esp)
0821ade2 +0x202:  movl   $0x0,0x8(%esp)
0821adea +0x20a:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821adf2 +0x212:  movl   $0xce31,(%esp)
0821adf9 +0x219:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821adfe +0x21e:  jmp    0821afb5 <+0x3d5>
0821ae03 +0x223:  movzbl -0xb(%ebp),%eax
0821ae07 +0x227:  test   %al,%al
0821ae09 +0x229:  jne    0821ae30 <+0x250>
0821ae0b +0x22b:  lea    -0x1e(%ebp),%eax
0821ae0e +0x22e:  mov    %eax,0xc(%esp)
0821ae12 +0x232:  lea    -0x1c(%ebp),%eax
0821ae15 +0x235:  mov    %eax,0x8(%esp)
0821ae19 +0x239:  mov    0xc(%ebp),%eax
0821ae1c +0x23c:  mov    %eax,0x4(%esp)
0821ae20 +0x240:  mov    0x8(%ebp),%eax
0821ae23 +0x243:  mov    %eax,(%esp)
0821ae26 +0x246:  call   0821b098 <_ZN28DisPatcher_UdpCharacteristic13partyPingStatEP5CUserRtS2_>  ; DisPatcher_UdpCharacteristic::partyPingStat(CUser*, unsigned short&, unsigned short&)
0821ae2b +0x24b:  jmp    0821afb0 <+0x3d0>
0821ae30 +0x250:  movzbl -0xb(%ebp),%eax
0821ae34 +0x254:  cmp    $0x1,%al
0821ae36 +0x256:  jne    0821ae5d <+0x27d>
0821ae38 +0x258:  lea    -0x1e(%ebp),%eax
0821ae3b +0x25b:  mov    %eax,0xc(%esp)
0821ae3f +0x25f:  lea    -0x1c(%ebp),%eax
0821ae42 +0x262:  mov    %eax,0x8(%esp)
0821ae46 +0x266:  mov    0xc(%ebp),%eax
0821ae49 +0x269:  mov    %eax,0x4(%esp)
0821ae4d +0x26d:  mov    0x8(%ebp),%eax
0821ae50 +0x270:  mov    %eax,(%esp)
0821ae53 +0x273:  call   0821afbc <_ZN28DisPatcher_UdpCharacteristic11pvpPingStatEP5CUserRtS2_>  ; DisPatcher_UdpCharacteristic::pvpPingStat(CUser*, unsigned short&, unsigned short&)
0821ae58 +0x278:  jmp    0821afb0 <+0x3d0>
0821ae5d +0x27d:  movzbl -0xb(%ebp),%eax
0821ae61 +0x281:  cmp    $0x2,%al
0821ae63 +0x283:  jne    0821ae8a <+0x2aa>
0821ae65 +0x285:  lea    -0x1e(%ebp),%eax
0821ae68 +0x288:  mov    %eax,0xc(%esp)
0821ae6c +0x28c:  lea    -0x1c(%ebp),%eax
0821ae6f +0x28f:  mov    %eax,0x8(%esp)
0821ae73 +0x293:  mov    0xc(%ebp),%eax
0821ae76 +0x296:  mov    %eax,0x4(%esp)
0821ae7a +0x29a:  mov    0x8(%ebp),%eax
0821ae7d +0x29d:  mov    %eax,(%esp)
0821ae80 +0x2a0:  call   0821b02a <_ZN28DisPatcher_UdpCharacteristic15fairPvpPingStatEP5CUserRtS2_>  ; DisPatcher_UdpCharacteristic::fairPvpPingStat(CUser*, unsigned short&, unsigned short&)
0821ae85 +0x2a5:  jmp    0821afb0 <+0x3d0>
0821ae8a +0x2aa:  movl   $0x0,0xc(%esp)
0821ae92 +0x2b2:  movl   $0x0,0x8(%esp)
0821ae9a +0x2ba:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821aea2 +0x2c2:  movl   $0xce44,(%esp)
0821aea9 +0x2c9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821aeae +0x2ce:  jmp    0821afb5 <+0x3d5>
0821aeb3 +0x2d3:  lea    -0x2c(%ebp),%eax
0821aeb6 +0x2d6:  mov    %eax,(%esp)
0821aeb9 +0x2d9:  call   0822bdcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1476>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1476
0821aebe +0x2de:  lea    -0x2c(%ebp),%eax
0821aec1 +0x2e1:  add    $0xa,%eax
0821aec4 +0x2e4:  mov    %eax,0x4(%esp)
0821aec8 +0x2e8:  mov    0x10(%ebp),%eax
0821aecb +0x2eb:  mov    %eax,(%esp)
0821aece +0x2ee:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821aed3 +0x2f3:  xor    $0x1,%eax
0821aed6 +0x2f6:  test   %al,%al
0821aed8 +0x2f8:  je     0821af03 <+0x323>
0821aeda +0x2fa:  movl   $0x0,0xc(%esp)
0821aee2 +0x302:  movl   $0x0,0x8(%esp)
0821aeea +0x30a:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821aef2 +0x312:  movl   $0xce68,(%esp)
0821aef9 +0x319:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821aefe +0x31e:  jmp    0821afb5 <+0x3d5>
0821af03 +0x323:  lea    -0x2c(%ebp),%eax
0821af06 +0x326:  add    $0xc,%eax
0821af09 +0x329:  mov    %eax,0x4(%esp)
0821af0d +0x32d:  mov    0x10(%ebp),%eax
0821af10 +0x330:  mov    %eax,(%esp)
0821af13 +0x333:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821af18 +0x338:  xor    $0x1,%eax
0821af1b +0x33b:  test   %al,%al
0821af1d +0x33d:  je     0821af45 <+0x365>
0821af1f +0x33f:  movl   $0x0,0xc(%esp)
0821af27 +0x347:  movl   $0x0,0x8(%esp)
0821af2f +0x34f:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821af37 +0x357:  movl   $0xce69,(%esp)
0821af3e +0x35e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821af43 +0x363:  jmp    0821afb5 <+0x3d5>
0821af45 +0x365:  movzwl -0x20(%ebp),%edx
0821af49 +0x369:  movzwl -0x22(%ebp),%eax
0821af4d +0x36d:  lea    (%edx,%eax,1),%eax
0821af50 +0x370:  mov    %ax,-0x20(%ebp)
0821af54 +0x374:  lea    -0x2c(%ebp),%ebx
0821af57 +0x377:  mov    0xc(%ebp),%eax
0821af5a +0x37a:  mov    %eax,(%esp)
0821af5d +0x37d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821af62 +0x382:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821af68 +0x388:  mov    %eax,0x4(%esp)
0821af6c +0x38c:  mov    %edx,(%esp)
0821af6f +0x38f:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821af74 +0x394:  movl   $0xe,0x8(%esp)
0821af7c +0x39c:  mov    %ebx,0x4(%esp)
0821af80 +0x3a0:  mov    %eax,(%esp)
0821af83 +0x3a3:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821af88 +0x3a8:  jmp    0821afb0 <+0x3d0>
0821af8a +0x3aa:  movl   $0x0,0xc(%esp)
0821af92 +0x3b2:  movl   $0x0,0x8(%esp)
0821af9a +0x3ba:  movl   $&_ZZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821afa2 +0x3c2:  movl   $0xce76,(%esp)
0821afa9 +0x3c9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821afae +0x3ce:  jmp    0821afb5 <+0x3d5>
0821afb0 +0x3d0:  mov    $0x0,%eax
0821afb5 +0x3d5:  add    $0x44,%esp
0821afb8 +0x3d8:  pop    %ebx
0821afb9 +0x3d9:  pop    %ebp
0821afba +0x3da:  ret
0821afbb +0x3db:  nop
```

## 反编译 C

```c
// DisPatcher_UdpCharacteristic::dispatch_sig @ 0x821abe0

/* DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::dispatch_sig
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *pCVar3;
  Packet_Abnormal_Exit_Statistic local_30 [10];
  ushort local_26;
  ushort local_24 [3];
  Packet_Party_Result_Statistic local_1d [10];
  ushort local_13;
  ushort local_11;
  uchar local_f;
  ushort local_e [3];
  
  local_e[0] = 0;
  local_f = '\0';
  cVar1 = PacketBuf::get_short(param_2,local_e);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_2,&local_f);
    if (cVar1 == '\x01') {
      if (local_e[0] == 1) {
        local_24[2] = 0;
        local_24[1] = 0;
        cVar1 = PacketBuf::get_short(param_2,local_24 + 2);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce30,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,local_24 + 1);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce31,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        if (local_f == '\0') {
          partyPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
        else if (local_f == '\x01') {
          pvpPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
        else {
          if (local_f != '\x02') {
            uVar2 = LineFunc(0xce44,
                             "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
          fairPvpPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
      }
      else if (local_e[0] == 2) {
        Packet_Abnormal_Exit_Statistic::Packet_Abnormal_Exit_Statistic(local_30);
        cVar1 = PacketBuf::get_short(param_2,&local_26);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce68,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce69,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        local_24[0] = local_24[0] + local_26;
        uVar2 = CUser::GetServerGroup(param_1);
        pCVar3 = (CStatisticServerProxy *)
                 CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                           (GlobalData::s_statistic_proxy_mgr,uVar2);
        CStatisticServerProxy::SendPacket(pCVar3,(char *)local_30,0xe);
      }
      else {
        if (local_e[0] != 0) {
          uVar2 = LineFunc(0xce76,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        Packet_Party_Result_Statistic::Packet_Party_Result_Statistic(local_1d);
        cVar1 = PacketBuf::get_short(param_2,&local_13);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce1d,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,&local_11);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce1e,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        local_11 = local_11 + local_13;
        uVar2 = CUser::GetServerGroup(param_1);
        pCVar3 = (CStatisticServerProxy *)
                 CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                           (GlobalData::s_statistic_proxy_mgr,uVar2);
        CStatisticServerProxy::SendPacket(pCVar3,(char *)local_1d,0xe);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xce14,
                       "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xce12,
                     "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar2;
}
```
