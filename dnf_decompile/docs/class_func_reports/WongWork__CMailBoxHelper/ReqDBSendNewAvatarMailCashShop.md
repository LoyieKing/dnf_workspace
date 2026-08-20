# ReqDBSendNewAvatarMailCashShop

`_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i`

`WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char const*, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556f16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556f16  _ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i
#           WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char const*, char const*, int)
# range [0x08556f16, 0x0855719f]
08556f16 +0x000:  push   %ebp
08556f17 +0x001:  mov    %esp,%ebp
08556f19 +0x003:  push   %esi
08556f1a +0x004:  push   %ebx
08556f1b +0x005:  sub    $0x70,%esp
08556f1e +0x008:  mov    0x18(%ebp),%edx
08556f21 +0x00b:  mov    0x1c(%ebp),%eax
08556f24 +0x00e:  mov    %dl,-0x3c(%ebp)
08556f27 +0x011:  mov    %al,-0x40(%ebp)
08556f2a +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08556f2f +0x019:  movl   $0x976,0x8(%esp)
08556f37 +0x021:  movl   $"MailBox.cpp",0x4(%esp)
08556f3f +0x029:  mov    %eax,(%esp)
08556f42 +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08556f47 +0x031:  movl   $0x1,0x8(%esp)
08556f4f +0x039:  mov    %eax,0x4(%esp)
08556f53 +0x03d:  lea    -0x18(%ebp),%eax
08556f56 +0x040:  mov    %eax,(%esp)
08556f59 +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08556f5e +0x048:  lea    -0x18(%ebp),%eax
08556f61 +0x04b:  mov    %eax,(%esp)
08556f64 +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556f69 +0x053:  movl   $0xc5,0x4(%esp)
08556f71 +0x05b:  mov    %eax,(%esp)
08556f74 +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556f79 +0x063:  mov    0x8(%ebp),%eax
08556f7c +0x066:  mov    %eax,(%esp)
08556f7f +0x069:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08556f84 +0x06e:  mov    %eax,%ebx
08556f86 +0x070:  lea    -0x18(%ebp),%eax
08556f89 +0x073:  mov    %eax,(%esp)
08556f8c +0x076:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556f91 +0x07b:  mov    %ebx,0x4(%esp)
08556f95 +0x07f:  mov    %eax,(%esp)
08556f98 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556f9d +0x087:  lea    -0x18(%ebp),%eax
08556fa0 +0x08a:  mov    %eax,(%esp)
08556fa3 +0x08d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08556fa8 +0x092:  mov    %eax,(%esp)
08556fab +0x095:  call   08558b10 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1671>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1671
08556fb0 +0x09a:  mov    %eax,-0x10(%ebp)
08556fb3 +0x09d:  mov    -0x10(%ebp),%eax
08556fb6 +0x0a0:  movl   $0x0,(%eax)
08556fbc +0x0a6:  mov    0x8(%ebp),%eax
08556fbf +0x0a9:  mov    %eax,(%esp)
08556fc2 +0x0ac:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08556fc7 +0x0b1:  mov    -0x10(%ebp),%edx
08556fca +0x0b4:  add    $0x4,%edx
08556fcd +0x0b7:  movl   $0x1d,0x8(%esp)
08556fd5 +0x0bf:  mov    %eax,0x4(%esp)
08556fd9 +0x0c3:  mov    %edx,(%esp)
08556fdc +0x0c6:  call   0807d8d0 <_init+0x1c8>
08556fe1 +0x0cb:  mov    -0x10(%ebp),%eax
08556fe4 +0x0ce:  mov    0xc(%ebp),%edx
08556fe7 +0x0d1:  mov    %edx,0x24(%eax)
08556fea +0x0d4:  mov    0x8(%ebp),%eax
08556fed +0x0d7:  mov    %eax,(%esp)
08556ff0 +0x0da:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08556ff5 +0x0df:  mov    %eax,%edx
08556ff7 +0x0e1:  mov    -0x10(%ebp),%eax
08556ffa +0x0e4:  mov    %edx,0x28(%eax)
08556ffd +0x0e7:  movsbl -0x3c(%ebp),%edx
08557001 +0x0eb:  mov    0x10(%ebp),%eax
08557004 +0x0ee:  mov    -0x10(%ebp),%ecx
08557007 +0x0f1:  lea    0x2c(%ecx),%ebx
0855700a +0x0f4:  movl   $0x0,0x24(%esp)
08557012 +0x0fc:  movl   $0x2,0x20(%esp)
0855701a +0x104:  mov    0x20(%ebp),%ecx
0855701d +0x107:  mov    %ecx,0x1c(%esp)
08557021 +0x10b:  mov    %edx,0x18(%esp)
08557025 +0x10f:  movl   $0x1,0x14(%esp)
0855702d +0x117:  mov    0x14(%ebp),%edx
08557030 +0x11a:  mov    %edx,0x10(%esp)
08557034 +0x11e:  movl   $0x0,0xc(%esp)
0855703c +0x126:  mov    %eax,0x8(%esp)
08557040 +0x12a:  mov    0xc(%ebp),%eax
08557043 +0x12d:  mov    %eax,0x4(%esp)
08557047 +0x131:  mov    %ebx,(%esp)
0855704a +0x134:  call   0850d3c8 <_GLOBAL__I_g_emptySlot+0x2fd>  ; global constructors keyed to g_emptySlot+0x2fd
0855704f +0x139:  mov    -0x10(%ebp),%eax
08557052 +0x13c:  movb   $0x1,0x1a2(%eax)
08557059 +0x143:  mov    -0x10(%ebp),%eax
0855705c +0x146:  movw   $0x0,0xa0(%eax)
08557065 +0x14f:  mov    -0x10(%ebp),%eax
08557068 +0x152:  add    $0xa2,%eax
0855706d +0x157:  movl   $0x100,0x8(%esp)
08557075 +0x15f:  movl   $0x0,0x4(%esp)
0855707d +0x167:  mov    %eax,(%esp)
08557080 +0x16a:  call   0807dcc0 <_init+0x5b8>
08557085 +0x16f:  cmpl   $0x0,0x24(%ebp)
08557089 +0x173:  je     085570c9 <+0x1b3>
0855708b +0x175:  cmpl   $0x0,0x28(%ebp)
0855708f +0x179:  je     085570c9 <+0x1b3>
08557091 +0x17b:  mov    0x28(%ebp),%eax
08557094 +0x17e:  mov    %eax,%edx
08557096 +0x180:  mov    -0x10(%ebp),%eax
08557099 +0x183:  mov    %dx,0xa0(%eax)
085570a0 +0x18a:  mov    -0x10(%ebp),%eax
085570a3 +0x18d:  movzwl 0xa0(%eax),%eax
085570aa +0x194:  movzwl %ax,%eax
085570ad +0x197:  mov    -0x10(%ebp),%edx
085570b0 +0x19a:  add    $0xa2,%edx
085570b6 +0x1a0:  mov    %eax,0x8(%esp)
085570ba +0x1a4:  mov    0x24(%ebp),%eax
085570bd +0x1a7:  mov    %eax,0x4(%esp)
085570c1 +0x1ab:  mov    %edx,(%esp)
085570c4 +0x1ae:  call   0807d8d0 <_init+0x1c8>
085570c9 +0x1b3:  lea    -0x36(%ebp),%eax
085570cc +0x1b6:  mov    %eax,(%esp)
085570cf +0x1b9:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
085570d4 +0x1be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085570d9 +0x1c3:  mov    0x10(%ebp),%edx
085570dc +0x1c6:  mov    %edx,0x4(%esp)
085570e0 +0x1ca:  mov    %eax,(%esp)
085570e3 +0x1cd:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085570e8 +0x1d2:  mov    %eax,-0xc(%ebp)
085570eb +0x1d5:  cmpl   $0x0,-0xc(%ebp)
085570ef +0x1d9:  je     0855710e <+0x1f8>
085570f1 +0x1db:  mov    -0xc(%ebp),%eax
085570f4 +0x1de:  mov    (%eax),%eax
085570f6 +0x1e0:  add    $0x10,%eax
085570f9 +0x1e3:  mov    (%eax),%edx
085570fb +0x1e5:  mov    -0xc(%ebp),%eax
085570fe +0x1e8:  mov    %eax,(%esp)
08557101 +0x1eb:  call   *%edx
08557103 +0x1ed:  test   %al,%al
08557105 +0x1ef:  je     0855710e <+0x1f8>
08557107 +0x1f1:  mov    $0x1,%eax
0855710c +0x1f6:  jmp    08557113 <+0x1fd>
0855710e +0x1f8:  mov    $0x0,%eax
08557113 +0x1fd:  test   %al,%al
08557115 +0x1ff:  je     08557131 <+0x21b>
08557117 +0x201:  movsbl -0x40(%ebp),%edx
0855711b +0x205:  mov    -0xc(%ebp),%eax
0855711e +0x208:  lea    -0x36(%ebp),%ecx
08557121 +0x20b:  mov    %ecx,0x8(%esp)
08557125 +0x20f:  mov    %edx,0x4(%esp)
08557129 +0x213:  mov    %eax,(%esp)
0855712c +0x216:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
08557131 +0x21b:  mov    -0x10(%ebp),%eax
08557134 +0x21e:  lea    0x2c(%eax),%edx
08557137 +0x221:  lea    -0x36(%ebp),%eax
0855713a +0x224:  mov    %eax,0x4(%esp)
0855713e +0x228:  mov    %edx,(%esp)
08557141 +0x22b:  call   0850d44c <_GLOBAL__I_g_emptySlot+0x381>  ; global constructors keyed to g_emptySlot+0x381
08557146 +0x230:  mov    -0x10(%ebp),%eax
08557149 +0x233:  add    $0x7b,%eax
0855714c +0x236:  mov    %eax,(%esp)
0855714f +0x239:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
08557154 +0x23e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08557159 +0x243:  lea    -0x18(%ebp),%edx
0855715c +0x246:  mov    %edx,0x8(%esp)
08557160 +0x24a:  movl   $0x2,0x4(%esp)
08557168 +0x252:  mov    %eax,(%esp)
0855716b +0x255:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08557170 +0x25a:  jmp    0855718d <+0x277>
08557172 +0x25c:  mov    %edx,%ebx
08557174 +0x25e:  mov    %eax,%esi
08557176 +0x260:  lea    -0x18(%ebp),%eax
08557179 +0x263:  mov    %eax,(%esp)
0855717c +0x266:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08557181 +0x26b:  mov    %esi,%eax
08557183 +0x26d:  mov    %ebx,%edx
08557185 +0x26f:  mov    %eax,(%esp)
08557188 +0x272:  call   08ae3750 <_Unwind_Resume>
0855718d +0x277:  lea    -0x18(%ebp),%eax
08557190 +0x27a:  mov    %eax,(%esp)
08557193 +0x27d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08557198 +0x282:  add    $0x70,%esp
0855719b +0x285:  pop    %ebx
0855719c +0x286:  pop    %esi
0855719d +0x287:  pop    %ebp
0855719e +0x288:  ret
0855719f +0x289:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop @ 0x8556f16

/* WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char
   const*, char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
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
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x976);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556f74 to 0855716f has its CatchHandler @ 08557172 */
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
  local_14[0x1a2] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
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
      goto LAB_08557113;
    }
  }
  bVar1 = false;
LAB_08557113:
  if (bVar1) {
    CEquipItem::getAvatarSocket(local_10,(int)param_6,local_3a);
  }
  SIG_AVATAR_INSERT::setJewelSocket((SIG_AVATAR_INSERT *)(local_14 + 0x2c),local_3a);
  stAvatarExpansionInfo_t::init((stAvatarExpansionInfo_t *)(local_14 + 0x7b));
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
