# makeRequest

`_ZN39DB_EventAccountCharacterLevelUpOnceGift11makeRequestEjsiss`

`DB_EventAccountCharacterLevelUpOnceGift::makeRequest(unsigned int, short, int, short, short)`

| 类 | 地址 |
|---|---|
| `DB_EventAccountCharacterLevelUpOnceGift` | `0x08449f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449f66  _ZN39DB_EventAccountCharacterLevelUpOnceGift11makeRequestEjsiss
#           DB_EventAccountCharacterLevelUpOnceGift::makeRequest(unsigned int, short, int, short, short)
# range [0x08449f66, 0x0844a0bd]
08449f66 +0x000:  push   %ebp
08449f67 +0x001:  mov    %esp,%ebp
08449f69 +0x003:  push   %esi
08449f6a +0x004:  push   %ebx
08449f6b +0x005:  sub    $0x30,%esp
08449f6e +0x008:  mov    0xc(%ebp),%ecx
08449f71 +0x00b:  mov    0x14(%ebp),%edx
08449f74 +0x00e:  mov    0x18(%ebp),%eax
08449f77 +0x011:  mov    %cx,-0x1c(%ebp)
08449f7b +0x015:  mov    %dx,-0x20(%ebp)
08449f7f +0x019:  mov    %ax,-0x24(%ebp)
08449f83 +0x01d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08449f88 +0x022:  movl   $0xb9d9,0x8(%esp)
08449f90 +0x02a:  movl   $"DBThread.cpp",0x4(%esp)
08449f98 +0x032:  mov    %eax,(%esp)
08449f9b +0x035:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449fa0 +0x03a:  movl   $0x1,0x8(%esp)
08449fa8 +0x042:  mov    %eax,0x4(%esp)
08449fac +0x046:  lea    -0x10(%ebp),%eax
08449faf +0x049:  mov    %eax,(%esp)
08449fb2 +0x04c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08449fb7 +0x051:  lea    -0x10(%ebp),%eax
08449fba +0x054:  mov    %eax,(%esp)
08449fbd +0x057:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449fc2 +0x05c:  movl   $0x319,0x4(%esp)
08449fca +0x064:  mov    %eax,(%esp)
08449fcd +0x067:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449fd2 +0x06c:  lea    -0x10(%ebp),%eax
08449fd5 +0x06f:  mov    %eax,(%esp)
08449fd8 +0x072:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449fdd +0x077:  movl   $0xffffffff,0x4(%esp)
08449fe5 +0x07f:  mov    %eax,(%esp)
08449fe8 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449fed +0x087:  lea    -0x10(%ebp),%eax
08449ff0 +0x08a:  mov    %eax,(%esp)
08449ff3 +0x08d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449ff8 +0x092:  mov    0x8(%ebp),%edx
08449ffb +0x095:  mov    %edx,0x4(%esp)
08449fff +0x099:  mov    %eax,(%esp)
0844a002 +0x09c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844a007 +0x0a1:  movswl -0x1c(%ebp),%ebx
0844a00b +0x0a5:  lea    -0x10(%ebp),%eax
0844a00e +0x0a8:  mov    %eax,(%esp)
0844a011 +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a016 +0x0b0:  mov    %ebx,0x4(%esp)
0844a01a +0x0b4:  mov    %eax,(%esp)
0844a01d +0x0b7:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844a022 +0x0bc:  lea    -0x10(%ebp),%eax
0844a025 +0x0bf:  mov    %eax,(%esp)
0844a028 +0x0c2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a02d +0x0c7:  mov    0x10(%ebp),%edx
0844a030 +0x0ca:  mov    %edx,0x4(%esp)
0844a034 +0x0ce:  mov    %eax,(%esp)
0844a037 +0x0d1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844a03c +0x0d6:  movswl -0x20(%ebp),%ebx
0844a040 +0x0da:  lea    -0x10(%ebp),%eax
0844a043 +0x0dd:  mov    %eax,(%esp)
0844a046 +0x0e0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a04b +0x0e5:  mov    %ebx,0x4(%esp)
0844a04f +0x0e9:  mov    %eax,(%esp)
0844a052 +0x0ec:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844a057 +0x0f1:  movswl -0x24(%ebp),%ebx
0844a05b +0x0f5:  lea    -0x10(%ebp),%eax
0844a05e +0x0f8:  mov    %eax,(%esp)
0844a061 +0x0fb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844a066 +0x100:  mov    %ebx,0x4(%esp)
0844a06a +0x104:  mov    %eax,(%esp)
0844a06d +0x107:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844a072 +0x10c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844a077 +0x111:  lea    -0x10(%ebp),%edx
0844a07a +0x114:  mov    %edx,0x8(%esp)
0844a07e +0x118:  movl   $0x2,0x4(%esp)
0844a086 +0x120:  mov    %eax,(%esp)
0844a089 +0x123:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844a08e +0x128:  jmp    0844a0ab <+0x145>
0844a090 +0x12a:  mov    %edx,%ebx
0844a092 +0x12c:  mov    %eax,%esi
0844a094 +0x12e:  lea    -0x10(%ebp),%eax
0844a097 +0x131:  mov    %eax,(%esp)
0844a09a +0x134:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844a09f +0x139:  mov    %esi,%eax
0844a0a1 +0x13b:  mov    %ebx,%edx
0844a0a3 +0x13d:  mov    %eax,(%esp)
0844a0a6 +0x140:  call   08ae3750 <_Unwind_Resume>
0844a0ab +0x145:  lea    -0x10(%ebp),%eax
0844a0ae +0x148:  mov    %eax,(%esp)
0844a0b1 +0x14b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844a0b6 +0x150:  add    $0x30,%esp
0844a0b9 +0x153:  pop    %ebx
0844a0ba +0x154:  pop    %esi
0844a0bb +0x155:  pop    %ebp
0844a0bc +0x156:  ret
0844a0bd +0x157:  nop
```

## 反编译 C

```c
// DB_EventAccountCharacterLevelUpOnceGift::makeRequest @ 0x8449f66

/* DB_EventAccountCharacterLevelUpOnceGift::makeRequest(unsigned int, short, int, short, short) */

void DB_EventAccountCharacterLevelUpOnceGift::makeRequest
               (uint param_1,short param_2,int param_3,short param_4,short param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb9d9);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449fcd to 0844a08d has its CatchHandler @ 0844a090 */
  CStreamGuard::operator<<(pCVar2,0x319);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
