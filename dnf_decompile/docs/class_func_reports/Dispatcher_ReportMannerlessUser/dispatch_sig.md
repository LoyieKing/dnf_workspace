# dispatch_sig

`_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ReportMannerlessUser` | `0x08206124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08206124  _ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)
# range [0x08206124, 0x082064d5]
08206124 +0x000:  push   %ebp
08206125 +0x001:  mov    %esp,%ebp
08206127 +0x003:  push   %ebx
08206128 +0x004:  sub    $0x1d4,%esp
0820612e +0x00a:  mov    0xc(%ebp),%eax
08206131 +0x00d:  mov    %eax,(%esp)
08206134 +0x010:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08206139 +0x015:  cmp    $0x2,%eax
0820613c +0x018:  jle    0820614d <+0x29>
0820613e +0x01a:  mov    0xc(%ebp),%eax
08206141 +0x01d:  mov    %eax,(%esp)
08206144 +0x020:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08206149 +0x025:  test   %eax,%eax
0820614b +0x027:  jne    08206154 <+0x30>
0820614d +0x029:  mov    $0x1,%eax
08206152 +0x02e:  jmp    08206159 <+0x35>
08206154 +0x030:  mov    $0x0,%eax
08206159 +0x035:  test   %al,%al
0820615b +0x037:  je     08206186 <+0x62>
0820615d +0x039:  movl   $0x0,0xc(%esp)
08206165 +0x041:  movl   $0x0,0x8(%esp)
0820616d +0x049:  movl   $&_ZZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206175 +0x051:  movl   $0x9f84,(%esp)
0820617c +0x058:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206181 +0x05d:  jmp    082064d0 <+0x3ac>
08206186 +0x062:  lea    -0x1bf(%ebp),%eax
0820618c +0x068:  mov    %eax,(%esp)
0820618f +0x06b:  call   0822c1e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1890>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1890
08206194 +0x070:  mov    0xc(%ebp),%eax
08206197 +0x073:  mov    %eax,(%esp)
0820619a +0x076:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0820619f +0x07b:  mov    %eax,-0x1b1(%ebp)
082061a5 +0x081:  mov    0xc(%ebp),%eax
082061a8 +0x084:  mov    %eax,(%esp)
082061ab +0x087:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082061b0 +0x08c:  mov    %eax,-0x1b5(%ebp)
082061b6 +0x092:  movl   $0x4,-0x50(%ebp)
082061bd +0x099:  lea    -0x50(%ebp),%eax
082061c0 +0x09c:  mov    %eax,0x4(%esp)
082061c4 +0x0a0:  mov    0x10(%ebp),%eax
082061c7 +0x0a3:  mov    %eax,(%esp)
082061ca +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082061cf +0x0ab:  xor    $0x1,%eax
082061d2 +0x0ae:  test   %al,%al
082061d4 +0x0b0:  jne    082061de <+0xba>
082061d6 +0x0b2:  mov    -0x50(%ebp),%eax
082061d9 +0x0b5:  cmp    $0x3,%eax
082061dc +0x0b8:  jle    082061e5 <+0xc1>
082061de +0x0ba:  mov    $0x1,%eax
082061e3 +0x0bf:  jmp    082061ea <+0xc6>
082061e5 +0x0c1:  mov    $0x0,%eax
082061ea +0x0c6:  test   %al,%al
082061ec +0x0c8:  je     08206217 <+0xf3>
082061ee +0x0ca:  movl   $0x0,0xc(%esp)
082061f6 +0x0d2:  movl   $0x0,0x8(%esp)
082061fe +0x0da:  movl   $&_ZZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206206 +0x0e2:  movl   $0x9f8e,(%esp)
0820620d +0x0e9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206212 +0x0ee:  jmp    082064d0 <+0x3ac>
08206217 +0x0f3:  mov    -0x50(%ebp),%eax
0820621a +0x0f6:  mov    %eax,-0x1ad(%ebp)
08206220 +0x0fc:  mov    0xc(%ebp),%eax
08206223 +0x0ff:  mov    %eax,(%esp)
08206226 +0x102:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820622b +0x107:  mov    %eax,-0x1a1(%ebp)
08206231 +0x10d:  mov    0xc(%ebp),%eax
08206234 +0x110:  mov    %eax,(%esp)
08206237 +0x113:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0820623c +0x118:  mov    %eax,(%esp)
0820623f +0x11b:  call   0807e3b0 <_init+0xca8>
08206244 +0x120:  mov    %eax,-0x54(%ebp)
08206247 +0x123:  movl   $0x1d,-0x4c(%ebp)
0820624e +0x12a:  lea    -0x4c(%ebp),%eax
08206251 +0x12d:  mov    %eax,0x4(%esp)
08206255 +0x131:  lea    -0x54(%ebp),%eax
08206258 +0x134:  mov    %eax,(%esp)
0820625b +0x137:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
08206260 +0x13c:  mov    (%eax),%ebx
08206262 +0x13e:  mov    0xc(%ebp),%eax
08206265 +0x141:  mov    %eax,(%esp)
08206268 +0x144:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0820626d +0x149:  mov    %ebx,0x8(%esp)
08206271 +0x14d:  mov    %eax,0x4(%esp)
08206275 +0x151:  lea    -0x1bf(%ebp),%eax
0820627b +0x157:  add    $0x22,%eax
0820627e +0x15a:  mov    %eax,(%esp)
08206281 +0x15d:  call   0807d8d0 <_init+0x1c8>
08206286 +0x162:  movb   $0x0,-0x55(%ebp)
0820628a +0x166:  lea    -0x55(%ebp),%eax
0820628d +0x169:  mov    %eax,0x4(%esp)
08206291 +0x16d:  mov    0x10(%ebp),%eax
08206294 +0x170:  mov    %eax,(%esp)
08206297 +0x173:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0820629c +0x178:  movzbl -0x55(%ebp),%eax
082062a0 +0x17c:  movzbl %al,%eax
082062a3 +0x17f:  mov    %eax,-0x1a5(%ebp)
082062a9 +0x185:  mov    -0x1a5(%ebp),%eax
082062af +0x18b:  cmp    $0x64,%eax
082062b2 +0x18e:  jle    082062dd <+0x1b9>
082062b4 +0x190:  movl   $0x0,0xc(%esp)
082062bc +0x198:  movl   $0x0,0x8(%esp)
082062c4 +0x1a0:  movl   $&_ZZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082062cc +0x1a8:  movl   $0x9fa0,(%esp)
082062d3 +0x1af:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082062d8 +0x1b4:  jmp    082064d0 <+0x3ac>
082062dd +0x1b9:  mov    -0x1a5(%ebp),%eax
082062e3 +0x1bf:  test   %eax,%eax
082062e5 +0x1c1:  jne    08206308 <+0x1e4>
082062e7 +0x1c3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082062ec +0x1c8:  mov    %eax,(%esp)
082062ef +0x1cb:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
082062f4 +0x1d0:  mov    %eax,-0x1a5(%ebp)
082062fa +0x1d6:  mov    -0x1a5(%ebp),%eax
08206300 +0x1dc:  mov    %eax,-0x1a9(%ebp)
08206306 +0x1e2:  jmp    08206319 <+0x1f5>
08206308 +0x1e4:  mov    0xc(%ebp),%eax
0820630b +0x1e7:  mov    %eax,(%esp)
0820630e +0x1ea:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08206313 +0x1ef:  mov    %eax,-0x1a9(%ebp)
08206319 +0x1f5:  movl   $0x0,-0x5c(%ebp)
08206320 +0x1fc:  lea    -0x5c(%ebp),%eax
08206323 +0x1ff:  mov    %eax,0x4(%esp)
08206327 +0x203:  mov    0x10(%ebp),%eax
0820632a +0x206:  mov    %eax,(%esp)
0820632d +0x209:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08206332 +0x20e:  xor    $0x1,%eax
08206335 +0x211:  test   %al,%al
08206337 +0x213:  je     08206343 <+0x21f>
08206339 +0x215:  mov    $0x0,%eax
0820633e +0x21a:  jmp    082064d0 <+0x3ac>
08206343 +0x21f:  mov    -0x5c(%ebp),%eax
08206346 +0x222:  mov    %eax,0xc(%esp)
0820634a +0x226:  movl   $0x1e,0x8(%esp)
08206352 +0x22e:  lea    -0x1bf(%ebp),%eax
08206358 +0x234:  add    $0x40,%eax
0820635b +0x237:  mov    %eax,0x4(%esp)
0820635f +0x23b:  mov    0x10(%ebp),%eax
08206362 +0x23e:  mov    %eax,(%esp)
08206365 +0x241:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0820636a +0x246:  xor    $0x1,%eax
0820636d +0x249:  test   %al,%al
0820636f +0x24b:  je     0820637b <+0x257>
08206371 +0x24d:  mov    $0x0,%eax
08206376 +0x252:  jmp    082064d0 <+0x3ac>
0820637b +0x257:  mov    -0x1ad(%ebp),%eax
08206381 +0x25d:  mov    %eax,(%esp)
08206384 +0x260:  call   0822c1ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1874>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1874
08206389 +0x265:  test   %al,%al
0820638b +0x267:  je     082063ef <+0x2cb>
0820638d +0x269:  movl   $0x0,-0x60(%ebp)
08206394 +0x270:  lea    -0x60(%ebp),%eax
08206397 +0x273:  mov    %eax,0x4(%esp)
0820639b +0x277:  mov    0x10(%ebp),%eax
0820639e +0x27a:  mov    %eax,(%esp)
082063a1 +0x27d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082063a6 +0x282:  xor    $0x1,%eax
082063a9 +0x285:  test   %al,%al
082063ab +0x287:  je     082063b7 <+0x293>
082063ad +0x289:  mov    $0x0,%eax
082063b2 +0x28e:  jmp    082064d0 <+0x3ac>
082063b7 +0x293:  mov    -0x60(%ebp),%eax
082063ba +0x296:  mov    %eax,0xc(%esp)
082063be +0x29a:  movl   $0x100,0x8(%esp)
082063c6 +0x2a2:  lea    -0x1bf(%ebp),%eax
082063cc +0x2a8:  add    $0x5e,%eax
082063cf +0x2ab:  mov    %eax,0x4(%esp)
082063d3 +0x2af:  mov    0x10(%ebp),%eax
082063d6 +0x2b2:  mov    %eax,(%esp)
082063d9 +0x2b5:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
082063de +0x2ba:  xor    $0x1,%eax
082063e1 +0x2bd:  test   %al,%al
082063e3 +0x2bf:  je     082063ef <+0x2cb>
082063e5 +0x2c1:  mov    $0x0,%eax
082063ea +0x2c6:  jmp    082064d0 <+0x3ac>
082063ef +0x2cb:  mov    0xc(%ebp),%eax
082063f2 +0x2ce:  mov    %eax,(%esp)
082063f5 +0x2d1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082063fa +0x2d6:  lea    -0x45(%ebp),%edx
082063fd +0x2d9:  movl   $0xb,0xc(%esp)
08206405 +0x2e1:  movl   $0x0,0x8(%esp)
0820640d +0x2e9:  mov    %eax,0x4(%esp)
08206411 +0x2ed:  mov    %edx,(%esp)
08206414 +0x2f0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08206419 +0x2f5:  sub    $0x4,%esp
0820641c +0x2f8:  mov    -0x43(%ebp),%eax
0820641f +0x2fb:  cmp    $0x677e,%eax
08206424 +0x300:  sete   %al
08206427 +0x303:  test   %al,%al
08206429 +0x305:  je     0820642f <+0x30b>
0820642b +0x307:  movb   $0x70,-0x61(%ebp)
0820642f +0x30b:  mov    -0x1a9(%ebp),%edx
08206435 +0x311:  mov    -0x1a5(%ebp),%eax
0820643b +0x317:  cmp    %eax,%edx
0820643d +0x319:  jne    08206494 <+0x370>
0820643f +0x31b:  mov    -0x5c(%ebp),%edx
08206442 +0x31e:  mov    -0x54(%ebp),%eax
08206445 +0x321:  cmp    %eax,%edx
08206447 +0x323:  jne    08206494 <+0x370>
08206449 +0x325:  mov    -0x5c(%ebp),%eax
0820644c +0x328:  mov    %eax,0x8(%esp)
08206450 +0x32c:  lea    -0x1bf(%ebp),%eax
08206456 +0x332:  add    $0x40,%eax
08206459 +0x335:  mov    %eax,0x4(%esp)
0820645d +0x339:  lea    -0x1bf(%ebp),%eax
08206463 +0x33f:  add    $0x22,%eax
08206466 +0x342:  mov    %eax,(%esp)
08206469 +0x345:  call   0807e8c0 <_init+0x11b8>
0820646e +0x34a:  test   %eax,%eax
08206470 +0x34c:  jne    08206494 <+0x370>
08206472 +0x34e:  movl   $0x3,0x8(%esp)
0820647a +0x356:  movl   $0x8c,0x4(%esp)
08206482 +0x35e:  mov    0xc(%ebp),%eax
08206485 +0x361:  mov    %eax,(%esp)
08206488 +0x364:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820648d +0x369:  mov    $0x0,%eax
08206492 +0x36e:  jmp    082064d0 <+0x3ac>
08206494 +0x370:  lea    -0x1bf(%ebp),%ebx
0820649a +0x376:  mov    0xc(%ebp),%eax
0820649d +0x379:  mov    %eax,(%esp)
082064a0 +0x37c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082064a5 +0x381:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
082064ab +0x387:  mov    %eax,0x4(%esp)
082064af +0x38b:  mov    %edx,(%esp)
082064b2 +0x38e:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
082064b7 +0x393:  movl   $0x15f,0x8(%esp)
082064bf +0x39b:  mov    %ebx,0x4(%esp)
082064c3 +0x39f:  mov    %eax,(%esp)
082064c6 +0x3a2:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
082064cb +0x3a7:  mov    $0x0,%eax
082064d0 +0x3ac:  mov    -0x4(%ebp),%ebx
082064d3 +0x3af:  leave
082064d4 +0x3b0:  ret
082064d5 +0x3b1:  nop
```

## 反编译 C

```c
// Dispatcher_ReportMannerlessUser::dispatch_sig @ 0x8206124

/* Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReportMannerlessUser::dispatch_sig
          (Dispatcher_ReportMannerlessUser *this,CUser *param_1,PacketBuf *param_2)

{
  size_t __n;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  CMonitorServerProxy *this_01;
  uint uVar8;
  Packet_Mannerless_User_Accusation local_1c3 [10];
  undefined4 local_1b9;
  undefined4 local_1b5;
  int local_1b1;
  uint local_1ad;
  uint local_1a9;
  undefined4 local_1a5;
  char acStack_1a1 [30];
  char acStack_183 [30];
  char acStack_165 [256];
  undefined1 local_65;
  uint local_64;
  uint local_60;
  byte local_59;
  size_t local_58;
  int local_54 [2];
  undefined1 local_49 [2];
  int local_47;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x9f84,
                     "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    Packet_Mannerless_User_Accusation::Packet_Mannerless_User_Accusation(local_1c3);
    local_1b5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_1b9 = CUser::GetUID(param_1);
    local_54[0] = 4;
    cVar2 = PacketBuf::get_int(param_2,local_54);
    if ((cVar2 == '\x01') && (local_54[0] < 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0x9f8e,
                       "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      local_1b1 = local_54[0];
      local_1a5 = CUser::get_acc_id(param_1);
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      local_58 = strlen(pcVar5);
      local_54[1] = 0x1d;
      puVar6 = std::min<unsigned_int>(&local_58,(uint *)(local_54 + 1));
      __n = *puVar6;
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      strncpy(acStack_1a1,pcVar5,__n);
      local_59 = 0;
      PacketBuf::get_byte(param_2,&local_59);
      local_1a9 = (uint)local_59;
      if (local_1a9 < 0x65) {
        if (local_1a9 == 0) {
          this_00 = (CEnvironment *)G_CEnvironment();
          local_1ad = CEnvironment::get_server_group(this_00);
          local_1a9 = local_1ad;
        }
        else {
          local_1ad = CUser::GetServerGroup(param_1);
        }
        local_60 = 0;
        cVar2 = PacketBuf::get_int(param_2,&local_60);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_str(param_2,acStack_183,0x1e,local_60);
          if (cVar2 == '\x01') {
            cVar2 = Packet_Mannerless_User_Accusation::isNeedTypeForChattingMsg(local_1b1);
            if (cVar2 != '\0') {
              local_64 = 0;
              cVar2 = PacketBuf::get_int(param_2,&local_64);
              if (cVar2 != '\x01') {
                return 0;
              }
              cVar2 = PacketBuf::get_str(param_2,acStack_165,0x100,local_64);
              if (cVar2 != '\x01') {
                return 0;
              }
            }
            iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            uVar4 = 0xb;
            uVar8 = 0;
            CInventory::GetInvenSlot((int)local_49,iVar3);
            if (local_47 == 0x677e) {
              local_65 = 0x70;
            }
            if (((local_1ad == local_1a9) && (local_60 == local_58)) &&
               (uVar8 = local_60, iVar3 = strncmp(acStack_1a1,acStack_183,local_60), iVar3 == 0)) {
              CUser::SendCmdErrorPacket(param_1,0x8c,3);
              return 0;
            }
            uVar7 = CUser::GetServerGroup(param_1);
            this_01 = (CMonitorServerProxy *)
                      CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                (GlobalData::s_monitor_proxy_mgr,uVar7,uVar8,uVar4);
            CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_1c3,0x15f);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x9fa0,
                         "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar4;
}
```
