# makeRequest

`_ZN26DB_LoadBreakAwayRewardData11makeRequestEijjR18STBreakAwayRewards`

`DB_LoadBreakAwayRewardData::makeRequest(int, unsigned int, unsigned int, STBreakAwayRewards&)`

| 类 | 地址 |
|---|---|
| `DB_LoadBreakAwayRewardData` | `0x0843915c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843915c  _ZN26DB_LoadBreakAwayRewardData11makeRequestEijjR18STBreakAwayRewards
#           DB_LoadBreakAwayRewardData::makeRequest(int, unsigned int, unsigned int, STBreakAwayRewards&)
# range [0x0843915c, 0x084392db]
0843915c +0x000:  push   %ebp
0843915d +0x001:  mov    %esp,%ebp
0843915f +0x003:  push   %esi
08439160 +0x004:  push   %ebx
08439161 +0x005:  sub    $0x20,%esp
08439164 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08439169 +0x00d:  movl   $0x86d3,0x8(%esp)
08439171 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08439179 +0x01d:  mov    %eax,(%esp)
0843917c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08439181 +0x025:  movl   $0x1,0x8(%esp)
08439189 +0x02d:  mov    %eax,0x4(%esp)
0843918d +0x031:  lea    -0x10(%ebp),%eax
08439190 +0x034:  mov    %eax,(%esp)
08439193 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08439198 +0x03c:  lea    -0x10(%ebp),%eax
0843919b +0x03f:  mov    %eax,(%esp)
0843919e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084391a3 +0x047:  movl   $0x142,0x4(%esp)
084391ab +0x04f:  mov    %eax,(%esp)
084391ae +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084391b3 +0x057:  lea    -0x10(%ebp),%eax
084391b6 +0x05a:  mov    %eax,(%esp)
084391b9 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084391be +0x062:  mov    0x8(%ebp),%edx
084391c1 +0x065:  mov    %edx,0x4(%esp)
084391c5 +0x069:  mov    %eax,(%esp)
084391c8 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084391cd +0x071:  lea    -0x10(%ebp),%eax
084391d0 +0x074:  mov    %eax,(%esp)
084391d3 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084391d8 +0x07c:  mov    0xc(%ebp),%edx
084391db +0x07f:  mov    %edx,0x4(%esp)
084391df +0x083:  mov    %eax,(%esp)
084391e2 +0x086:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084391e7 +0x08b:  lea    -0x10(%ebp),%eax
084391ea +0x08e:  mov    %eax,(%esp)
084391ed +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084391f2 +0x096:  mov    0x10(%ebp),%edx
084391f5 +0x099:  mov    %edx,0x4(%esp)
084391f9 +0x09d:  mov    %eax,(%esp)
084391fc +0x0a0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08439201 +0x0a5:  mov    0x14(%ebp),%eax
08439204 +0x0a8:  mov    (%eax),%ebx
08439206 +0x0aa:  lea    -0x10(%ebp),%eax
08439209 +0x0ad:  mov    %eax,(%esp)
0843920c +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439211 +0x0b5:  mov    %ebx,0x4(%esp)
08439215 +0x0b9:  mov    %eax,(%esp)
08439218 +0x0bc:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843921d +0x0c1:  mov    0x14(%ebp),%eax
08439220 +0x0c4:  mov    0x4(%eax),%ebx
08439223 +0x0c7:  lea    -0x10(%ebp),%eax
08439226 +0x0ca:  mov    %eax,(%esp)
08439229 +0x0cd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843922e +0x0d2:  mov    %ebx,0x4(%esp)
08439232 +0x0d6:  mov    %eax,(%esp)
08439235 +0x0d9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843923a +0x0de:  mov    0x14(%ebp),%eax
0843923d +0x0e1:  mov    0x8(%eax),%ebx
08439240 +0x0e4:  lea    -0x10(%ebp),%eax
08439243 +0x0e7:  mov    %eax,(%esp)
08439246 +0x0ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843924b +0x0ef:  mov    %ebx,0x4(%esp)
0843924f +0x0f3:  mov    %eax,(%esp)
08439252 +0x0f6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439257 +0x0fb:  mov    0x14(%ebp),%eax
0843925a +0x0fe:  mov    0x10(%eax),%ebx
0843925d +0x101:  lea    -0x10(%ebp),%eax
08439260 +0x104:  mov    %eax,(%esp)
08439263 +0x107:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439268 +0x10c:  mov    %ebx,0x4(%esp)
0843926c +0x110:  mov    %eax,(%esp)
0843926f +0x113:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08439274 +0x118:  mov    0x14(%ebp),%eax
08439277 +0x11b:  mov    0xc(%eax),%ebx
0843927a +0x11e:  lea    -0x10(%ebp),%eax
0843927d +0x121:  mov    %eax,(%esp)
08439280 +0x124:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08439285 +0x129:  mov    %ebx,0x4(%esp)
08439289 +0x12d:  mov    %eax,(%esp)
0843928c +0x130:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08439291 +0x135:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08439296 +0x13a:  lea    -0x10(%ebp),%edx
08439299 +0x13d:  mov    %edx,0x8(%esp)
0843929d +0x141:  movl   $0x2,0x4(%esp)
084392a5 +0x149:  mov    %eax,(%esp)
084392a8 +0x14c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084392ad +0x151:  jmp    084392ca <+0x16e>
084392af +0x153:  mov    %edx,%ebx
084392b1 +0x155:  mov    %eax,%esi
084392b3 +0x157:  lea    -0x10(%ebp),%eax
084392b6 +0x15a:  mov    %eax,(%esp)
084392b9 +0x15d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084392be +0x162:  mov    %esi,%eax
084392c0 +0x164:  mov    %ebx,%edx
084392c2 +0x166:  mov    %eax,(%esp)
084392c5 +0x169:  call   08ae3750 <_Unwind_Resume>
084392ca +0x16e:  lea    -0x10(%ebp),%eax
084392cd +0x171:  mov    %eax,(%esp)
084392d0 +0x174:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084392d5 +0x179:  add    $0x20,%esp
084392d8 +0x17c:  pop    %ebx
084392d9 +0x17d:  pop    %esi
084392da +0x17e:  pop    %ebp
084392db +0x17f:  ret
```

## 反编译 C

```c
// DB_LoadBreakAwayRewardData::makeRequest @ 0x843915c

/* DB_LoadBreakAwayRewardData::makeRequest(int, unsigned int, unsigned int, STBreakAwayRewards&) */

void DB_LoadBreakAwayRewardData::makeRequest
               (int param_1,uint param_2,uint param_3,STBreakAwayRewards *param_4)

{
  uint uVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_14 [8];
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x86d3);
  CStreamGuard::CStreamGuard(local_14,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084391ae to 084392ac has its CatchHandler @ 084392af */
  CStreamGuard::operator<<(pCVar4,0x142);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,param_3);
  uVar1 = *(uint *)param_4;
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,uVar1);
  iVar2 = *(int *)(param_4 + 4);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  iVar2 = *(int *)(param_4 + 8);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  iVar2 = *(int *)(param_4 + 0x10);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,iVar2);
  uVar1 = *(uint *)(param_4 + 0xc);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar4,uVar1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
