# _DoSendNewMail

`_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii`

`WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555916` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555916  _ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii
#           WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int, int)
# range [0x08555916, 0x08555ac7]
08555916 +0x000:  push   %ebp
08555917 +0x001:  mov    %esp,%ebp
08555919 +0x003:  push   %esi
0855591a +0x004:  push   %ebx
0855591b +0x005:  sub    $0x50,%esp
0855591e +0x008:  mov    0x18(%ebp),%eax
08555921 +0x00b:  mov    %al,-0x1c(%ebp)
08555924 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08555929 +0x013:  movl   $0x59b,0x8(%esp)
08555931 +0x01b:  movl   $"MailBox.cpp",0x4(%esp)
08555939 +0x023:  mov    %eax,(%esp)
0855593c +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08555941 +0x02b:  movl   $0x0,0x8(%esp)
08555949 +0x033:  mov    %eax,0x4(%esp)
0855594d +0x037:  lea    -0x18(%ebp),%eax
08555950 +0x03a:  mov    %eax,(%esp)
08555953 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08555958 +0x042:  lea    -0x18(%ebp),%eax
0855595b +0x045:  mov    %eax,(%esp)
0855595e +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08555963 +0x04d:  movl   $0x80,0x4(%esp)
0855596b +0x055:  mov    %eax,(%esp)
0855596e +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08555973 +0x05d:  mov    0x8(%ebp),%eax
08555976 +0x060:  mov    %eax,(%esp)
08555979 +0x063:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0855597e +0x068:  mov    %eax,%ebx
08555980 +0x06a:  lea    -0x18(%ebp),%eax
08555983 +0x06d:  mov    %eax,(%esp)
08555986 +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855598b +0x075:  mov    %ebx,0x4(%esp)
0855598f +0x079:  mov    %eax,(%esp)
08555992 +0x07c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08555997 +0x081:  lea    -0x18(%ebp),%eax
0855599a +0x084:  mov    %eax,(%esp)
0855599d +0x087:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085559a2 +0x08c:  mov    %eax,(%esp)
085559a5 +0x08f:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
085559aa +0x094:  mov    %eax,-0xc(%ebp)
085559ad +0x097:  movl   $0x168,0x8(%esp)
085559b5 +0x09f:  movl   $0x0,0x4(%esp)
085559bd +0x0a7:  mov    -0xc(%ebp),%eax
085559c0 +0x0aa:  mov    %eax,(%esp)
085559c3 +0x0ad:  call   0807dcc0 <_init+0x5b8>
085559c8 +0x0b2:  mov    0x8(%ebp),%eax
085559cb +0x0b5:  mov    %eax,(%esp)
085559ce +0x0b8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085559d3 +0x0bd:  mov    %eax,%ebx
085559d5 +0x0bf:  mov    0x8(%ebp),%eax
085559d8 +0x0c2:  mov    %eax,(%esp)
085559db +0x0c5:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085559e0 +0x0ca:  mov    0x24(%ebp),%edx
085559e3 +0x0cd:  mov    %edx,0x24(%esp)
085559e7 +0x0d1:  movl   $0x0,0x20(%esp)
085559ef +0x0d9:  mov    0x20(%ebp),%edx
085559f2 +0x0dc:  mov    %edx,0x1c(%esp)
085559f6 +0x0e0:  mov    0x1c(%ebp),%edx
085559f9 +0x0e3:  mov    %edx,0x18(%esp)
085559fd +0x0e7:  mov    0x14(%ebp),%edx
08555a00 +0x0ea:  mov    %edx,0x14(%esp)
08555a04 +0x0ee:  mov    0x10(%ebp),%edx
08555a07 +0x0f1:  mov    %edx,0x10(%esp)
08555a0b +0x0f5:  mov    0xc(%ebp),%edx
08555a0e +0x0f8:  mov    %edx,0xc(%esp)
08555a12 +0x0fc:  mov    %ebx,0x8(%esp)
08555a16 +0x100:  mov    %eax,0x4(%esp)
08555a1a +0x104:  mov    -0xc(%ebp),%eax
08555a1d +0x107:  mov    %eax,(%esp)
08555a20 +0x10a:  call   08555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>  ; WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int)
08555a25 +0x10f:  mov    0x8(%ebp),%eax
08555a28 +0x112:  mov    %eax,(%esp)
08555a2b +0x115:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08555a30 +0x11a:  mov    -0xc(%ebp),%edx
08555a33 +0x11d:  mov    %eax,0x15f(%edx)
08555a39 +0x123:  movzbl -0x1c(%ebp),%eax
08555a3d +0x127:  xor    $0x1,%eax
08555a40 +0x12a:  test   %al,%al
08555a42 +0x12c:  je     08555a76 <+0x160>
08555a44 +0x12e:  lea    -0x18(%ebp),%eax
08555a47 +0x131:  mov    %eax,(%esp)
08555a4a +0x134:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
08555a4f +0x139:  mov    %eax,-0x10(%ebp)
08555a52 +0x13c:  mov    0x8(%ebp),%eax
08555a55 +0x13f:  mov    %eax,(%esp)
08555a58 +0x142:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
08555a5d +0x147:  lea    0x58(%eax),%edx
08555a60 +0x14a:  lea    -0x10(%ebp),%eax
08555a63 +0x14d:  mov    %eax,0x4(%esp)
08555a67 +0x151:  mov    %edx,(%esp)
08555a6a +0x154:  call   08558aca <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x162b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x162b
08555a6f +0x159:  mov    $0x0,%ebx
08555a74 +0x15e:  jmp    08555ab4 <+0x19e>
08555a76 +0x160:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08555a7b +0x165:  lea    -0x18(%ebp),%edx
08555a7e +0x168:  mov    %edx,0x8(%esp)
08555a82 +0x16c:  movl   $0x2,0x4(%esp)
08555a8a +0x174:  mov    %eax,(%esp)
08555a8d +0x177:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08555a92 +0x17c:  mov    $0x0,%ebx
08555a97 +0x181:  jmp    08555ab4 <+0x19e>
08555a99 +0x183:  mov    %edx,%ebx
08555a9b +0x185:  mov    %eax,%esi
08555a9d +0x187:  lea    -0x18(%ebp),%eax
08555aa0 +0x18a:  mov    %eax,(%esp)
08555aa3 +0x18d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08555aa8 +0x192:  mov    %esi,%eax
08555aaa +0x194:  mov    %ebx,%edx
08555aac +0x196:  mov    %eax,(%esp)
08555aaf +0x199:  call   08ae3750 <_Unwind_Resume>
08555ab4 +0x19e:  lea    -0x18(%ebp),%eax
08555ab7 +0x1a1:  mov    %eax,(%esp)
08555aba +0x1a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08555abf +0x1a9:  mov    %ebx,%eax
08555ac1 +0x1ab:  add    $0x50,%esp
08555ac4 +0x1ae:  pop    %ebx
08555ac5 +0x1af:  pop    %esi
08555ac6 +0x1b0:  pop    %ebp
08555ac7 +0x1b1:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoSendNewMail @ 0x8555916

/* WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int,
   bool, char const*, int, int) */

undefined4
WongWork::CMailBoxHelper::_DoSendNewMail
          (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,char *param_6,
          int param_7,int param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  Stream *local_14;
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x59b);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,false);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855596e to 08555a91 has its CatchHandler @ 08555a99 */
  CStreamGuard::operator<<(pCVar2,0x80);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  memset(local_10,0,0x168);
  iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  _makeSendMailData(local_10,pcVar4,iVar3,param_2,param_3,param_4,param_6,param_7,0,param_8);
  uVar5 = CUser::GetServerGroup(param_1);
  *(undefined4 *)(local_10 + 0x15f) = uVar5;
  if (param_5) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  }
  else {
    local_14 = (Stream *)CStreamGuard::Get(local_1c);
    iVar3 = CUser::GetMailBox(param_1);
    std::list<Stream*,std::allocator<Stream*>>::push_back
              ((list<Stream*,std::allocator<Stream*>> *)(iVar3 + 0x58),&local_14);
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return 0;
}
```
