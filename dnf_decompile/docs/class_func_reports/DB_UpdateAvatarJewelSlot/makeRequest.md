# makeRequest

`_ZN24DB_UpdateAvatarJewelSlot11makeRequestEjjPK20stAvatarEmblemInfo_t`

`DB_UpdateAvatarJewelSlot::makeRequest(unsigned int, unsigned int, stAvatarEmblemInfo_t const*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAvatarJewelSlot` | `0x0843081c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843081c  _ZN24DB_UpdateAvatarJewelSlot11makeRequestEjjPK20stAvatarEmblemInfo_t
#           DB_UpdateAvatarJewelSlot::makeRequest(unsigned int, unsigned int, stAvatarEmblemInfo_t const*)
# range [0x0843081c, 0x0843091d]
0843081c +0x000:  push   %ebp
0843081d +0x001:  mov    %esp,%ebp
0843081f +0x003:  push   %esi
08430820 +0x004:  push   %ebx
08430821 +0x005:  sub    $0x20,%esp
08430824 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08430829 +0x00d:  movl   $0x7731,0x8(%esp)
08430831 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08430839 +0x01d:  mov    %eax,(%esp)
0843083c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08430841 +0x025:  movl   $0x1,0x8(%esp)
08430849 +0x02d:  mov    %eax,0x4(%esp)
0843084d +0x031:  lea    -0x14(%ebp),%eax
08430850 +0x034:  mov    %eax,(%esp)
08430853 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08430858 +0x03c:  lea    -0x14(%ebp),%eax
0843085b +0x03f:  mov    %eax,(%esp)
0843085e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08430863 +0x047:  movl   $0x139,0x4(%esp)
0843086b +0x04f:  mov    %eax,(%esp)
0843086e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08430873 +0x057:  lea    -0x14(%ebp),%eax
08430876 +0x05a:  mov    %eax,(%esp)
08430879 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843087e +0x062:  movl   $0xffffffff,0x4(%esp)
08430886 +0x06a:  mov    %eax,(%esp)
08430889 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843088e +0x072:  lea    -0x14(%ebp),%eax
08430891 +0x075:  mov    %eax,(%esp)
08430894 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08430899 +0x07d:  mov    %eax,(%esp)
0843089c +0x080:  call   08452e0e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5a24>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5a24
084308a1 +0x085:  mov    %eax,-0xc(%ebp)
084308a4 +0x088:  mov    -0xc(%ebp),%eax
084308a7 +0x08b:  mov    0x8(%ebp),%edx
084308aa +0x08e:  mov    %edx,(%eax)
084308ac +0x090:  mov    -0xc(%ebp),%eax
084308af +0x093:  mov    0xc(%ebp),%edx
084308b2 +0x096:  mov    %edx,0x4(%eax)
084308b5 +0x099:  mov    -0xc(%ebp),%eax
084308b8 +0x09c:  lea    0x8(%eax),%edx
084308bb +0x09f:  movl   $0x1e,0x8(%esp)
084308c3 +0x0a7:  mov    0x10(%ebp),%eax
084308c6 +0x0aa:  mov    %eax,0x4(%esp)
084308ca +0x0ae:  mov    %edx,(%esp)
084308cd +0x0b1:  call   0807d8a0 <_init+0x198>
084308d2 +0x0b6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084308d7 +0x0bb:  lea    -0x14(%ebp),%edx
084308da +0x0be:  mov    %edx,0x8(%esp)
084308de +0x0c2:  movl   $0x2,0x4(%esp)
084308e6 +0x0ca:  mov    %eax,(%esp)
084308e9 +0x0cd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084308ee +0x0d2:  jmp    0843090b <+0xef>
084308f0 +0x0d4:  mov    %edx,%ebx
084308f2 +0x0d6:  mov    %eax,%esi
084308f4 +0x0d8:  lea    -0x14(%ebp),%eax
084308f7 +0x0db:  mov    %eax,(%esp)
084308fa +0x0de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084308ff +0x0e3:  mov    %esi,%eax
08430901 +0x0e5:  mov    %ebx,%edx
08430903 +0x0e7:  mov    %eax,(%esp)
08430906 +0x0ea:  call   08ae3750 <_Unwind_Resume>
0843090b +0x0ef:  lea    -0x14(%ebp),%eax
0843090e +0x0f2:  mov    %eax,(%esp)
08430911 +0x0f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08430916 +0x0fa:  add    $0x20,%esp
08430919 +0x0fd:  pop    %ebx
0843091a +0x0fe:  pop    %esi
0843091b +0x0ff:  pop    %ebp
0843091c +0x100:  ret
0843091d +0x101:  nop
```

## 反编译 C

```c
// DB_UpdateAvatarJewelSlot::makeRequest @ 0x843081c

/* DB_UpdateAvatarJewelSlot::makeRequest(unsigned int, unsigned int, stAvatarEmblemInfo_t const*) */

void DB_UpdateAvatarJewelSlot::makeRequest(uint param_1,uint param_2,stAvatarEmblemInfo_t *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_AVATAR_JEWEL_SOCKET *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7731);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843086e to 084308ed has its CatchHandler @ 084308f0 */
  CStreamGuard::operator<<(pCVar2,0x139);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_AVATAR_JEWEL_SOCKET>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  memcpy(local_10 + 8,param_3,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
