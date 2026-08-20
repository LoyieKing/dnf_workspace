# RequestDBETC

`_ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBETC(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c7602` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7602  _ZN23DisPatcher_SelectCharac12RequestDBETCEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBETC(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c7602, 0x081c7835]
081c7602 +0x000:  push   %ebp
081c7603 +0x001:  mov    %esp,%ebp
081c7605 +0x003:  push   %esi
081c7606 +0x004:  push   %ebx
081c7607 +0x005:  sub    $0x20,%esp
081c760a +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081c760f +0x00d:  movl   $0x1814,0x8(%esp)
081c7617 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c761f +0x01d:  mov    %eax,(%esp)
081c7622 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081c7627 +0x025:  movl   $0x1,0x8(%esp)
081c762f +0x02d:  mov    %eax,0x4(%esp)
081c7633 +0x031:  lea    -0x14(%ebp),%eax
081c7636 +0x034:  mov    %eax,(%esp)
081c7639 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c763e +0x03c:  lea    -0x14(%ebp),%eax
081c7641 +0x03f:  mov    %eax,(%esp)
081c7644 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7649 +0x047:  movl   $0x20,0x4(%esp)
081c7651 +0x04f:  mov    %eax,(%esp)
081c7654 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7659 +0x057:  mov    0xc(%ebp),%eax
081c765c +0x05a:  mov    %eax,(%esp)
081c765f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7664 +0x062:  mov    %eax,%ebx
081c7666 +0x064:  lea    -0x14(%ebp),%eax
081c7669 +0x067:  mov    %eax,(%esp)
081c766c +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7671 +0x06f:  mov    %ebx,0x4(%esp)
081c7675 +0x073:  mov    %eax,(%esp)
081c7678 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c767d +0x07b:  movl   $0xb,0x4(%esp)
081c7685 +0x083:  mov    0xc(%ebp),%eax
081c7688 +0x086:  mov    %eax,(%esp)
081c768b +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c7690 +0x08e:  mov    0xc(%ebp),%eax
081c7693 +0x091:  mov    %eax,(%esp)
081c7696 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c769b +0x099:  test   %al,%al
081c769d +0x09b:  je     081c76e7 <+0xe5>
081c769f +0x09d:  mov    0xc(%ebp),%eax
081c76a2 +0x0a0:  mov    %eax,(%esp)
081c76a5 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c76aa +0x0a8:  mov    %eax,%ebx
081c76ac +0x0aa:  lea    -0x14(%ebp),%eax
081c76af +0x0ad:  mov    %eax,(%esp)
081c76b2 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c76b7 +0x0b5:  mov    %ebx,0x4(%esp)
081c76bb +0x0b9:  mov    %eax,(%esp)
081c76be +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c76c3 +0x0c1:  mov    0xc(%ebp),%eax
081c76c6 +0x0c4:  mov    %eax,(%esp)
081c76c9 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c76ce +0x0cc:  mov    %eax,%ebx
081c76d0 +0x0ce:  lea    -0x14(%ebp),%eax
081c76d3 +0x0d1:  mov    %eax,(%esp)
081c76d6 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c76db +0x0d9:  mov    %ebx,0x4(%esp)
081c76df +0x0dd:  mov    %eax,(%esp)
081c76e2 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c76e7 +0x0e5:  lea    -0x14(%ebp),%eax
081c76ea +0x0e8:  mov    %eax,(%esp)
081c76ed +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c76f2 +0x0f0:  mov    %eax,(%esp)
081c76f5 +0x0f3:  call   08236d9e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc448>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc448
081c76fa +0x0f8:  mov    %eax,-0xc(%ebp)
081c76fd +0x0fb:  movl   $&_ZL14gUnicodeBuffer+0xa634,0x8(%esp)
081c7705 +0x103:  movl   $0x0,0x4(%esp)
081c770d +0x10b:  mov    -0xc(%ebp),%eax
081c7710 +0x10e:  mov    %eax,(%esp)
081c7713 +0x111:  call   0807dcc0 <_init+0x5b8>
081c7718 +0x116:  mov    0x10(%ebp),%eax
081c771b +0x119:  movzbl 0xd(%eax),%eax
081c771f +0x11d:  movsbl %al,%eax
081c7722 +0x120:  mov    %eax,0x4(%esp)
081c7726 +0x124:  mov    0xc(%ebp),%eax
081c7729 +0x127:  mov    %eax,(%esp)
081c772c +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7731 +0x12f:  mov    %eax,%edx
081c7733 +0x131:  mov    -0xc(%ebp),%eax
081c7736 +0x134:  mov    %edx,0x4(%eax)
081c7739 +0x137:  mov    0xc(%ebp),%eax
081c773c +0x13a:  mov    %eax,(%esp)
081c773f +0x13d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c7744 +0x142:  mov    -0xc(%ebp),%edx
081c7747 +0x145:  mov    %eax,(%edx)
081c7749 +0x147:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081c774e +0x14c:  mov    0x378(%eax),%edx
081c7754 +0x152:  mov    -0xc(%ebp),%eax
081c7757 +0x155:  mov    %edx,0x2d30(%eax)
081c775d +0x15b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081c7762 +0x160:  mov    %eax,(%esp)
081c7765 +0x163:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
081c776a +0x168:  mov    -0xc(%ebp),%edx
081c776d +0x16b:  mov    %eax,0x2d34(%edx)
081c7773 +0x171:  mov    0x10(%ebp),%eax
081c7776 +0x174:  mov    0xe(%eax),%edx
081c7779 +0x177:  mov    -0xc(%ebp),%eax
081c777c +0x17a:  mov    %edx,0xc(%eax)
081c777f +0x17d:  mov    -0xc(%ebp),%eax
081c7782 +0x180:  add    $0x10,%eax
081c7785 +0x183:  mov    %eax,(%esp)
081c7788 +0x186:  call   0822edf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x449e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x449e
081c778d +0x18b:  mov    0x10(%ebp),%eax
081c7790 +0x18e:  movzbl 0xd(%eax),%eax
081c7794 +0x192:  movsbl %al,%eax
081c7797 +0x195:  mov    %eax,0x4(%esp)
081c779b +0x199:  mov    0xc(%ebp),%eax
081c779e +0x19c:  mov    %eax,(%esp)
081c77a1 +0x19f:  call   0822ff0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x55b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x55b6
081c77a6 +0x1a4:  movsbl %al,%edx
081c77a9 +0x1a7:  mov    -0xc(%ebp),%eax
081c77ac +0x1aa:  mov    %edx,&_ZL14gUnicodeBuffer+0xa584(%eax)
081c77b2 +0x1b0:  mov    0xc(%ebp),%eax
081c77b5 +0x1b3:  mov    %eax,(%esp)
081c77b8 +0x1b6:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c77bd +0x1bb:  test   %al,%al
081c77bf +0x1bd:  je     081c77e4 <+0x1e2>
081c77c1 +0x1bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c77c6 +0x1c4:  lea    -0x14(%ebp),%edx
081c77c9 +0x1c7:  mov    %edx,0x8(%esp)
081c77cd +0x1cb:  movl   $0x5,0x4(%esp)
081c77d5 +0x1d3:  mov    %eax,(%esp)
081c77d8 +0x1d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c77dd +0x1db:  mov    $0x1,%ebx
081c77e2 +0x1e0:  jmp    081c7822 <+0x220>
081c77e4 +0x1e2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c77e9 +0x1e7:  lea    -0x14(%ebp),%edx
081c77ec +0x1ea:  mov    %edx,0x8(%esp)
081c77f0 +0x1ee:  movl   $0x2,0x4(%esp)
081c77f8 +0x1f6:  mov    %eax,(%esp)
081c77fb +0x1f9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7800 +0x1fe:  mov    $0x1,%ebx
081c7805 +0x203:  jmp    081c7822 <+0x220>
081c7807 +0x205:  mov    %edx,%ebx
081c7809 +0x207:  mov    %eax,%esi
081c780b +0x209:  lea    -0x14(%ebp),%eax
081c780e +0x20c:  mov    %eax,(%esp)
081c7811 +0x20f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7816 +0x214:  mov    %esi,%eax
081c7818 +0x216:  mov    %ebx,%edx
081c781a +0x218:  mov    %eax,(%esp)
081c781d +0x21b:  call   08ae3750 <_Unwind_Resume>
081c7822 +0x220:  lea    -0x14(%ebp),%eax
081c7825 +0x223:  mov    %eax,(%esp)
081c7828 +0x226:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c782d +0x22b:  mov    %ebx,%eax
081c782f +0x22d:  add    $0x20,%esp
081c7832 +0x230:  pop    %ebx
081c7833 +0x231:  pop    %esi
081c7834 +0x232:  pop    %ebp
081c7835 +0x233:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBETC @ 0x81c7602

/* DisPatcher_SelectCharac::RequestDBETC(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBETC
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CEnvironment *this_00;
  CStreamGuard local_18 [8];
  SIG_LOAD_ETC *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x1814);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7654 to 081c77ff has its CatchHandler @ 081c7807 */
  CStreamGuard::operator<<(pCVar3,0x20);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,0xb);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_ETC>(pCVar3);
  memset(local_10,0,0x14b60);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  iVar4 = G_CEnvironment();
  *(undefined4 *)(local_10 + 0x2d30) = *(undefined4 *)(iVar4 + 0x378);
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar5 = CEnvironment::get_channel_no(this_00);
  *(undefined4 *)(local_10 + 0x2d34) = uVar5;
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(param_2 + 0xe);
  TAG_CHARAC_ETC_DATA::clear((TAG_CHARAC_ETC_DATA *)(local_10 + 0x10));
  cVar1 = CUser::GetCharacJob(param_1,(int)(char)param_2[0xd]);
  *(int *)(local_10 + 0x14ab0) = (int)cVar1;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
