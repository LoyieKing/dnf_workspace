# ReqDBSendNewMailCashShop

`_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci`

`WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556d5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556d5c  _ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci
#           WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
# range [0x08556d5c, 0x08556f15]
08556d5c +0x000:  push   %ebp
08556d5d +0x001:  mov    %esp,%ebp
08556d5f +0x003:  push   %esi
08556d60 +0x004:  push   %ebx
08556d61 +0x005:  sub    $0x50,%esp
08556d64 +0x008:  mov    0x18(%ebp),%eax
08556d67 +0x00b:  mov    %al,-0x1c(%ebp)
08556d6a +0x00e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08556d6f +0x013:  mov    %eax,(%esp)
08556d72 +0x016:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08556d77 +0x01b:  cmp    $0x7,%eax
08556d7a +0x01e:  sete   %al
08556d7d +0x021:  test   %al,%al
08556d7f +0x023:  je     08556d8b <+0x2f>
08556d81 +0x025:  mov    $0x0,%ebx
08556d86 +0x02a:  jmp    08556f0c <+0x1b0>
08556d8b +0x02f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08556d90 +0x034:  movl   $0x95d,0x8(%esp)
08556d98 +0x03c:  movl   $"MailBox.cpp",0x4(%esp)
08556da0 +0x044:  mov    %eax,(%esp)
08556da3 +0x047:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08556da8 +0x04c:  movl   $0x1,0x8(%esp)
08556db0 +0x054:  mov    %eax,0x4(%esp)
08556db4 +0x058:  lea    -0x18(%ebp),%eax
08556db7 +0x05b:  mov    %eax,(%esp)
08556dba +0x05e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08556dbf +0x063:  lea    -0x18(%ebp),%eax
08556dc2 +0x066:  mov    %eax,(%esp)
08556dc5 +0x069:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556dca +0x06e:  movl   $0x80,0x4(%esp)
08556dd2 +0x076:  mov    %eax,(%esp)
08556dd5 +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556dda +0x07e:  mov    0x8(%ebp),%eax
08556ddd +0x081:  mov    %eax,(%esp)
08556de0 +0x084:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08556de5 +0x089:  mov    %eax,%ebx
08556de7 +0x08b:  lea    -0x18(%ebp),%eax
08556dea +0x08e:  mov    %eax,(%esp)
08556ded +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556df2 +0x096:  mov    %ebx,0x4(%esp)
08556df6 +0x09a:  mov    %eax,(%esp)
08556df9 +0x09d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556dfe +0x0a2:  lea    -0x18(%ebp),%eax
08556e01 +0x0a5:  mov    %eax,(%esp)
08556e04 +0x0a8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08556e09 +0x0ad:  mov    %eax,(%esp)
08556e0c +0x0b0:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
08556e11 +0x0b5:  mov    %eax,-0xc(%ebp)
08556e14 +0x0b8:  mov    0x8(%ebp),%eax
08556e17 +0x0bb:  mov    %eax,(%esp)
08556e1a +0x0be:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08556e1f +0x0c3:  mov    %eax,%ebx
08556e21 +0x0c5:  mov    0x8(%ebp),%eax
08556e24 +0x0c8:  mov    %eax,(%esp)
08556e27 +0x0cb:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08556e2c +0x0d0:  movl   $0x0,0x24(%esp)
08556e34 +0x0d8:  movl   $0x0,0x20(%esp)
08556e3c +0x0e0:  mov    0x20(%ebp),%edx
08556e3f +0x0e3:  mov    %edx,0x1c(%esp)
08556e43 +0x0e7:  mov    0x1c(%ebp),%edx
08556e46 +0x0ea:  mov    %edx,0x18(%esp)
08556e4a +0x0ee:  mov    0x14(%ebp),%edx
08556e4d +0x0f1:  mov    %edx,0x14(%esp)
08556e51 +0x0f5:  mov    0x10(%ebp),%edx
08556e54 +0x0f8:  mov    %edx,0x10(%esp)
08556e58 +0x0fc:  mov    0xc(%ebp),%edx
08556e5b +0x0ff:  mov    %edx,0xc(%esp)
08556e5f +0x103:  mov    %ebx,0x8(%esp)
08556e63 +0x107:  mov    %eax,0x4(%esp)
08556e67 +0x10b:  mov    -0xc(%ebp),%eax
08556e6a +0x10e:  mov    %eax,(%esp)
08556e6d +0x111:  call   08555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>  ; WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int)
08556e72 +0x116:  mov    -0xc(%ebp),%eax
08556e75 +0x119:  movl   $0x0,0x15f(%eax)
08556e7f +0x123:  mov    -0xc(%ebp),%eax
08556e82 +0x126:  movb   $0x1,0x57(%eax)
08556e86 +0x12a:  movzbl -0x1c(%ebp),%eax
08556e8a +0x12e:  xor    $0x1,%eax
08556e8d +0x131:  test   %al,%al
08556e8f +0x133:  je     08556ec3 <+0x167>
08556e91 +0x135:  lea    -0x18(%ebp),%eax
08556e94 +0x138:  mov    %eax,(%esp)
08556e97 +0x13b:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
08556e9c +0x140:  mov    %eax,-0x10(%ebp)
08556e9f +0x143:  mov    0x8(%ebp),%eax
08556ea2 +0x146:  mov    %eax,(%esp)
08556ea5 +0x149:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
08556eaa +0x14e:  lea    0x58(%eax),%edx
08556ead +0x151:  lea    -0x10(%ebp),%eax
08556eb0 +0x154:  mov    %eax,0x4(%esp)
08556eb4 +0x158:  mov    %edx,(%esp)
08556eb7 +0x15b:  call   08558aca <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x162b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x162b
08556ebc +0x160:  mov    $0x0,%ebx
08556ec1 +0x165:  jmp    08556f01 <+0x1a5>
08556ec3 +0x167:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08556ec8 +0x16c:  lea    -0x18(%ebp),%edx
08556ecb +0x16f:  mov    %edx,0x8(%esp)
08556ecf +0x173:  movl   $0x2,0x4(%esp)
08556ed7 +0x17b:  mov    %eax,(%esp)
08556eda +0x17e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08556edf +0x183:  mov    $0x0,%ebx
08556ee4 +0x188:  jmp    08556f01 <+0x1a5>
08556ee6 +0x18a:  mov    %edx,%ebx
08556ee8 +0x18c:  mov    %eax,%esi
08556eea +0x18e:  lea    -0x18(%ebp),%eax
08556eed +0x191:  mov    %eax,(%esp)
08556ef0 +0x194:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556ef5 +0x199:  mov    %esi,%eax
08556ef7 +0x19b:  mov    %ebx,%edx
08556ef9 +0x19d:  mov    %eax,(%esp)
08556efc +0x1a0:  call   08ae3750 <_Unwind_Resume>
08556f01 +0x1a5:  lea    -0x18(%ebp),%eax
08556f04 +0x1a8:  mov    %eax,(%esp)
08556f07 +0x1ab:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556f0c +0x1b0:  mov    %ebx,%eax
08556f0e +0x1b2:  add    $0x50,%esp
08556f11 +0x1b5:  pop    %ebx
08556f12 +0x1b6:  pop    %esi
08556f13 +0x1b7:  pop    %ebp
08556f14 +0x1b8:  ret
08556f15 +0x1b9:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop @ 0x8556d5c

/* WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int,
   unsigned int, bool, char const*, int) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop
          (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,char *param_6,
          int param_7)

{
  GameWorld *this;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  char *pcVar4;
  CStreamGuard local_1c [8];
  Stream *local_14;
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 != 7) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x95d);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556dd5 to 08556ede has its CatchHandler @ 08556ee6 */
    CStreamGuard::operator<<(pCVar3,0x80);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar3);
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    _makeSendMailData(local_10,pcVar4,iVar1,param_2,param_3,param_4,param_6,param_7,0,0);
    *(undefined4 *)(local_10 + 0x15f) = 0;
    local_10[0x57] = (SIG_MAILBOX_SEND_NEW_MAIL)0x1;
    if (param_5) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    }
    else {
      local_14 = (Stream *)CStreamGuard::Get(local_1c);
      iVar1 = CUser::GetMailBox(param_1);
      std::list<Stream*,std::allocator<Stream*>>::push_back
                ((list<Stream*,std::allocator<Stream*>> *)(iVar1 + 0x58),&local_14);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return 0;
}
```
