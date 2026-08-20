# ReqDBSendNewSystemMail

`_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb`

`WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085555e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085555e8  _ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb
#           WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
# range [0x085555e8, 0x08555751]
085555e8 +0x000:  push   %ebp
085555e9 +0x001:  mov    %esp,%ebp
085555eb +0x003:  push   %esi
085555ec +0x004:  push   %ebx
085555ed +0x005:  sub    $0x50,%esp
085555f0 +0x008:  mov    0x28(%ebp),%edx
085555f3 +0x00b:  mov    0x2c(%ebp),%eax
085555f6 +0x00e:  mov    %dl,-0x1c(%ebp)
085555f9 +0x011:  mov    %al,-0x20(%ebp)
085555fc +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08555601 +0x019:  movl   $0x54f,0x8(%esp)
08555609 +0x021:  movl   $"MailBox.cpp",0x4(%esp)
08555611 +0x029:  mov    %eax,(%esp)
08555614 +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08555619 +0x031:  movl   $0x1,0x8(%esp)
08555621 +0x039:  mov    %eax,0x4(%esp)
08555625 +0x03d:  lea    -0x14(%ebp),%eax
08555628 +0x040:  mov    %eax,(%esp)
0855562b +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08555630 +0x048:  lea    -0x14(%ebp),%eax
08555633 +0x04b:  mov    %eax,(%esp)
08555636 +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855563b +0x053:  movl   $0x80,0x4(%esp)
08555643 +0x05b:  mov    %eax,(%esp)
08555646 +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855564b +0x063:  lea    -0x14(%ebp),%eax
0855564e +0x066:  mov    %eax,(%esp)
08555651 +0x069:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08555656 +0x06e:  movl   $0xffffffff,0x4(%esp)
0855565e +0x076:  mov    %eax,(%esp)
08555661 +0x079:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08555666 +0x07e:  lea    -0x14(%ebp),%eax
08555669 +0x081:  mov    %eax,(%esp)
0855566c +0x084:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08555671 +0x089:  mov    %eax,(%esp)
08555674 +0x08c:  call   08197f8e <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x199>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x199
08555679 +0x091:  mov    %eax,-0xc(%ebp)
0855567c +0x094:  movl   $0x168,0x8(%esp)
08555684 +0x09c:  movl   $0x0,0x4(%esp)
0855568c +0x0a4:  mov    -0xc(%ebp),%eax
0855568f +0x0a7:  mov    %eax,(%esp)
08555692 +0x0aa:  call   0807dcc0 <_init+0x5b8>
08555697 +0x0af:  movl   $0x0,0x24(%esp)
0855569f +0x0b7:  mov    0x20(%ebp),%eax
085556a2 +0x0ba:  mov    %eax,0x20(%esp)
085556a6 +0x0be:  mov    0x1c(%ebp),%eax
085556a9 +0x0c1:  mov    %eax,0x1c(%esp)
085556ad +0x0c5:  mov    0x18(%ebp),%eax
085556b0 +0x0c8:  mov    %eax,0x18(%esp)
085556b4 +0x0cc:  mov    0x14(%ebp),%eax
085556b7 +0x0cf:  mov    %eax,0x14(%esp)
085556bb +0x0d3:  mov    0x10(%ebp),%eax
085556be +0x0d6:  mov    %eax,0x10(%esp)
085556c2 +0x0da:  mov    0xc(%ebp),%eax
085556c5 +0x0dd:  mov    %eax,0xc(%esp)
085556c9 +0x0e1:  movl   $0x0,0x8(%esp)
085556d1 +0x0e9:  mov    0x8(%ebp),%eax
085556d4 +0x0ec:  mov    %eax,0x4(%esp)
085556d8 +0x0f0:  mov    -0xc(%ebp),%eax
085556db +0x0f3:  mov    %eax,(%esp)
085556de +0x0f6:  call   08555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>  ; WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int)
085556e3 +0x0fb:  mov    -0xc(%ebp),%eax
085556e6 +0x0fe:  mov    0x24(%ebp),%edx
085556e9 +0x101:  mov    %edx,0x15f(%eax)
085556ef +0x107:  mov    -0xc(%ebp),%eax
085556f2 +0x10a:  movzbl -0x1c(%ebp),%edx
085556f6 +0x10e:  mov    %dl,0x57(%eax)
085556f9 +0x111:  mov    -0xc(%ebp),%eax
085556fc +0x114:  movzbl -0x20(%ebp),%edx
08555700 +0x118:  mov    %dl,0x167(%eax)
08555706 +0x11e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0855570b +0x123:  lea    -0x14(%ebp),%edx
0855570e +0x126:  mov    %edx,0x8(%esp)
08555712 +0x12a:  movl   $0x2,0x4(%esp)
0855571a +0x132:  mov    %eax,(%esp)
0855571d +0x135:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08555722 +0x13a:  mov    $0x0,%ebx
08555727 +0x13f:  lea    -0x14(%ebp),%eax
0855572a +0x142:  mov    %eax,(%esp)
0855572d +0x145:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08555732 +0x14a:  mov    %ebx,%eax
08555734 +0x14c:  add    $0x50,%esp
08555737 +0x14f:  pop    %ebx
08555738 +0x150:  pop    %esi
08555739 +0x151:  pop    %ebp
0855573a +0x152:  ret
0855573b +0x153:  mov    %edx,%ebx
0855573d +0x155:  mov    %eax,%esi
0855573f +0x157:  lea    -0x14(%ebp),%eax
08555742 +0x15a:  mov    %eax,(%esp)
08555745 +0x15d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855574a +0x162:  mov    %esi,%eax
0855574c +0x164:  mov    %ebx,%edx
0855574e +0x166:  mov    %eax,(%esp)
08555751 +0x169:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewSystemMail @ 0x85555e8

/* WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int,
   unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
          (char *param_1,Inven_Item *param_2,uint param_3,uint param_4,char *param_5,int param_6,
          uint param_7,undefined4 param_8,SIG_MAILBOX_SEND_NEW_MAIL param_9,
          SIG_MAILBOX_SEND_NEW_MAIL param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x54f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08555646 to 08555721 has its CatchHandler @ 0855573b */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  memset(local_10,0,0x168);
  _makeSendMailData(local_10,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7,0);
  *(undefined4 *)(local_10 + 0x15f) = param_8;
  local_10[0x57] = param_9;
  local_10[0x167] = param_10;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}
```
