# BossTowerLogDBUpdate

`_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv`

`CBossDungeonEntranceLog::BossTowerLogDBUpdate()`

| 类 | 地址 |
|---|---|
| `CBossDungeonEntranceLog` | `0x081568cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081568cc  _ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv
#           CBossDungeonEntranceLog::BossTowerLogDBUpdate()
# range [0x081568cc, 0x08156aa9]
081568cc +0x000:  push   %ebp
081568cd +0x001:  mov    %esp,%ebp
081568cf +0x003:  push   %esi
081568d0 +0x004:  push   %ebx
081568d1 +0x005:  sub    $0x30,%esp
081568d4 +0x008:  mov    0x8(%ebp),%edx
081568d7 +0x00b:  lea    -0x14(%ebp),%eax
081568da +0x00e:  mov    %edx,0x4(%esp)
081568de +0x012:  mov    %eax,(%esp)
081568e1 +0x015:  call   08157584 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1e3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1e3
081568e6 +0x01a:  sub    $0x4,%esp
081568e9 +0x01d:  mov    0x8(%ebp),%edx
081568ec +0x020:  lea    -0x18(%ebp),%eax
081568ef +0x023:  mov    %edx,0x4(%esp)
081568f3 +0x027:  mov    %eax,(%esp)
081568f6 +0x02a:  call   08157490 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xef>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xef
081568fb +0x02f:  sub    $0x4,%esp
081568fe +0x032:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08156903 +0x037:  movl   $0x69,0x8(%esp)
0815690b +0x03f:  movl   $"localglobal/global_Statistics.cpp",0x4(%esp)
08156913 +0x047:  mov    %eax,(%esp)
08156916 +0x04a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815691b +0x04f:  movl   $0x1,0x8(%esp)
08156923 +0x057:  mov    %eax,0x4(%esp)
08156927 +0x05b:  lea    -0x20(%ebp),%eax
0815692a +0x05e:  mov    %eax,(%esp)
0815692d +0x061:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08156932 +0x066:  mov    0x8(%ebp),%eax
08156935 +0x069:  mov    %eax,(%esp)
08156938 +0x06c:  call   081575aa <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x209>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x209
0815693d +0x071:  mov    %eax,-0x10(%ebp)
08156940 +0x074:  cmpl   $0x0,-0x10(%ebp)
08156944 +0x078:  jle    08156a95 <+0x1c9>
0815694a +0x07e:  lea    -0x20(%ebp),%eax
0815694d +0x081:  mov    %eax,(%esp)
08156950 +0x084:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08156955 +0x089:  movl   $0x2e0,0x4(%esp)
0815695d +0x091:  mov    %eax,(%esp)
08156960 +0x094:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08156965 +0x099:  lea    -0x20(%ebp),%eax
08156968 +0x09c:  mov    %eax,(%esp)
0815696b +0x09f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08156970 +0x0a4:  movl   $0xffffffff,0x4(%esp)
08156978 +0x0ac:  mov    %eax,(%esp)
0815697b +0x0af:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08156980 +0x0b4:  lea    -0x20(%ebp),%eax
08156983 +0x0b7:  mov    %eax,(%esp)
08156986 +0x0ba:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0815698b +0x0bf:  mov    -0x10(%ebp),%edx
0815698e +0x0c2:  mov    %edx,0x4(%esp)
08156992 +0x0c6:  mov    %eax,(%esp)
08156995 +0x0c9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0815699a +0x0ce:  jmp    08156a37 <+0x16b>
0815699f +0x0d3:  lea    -0x14(%ebp),%eax
081569a2 +0x0d6:  mov    %eax,(%esp)
081569a5 +0x0d9:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
081569aa +0x0de:  mov    (%eax),%eax
081569ac +0x0e0:  mov    %eax,-0x24(%ebp)
081569af +0x0e3:  mov    -0x24(%ebp),%eax
081569b2 +0x0e6:  mov    %eax,%ebx
081569b4 +0x0e8:  lea    -0x20(%ebp),%eax
081569b7 +0x0eb:  mov    %eax,(%esp)
081569ba +0x0ee:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081569bf +0x0f3:  mov    %ebx,0x4(%esp)
081569c3 +0x0f7:  mov    %eax,(%esp)
081569c6 +0x0fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081569cb +0x0ff:  lea    -0x20(%ebp),%eax
081569ce +0x102:  mov    %eax,(%esp)
081569d1 +0x105:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081569d6 +0x10a:  mov    %eax,(%esp)
081569d9 +0x10d:  call   081575f0 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x24f>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x24f
081569de +0x112:  mov    %eax,-0xc(%ebp)
081569e1 +0x115:  lea    -0x14(%ebp),%eax
081569e4 +0x118:  mov    %eax,(%esp)
081569e7 +0x11b:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
081569ec +0x120:  add    $0x4,%eax
081569ef +0x123:  movl   $0x10,0x8(%esp)
081569f7 +0x12b:  mov    %eax,0x4(%esp)
081569fb +0x12f:  mov    -0xc(%ebp),%eax
081569fe +0x132:  mov    %eax,(%esp)
08156a01 +0x135:  call   0807d8a0 <_init+0x198>
08156a06 +0x13a:  lea    -0x14(%ebp),%eax
08156a09 +0x13d:  mov    %eax,(%esp)
08156a0c +0x140:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
08156a11 +0x145:  add    $0x4,%eax
08156a14 +0x148:  movl   $0x10,0x8(%esp)
08156a1c +0x150:  movl   $0x0,0x4(%esp)
08156a24 +0x158:  mov    %eax,(%esp)
08156a27 +0x15b:  call   0807dcc0 <_init+0x5b8>
08156a2c +0x160:  lea    -0x14(%ebp),%eax
08156a2f +0x163:  mov    %eax,(%esp)
08156a32 +0x166:  call   081575d2 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x231>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x231
08156a37 +0x16b:  lea    -0x18(%ebp),%eax
08156a3a +0x16e:  mov    %eax,0x4(%esp)
08156a3e +0x172:  lea    -0x14(%ebp),%eax
08156a41 +0x175:  mov    %eax,(%esp)
08156a44 +0x178:  call   081575be <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x21d>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x21d
08156a49 +0x17d:  test   %al,%al
08156a4b +0x17f:  jne    0815699f <+0xd3>
08156a51 +0x185:  mov    0x8(%ebp),%eax
08156a54 +0x188:  mov    %eax,(%esp)
08156a57 +0x18b:  call   081459a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x429>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x429
08156a5c +0x190:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08156a61 +0x195:  lea    -0x20(%ebp),%edx
08156a64 +0x198:  mov    %edx,0x8(%esp)
08156a68 +0x19c:  movl   $0x4,0x4(%esp)
08156a70 +0x1a4:  mov    %eax,(%esp)
08156a73 +0x1a7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08156a78 +0x1ac:  jmp    08156a95 <+0x1c9>
08156a7a +0x1ae:  mov    %edx,%ebx
08156a7c +0x1b0:  mov    %eax,%esi
08156a7e +0x1b2:  lea    -0x20(%ebp),%eax
08156a81 +0x1b5:  mov    %eax,(%esp)
08156a84 +0x1b8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08156a89 +0x1bd:  mov    %esi,%eax
08156a8b +0x1bf:  mov    %ebx,%edx
08156a8d +0x1c1:  mov    %eax,(%esp)
08156a90 +0x1c4:  call   08ae3750 <_Unwind_Resume>
08156a95 +0x1c9:  lea    -0x20(%ebp),%eax
08156a98 +0x1cc:  mov    %eax,(%esp)
08156a9b +0x1cf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08156aa0 +0x1d4:  lea    -0x8(%ebp),%esp
08156aa3 +0x1d7:  add    $0x0,%esp
08156aa6 +0x1da:  pop    %ebx
08156aa7 +0x1db:  pop    %esi
08156aa8 +0x1dc:  pop    %ebp
08156aa9 +0x1dd:  ret
```

## 反编译 C

```c
// CBossDungeonEntranceLog::BossTowerLogDBUpdate @ 0x81568cc

/* CBossDungeonEntranceLog::BossTowerLogDBUpdate() */

void __thiscall CBossDungeonEntranceLog::BossTowerLogDBUpdate(CBossDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  CStreamGuard local_24 [8];
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_1c [4];
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_18 [4];
  int local_14;
  STBossDungeonTowerLog *local_10;
  
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::begin(local_18);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_1c);
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_Statistics.cpp",0x69);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
                    /* try { // try from 08156938 to 08156a77 has its CatchHandler @ 08156a7a */
  local_14 = std::
             map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
             ::size((map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
                     *)this);
  if (0 < local_14) {
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,0x2e0);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,local_14);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
                      operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>
                                  *)local_18);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
      CStreamGuard::operator<<(pCVar3,iVar5);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
      local_10 = CStreamGuard::GetInBuffer<STBossDungeonTowerLog>(pCVar3);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18);
      memcpy(local_10,(void *)(iVar5 + 4),0x10);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18);
      memset((void *)(iVar5 + 4),0,0x10);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)local_18)
      ;
    }
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::clear((map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
             *)this);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
  }
  CStreamGuard::~CStreamGuard(local_24);
  return;
}
```
