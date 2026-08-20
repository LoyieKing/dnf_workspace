# dispatch_sig

`_ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GenCeraTicket` | `0x081feb12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081feb12  _ZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&)
# range [0x081feb12, 0x081feca9]
081feb12 +0x000:  push   %ebp
081feb13 +0x001:  mov    %esp,%ebp
081feb15 +0x003:  push   %esi
081feb16 +0x004:  push   %ebx
081feb17 +0x005:  sub    $0x40,%esp
081feb1a +0x008:  mov    0xc(%ebp),%eax
081feb1d +0x00b:  mov    %eax,(%esp)
081feb20 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081feb25 +0x013:  cmp    $0x2,%eax
081feb28 +0x016:  jle    081feb39 <+0x27>
081feb2a +0x018:  mov    0xc(%ebp),%eax
081feb2d +0x01b:  mov    %eax,(%esp)
081feb30 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081feb35 +0x023:  test   %eax,%eax
081feb37 +0x025:  jne    081feb40 <+0x2e>
081feb39 +0x027:  mov    $0x1,%eax
081feb3e +0x02c:  jmp    081feb45 <+0x33>
081feb40 +0x02e:  mov    $0x0,%eax
081feb45 +0x033:  test   %al,%al
081feb47 +0x035:  je     081feb74 <+0x62>
081feb49 +0x037:  movl   $0x0,0xc(%esp)
081feb51 +0x03f:  movl   $0x0,0x8(%esp)
081feb59 +0x047:  movl   $&_ZZN24Dispatcher_GenCeraTicket12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081feb61 +0x04f:  movl   $0x91f0,(%esp)
081feb68 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081feb6d +0x05b:  mov    %eax,%ebx
081feb6f +0x05d:  jmp    081feca1 <+0x18f>
081feb74 +0x062:  movl   $0xffff,(%esp)
081feb7b +0x069:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081feb80 +0x06e:  mov    %eax,-0xc(%ebp)
081feb83 +0x071:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081feb88 +0x076:  movl   $0x91f5,0x8(%esp)
081feb90 +0x07e:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081feb98 +0x086:  mov    %eax,(%esp)
081feb9b +0x089:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081feba0 +0x08e:  movl   $0x1,0x8(%esp)
081feba8 +0x096:  mov    %eax,0x4(%esp)
081febac +0x09a:  lea    -0x14(%ebp),%eax
081febaf +0x09d:  mov    %eax,(%esp)
081febb2 +0x0a0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081febb7 +0x0a5:  lea    -0x14(%ebp),%eax
081febba +0x0a8:  mov    %eax,(%esp)
081febbd +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081febc2 +0x0b0:  movl   $0x49,0x4(%esp)
081febca +0x0b8:  mov    %eax,(%esp)
081febcd +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081febd2 +0x0c0:  mov    0xc(%ebp),%eax
081febd5 +0x0c3:  mov    %eax,(%esp)
081febd8 +0x0c6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081febdd +0x0cb:  mov    %eax,%ebx
081febdf +0x0cd:  lea    -0x14(%ebp),%eax
081febe2 +0x0d0:  mov    %eax,(%esp)
081febe5 +0x0d3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081febea +0x0d8:  mov    %ebx,0x4(%esp)
081febee +0x0dc:  mov    %eax,(%esp)
081febf1 +0x0df:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081febf6 +0x0e4:  mov    0xc(%ebp),%eax
081febf9 +0x0e7:  mov    %eax,(%esp)
081febfc +0x0ea:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fec01 +0x0ef:  mov    %eax,%ebx
081fec03 +0x0f1:  lea    -0x14(%ebp),%eax
081fec06 +0x0f4:  mov    %eax,(%esp)
081fec09 +0x0f7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fec0e +0x0fc:  mov    %ebx,0x4(%esp)
081fec12 +0x100:  mov    %eax,(%esp)
081fec15 +0x103:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
081fec1a +0x108:  lea    -0x14(%ebp),%eax
081fec1d +0x10b:  mov    %eax,(%esp)
081fec20 +0x10e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fec25 +0x113:  mov    -0xc(%ebp),%edx
081fec28 +0x116:  mov    %edx,0x4(%esp)
081fec2c +0x11a:  mov    %eax,(%esp)
081fec2f +0x11d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081fec34 +0x122:  lea    -0x34(%ebp),%eax
081fec37 +0x125:  mov    %eax,(%esp)
081fec3a +0x128:  call   084b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>  ; WongWork::CGenUniqueNo::GenUniqueNo(char*)
081fec3f +0x12d:  mov    %eax,%ebx
081fec41 +0x12f:  lea    -0x14(%ebp),%eax
081fec44 +0x132:  mov    %eax,(%esp)
081fec47 +0x135:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081fec4c +0x13a:  mov    %ebx,0x4(%esp)
081fec50 +0x13e:  mov    %eax,(%esp)
081fec53 +0x141:  call   0822ad8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x434>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x434
081fec58 +0x146:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081fec5d +0x14b:  lea    -0x14(%ebp),%edx
081fec60 +0x14e:  mov    %edx,0x8(%esp)
081fec64 +0x152:  movl   $0x2,0x4(%esp)
081fec6c +0x15a:  mov    %eax,(%esp)
081fec6f +0x15d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081fec74 +0x162:  mov    $0x0,%ebx
081fec79 +0x167:  lea    -0x14(%ebp),%eax
081fec7c +0x16a:  mov    %eax,(%esp)
081fec7f +0x16d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081fec84 +0x172:  jmp    081feca1 <+0x18f>
081fec86 +0x174:  mov    %edx,%ebx
081fec88 +0x176:  mov    %eax,%esi
081fec8a +0x178:  lea    -0x14(%ebp),%eax
081fec8d +0x17b:  mov    %eax,(%esp)
081fec90 +0x17e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081fec95 +0x183:  mov    %esi,%eax
081fec97 +0x185:  mov    %ebx,%edx
081fec99 +0x187:  mov    %eax,(%esp)
081fec9c +0x18a:  call   08ae3750 <_Unwind_Resume>
081feca1 +0x18f:  mov    %ebx,%eax
081feca3 +0x191:  add    $0x40,%esp
081feca6 +0x194:  pop    %ebx
081feca7 +0x195:  pop    %esi
081feca8 +0x196:  pop    %ebp
081feca9 +0x197:  ret
```

## 反编译 C

```c
// Dispatcher_GenCeraTicket::dispatch_sig @ 0x81feb12

/* Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GenCeraTicket::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  char *pcVar7;
  char local_38 [32];
  CStreamGuard local_18 [8];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081feb45;
    }
  }
  bVar1 = true;
LAB_081feb45:
  if (bVar1) {
    uVar3 = LineFunc(0x91f0,"virtual int Dispatcher_GenCeraTicket::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_10 = get_rand_int(0xffff);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x91f5);
    CStreamGuard::CStreamGuard(local_18,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081febcd to 081fec73 has its CatchHandler @ 081fec86 */
    CStreamGuard::operator<<(pCVar5,0x49);
    iVar2 = CUser::GetUID((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,iVar2);
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,uVar6);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,local_10);
    pcVar7 = (char *)WongWork::CGenUniqueNo::GenUniqueNo(local_38);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar5,pcVar7);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    uVar3 = 0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return uVar3;
}
```
