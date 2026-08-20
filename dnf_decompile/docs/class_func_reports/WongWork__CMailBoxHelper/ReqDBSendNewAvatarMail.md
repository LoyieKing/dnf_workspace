# ReqDBSendNewAvatarMail

`_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i`

`WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085561b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085561b0  _ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i
#           WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
# range [0x085561b0, 0x08556421]
085561b0 +0x000:  push   %ebp
085561b1 +0x001:  mov    %esp,%ebp
085561b3 +0x003:  push   %esi
085561b4 +0x004:  push   %ebx
085561b5 +0x005:  sub    $0x70,%esp
085561b8 +0x008:  mov    0x18(%ebp),%edx
085561bb +0x00b:  mov    0x1c(%ebp),%eax
085561be +0x00e:  mov    %dl,-0x3c(%ebp)
085561c1 +0x011:  mov    %al,-0x40(%ebp)
085561c4 +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085561c9 +0x019:  movl   $0x7dd,0x8(%esp)
085561d1 +0x021:  movl   $"MailBox.cpp",0x4(%esp)
085561d9 +0x029:  mov    %eax,(%esp)
085561dc +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085561e1 +0x031:  movl   $0x1,0x8(%esp)
085561e9 +0x039:  mov    %eax,0x4(%esp)
085561ed +0x03d:  lea    -0x18(%ebp),%eax
085561f0 +0x040:  mov    %eax,(%esp)
085561f3 +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085561f8 +0x048:  lea    -0x18(%ebp),%eax
085561fb +0x04b:  mov    %eax,(%esp)
085561fe +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556203 +0x053:  movl   $0xc5,0x4(%esp)
0855620b +0x05b:  mov    %eax,(%esp)
0855620e +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556213 +0x063:  mov    0x8(%ebp),%eax
08556216 +0x066:  mov    %eax,(%esp)
08556219 +0x069:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0855621e +0x06e:  mov    %eax,%ebx
08556220 +0x070:  lea    -0x18(%ebp),%eax
08556223 +0x073:  mov    %eax,(%esp)
08556226 +0x076:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0855622b +0x07b:  mov    %ebx,0x4(%esp)
0855622f +0x07f:  mov    %eax,(%esp)
08556232 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556237 +0x087:  lea    -0x18(%ebp),%eax
0855623a +0x08a:  mov    %eax,(%esp)
0855623d +0x08d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08556242 +0x092:  mov    %eax,(%esp)
08556245 +0x095:  call   08558b10 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1671>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1671
0855624a +0x09a:  mov    %eax,-0x10(%ebp)
0855624d +0x09d:  mov    -0x10(%ebp),%eax
08556250 +0x0a0:  movl   $0x0,(%eax)
08556256 +0x0a6:  mov    0x8(%ebp),%eax
08556259 +0x0a9:  mov    %eax,(%esp)
0855625c +0x0ac:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08556261 +0x0b1:  mov    -0x10(%ebp),%edx
08556264 +0x0b4:  add    $0x4,%edx
08556267 +0x0b7:  movl   $0x1d,0x8(%esp)
0855626f +0x0bf:  mov    %eax,0x4(%esp)
08556273 +0x0c3:  mov    %edx,(%esp)
08556276 +0x0c6:  call   0807d8d0 <_init+0x1c8>
0855627b +0x0cb:  mov    -0x10(%ebp),%eax
0855627e +0x0ce:  mov    0xc(%ebp),%edx
08556281 +0x0d1:  mov    %edx,0x24(%eax)
08556284 +0x0d4:  mov    0x8(%ebp),%eax
08556287 +0x0d7:  mov    %eax,(%esp)
0855628a +0x0da:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0855628f +0x0df:  mov    %eax,%edx
08556291 +0x0e1:  mov    -0x10(%ebp),%eax
08556294 +0x0e4:  mov    %edx,0x28(%eax)
08556297 +0x0e7:  movsbl -0x3c(%ebp),%edx
0855629b +0x0eb:  mov    0x10(%ebp),%eax
0855629e +0x0ee:  mov    -0x10(%ebp),%ecx
085562a1 +0x0f1:  lea    0x2c(%ecx),%ebx
085562a4 +0x0f4:  movl   $0x0,0x24(%esp)
085562ac +0x0fc:  movl   $0x2,0x20(%esp)
085562b4 +0x104:  mov    0x20(%ebp),%ecx
085562b7 +0x107:  mov    %ecx,0x1c(%esp)
085562bb +0x10b:  mov    %edx,0x18(%esp)
085562bf +0x10f:  movl   $0x1,0x14(%esp)
085562c7 +0x117:  mov    0x14(%ebp),%edx
085562ca +0x11a:  mov    %edx,0x10(%esp)
085562ce +0x11e:  movl   $0x0,0xc(%esp)
085562d6 +0x126:  mov    %eax,0x8(%esp)
085562da +0x12a:  mov    0xc(%ebp),%eax
085562dd +0x12d:  mov    %eax,0x4(%esp)
085562e1 +0x131:  mov    %ebx,(%esp)
085562e4 +0x134:  call   0850d3c8 <_GLOBAL__I_g_emptySlot+0x2fd>  ; global constructors keyed to g_emptySlot+0x2fd
085562e9 +0x139:  mov    -0x10(%ebp),%eax
085562ec +0x13c:  movw   $0x0,0xa0(%eax)
085562f5 +0x145:  mov    -0x10(%ebp),%eax
085562f8 +0x148:  add    $0xa2,%eax
085562fd +0x14d:  movl   $0x100,0x8(%esp)
08556305 +0x155:  movl   $0x0,0x4(%esp)
0855630d +0x15d:  mov    %eax,(%esp)
08556310 +0x160:  call   0807dcc0 <_init+0x5b8>
08556315 +0x165:  cmpl   $0x0,0x24(%ebp)
08556319 +0x169:  je     08556359 <+0x1a9>
0855631b +0x16b:  cmpl   $0x0,0x28(%ebp)
0855631f +0x16f:  je     08556359 <+0x1a9>
08556321 +0x171:  mov    0x28(%ebp),%eax
08556324 +0x174:  mov    %eax,%edx
08556326 +0x176:  mov    -0x10(%ebp),%eax
08556329 +0x179:  mov    %dx,0xa0(%eax)
08556330 +0x180:  mov    -0x10(%ebp),%eax
08556333 +0x183:  movzwl 0xa0(%eax),%eax
0855633a +0x18a:  movzwl %ax,%eax
0855633d +0x18d:  mov    -0x10(%ebp),%edx
08556340 +0x190:  add    $0xa2,%edx
08556346 +0x196:  mov    %eax,0x8(%esp)
0855634a +0x19a:  mov    0x24(%ebp),%eax
0855634d +0x19d:  mov    %eax,0x4(%esp)
08556351 +0x1a1:  mov    %edx,(%esp)
08556354 +0x1a4:  call   0807d8d0 <_init+0x1c8>
08556359 +0x1a9:  lea    -0x36(%ebp),%eax
0855635c +0x1ac:  mov    %eax,(%esp)
0855635f +0x1af:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
08556364 +0x1b4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08556369 +0x1b9:  mov    0x10(%ebp),%edx
0855636c +0x1bc:  mov    %edx,0x4(%esp)
08556370 +0x1c0:  mov    %eax,(%esp)
08556373 +0x1c3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08556378 +0x1c8:  mov    %eax,-0xc(%ebp)
0855637b +0x1cb:  cmpl   $0x0,-0xc(%ebp)
0855637f +0x1cf:  je     0855639e <+0x1ee>
08556381 +0x1d1:  mov    -0xc(%ebp),%eax
08556384 +0x1d4:  mov    (%eax),%eax
08556386 +0x1d6:  add    $0x10,%eax
08556389 +0x1d9:  mov    (%eax),%edx
0855638b +0x1db:  mov    -0xc(%ebp),%eax
0855638e +0x1de:  mov    %eax,(%esp)
08556391 +0x1e1:  call   *%edx
08556393 +0x1e3:  test   %al,%al
08556395 +0x1e5:  je     0855639e <+0x1ee>
08556397 +0x1e7:  mov    $0x1,%eax
0855639c +0x1ec:  jmp    085563a3 <+0x1f3>
0855639e +0x1ee:  mov    $0x0,%eax
085563a3 +0x1f3:  test   %al,%al
085563a5 +0x1f5:  je     085563c1 <+0x211>
085563a7 +0x1f7:  movsbl -0x40(%ebp),%edx
085563ab +0x1fb:  mov    -0xc(%ebp),%eax
085563ae +0x1fe:  lea    -0x36(%ebp),%ecx
085563b1 +0x201:  mov    %ecx,0x8(%esp)
085563b5 +0x205:  mov    %edx,0x4(%esp)
085563b9 +0x209:  mov    %eax,(%esp)
085563bc +0x20c:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
085563c1 +0x211:  mov    -0x10(%ebp),%eax
085563c4 +0x214:  lea    0x2c(%eax),%edx
085563c7 +0x217:  lea    -0x36(%ebp),%eax
085563ca +0x21a:  mov    %eax,0x4(%esp)
085563ce +0x21e:  mov    %edx,(%esp)
085563d1 +0x221:  call   0850d44c <_GLOBAL__I_g_emptySlot+0x381>  ; global constructors keyed to g_emptySlot+0x381
085563d6 +0x226:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085563db +0x22b:  lea    -0x18(%ebp),%edx
085563de +0x22e:  mov    %edx,0x8(%esp)
085563e2 +0x232:  movl   $0x2,0x4(%esp)
085563ea +0x23a:  mov    %eax,(%esp)
085563ed +0x23d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085563f2 +0x242:  jmp    0855640f <+0x25f>
085563f4 +0x244:  mov    %edx,%ebx
085563f6 +0x246:  mov    %eax,%esi
085563f8 +0x248:  lea    -0x18(%ebp),%eax
085563fb +0x24b:  mov    %eax,(%esp)
085563fe +0x24e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556403 +0x253:  mov    %esi,%eax
08556405 +0x255:  mov    %ebx,%edx
08556407 +0x257:  mov    %eax,(%esp)
0855640a +0x25a:  call   08ae3750 <_Unwind_Resume>
0855640f +0x25f:  lea    -0x18(%ebp),%eax
08556412 +0x262:  mov    %eax,(%esp)
08556415 +0x265:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855641a +0x26a:  add    $0x70,%esp
0855641d +0x26d:  pop    %ebx
0855641e +0x26e:  pop    %esi
0855641f +0x26f:  pop    %ebp
08556420 +0x270:  ret
08556421 +0x271:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail @ 0x85561b0

/* WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*,
   char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail
               (CUser *param_1,int param_2,int param_3,int param_4,char param_5,char param_6,
               char *param_7,char *param_8,int param_9)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  char *__src;
  undefined4 uVar6;
  CDataManager *this;
  stAvatarEmblemInfo_t local_3a [30];
  CStreamGuard local_1c [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_14;
  CEquipItem *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x7dd);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855620e to 085563f1 has its CatchHandler @ 085563f4 */
  CStreamGuard::operator<<(pCVar4,0xc5);
  iVar5 = CUser::GetUID(param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar4);
  *(undefined4 *)local_14 = 0;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_14 + 4),__src,0x1d);
  *(int *)(local_14 + 0x24) = param_2;
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_14 + 0x28) = uVar6;
  SIG_AVATAR_INSERT::set
            ((SIG_AVATAR_INSERT *)(local_14 + 0x2c),param_2,param_3,0,param_4,true,param_5,param_7,2
             ,0);
  *(undefined2 *)(local_14 + 0xa0) = 0;
  memset(local_14 + 0xa2,0,0x100);
  if ((param_8 != (char *)0x0) && (param_9 != 0)) {
    *(short *)(local_14 + 0xa0) = (short)param_9;
    strncpy((char *)(local_14 + 0xa2),param_8,(uint)*(ushort *)(local_14 + 0xa0));
  }
  stAvatarEmblemInfo_t::init(local_3a);
  this = (CDataManager *)G_CDataManager();
  local_10 = (CEquipItem *)CDataManager::find_item(this,param_3);
  if (local_10 != (CEquipItem *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_085563a3;
    }
  }
  bVar1 = false;
LAB_085563a3:
  if (bVar1) {
    CEquipItem::getAvatarSocket(local_10,(int)param_6,local_3a);
  }
  SIG_AVATAR_INSERT::setJewelSocket((SIG_AVATAR_INSERT *)(local_14 + 0x2c),local_3a);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
