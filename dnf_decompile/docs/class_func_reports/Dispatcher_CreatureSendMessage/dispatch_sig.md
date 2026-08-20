# dispatch_sig

`_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreatureSendMessage` | `0x08204710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08204710  _ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)
# range [0x08204710, 0x08204b0b]
08204710 +0x000:  push   %ebp
08204711 +0x001:  mov    %esp,%ebp
08204713 +0x003:  push   %edi
08204714 +0x004:  push   %esi
08204715 +0x005:  push   %ebx
08204716 +0x006:  sub    $0x2cc,%esp
0820471c +0x00c:  mov    0xc(%ebp),%eax
0820471f +0x00f:  mov    %eax,(%esp)
08204722 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08204727 +0x017:  cmp    $0x2,%eax
0820472a +0x01a:  setle  %al
0820472d +0x01d:  test   %al,%al
0820472f +0x01f:  je     0820473b <+0x2b>
08204731 +0x021:  mov    $0x0,%eax
08204736 +0x026:  jmp    08204b00 <+0x3f0>
0820473b +0x02b:  lea    -0x157(%ebp),%eax
08204741 +0x031:  add    $0xd,%eax
08204744 +0x034:  mov    %eax,0x4(%esp)
08204748 +0x038:  mov    0x10(%ebp),%eax
0820474b +0x03b:  mov    %eax,(%esp)
0820474e +0x03e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08204753 +0x043:  xor    $0x1,%eax
08204756 +0x046:  test   %al,%al
08204758 +0x048:  je     08204783 <+0x73>
0820475a +0x04a:  movl   $0x0,0xc(%esp)
08204762 +0x052:  movl   $0x0,0x8(%esp)
0820476a +0x05a:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204772 +0x062:  movl   $0x9c3d,(%esp)
08204779 +0x069:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820477e +0x06e:  jmp    08204b00 <+0x3f0>
08204783 +0x073:  lea    -0x157(%ebp),%eax
08204789 +0x079:  add    $0xe,%eax
0820478c +0x07c:  mov    %eax,0x4(%esp)
08204790 +0x080:  mov    0x10(%ebp),%eax
08204793 +0x083:  mov    %eax,(%esp)
08204796 +0x086:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0820479b +0x08b:  xor    $0x1,%eax
0820479e +0x08e:  test   %al,%al
082047a0 +0x090:  je     082047cb <+0xbb>
082047a2 +0x092:  movl   $0x0,0xc(%esp)
082047aa +0x09a:  movl   $0x0,0x8(%esp)
082047b2 +0x0a2:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082047ba +0x0aa:  movl   $0x9c3e,(%esp)
082047c1 +0x0b1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082047c6 +0x0b6:  jmp    08204b00 <+0x3f0>
082047cb +0x0bb:  lea    -0x157(%ebp),%eax
082047d1 +0x0c1:  add    $0x10,%eax
082047d4 +0x0c4:  mov    %eax,0x4(%esp)
082047d8 +0x0c8:  mov    0x10(%ebp),%eax
082047db +0x0cb:  mov    %eax,(%esp)
082047de +0x0ce:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082047e3 +0x0d3:  xor    $0x1,%eax
082047e6 +0x0d6:  test   %al,%al
082047e8 +0x0d8:  je     08204813 <+0x103>
082047ea +0x0da:  movl   $0x0,0xc(%esp)
082047f2 +0x0e2:  movl   $0x0,0x8(%esp)
082047fa +0x0ea:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204802 +0x0f2:  movl   $0x9c3f,(%esp)
08204809 +0x0f9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820480e +0x0fe:  jmp    08204b00 <+0x3f0>
08204813 +0x103:  lea    -0x157(%ebp),%eax
08204819 +0x109:  add    $0x36,%eax
0820481c +0x10c:  mov    %eax,0x4(%esp)
08204820 +0x110:  mov    0x10(%ebp),%eax
08204823 +0x113:  mov    %eax,(%esp)
08204826 +0x116:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820482b +0x11b:  xor    $0x1,%eax
0820482e +0x11e:  test   %al,%al
08204830 +0x120:  je     0820485b <+0x14b>
08204832 +0x122:  movl   $0x0,0xc(%esp)
0820483a +0x12a:  movl   $0x0,0x8(%esp)
08204842 +0x132:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820484a +0x13a:  movl   $0x9c40,(%esp)
08204851 +0x141:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204856 +0x146:  jmp    08204b00 <+0x3f0>
0820485b +0x14b:  mov    -0x121(%ebp),%eax
08204861 +0x151:  mov    %eax,0xc(%esp)
08204865 +0x155:  movl   $0x100,0x8(%esp)
0820486d +0x15d:  lea    -0x157(%ebp),%eax
08204873 +0x163:  add    $0x3a,%eax
08204876 +0x166:  mov    %eax,0x4(%esp)
0820487a +0x16a:  mov    0x10(%ebp),%eax
0820487d +0x16d:  mov    %eax,(%esp)
08204880 +0x170:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08204885 +0x175:  xor    $0x1,%eax
08204888 +0x178:  test   %al,%al
0820488a +0x17a:  je     082048b5 <+0x1a5>
0820488c +0x17c:  movl   $0x0,0xc(%esp)
08204894 +0x184:  movl   $0x0,0x8(%esp)
0820489c +0x18c:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082048a4 +0x194:  movl   $0x9c41,(%esp)
082048ab +0x19b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082048b0 +0x1a0:  jmp    08204b00 <+0x3f0>
082048b5 +0x1a5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082048ba +0x1aa:  lea    -0x157(%ebp),%edx
082048c0 +0x1b0:  add    $0x3a,%edx
082048c3 +0x1b3:  mov    %edx,0x8(%esp)
082048c7 +0x1b7:  mov    0xc(%ebp),%edx
082048ca +0x1ba:  mov    %edx,0x4(%esp)
082048ce +0x1be:  mov    %eax,(%esp)
082048d1 +0x1c1:  call   0835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>  ; CDataManager::rewriteUsableEmoticon(CUser const&, char*)
082048d6 +0x1c6:  movzbl -0x14a(%ebp),%eax
082048dd +0x1cd:  cmp    $0x7,%al
082048df +0x1cf:  je     082048f0 <+0x1e0>
082048e1 +0x1d1:  movzbl -0x14a(%ebp),%eax
082048e8 +0x1d8:  cmp    $0x1,%al
082048ea +0x1da:  jne    08204a86 <+0x376>
082048f0 +0x1e0:  lea    -0x157(%ebp),%eax
082048f6 +0x1e6:  add    $0x14,%eax
082048f9 +0x1e9:  mov    %eax,0x4(%esp)
082048fd +0x1ed:  mov    0x10(%ebp),%eax
08204900 +0x1f0:  mov    %eax,(%esp)
08204903 +0x1f3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08204908 +0x1f8:  xor    $0x1,%eax
0820490b +0x1fb:  test   %al,%al
0820490d +0x1fd:  je     08204938 <+0x228>
0820490f +0x1ff:  movl   $0x0,0xc(%esp)
08204917 +0x207:  movl   $0x0,0x8(%esp)
0820491f +0x20f:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204927 +0x217:  movl   $0x9c53,(%esp)
0820492e +0x21e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204933 +0x223:  jmp    08204b00 <+0x3f0>
08204938 +0x228:  mov    -0x143(%ebp),%eax
0820493e +0x22e:  mov    %eax,0xc(%esp)
08204942 +0x232:  movl   $0x1e,0x8(%esp)
0820494a +0x23a:  lea    -0x157(%ebp),%eax
08204950 +0x240:  add    $0x18,%eax
08204953 +0x243:  mov    %eax,0x4(%esp)
08204957 +0x247:  mov    0x10(%ebp),%eax
0820495a +0x24a:  mov    %eax,(%esp)
0820495d +0x24d:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08204962 +0x252:  xor    $0x1,%eax
08204965 +0x255:  test   %al,%al
08204967 +0x257:  je     08204992 <+0x282>
08204969 +0x259:  movl   $0x0,0xc(%esp)
08204971 +0x261:  movl   $0x0,0x8(%esp)
08204979 +0x269:  movl   $&_ZZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204981 +0x271:  movl   $0x9c54,(%esp)
08204988 +0x278:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820498d +0x27d:  jmp    08204b00 <+0x3f0>
08204992 +0x282:  movzbl -0x14a(%ebp),%eax
08204999 +0x289:  cmp    $0x7,%al
0820499b +0x28b:  jne    08204a86 <+0x376>
082049a1 +0x291:  lea    -0x292(%ebp),%eax
082049a7 +0x297:  mov    %eax,(%esp)
082049aa +0x29a:  call   0822b8e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xf90>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xf90
082049af +0x29f:  mov    0xc(%ebp),%eax
082049b2 +0x2a2:  mov    %eax,(%esp)
082049b5 +0x2a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082049ba +0x2aa:  mov    %eax,-0x27f(%ebp)
082049c0 +0x2b0:  mov    -0x143(%ebp),%eax
082049c6 +0x2b6:  mov    %al,-0x277(%ebp)
082049cc +0x2bc:  mov    -0x143(%ebp),%eax
082049d2 +0x2c2:  mov    %eax,0x8(%esp)
082049d6 +0x2c6:  lea    -0x157(%ebp),%eax
082049dc +0x2cc:  add    $0x18,%eax
082049df +0x2cf:  mov    %eax,0x4(%esp)
082049e3 +0x2d3:  lea    -0x292(%ebp),%eax
082049e9 +0x2d9:  add    $0x1c,%eax
082049ec +0x2dc:  mov    %eax,(%esp)
082049ef +0x2df:  call   0807d8a0 <_init+0x198>
082049f4 +0x2e4:  mov    -0x121(%ebp),%eax
082049fa +0x2ea:  mov    %al,-0x258(%ebp)
08204a00 +0x2f0:  mov    -0x121(%ebp),%eax
08204a06 +0x2f6:  mov    %eax,0x8(%esp)
08204a0a +0x2fa:  lea    -0x157(%ebp),%eax
08204a10 +0x300:  add    $0x3a,%eax
08204a13 +0x303:  mov    %eax,0x4(%esp)
08204a17 +0x307:  lea    -0x292(%ebp),%eax
08204a1d +0x30d:  add    $0x3b,%eax
08204a20 +0x310:  mov    %eax,(%esp)
08204a23 +0x313:  call   0807d8a0 <_init+0x198>
08204a28 +0x318:  movzbl -0x258(%ebp),%eax
08204a2f +0x31f:  movzbl %al,%eax
08204a32 +0x322:  add    $0x3b,%eax
08204a35 +0x325:  mov    %ax,-0x290(%ebp)
08204a3c +0x32c:  movzwl -0x290(%ebp),%eax
08204a43 +0x333:  movzwl %ax,%eax
08204a46 +0x336:  mov    %eax,-0x1c(%ebp)
08204a49 +0x339:  lea    -0x292(%ebp),%ebx
08204a4f +0x33f:  mov    0xc(%ebp),%eax
08204a52 +0x342:  mov    %eax,(%esp)
08204a55 +0x345:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08204a5a +0x34a:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08204a60 +0x350:  mov    %eax,0x4(%esp)
08204a64 +0x354:  mov    %edx,(%esp)
08204a67 +0x357:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08204a6c +0x35c:  mov    -0x1c(%ebp),%edx
08204a6f +0x35f:  mov    %edx,0x8(%esp)
08204a73 +0x363:  mov    %ebx,0x4(%esp)
08204a77 +0x367:  mov    %eax,(%esp)
08204a7a +0x36a:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08204a7f +0x36f:  mov    $0x0,%eax
08204a84 +0x374:  jmp    08204b00 <+0x3f0>
08204a86 +0x376:  mov    -0x121(%ebp),%eax
08204a8c +0x37c:  mov    %eax,-0x29c(%ebp)
08204a92 +0x382:  mov    -0x147(%ebp),%edi
08204a98 +0x388:  movzwl -0x149(%ebp),%eax
08204a9f +0x38f:  movzwl %ax,%esi
08204aa2 +0x392:  movzbl -0x14a(%ebp),%eax
08204aa9 +0x399:  movsbl %al,%ebx
08204aac +0x39c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08204ab1 +0x3a1:  movl   $0x72,0x24(%esp)
08204ab9 +0x3a9:  movl   $0x0,0x20(%esp)
08204ac1 +0x3b1:  movl   $0x0,0x1c(%esp)
08204ac9 +0x3b9:  mov    -0x29c(%ebp),%edx
08204acf +0x3bf:  mov    %edx,0x18(%esp)
08204ad3 +0x3c3:  lea    -0x157(%ebp),%edx
08204ad9 +0x3c9:  add    $0x3a,%edx
08204adc +0x3cc:  mov    %edx,0x14(%esp)
08204ae0 +0x3d0:  mov    %edi,0x10(%esp)
08204ae4 +0x3d4:  mov    %esi,0xc(%esp)
08204ae8 +0x3d8:  mov    %ebx,0x8(%esp)
08204aec +0x3dc:  mov    0xc(%ebp),%edx
08204aef +0x3df:  mov    %edx,0x4(%esp)
08204af3 +0x3e3:  mov    %eax,(%esp)
08204af6 +0x3e6:  call   086c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>  ; GameWorld::send_chat_msg(CUser*, char, unsigned short, unsigned int, char*, int, char*, int, ENUM_NOTIPACKET)
08204afb +0x3eb:  mov    $0x0,%eax
08204b00 +0x3f0:  add    $0x2cc,%esp
08204b06 +0x3f6:  pop    %ebx
08204b07 +0x3f7:  pop    %esi
08204b08 +0x3f8:  pop    %edi
08204b09 +0x3f9:  pop    %ebp
08204b0a +0x3fa:  ret
08204b0b +0x3fb:  nop
```

## 反编译 C

```c
// Dispatcher_CreatureSendMessage::dispatch_sig @ 0x8204710

/* Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatureSendMessage::dispatch_sig
          (Dispatcher_CreatureSendMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CMonitorServerProxy *this_01;
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
              this_00 = (CDataManager *)G_CDataManager();
              CDataManager::rewriteUsableEmoticon(this_00,param_1,acStack_121);
              if ((local_14e == '\a') || (local_14e == '\x01')) {
                cVar1 = PacketBuf::get_int(param_2,(int *)&local_147);
                if (cVar1 != '\x01') {
                  uVar3 = LineFunc(0x9c53,
                                   "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar3;
                }
                cVar1 = PacketBuf::get_str(param_2,acStack_143,0x1e,local_147);
                if (cVar1 != '\x01') {
                  uVar3 = LineFunc(0x9c54,
                                   "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar3;
                }
                if (local_14e == '\a') {
                  Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat(local_296);
                  local_283 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  local_27b = (undefined1)local_147;
                  memcpy(auStack_27a,acStack_143,local_147);
                  local_25c = (byte)local_125;
                  memcpy(auStack_25b,acStack_121,local_125);
                  local_294 = local_25c + 0x3b;
                  local_20 = (uint)local_294;
                  uVar3 = CUser::GetServerGroup(param_1);
                  this_01 = (CMonitorServerProxy *)
                            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                      (GlobalData::s_monitor_proxy_mgr,uVar3);
                  CMonitorServerProxy::SendPacket(this_01,(char *)local_296,local_20);
                  return 0;
                }
              }
              pGVar4 = (GameWorld *)G_GameWorld();
              GameWorld::send_chat_msg
                        (pGVar4,param_1,(int)local_14e,local_14d,local_14b,acStack_121,local_125,0,0
                         ,0x72);
              uVar3 = 0;
            }
            else {
              uVar3 = LineFunc(0x9c41,
                               "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(40000,
                             "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(39999,
                           "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x9c3e,
                         "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x9c3d,
                       "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
