# process_packet_jpn

`_ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_AddFriend` | `0x081cb30a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb30a  _ZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cb30a, 0x081cb4e5]
081cb30a +0x000:  push   %ebp
081cb30b +0x001:  mov    %esp,%ebp
081cb30d +0x003:  push   %esi
081cb30e +0x004:  push   %ebx
081cb30f +0x005:  sub    $0x40,%esp
081cb312 +0x008:  mov    0x14(%ebp),%eax
081cb315 +0x00b:  mov    %eax,-0x14(%ebp)
081cb318 +0x00e:  mov    0x10(%ebp),%eax
081cb31b +0x011:  mov    %eax,0x8(%esp)
081cb31f +0x015:  mov    0xc(%ebp),%eax
081cb322 +0x018:  mov    %eax,0x4(%esp)
081cb326 +0x01c:  mov    0x8(%ebp),%eax
081cb329 +0x01f:  mov    %eax,(%esp)
081cb32c +0x022:  call   081cb274 <_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_AddFriend::check_error(CUser*, MSG_BASE&)
081cb331 +0x027:  mov    %eax,%edx
081cb333 +0x029:  mov    -0x14(%ebp),%eax
081cb336 +0x02c:  mov    %edx,0x4(%eax)
081cb339 +0x02f:  mov    -0x14(%ebp),%eax
081cb33c +0x032:  mov    0x4(%eax),%eax
081cb33f +0x035:  test   %eax,%eax
081cb341 +0x037:  jle    081cb34d <+0x43>
081cb343 +0x039:  mov    $0x0,%ebx
081cb348 +0x03e:  jmp    081cb4dc <+0x1d2>
081cb34d +0x043:  mov    -0x14(%ebp),%eax
081cb350 +0x046:  mov    0x4(%eax),%eax
081cb353 +0x049:  test   %eax,%eax
081cb355 +0x04b:  jns    081cb397 <+0x8d>
081cb357 +0x04d:  mov    -0x14(%ebp),%eax
081cb35a +0x050:  mov    0x4(%eax),%eax
081cb35d +0x053:  mov    %eax,0x14(%esp)
081cb361 +0x057:  movl   $"Dispatcher_Impl Check_Error No(%d)",0x10(%esp)
081cb369 +0x05f:  movl   $0x20d8,0xc(%esp)
081cb371 +0x067:  movl   $&_ZZN20DisPatcher_AddFriend18process_packet_jpnEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081cb379 +0x06f:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cb381 +0x077:  movl   $0x1,(%esp)
081cb388 +0x07e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081cb38d +0x083:  mov    $0x20d9,%ebx
081cb392 +0x088:  jmp    081cb4dc <+0x1d2>
081cb397 +0x08d:  mov    0x10(%ebp),%eax
081cb39a +0x090:  mov    %eax,-0x10(%ebp)
081cb39d +0x093:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081cb3a2 +0x098:  movl   $0x20ed,0x8(%esp)
081cb3aa +0x0a0:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cb3b2 +0x0a8:  mov    %eax,(%esp)
081cb3b5 +0x0ab:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081cb3ba +0x0b0:  movl   $0x1,0x8(%esp)
081cb3c2 +0x0b8:  mov    %eax,0x4(%esp)
081cb3c6 +0x0bc:  lea    -0x1c(%ebp),%eax
081cb3c9 +0x0bf:  mov    %eax,(%esp)
081cb3cc +0x0c2:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081cb3d1 +0x0c7:  lea    -0x1c(%ebp),%eax
081cb3d4 +0x0ca:  mov    %eax,(%esp)
081cb3d7 +0x0cd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cb3dc +0x0d2:  movl   $0x33e,0x4(%esp)
081cb3e4 +0x0da:  mov    %eax,(%esp)
081cb3e7 +0x0dd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cb3ec +0x0e2:  mov    0xc(%ebp),%eax
081cb3ef +0x0e5:  mov    %eax,(%esp)
081cb3f2 +0x0e8:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cb3f7 +0x0ed:  mov    %eax,%ebx
081cb3f9 +0x0ef:  lea    -0x1c(%ebp),%eax
081cb3fc +0x0f2:  mov    %eax,(%esp)
081cb3ff +0x0f5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cb404 +0x0fa:  mov    %ebx,0x4(%esp)
081cb408 +0x0fe:  mov    %eax,(%esp)
081cb40b +0x101:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cb410 +0x106:  lea    -0x1c(%ebp),%eax
081cb413 +0x109:  mov    %eax,(%esp)
081cb416 +0x10c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cb41b +0x111:  mov    %eax,(%esp)
081cb41e +0x114:  call   08236df0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc49a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc49a
081cb423 +0x119:  mov    %eax,-0xc(%ebp)
081cb426 +0x11c:  cmpl   $0x0,-0xc(%ebp)
081cb42a +0x120:  jne    081cb440 <+0x136>
081cb42c +0x122:  mov    -0x14(%ebp),%eax
081cb42f +0x125:  movl   $0x1,0x4(%eax)
081cb436 +0x12c:  mov    $0x0,%ebx
081cb43b +0x131:  jmp    081cb4d1 <+0x1c7>
081cb440 +0x136:  mov    0xc(%ebp),%eax
081cb443 +0x139:  mov    %eax,(%esp)
081cb446 +0x13c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cb44b +0x141:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081cb451 +0x147:  mov    %eax,0x4(%esp)
081cb455 +0x14b:  mov    %edx,(%esp)
081cb458 +0x14e:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081cb45d +0x153:  test   %al,%al
081cb45f +0x155:  je     081cb468 <+0x15e>
081cb461 +0x157:  mov    $0x0,%eax
081cb466 +0x15c:  jmp    081cb46d <+0x163>
081cb468 +0x15e:  mov    $0x1,%eax
081cb46d +0x163:  mov    -0xc(%ebp),%edx
081cb470 +0x166:  mov    %al,0x4(%edx)
081cb473 +0x169:  mov    -0x10(%ebp),%eax
081cb476 +0x16c:  lea    0x11(%eax),%edx
081cb479 +0x16f:  mov    -0xc(%ebp),%eax
081cb47c +0x172:  add    $0x5,%eax
081cb47f +0x175:  movl   $0x1e,0x8(%esp)
081cb487 +0x17d:  mov    %edx,0x4(%esp)
081cb48b +0x181:  mov    %eax,(%esp)
081cb48e +0x184:  call   0807d8d0 <_init+0x1c8>
081cb493 +0x189:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081cb498 +0x18e:  lea    -0x1c(%ebp),%edx
081cb49b +0x191:  mov    %edx,0x8(%esp)
081cb49f +0x195:  movl   $0x2,0x4(%esp)
081cb4a7 +0x19d:  mov    %eax,(%esp)
081cb4aa +0x1a0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081cb4af +0x1a5:  mov    $0x0,%ebx
081cb4b4 +0x1aa:  jmp    081cb4d1 <+0x1c7>
081cb4b6 +0x1ac:  mov    %edx,%ebx
081cb4b8 +0x1ae:  mov    %eax,%esi
081cb4ba +0x1b0:  lea    -0x1c(%ebp),%eax
081cb4bd +0x1b3:  mov    %eax,(%esp)
081cb4c0 +0x1b6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cb4c5 +0x1bb:  mov    %esi,%eax
081cb4c7 +0x1bd:  mov    %ebx,%edx
081cb4c9 +0x1bf:  mov    %eax,(%esp)
081cb4cc +0x1c2:  call   08ae3750 <_Unwind_Resume>
081cb4d1 +0x1c7:  lea    -0x1c(%ebp),%eax
081cb4d4 +0x1ca:  mov    %eax,(%esp)
081cb4d7 +0x1cd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cb4dc +0x1d2:  mov    %ebx,%eax
081cb4de +0x1d4:  add    $0x40,%esp
081cb4e1 +0x1d7:  pop    %ebx
081cb4e2 +0x1d8:  pop    %esi
081cb4e3 +0x1d9:  pop    %ebp
081cb4e4 +0x1da:  ret
081cb4e5 +0x1db:  nop
```

## 反编译 C

```c
// DisPatcher_AddFriend::process_packet_jpn @ 0x81cb30a

/* DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_AddFriend::process_packet_jpn
          (DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  uint uVar6;
  CStreamGuard local_20 [8];
  ParamBase *local_18;
  MSG_BASE *local_14;
  SIG_CHECK_ADD_FRIEND *local_10;
  
  local_18 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar2;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "int DisPatcher_AddFriend::process_packet_jpn(CUser*, MSG_BASE&, ParamBase&)",
                 0x20d8,"Dispatcher_Impl Check_Error No(%d)",*(undefined4 *)(local_18 + 4));
      uVar2 = 0x20d9;
    }
    else {
      local_14 = param_2;
      pSVar3 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x20ed);
      CStreamGuard::CStreamGuard(local_20,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 081cb3e7 to 081cb4ae has its CatchHandler @ 081cb4b6 */
      CStreamGuard::operator<<(pCVar4,0x33e);
      iVar5 = CUser::GetUID(param_1);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_ADD_FRIEND>(pCVar4);
      if (local_10 == (SIG_CHECK_ADD_FRIEND *)0x0) {
        *(undefined4 *)(local_18 + 4) = 1;
      }
      else {
        uVar6 = CUser::get_acc_id(param_1);
        cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
        local_10[4] = (SIG_CHECK_ADD_FRIEND)(cVar1 == '\0');
        strncpy((char *)(local_10 + 5),(char *)(local_14 + 0x11),0x1e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
      }
      uVar2 = 0;
      CStreamGuard::~CStreamGuard(local_20);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
