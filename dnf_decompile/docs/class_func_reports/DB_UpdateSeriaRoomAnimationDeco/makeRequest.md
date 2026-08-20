# makeRequest

`_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss`

`DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short)`

| 类 | 地址 |
|---|---|
| `DB_UpdateSeriaRoomAnimationDeco` | `0x0844af74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844af74  _ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss
#           DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short)
# range [0x0844af74, 0x0844b0cb]
0844af74 +0x000:  push   %ebp
0844af75 +0x001:  mov    %esp,%ebp
0844af77 +0x003:  push   %esi
0844af78 +0x004:  push   %ebx
0844af79 +0x005:  sub    $0x30,%esp
0844af7c +0x008:  mov    0xc(%ebp),%ecx
0844af7f +0x00b:  mov    0x14(%ebp),%edx
0844af82 +0x00e:  mov    0x18(%ebp),%eax
0844af85 +0x011:  mov    %cx,-0x1c(%ebp)
0844af89 +0x015:  mov    %dx,-0x20(%ebp)
0844af8d +0x019:  mov    %ax,-0x24(%ebp)
0844af91 +0x01d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844af96 +0x022:  movl   $0xbb98,0x8(%esp)
0844af9e +0x02a:  movl   $"DBThread.cpp",0x4(%esp)
0844afa6 +0x032:  mov    %eax,(%esp)
0844afa9 +0x035:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844afae +0x03a:  movl   $0x1,0x8(%esp)
0844afb6 +0x042:  mov    %eax,0x4(%esp)
0844afba +0x046:  lea    -0x10(%ebp),%eax
0844afbd +0x049:  mov    %eax,(%esp)
0844afc0 +0x04c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844afc5 +0x051:  lea    -0x10(%ebp),%eax
0844afc8 +0x054:  mov    %eax,(%esp)
0844afcb +0x057:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844afd0 +0x05c:  movl   $0x31e,0x4(%esp)
0844afd8 +0x064:  mov    %eax,(%esp)
0844afdb +0x067:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844afe0 +0x06c:  lea    -0x10(%ebp),%eax
0844afe3 +0x06f:  mov    %eax,(%esp)
0844afe6 +0x072:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844afeb +0x077:  movl   $0xffffffff,0x4(%esp)
0844aff3 +0x07f:  mov    %eax,(%esp)
0844aff6 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844affb +0x087:  lea    -0x10(%ebp),%eax
0844affe +0x08a:  mov    %eax,(%esp)
0844b001 +0x08d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b006 +0x092:  mov    0x8(%ebp),%edx
0844b009 +0x095:  mov    %edx,0x4(%esp)
0844b00d +0x099:  mov    %eax,(%esp)
0844b010 +0x09c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844b015 +0x0a1:  movswl -0x1c(%ebp),%ebx
0844b019 +0x0a5:  lea    -0x10(%ebp),%eax
0844b01c +0x0a8:  mov    %eax,(%esp)
0844b01f +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b024 +0x0b0:  mov    %ebx,0x4(%esp)
0844b028 +0x0b4:  mov    %eax,(%esp)
0844b02b +0x0b7:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844b030 +0x0bc:  lea    -0x10(%ebp),%eax
0844b033 +0x0bf:  mov    %eax,(%esp)
0844b036 +0x0c2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b03b +0x0c7:  mov    0x10(%ebp),%edx
0844b03e +0x0ca:  mov    %edx,0x4(%esp)
0844b042 +0x0ce:  mov    %eax,(%esp)
0844b045 +0x0d1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844b04a +0x0d6:  movswl -0x20(%ebp),%ebx
0844b04e +0x0da:  lea    -0x10(%ebp),%eax
0844b051 +0x0dd:  mov    %eax,(%esp)
0844b054 +0x0e0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b059 +0x0e5:  mov    %ebx,0x4(%esp)
0844b05d +0x0e9:  mov    %eax,(%esp)
0844b060 +0x0ec:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844b065 +0x0f1:  movswl -0x24(%ebp),%ebx
0844b069 +0x0f5:  lea    -0x10(%ebp),%eax
0844b06c +0x0f8:  mov    %eax,(%esp)
0844b06f +0x0fb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844b074 +0x100:  mov    %ebx,0x4(%esp)
0844b078 +0x104:  mov    %eax,(%esp)
0844b07b +0x107:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
0844b080 +0x10c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844b085 +0x111:  lea    -0x10(%ebp),%edx
0844b088 +0x114:  mov    %edx,0x8(%esp)
0844b08c +0x118:  movl   $0x2,0x4(%esp)
0844b094 +0x120:  mov    %eax,(%esp)
0844b097 +0x123:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844b09c +0x128:  jmp    0844b0b9 <+0x145>
0844b09e +0x12a:  mov    %edx,%ebx
0844b0a0 +0x12c:  mov    %eax,%esi
0844b0a2 +0x12e:  lea    -0x10(%ebp),%eax
0844b0a5 +0x131:  mov    %eax,(%esp)
0844b0a8 +0x134:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b0ad +0x139:  mov    %esi,%eax
0844b0af +0x13b:  mov    %ebx,%edx
0844b0b1 +0x13d:  mov    %eax,(%esp)
0844b0b4 +0x140:  call   08ae3750 <_Unwind_Resume>
0844b0b9 +0x145:  lea    -0x10(%ebp),%eax
0844b0bc +0x148:  mov    %eax,(%esp)
0844b0bf +0x14b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844b0c4 +0x150:  add    $0x30,%esp
0844b0c7 +0x153:  pop    %ebx
0844b0c8 +0x154:  pop    %esi
0844b0c9 +0x155:  pop    %ebp
0844b0ca +0x156:  ret
0844b0cb +0x157:  nop
```

## 反编译 C

```c
// DB_UpdateSeriaRoomAnimationDeco::makeRequest @ 0x844af74

/* DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short) */

void DB_UpdateSeriaRoomAnimationDeco::makeRequest
               (uint param_1,short param_2,int param_3,short param_4,short param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbb98);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844afdb to 0844b09b has its CatchHandler @ 0844b09e */
  CStreamGuard::operator<<(pCVar2,0x31e);
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
