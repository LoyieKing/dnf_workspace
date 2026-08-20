# makeRequest

`_ZN24DB_EventSaveGrowthWeapon11makeRequestEjs`

`DB_EventSaveGrowthWeapon::makeRequest(unsigned int, short)`

| 类 | 地址 |
|---|---|
| `DB_EventSaveGrowthWeapon` | `0x084493e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084493e8  _ZN24DB_EventSaveGrowthWeapon11makeRequestEjs
#           DB_EventSaveGrowthWeapon::makeRequest(unsigned int, short)
# range [0x084493e8, 0x084494e1]
084493e8 +0x00:  push   %ebp
084493e9 +0x01:  mov    %esp,%ebp
084493eb +0x03:  push   %esi
084493ec +0x04:  push   %ebx
084493ed +0x05:  sub    $0x30,%esp
084493f0 +0x08:  mov    0xc(%ebp),%eax
084493f3 +0x0b:  mov    %ax,-0x1c(%ebp)
084493f7 +0x0f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084493fc +0x14:  movl   $0xb8ef,0x8(%esp)
08449404 +0x1c:  movl   $"DBThread.cpp",0x4(%esp)
0844940c +0x24:  mov    %eax,(%esp)
0844940f +0x27:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449414 +0x2c:  movl   $0x1,0x8(%esp)
0844941c +0x34:  mov    %eax,0x4(%esp)
08449420 +0x38:  lea    -0x10(%ebp),%eax
08449423 +0x3b:  mov    %eax,(%esp)
08449426 +0x3e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844942b +0x43:  lea    -0x10(%ebp),%eax
0844942e +0x46:  mov    %eax,(%esp)
08449431 +0x49:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449436 +0x4e:  movl   $0x313,0x4(%esp)
0844943e +0x56:  mov    %eax,(%esp)
08449441 +0x59:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449446 +0x5e:  lea    -0x10(%ebp),%eax
08449449 +0x61:  mov    %eax,(%esp)
0844944c +0x64:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449451 +0x69:  movl   $0xffffffff,0x4(%esp)
08449459 +0x71:  mov    %eax,(%esp)
0844945c +0x74:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449461 +0x79:  lea    -0x10(%ebp),%eax
08449464 +0x7c:  mov    %eax,(%esp)
08449467 +0x7f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844946c +0x84:  mov    0x8(%ebp),%edx
0844946f +0x87:  mov    %edx,0x4(%esp)
08449473 +0x8b:  mov    %eax,(%esp)
08449476 +0x8e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844947b +0x93:  movswl -0x1c(%ebp),%ebx
0844947f +0x97:  lea    -0x10(%ebp),%eax
08449482 +0x9a:  mov    %eax,(%esp)
08449485 +0x9d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844948a +0xa2:  mov    %ebx,0x4(%esp)
0844948e +0xa6:  mov    %eax,(%esp)
08449491 +0xa9:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
08449496 +0xae:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844949b +0xb3:  lea    -0x10(%ebp),%edx
0844949e +0xb6:  mov    %edx,0x8(%esp)
084494a2 +0xba:  movl   $0x2,0x4(%esp)
084494aa +0xc2:  mov    %eax,(%esp)
084494ad +0xc5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084494b2 +0xca:  jmp    084494cf <+0xe7>
084494b4 +0xcc:  mov    %edx,%ebx
084494b6 +0xce:  mov    %eax,%esi
084494b8 +0xd0:  lea    -0x10(%ebp),%eax
084494bb +0xd3:  mov    %eax,(%esp)
084494be +0xd6:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084494c3 +0xdb:  mov    %esi,%eax
084494c5 +0xdd:  mov    %ebx,%edx
084494c7 +0xdf:  mov    %eax,(%esp)
084494ca +0xe2:  call   08ae3750 <_Unwind_Resume>
084494cf +0xe7:  lea    -0x10(%ebp),%eax
084494d2 +0xea:  mov    %eax,(%esp)
084494d5 +0xed:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084494da +0xf2:  add    $0x30,%esp
084494dd +0xf5:  pop    %ebx
084494de +0xf6:  pop    %esi
084494df +0xf7:  pop    %ebp
084494e0 +0xf8:  ret
084494e1 +0xf9:  nop
```

## 反编译 C

```c
// DB_EventSaveGrowthWeapon::makeRequest @ 0x84493e8

/* DB_EventSaveGrowthWeapon::makeRequest(unsigned int, short) */

void DB_EventSaveGrowthWeapon::makeRequest(uint param_1,short param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb8ef);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449441 to 084494b1 has its CatchHandler @ 084494b4 */
  CStreamGuard::operator<<(pCVar2,0x313);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
