# ReqDBSendNewCreatureMail

`_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci`

`WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556422` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556422  _ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci
#           WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*, int)
# range [0x08556422, 0x085566ad]
08556422 +0x000:  push   %ebp
08556423 +0x001:  mov    %esp,%ebp
08556425 +0x003:  push   %esi
08556426 +0x004:  push   %ebx
08556427 +0x005:  sub    $0x30,%esp
0855642a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0855642f +0x00d:  movl   $0x83f,0x8(%esp)
08556437 +0x015:  movl   $"MailBox.cpp",0x4(%esp)
0855643f +0x01d:  mov    %eax,(%esp)
08556442 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08556447 +0x025:  movl   $0x1,0x8(%esp)
0855644f +0x02d:  mov    %eax,0x4(%esp)
08556453 +0x031:  lea    -0x1c(%ebp),%eax
08556456 +0x034:  mov    %eax,(%esp)
08556459 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0855645e +0x03c:  lea    -0x1c(%ebp),%eax
08556461 +0x03f:  mov    %eax,(%esp)
08556464 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556469 +0x047:  movl   $0xc5,0x4(%esp)
08556471 +0x04f:  mov    %eax,(%esp)
08556474 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556479 +0x057:  mov    0x8(%ebp),%eax
0855647c +0x05a:  mov    %eax,(%esp)
0855647f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08556484 +0x062:  mov    %eax,%ebx
08556486 +0x064:  lea    -0x1c(%ebp),%eax
08556489 +0x067:  mov    %eax,(%esp)
0855648c +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556491 +0x06f:  mov    %ebx,0x4(%esp)
08556495 +0x073:  mov    %eax,(%esp)
08556498 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0855649d +0x07b:  lea    -0x1c(%ebp),%eax
085564a0 +0x07e:  mov    %eax,(%esp)
085564a3 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085564a8 +0x086:  mov    %eax,(%esp)
085564ab +0x089:  call   08558b10 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1671>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1671
085564b0 +0x08e:  mov    %eax,-0x14(%ebp)
085564b3 +0x091:  mov    -0x14(%ebp),%eax
085564b6 +0x094:  movl   $0x1,(%eax)
085564bc +0x09a:  mov    0x8(%ebp),%eax
085564bf +0x09d:  mov    %eax,(%esp)
085564c2 +0x0a0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085564c7 +0x0a5:  mov    -0x14(%ebp),%edx
085564ca +0x0a8:  add    $0x4,%edx
085564cd +0x0ab:  movl   $0x1d,0x8(%esp)
085564d5 +0x0b3:  mov    %eax,0x4(%esp)
085564d9 +0x0b7:  mov    %edx,(%esp)
085564dc +0x0ba:  call   0807d8d0 <_init+0x1c8>
085564e1 +0x0bf:  mov    -0x14(%ebp),%eax
085564e4 +0x0c2:  mov    0xc(%ebp),%edx
085564e7 +0x0c5:  mov    %edx,0x24(%eax)
085564ea +0x0c8:  mov    0x8(%ebp),%eax
085564ed +0x0cb:  mov    %eax,(%esp)
085564f0 +0x0ce:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085564f5 +0x0d3:  mov    %eax,%edx
085564f7 +0x0d5:  mov    -0x14(%ebp),%eax
085564fa +0x0d8:  mov    %edx,0x28(%eax)
085564fd +0x0db:  mov    -0x14(%ebp),%eax
08556500 +0x0de:  add    $0x2c,%eax
08556503 +0x0e1:  movl   $0x74,0x8(%esp)
0855650b +0x0e9:  movl   $0x0,0x4(%esp)
08556513 +0x0f1:  mov    %eax,(%esp)
08556516 +0x0f4:  call   0807dcc0 <_init+0x5b8>
0855651b +0x0f9:  mov    -0x14(%ebp),%eax
0855651e +0x0fc:  lea    0x30(%eax),%edx
08556521 +0x0ff:  mov    0x10(%ebp),%eax
08556524 +0x102:  mov    %eax,0x4(%esp)
08556528 +0x106:  mov    %edx,(%esp)
0855652b +0x109:  call   0833f38e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x145b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x145b
08556530 +0x10e:  mov    -0x14(%ebp),%eax
08556533 +0x111:  movl   $0x0,0x58(%eax)
0855653a +0x118:  mov    -0x14(%ebp),%eax
0855653d +0x11b:  mov    0xc(%ebp),%edx
08556540 +0x11e:  mov    %edx,0x74(%eax)
08556543 +0x121:  mov    -0x14(%ebp),%eax
08556546 +0x124:  movl   $0x64,0x70(%eax)
0855654d +0x12b:  mov    -0x14(%ebp),%eax
08556550 +0x12e:  movb   $0x20,0x7d(%eax)
08556554 +0x132:  mov    -0x14(%ebp),%eax
08556557 +0x135:  movb   $0x1,0x7f(%eax)
0855655b +0x139:  mov    -0x14(%ebp),%eax
0855655e +0x13c:  movl   $0x0,0x94(%eax)
08556568 +0x146:  mov    0x10(%ebp),%eax
0855656b +0x149:  mov    0x2(%eax),%eax
0855656e +0x14c:  mov    %eax,%ebx
08556570 +0x14e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08556575 +0x153:  mov    %ebx,0x4(%esp)
08556579 +0x157:  mov    %eax,(%esp)
0855657c +0x15a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08556581 +0x15f:  mov    %eax,-0x10(%ebp)
08556584 +0x162:  cmpl   $0x0,-0x10(%ebp)
08556588 +0x166:  je     0855669c <+0x27a>
0855658e +0x16c:  mov    -0x10(%ebp),%eax
08556591 +0x16f:  mov    %eax,(%esp)
08556594 +0x172:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08556599 +0x177:  test   %al,%al
0855659b +0x179:  jne    0855669c <+0x27a>
085565a1 +0x17f:  mov    -0x10(%ebp),%eax
085565a4 +0x182:  mov    %eax,-0xc(%ebp)
085565a7 +0x185:  mov    -0xc(%ebp),%eax
085565aa +0x188:  mov    %eax,(%esp)
085565ad +0x18b:  call   0833eecc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf99
085565b2 +0x190:  test   %eax,%eax
085565b4 +0x192:  sete   %al
085565b7 +0x195:  test   %al,%al
085565b9 +0x197:  je     085565c4 <+0x1a2>
085565bb +0x199:  mov    -0x14(%ebp),%eax
085565be +0x19c:  movb   $0x1,0x7c(%eax)
085565c2 +0x1a0:  jmp    085565cb <+0x1a9>
085565c4 +0x1a2:  mov    -0x14(%ebp),%eax
085565c7 +0x1a5:  movb   $0x0,0x7c(%eax)
085565cb +0x1a9:  mov    -0x14(%ebp),%eax
085565ce +0x1ac:  movw   $0x0,0xa0(%eax)
085565d7 +0x1b5:  mov    -0x14(%ebp),%eax
085565da +0x1b8:  add    $0xa2,%eax
085565df +0x1bd:  movl   $0x100,0x8(%esp)
085565e7 +0x1c5:  movl   $0x0,0x4(%esp)
085565ef +0x1cd:  mov    %eax,(%esp)
085565f2 +0x1d0:  call   0807dcc0 <_init+0x5b8>
085565f7 +0x1d5:  cmpl   $0x0,0x14(%ebp)
085565fb +0x1d9:  je     0855663b <+0x219>
085565fd +0x1db:  cmpl   $0x0,0x18(%ebp)
08556601 +0x1df:  je     0855663b <+0x219>
08556603 +0x1e1:  mov    0x18(%ebp),%eax
08556606 +0x1e4:  mov    %eax,%edx
08556608 +0x1e6:  mov    -0x14(%ebp),%eax
0855660b +0x1e9:  mov    %dx,0xa0(%eax)
08556612 +0x1f0:  mov    -0x14(%ebp),%eax
08556615 +0x1f3:  movzwl 0xa0(%eax),%eax
0855661c +0x1fa:  movzwl %ax,%eax
0855661f +0x1fd:  mov    -0x14(%ebp),%edx
08556622 +0x200:  add    $0xa2,%edx
08556628 +0x206:  mov    %eax,0x8(%esp)
0855662c +0x20a:  mov    0x14(%ebp),%eax
0855662f +0x20d:  mov    %eax,0x4(%esp)
08556633 +0x211:  mov    %edx,(%esp)
08556636 +0x214:  call   0807d8d0 <_init+0x1c8>
0855663b +0x219:  mov    -0xc(%ebp),%eax
0855663e +0x21c:  mov    %eax,(%esp)
08556641 +0x21f:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08556646 +0x224:  mov    -0x14(%ebp),%edx
08556649 +0x227:  mov    %eax,0x80(%edx)
0855664f +0x22d:  mov    -0xc(%ebp),%eax
08556652 +0x230:  mov    %eax,(%esp)
08556655 +0x233:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0855665a +0x238:  mov    -0x14(%ebp),%edx
0855665d +0x23b:  mov    %eax,0x84(%edx)
08556663 +0x241:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08556668 +0x246:  lea    -0x1c(%ebp),%edx
0855666b +0x249:  mov    %edx,0x8(%esp)
0855666f +0x24d:  movl   $0x2,0x4(%esp)
08556677 +0x255:  mov    %eax,(%esp)
0855667a +0x258:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0855667f +0x25d:  jmp    0855669c <+0x27a>
08556681 +0x25f:  mov    %edx,%ebx
08556683 +0x261:  mov    %eax,%esi
08556685 +0x263:  lea    -0x1c(%ebp),%eax
08556688 +0x266:  mov    %eax,(%esp)
0855668b +0x269:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556690 +0x26e:  mov    %esi,%eax
08556692 +0x270:  mov    %ebx,%edx
08556694 +0x272:  mov    %eax,(%esp)
08556697 +0x275:  call   08ae3750 <_Unwind_Resume>
0855669c +0x27a:  lea    -0x1c(%ebp),%eax
0855669f +0x27d:  mov    %eax,(%esp)
085566a2 +0x280:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085566a7 +0x285:  add    $0x30,%esp
085566aa +0x288:  pop    %ebx
085566ab +0x289:  pop    %esi
085566ac +0x28a:  pop    %ebp
085566ad +0x28b:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail @ 0x8556422

/* WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*,
   int) */

void WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail
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
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x83f);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08556474 to 0855667e has its CatchHandler @ 08556681 */
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
      *(undefined2 *)(local_18 + 0xa0) = 0;
      memset(local_18 + 0xa2,0,0x100);
      if ((param_4 != (char *)0x0) && (param_5 != 0)) {
        *(short *)(local_18 + 0xa0) = (short)param_5;
        strncpy((char *)(local_18 + 0xa2),param_4,(uint)*(ushort *)(local_18 + 0xa0));
      }
      uVar5 = CItem::getUsablePeriod((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x80) = uVar5;
      uVar5 = CItem::getExpirationDate((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x84) = uVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
  }
  CStreamGuard::~CStreamGuard(local_20);
  return;
}
```
