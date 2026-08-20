# ReqDBSendNewCreatureMailCashShop

`_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci`

`WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop(CUser*, int, Inven_Item const&, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085571a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085571a0  _ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci
#           WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop(CUser*, int, Inven_Item const&, char const*, int)
# range [0x085571a0, 0x08557435]
085571a0 +0x000:  push   %ebp
085571a1 +0x001:  mov    %esp,%ebp
085571a3 +0x003:  push   %esi
085571a4 +0x004:  push   %ebx
085571a5 +0x005:  sub    $0x30,%esp
085571a8 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085571ad +0x00d:  movl   $0x99c,0x8(%esp)
085571b5 +0x015:  movl   $"MailBox.cpp",0x4(%esp)
085571bd +0x01d:  mov    %eax,(%esp)
085571c0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085571c5 +0x025:  movl   $0x1,0x8(%esp)
085571cd +0x02d:  mov    %eax,0x4(%esp)
085571d1 +0x031:  lea    -0x1c(%ebp),%eax
085571d4 +0x034:  mov    %eax,(%esp)
085571d7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085571dc +0x03c:  lea    -0x1c(%ebp),%eax
085571df +0x03f:  mov    %eax,(%esp)
085571e2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085571e7 +0x047:  movl   $0xc5,0x4(%esp)
085571ef +0x04f:  mov    %eax,(%esp)
085571f2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085571f7 +0x057:  mov    0x8(%ebp),%eax
085571fa +0x05a:  mov    %eax,(%esp)
085571fd +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08557202 +0x062:  mov    %eax,%ebx
08557204 +0x064:  lea    -0x1c(%ebp),%eax
08557207 +0x067:  mov    %eax,(%esp)
0855720a +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855720f +0x06f:  mov    %ebx,0x4(%esp)
08557213 +0x073:  mov    %eax,(%esp)
08557216 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855721b +0x07b:  lea    -0x1c(%ebp),%eax
0855721e +0x07e:  mov    %eax,(%esp)
08557221 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08557226 +0x086:  mov    %eax,(%esp)
08557229 +0x089:  call   08558b10 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1671>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1671
0855722e +0x08e:  mov    %eax,-0x14(%ebp)
08557231 +0x091:  mov    -0x14(%ebp),%eax
08557234 +0x094:  movl   $0x1,(%eax)
0855723a +0x09a:  mov    0x8(%ebp),%eax
0855723d +0x09d:  mov    %eax,(%esp)
08557240 +0x0a0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08557245 +0x0a5:  mov    -0x14(%ebp),%edx
08557248 +0x0a8:  add    $0x4,%edx
0855724b +0x0ab:  movl   $0x1d,0x8(%esp)
08557253 +0x0b3:  mov    %eax,0x4(%esp)
08557257 +0x0b7:  mov    %edx,(%esp)
0855725a +0x0ba:  call   0807d8d0 <_init+0x1c8>
0855725f +0x0bf:  mov    -0x14(%ebp),%eax
08557262 +0x0c2:  mov    0xc(%ebp),%edx
08557265 +0x0c5:  mov    %edx,0x24(%eax)
08557268 +0x0c8:  mov    0x8(%ebp),%eax
0855726b +0x0cb:  mov    %eax,(%esp)
0855726e +0x0ce:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08557273 +0x0d3:  mov    %eax,%edx
08557275 +0x0d5:  mov    -0x14(%ebp),%eax
08557278 +0x0d8:  mov    %edx,0x28(%eax)
0855727b +0x0db:  mov    -0x14(%ebp),%eax
0855727e +0x0de:  add    $0x2c,%eax
08557281 +0x0e1:  movl   $0x74,0x8(%esp)
08557289 +0x0e9:  movl   $0x0,0x4(%esp)
08557291 +0x0f1:  mov    %eax,(%esp)
08557294 +0x0f4:  call   0807dcc0 <_init+0x5b8>
08557299 +0x0f9:  mov    -0x14(%ebp),%eax
0855729c +0x0fc:  lea    0x30(%eax),%edx
0855729f +0x0ff:  mov    0x10(%ebp),%eax
085572a2 +0x102:  mov    %eax,0x4(%esp)
085572a6 +0x106:  mov    %edx,(%esp)
085572a9 +0x109:  call   0833f38e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x145b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x145b
085572ae +0x10e:  mov    -0x14(%ebp),%eax
085572b1 +0x111:  movl   $0x0,0x58(%eax)
085572b8 +0x118:  mov    -0x14(%ebp),%eax
085572bb +0x11b:  mov    0xc(%ebp),%edx
085572be +0x11e:  mov    %edx,0x74(%eax)
085572c1 +0x121:  mov    -0x14(%ebp),%eax
085572c4 +0x124:  movl   $0x64,0x70(%eax)
085572cb +0x12b:  mov    -0x14(%ebp),%eax
085572ce +0x12e:  movb   $0x20,0x7d(%eax)
085572d2 +0x132:  mov    -0x14(%ebp),%eax
085572d5 +0x135:  movb   $0x1,0x7f(%eax)
085572d9 +0x139:  mov    -0x14(%ebp),%eax
085572dc +0x13c:  movl   $0x0,0x94(%eax)
085572e6 +0x146:  mov    -0x14(%ebp),%eax
085572e9 +0x149:  movb   $0x1,0x1a2(%eax)
085572f0 +0x150:  mov    0x10(%ebp),%eax
085572f3 +0x153:  mov    0x2(%eax),%eax
085572f6 +0x156:  mov    %eax,%ebx
085572f8 +0x158:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085572fd +0x15d:  mov    %ebx,0x4(%esp)
08557301 +0x161:  mov    %eax,(%esp)
08557304 +0x164:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08557309 +0x169:  mov    %eax,-0x10(%ebp)
0855730c +0x16c:  cmpl   $0x0,-0x10(%ebp)
08557310 +0x170:  je     08557424 <+0x284>
08557316 +0x176:  mov    -0x10(%ebp),%eax
08557319 +0x179:  mov    %eax,(%esp)
0855731c +0x17c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08557321 +0x181:  test   %al,%al
08557323 +0x183:  jne    08557424 <+0x284>
08557329 +0x189:  mov    -0x10(%ebp),%eax
0855732c +0x18c:  mov    %eax,-0xc(%ebp)
0855732f +0x18f:  mov    -0xc(%ebp),%eax
08557332 +0x192:  mov    %eax,(%esp)
08557335 +0x195:  call   0833eecc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf99
0855733a +0x19a:  test   %eax,%eax
0855733c +0x19c:  sete   %al
0855733f +0x19f:  test   %al,%al
08557341 +0x1a1:  je     0855734c <+0x1ac>
08557343 +0x1a3:  mov    -0x14(%ebp),%eax
08557346 +0x1a6:  movb   $0x1,0x7c(%eax)
0855734a +0x1aa:  jmp    08557353 <+0x1b3>
0855734c +0x1ac:  mov    -0x14(%ebp),%eax
0855734f +0x1af:  movb   $0x0,0x7c(%eax)
08557353 +0x1b3:  mov    -0xc(%ebp),%eax
08557356 +0x1b6:  mov    %eax,(%esp)
08557359 +0x1b9:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0855735e +0x1be:  mov    -0x14(%ebp),%edx
08557361 +0x1c1:  mov    %eax,0x80(%edx)
08557367 +0x1c7:  mov    -0xc(%ebp),%eax
0855736a +0x1ca:  mov    %eax,(%esp)
0855736d +0x1cd:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08557372 +0x1d2:  mov    -0x14(%ebp),%edx
08557375 +0x1d5:  mov    %eax,0x84(%edx)
0855737b +0x1db:  mov    -0x14(%ebp),%eax
0855737e +0x1de:  movw   $0x0,0xa0(%eax)
08557387 +0x1e7:  mov    -0x14(%ebp),%eax
0855738a +0x1ea:  add    $0xa2,%eax
0855738f +0x1ef:  movl   $0x100,0x8(%esp)
08557397 +0x1f7:  movl   $0x0,0x4(%esp)
0855739f +0x1ff:  mov    %eax,(%esp)
085573a2 +0x202:  call   0807dcc0 <_init+0x5b8>
085573a7 +0x207:  cmpl   $0x0,0x14(%ebp)
085573ab +0x20b:  je     085573eb <+0x24b>
085573ad +0x20d:  cmpl   $0x0,0x18(%ebp)
085573b1 +0x211:  je     085573eb <+0x24b>
085573b3 +0x213:  mov    0x18(%ebp),%eax
085573b6 +0x216:  mov    %eax,%edx
085573b8 +0x218:  mov    -0x14(%ebp),%eax
085573bb +0x21b:  mov    %dx,0xa0(%eax)
085573c2 +0x222:  mov    -0x14(%ebp),%eax
085573c5 +0x225:  movzwl 0xa0(%eax),%eax
085573cc +0x22c:  movzwl %ax,%eax
085573cf +0x22f:  mov    -0x14(%ebp),%edx
085573d2 +0x232:  add    $0xa2,%edx
085573d8 +0x238:  mov    %eax,0x8(%esp)
085573dc +0x23c:  mov    0x14(%ebp),%eax
085573df +0x23f:  mov    %eax,0x4(%esp)
085573e3 +0x243:  mov    %edx,(%esp)
085573e6 +0x246:  call   0807d8d0 <_init+0x1c8>
085573eb +0x24b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085573f0 +0x250:  lea    -0x1c(%ebp),%edx
085573f3 +0x253:  mov    %edx,0x8(%esp)
085573f7 +0x257:  movl   $0x2,0x4(%esp)
085573ff +0x25f:  mov    %eax,(%esp)
08557402 +0x262:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08557407 +0x267:  jmp    08557424 <+0x284>
08557409 +0x269:  mov    %edx,%ebx
0855740b +0x26b:  mov    %eax,%esi
0855740d +0x26d:  lea    -0x1c(%ebp),%eax
08557410 +0x270:  mov    %eax,(%esp)
08557413 +0x273:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08557418 +0x278:  mov    %esi,%eax
0855741a +0x27a:  mov    %ebx,%edx
0855741c +0x27c:  mov    %eax,(%esp)
0855741f +0x27f:  call   08ae3750 <_Unwind_Resume>
08557424 +0x284:  lea    -0x1c(%ebp),%eax
08557427 +0x287:  mov    %eax,(%esp)
0855742a +0x28a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855742f +0x28f:  add    $0x30,%esp
08557432 +0x292:  pop    %ebx
08557433 +0x293:  pop    %esi
08557434 +0x294:  pop    %ebp
08557435 +0x295:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop @ 0x85571a0

/* WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop(CUser*, int, Inven_Item const&, char
   const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop
               (CUser *param_1,int param_2,Inven_Item *param_3,char *param_4,int param_5)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  char *__src;
  undefined4 uVar5;
  CDataManager *this;
  CStreamGuard local_20 [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_18;
  CEquipItem *local_14;
  CEquipItem *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x99c);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085571f2 to 08557406 has its CatchHandler @ 08557409 */
  CStreamGuard::operator<<(pCVar3,0xc5);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar3);
  *(undefined4 *)local_18 = 1;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_18 + 4),__src,0x1d);
  *(int *)(local_18 + 0x24) = param_2;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_18 + 0x28) = uVar5;
  memset(local_18 + 0x2c,0,0x74);
  Inven_Item_Compatible::setCopy((Inven_Item_Compatible *)(local_18 + 0x30),param_3);
  *(undefined4 *)(local_18 + 0x58) = 0;
  *(int *)(local_18 + 0x74) = param_2;
  *(undefined4 *)(local_18 + 0x70) = 100;
  local_18[0x7d] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x20;
  local_18[0x7f] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  *(undefined4 *)(local_18 + 0x94) = 0;
  local_18[0x1a2] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  iVar4 = *(int *)(param_3 + 2);
  this = (CDataManager *)G_CDataManager();
  local_14 = (CEquipItem *)CDataManager::find_item(this,iVar4);
  if (local_14 != (CEquipItem *)0x0) {
    cVar1 = CItem::is_stackable((CItem *)local_14);
    if (cVar1 == '\0') {
      local_10 = local_14;
      iVar4 = CEquipItem::get_sub_type(local_14);
      if (iVar4 == 0) {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
      }
      else {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x0;
      }
      uVar5 = CItem::getUsablePeriod((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x80) = uVar5;
      uVar5 = CItem::getExpirationDate((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x84) = uVar5;
      *(undefined2 *)(local_18 + 0xa0) = 0;
      memset(local_18 + 0xa2,0,0x100);
      if ((param_4 != (char *)0x0) && (param_5 != 0)) {
        *(short *)(local_18 + 0xa0) = (short)param_5;
        strncpy((char *)(local_18 + 0xa2),param_4,(uint)*(ushort *)(local_18 + 0xa0));
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
  }
  CStreamGuard::~CStreamGuard(local_20);
  return;
}
```
