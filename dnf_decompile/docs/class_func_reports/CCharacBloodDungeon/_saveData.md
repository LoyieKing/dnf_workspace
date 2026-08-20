# _saveData

`_ZN19CCharacBloodDungeon9_saveDataEP5CUser`

`CCharacBloodDungeon::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CCharacBloodDungeon` | `0x0832a330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a330  _ZN19CCharacBloodDungeon9_saveDataEP5CUser
#           CCharacBloodDungeon::_saveData(CUser*)
# range [0x0832a330, 0x0832a4c1]
0832a330 +0x000:  push   %ebp
0832a331 +0x001:  mov    %esp,%ebp
0832a333 +0x003:  push   %esi
0832a334 +0x004:  push   %ebx
0832a335 +0x005:  sub    $0x20,%esp
0832a338 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0832a33d +0x00d:  movl   $0x1e,0x8(%esp)
0832a345 +0x015:  movl   $"CharacBloodDungeon.cpp",0x4(%esp)
0832a34d +0x01d:  mov    %eax,(%esp)
0832a350 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0832a355 +0x025:  movl   $0x1,0x8(%esp)
0832a35d +0x02d:  mov    %eax,0x4(%esp)
0832a361 +0x031:  lea    -0x14(%ebp),%eax
0832a364 +0x034:  mov    %eax,(%esp)
0832a367 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0832a36c +0x03c:  lea    -0x14(%ebp),%eax
0832a36f +0x03f:  mov    %eax,(%esp)
0832a372 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0832a377 +0x047:  movl   $0x197,0x4(%esp)
0832a37f +0x04f:  mov    %eax,(%esp)
0832a382 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0832a387 +0x057:  mov    0xc(%ebp),%eax
0832a38a +0x05a:  mov    %eax,(%esp)
0832a38d +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0832a392 +0x062:  mov    %eax,%ebx
0832a394 +0x064:  lea    -0x14(%ebp),%eax
0832a397 +0x067:  mov    %eax,(%esp)
0832a39a +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0832a39f +0x06f:  mov    %ebx,0x4(%esp)
0832a3a3 +0x073:  mov    %eax,(%esp)
0832a3a6 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0832a3ab +0x07b:  lea    -0x14(%ebp),%eax
0832a3ae +0x07e:  mov    %eax,(%esp)
0832a3b1 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0832a3b6 +0x086:  mov    %eax,(%esp)
0832a3b9 +0x089:  call   0832a696 <_GLOBAL__I__ZN19CCharacBloodDungeon6_resetEv+0x1d>  ; global constructors keyed to CCharacBloodDungeon::_reset()+0x1d
0832a3be +0x08e:  mov    %eax,-0xc(%ebp)
0832a3c1 +0x091:  movl   $0x28,0x8(%esp)
0832a3c9 +0x099:  movl   $0x0,0x4(%esp)
0832a3d1 +0x0a1:  mov    -0xc(%ebp),%eax
0832a3d4 +0x0a4:  mov    %eax,(%esp)
0832a3d7 +0x0a7:  call   0807dcc0 <_init+0x5b8>
0832a3dc +0x0ac:  mov    0xc(%ebp),%eax
0832a3df +0x0af:  mov    %eax,(%esp)
0832a3e2 +0x0b2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0832a3e7 +0x0b7:  mov    -0xc(%ebp),%edx
0832a3ea +0x0ba:  mov    %eax,(%edx)
0832a3ec +0x0bc:  mov    0x8(%ebp),%eax
0832a3ef +0x0bf:  mov    0x8(%eax),%edx
0832a3f2 +0x0c2:  mov    -0xc(%ebp),%eax
0832a3f5 +0x0c5:  mov    %edx,0x4(%eax)
0832a3f8 +0x0c8:  mov    0x8(%ebp),%eax
0832a3fb +0x0cb:  mov    0xc(%eax),%edx
0832a3fe +0x0ce:  mov    -0xc(%ebp),%eax
0832a401 +0x0d1:  mov    %edx,0x8(%eax)
0832a404 +0x0d4:  mov    0x8(%ebp),%eax
0832a407 +0x0d7:  mov    0x10(%eax),%edx
0832a40a +0x0da:  mov    -0xc(%ebp),%eax
0832a40d +0x0dd:  mov    %edx,0xc(%eax)
0832a410 +0x0e0:  movl   $0x0,0x8(%esp)
0832a418 +0x0e8:  movl   $0x0,0x4(%esp)
0832a420 +0x0f0:  movl   $0x6,(%esp)
0832a427 +0x0f7:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
0832a42c +0x0fc:  mov    -0xc(%ebp),%edx
0832a42f +0x0ff:  mov    %eax,0x10(%edx)
0832a432 +0x102:  mov    0x8(%ebp),%eax
0832a435 +0x105:  mov    0x18(%eax),%edx
0832a438 +0x108:  mov    -0xc(%ebp),%eax
0832a43b +0x10b:  mov    %edx,0x14(%eax)
0832a43e +0x10e:  mov    0x8(%ebp),%eax
0832a441 +0x111:  mov    0x1c(%eax),%edx
0832a444 +0x114:  mov    -0xc(%ebp),%eax
0832a447 +0x117:  mov    %edx,0x18(%eax)
0832a44a +0x11a:  mov    0x8(%ebp),%eax
0832a44d +0x11d:  movzbl 0x20(%eax),%edx
0832a451 +0x121:  mov    -0xc(%ebp),%eax
0832a454 +0x124:  mov    %dl,0x1c(%eax)
0832a457 +0x127:  mov    0x8(%ebp),%eax
0832a45a +0x12a:  mov    0x24(%eax),%edx
0832a45d +0x12d:  mov    -0xc(%ebp),%eax
0832a460 +0x130:  mov    %edx,0x20(%eax)
0832a463 +0x133:  mov    0x8(%ebp),%eax
0832a466 +0x136:  mov    0x28(%eax),%edx
0832a469 +0x139:  mov    -0xc(%ebp),%eax
0832a46c +0x13c:  mov    %edx,0x24(%eax)
0832a46f +0x13f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0832a474 +0x144:  lea    -0x14(%ebp),%edx
0832a477 +0x147:  mov    %edx,0x8(%esp)
0832a47b +0x14b:  movl   $0x2,0x4(%esp)
0832a483 +0x153:  mov    %eax,(%esp)
0832a486 +0x156:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0832a48b +0x15b:  mov    0x8(%ebp),%eax
0832a48e +0x15e:  movb   $0x0,0x20(%eax)
0832a492 +0x162:  mov    $0x1,%ebx
0832a497 +0x167:  lea    -0x14(%ebp),%eax
0832a49a +0x16a:  mov    %eax,(%esp)
0832a49d +0x16d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832a4a2 +0x172:  mov    %ebx,%eax
0832a4a4 +0x174:  add    $0x20,%esp
0832a4a7 +0x177:  pop    %ebx
0832a4a8 +0x178:  pop    %esi
0832a4a9 +0x179:  pop    %ebp
0832a4aa +0x17a:  ret
0832a4ab +0x17b:  mov    %edx,%ebx
0832a4ad +0x17d:  mov    %eax,%esi
0832a4af +0x17f:  lea    -0x14(%ebp),%eax
0832a4b2 +0x182:  mov    %eax,(%esp)
0832a4b5 +0x185:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832a4ba +0x18a:  mov    %esi,%eax
0832a4bc +0x18c:  mov    %ebx,%edx
0832a4be +0x18e:  mov    %eax,(%esp)
0832a4c1 +0x191:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CCharacBloodDungeon::_saveData @ 0x832a330

/* CCharacBloodDungeon::_saveData(CUser*) */

undefined4 __thiscall CCharacBloodDungeon::_saveData(CCharacBloodDungeon *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_BLOOD_DUNGEON *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacBloodDungeon.cpp",0x1e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0832a382 to 0832a48a has its CatchHandler @ 0832a4ab */
  CStreamGuard::operator<<(pCVar2,0x197);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BLOOD_DUNGEON>(pCVar2);
  memset(local_10,0,0x28);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0x10);
  uVar4 = getDailyInitializeTime(6,0,0);
  *(undefined4 *)(local_10 + 0x10) = uVar4;
  *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(local_10 + 0x18) = *(undefined4 *)(this + 0x1c);
  local_10[0x1c] = *(SIG_BLOOD_DUNGEON *)(this + 0x20);
  *(undefined4 *)(local_10 + 0x20) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(local_10 + 0x24) = *(undefined4 *)(this + 0x28);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  this[0x20] = (CCharacBloodDungeon)0x0;
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
