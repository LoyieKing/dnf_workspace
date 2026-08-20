# RequestDBDungeonClear

`_ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBDungeonClear(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c7436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7436  _ZN23DisPatcher_SelectCharac21RequestDBDungeonClearEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBDungeonClear(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c7436, 0x081c7601]
081c7436 +0x000:  push   %ebp
081c7437 +0x001:  mov    %esp,%ebp
081c7439 +0x003:  push   %esi
081c743a +0x004:  push   %ebx
081c743b +0x005:  sub    $0x20,%esp
081c743e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c7443 +0x00d:  movl   $0x17f8,0x8(%esp)
081c744b +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c7453 +0x01d:  mov    %eax,(%esp)
081c7456 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c745b +0x025:  movl   $0x1,0x8(%esp)
081c7463 +0x02d:  mov    %eax,0x4(%esp)
081c7467 +0x031:  lea    -0x14(%ebp),%eax
081c746a +0x034:  mov    %eax,(%esp)
081c746d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c7472 +0x03c:  lea    -0x14(%ebp),%eax
081c7475 +0x03f:  mov    %eax,(%esp)
081c7478 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c747d +0x047:  movl   $0xc,0x4(%esp)
081c7485 +0x04f:  mov    %eax,(%esp)
081c7488 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c748d +0x057:  mov    0xc(%ebp),%eax
081c7490 +0x05a:  mov    %eax,(%esp)
081c7493 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7498 +0x062:  mov    %eax,%ebx
081c749a +0x064:  lea    -0x14(%ebp),%eax
081c749d +0x067:  mov    %eax,(%esp)
081c74a0 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c74a5 +0x06f:  mov    %ebx,0x4(%esp)
081c74a9 +0x073:  mov    %eax,(%esp)
081c74ac +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c74b1 +0x07b:  movl   $0x5,0x4(%esp)
081c74b9 +0x083:  mov    0xc(%ebp),%eax
081c74bc +0x086:  mov    %eax,(%esp)
081c74bf +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c74c4 +0x08e:  mov    0xc(%ebp),%eax
081c74c7 +0x091:  mov    %eax,(%esp)
081c74ca +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c74cf +0x099:  test   %al,%al
081c74d1 +0x09b:  je     081c751b <+0xe5>
081c74d3 +0x09d:  mov    0xc(%ebp),%eax
081c74d6 +0x0a0:  mov    %eax,(%esp)
081c74d9 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c74de +0x0a8:  mov    %eax,%ebx
081c74e0 +0x0aa:  lea    -0x14(%ebp),%eax
081c74e3 +0x0ad:  mov    %eax,(%esp)
081c74e6 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c74eb +0x0b5:  mov    %ebx,0x4(%esp)
081c74ef +0x0b9:  mov    %eax,(%esp)
081c74f2 +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c74f7 +0x0c1:  mov    0xc(%ebp),%eax
081c74fa +0x0c4:  mov    %eax,(%esp)
081c74fd +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c7502 +0x0cc:  mov    %eax,%ebx
081c7504 +0x0ce:  lea    -0x14(%ebp),%eax
081c7507 +0x0d1:  mov    %eax,(%esp)
081c750a +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c750f +0x0d9:  mov    %ebx,0x4(%esp)
081c7513 +0x0dd:  mov    %eax,(%esp)
081c7516 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c751b +0x0e5:  lea    -0x14(%ebp),%eax
081c751e +0x0e8:  mov    %eax,(%esp)
081c7521 +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c7526 +0x0f0:  mov    %eax,(%esp)
081c7529 +0x0f3:  call   08236d88 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc432>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc432
081c752e +0x0f8:  mov    %eax,-0xc(%ebp)
081c7531 +0x0fb:  movl   $0x1810,0x8(%esp)
081c7539 +0x103:  movl   $0x0,0x4(%esp)
081c7541 +0x10b:  mov    -0xc(%ebp),%eax
081c7544 +0x10e:  mov    %eax,(%esp)
081c7547 +0x111:  call   0807dcc0 <_init+0x5b8>
081c754c +0x116:  mov    0x10(%ebp),%eax
081c754f +0x119:  movzbl 0xd(%eax),%eax
081c7553 +0x11d:  movsbl %al,%eax
081c7556 +0x120:  mov    %eax,0x4(%esp)
081c755a +0x124:  mov    0xc(%ebp),%eax
081c755d +0x127:  mov    %eax,(%esp)
081c7560 +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7565 +0x12f:  mov    %eax,%edx
081c7567 +0x131:  mov    -0xc(%ebp),%eax
081c756a +0x134:  mov    %edx,(%eax)
081c756c +0x136:  mov    0xc(%ebp),%eax
081c756f +0x139:  mov    %eax,(%esp)
081c7572 +0x13c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c7577 +0x141:  mov    -0xc(%ebp),%edx
081c757a +0x144:  mov    %eax,0x4(%edx)
081c757d +0x147:  mov    0xc(%ebp),%eax
081c7580 +0x14a:  mov    %eax,(%esp)
081c7583 +0x14d:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7588 +0x152:  test   %al,%al
081c758a +0x154:  je     081c75af <+0x179>
081c758c +0x156:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7591 +0x15b:  lea    -0x14(%ebp),%edx
081c7594 +0x15e:  mov    %edx,0x8(%esp)
081c7598 +0x162:  movl   $0x5,0x4(%esp)
081c75a0 +0x16a:  mov    %eax,(%esp)
081c75a3 +0x16d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c75a8 +0x172:  mov    $0x1,%ebx
081c75ad +0x177:  jmp    081c75ed <+0x1b7>
081c75af +0x179:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c75b4 +0x17e:  lea    -0x14(%ebp),%edx
081c75b7 +0x181:  mov    %edx,0x8(%esp)
081c75bb +0x185:  movl   $0x2,0x4(%esp)
081c75c3 +0x18d:  mov    %eax,(%esp)
081c75c6 +0x190:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c75cb +0x195:  mov    $0x1,%ebx
081c75d0 +0x19a:  jmp    081c75ed <+0x1b7>
081c75d2 +0x19c:  mov    %edx,%ebx
081c75d4 +0x19e:  mov    %eax,%esi
081c75d6 +0x1a0:  lea    -0x14(%ebp),%eax
081c75d9 +0x1a3:  mov    %eax,(%esp)
081c75dc +0x1a6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c75e1 +0x1ab:  mov    %esi,%eax
081c75e3 +0x1ad:  mov    %ebx,%edx
081c75e5 +0x1af:  mov    %eax,(%esp)
081c75e8 +0x1b2:  call   08ae3750 <_Unwind_Resume>
081c75ed +0x1b7:  lea    -0x14(%ebp),%eax
081c75f0 +0x1ba:  mov    %eax,(%esp)
081c75f3 +0x1bd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c75f8 +0x1c2:  mov    %ebx,%eax
081c75fa +0x1c4:  add    $0x20,%esp
081c75fd +0x1c7:  pop    %ebx
081c75fe +0x1c8:  pop    %esi
081c75ff +0x1c9:  pop    %ebp
081c7600 +0x1ca:  ret
081c7601 +0x1cb:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBDungeonClear @ 0x81c7436

/* DisPatcher_SelectCharac::RequestDBDungeonClear(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBDungeonClear
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_DUNGEON_CLEAR *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17f8);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7488 to 081c75ca has its CatchHandler @ 081c75d2 */
  CStreamGuard::operator<<(pCVar3,0xc);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,5);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_DUNGEON_CLEAR>(pCVar3);
  memset(local_10,0,0x1810);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)(local_10 + 4) = uVar5;
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
