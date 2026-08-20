# _saveTeamMatchList

`_ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv`

`online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x0858800c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858800c  _ZN18online_preliminary22COnlinePreliminaryTeam18_saveTeamMatchListEv
#           online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList()
# range [0x0858800c, 0x085882b7]
0858800c +0x000:  push   %ebp
0858800d +0x001:  mov    %esp,%ebp
0858800f +0x003:  push   %esi
08588010 +0x004:  push   %ebx
08588011 +0x005:  sub    $0x30,%esp
08588014 +0x008:  mov    0x8(%ebp),%eax
08588017 +0x00b:  movzbl 0x3d(%eax),%eax
0858801b +0x00f:  xor    $0x1,%eax
0858801e +0x012:  test   %al,%al
08588020 +0x014:  je     0858802c <+0x20>
08588022 +0x016:  mov    $0x1,%ebx
08588027 +0x01b:  jmp    085882ab <+0x29f>
0858802c +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08588031 +0x025:  movl   $0x4e,0x8(%esp)
08588039 +0x02d:  movl   $"OnlinePreliminaryTeam.cpp",0x4(%esp)
08588041 +0x035:  mov    %eax,(%esp)
08588044 +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08588049 +0x03d:  movl   $0x0,0x8(%esp)
08588051 +0x045:  mov    %eax,0x4(%esp)
08588055 +0x049:  lea    -0x1c(%ebp),%eax
08588058 +0x04c:  mov    %eax,(%esp)
0858805b +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08588060 +0x054:  lea    -0x1c(%ebp),%eax
08588063 +0x057:  mov    %eax,(%esp)
08588066 +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0858806b +0x05f:  movl   $0x1ed,0x4(%esp)
08588073 +0x067:  mov    %eax,(%esp)
08588076 +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0858807b +0x06f:  lea    -0x1c(%ebp),%eax
0858807e +0x072:  mov    %eax,(%esp)
08588081 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08588086 +0x07a:  movl   $0xffffffff,0x4(%esp)
0858808e +0x082:  mov    %eax,(%esp)
08588091 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08588096 +0x08a:  lea    -0x1c(%ebp),%eax
08588099 +0x08d:  mov    %eax,(%esp)
0858809c +0x090:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085880a1 +0x095:  mov    %eax,(%esp)
085880a4 +0x098:  call   08589148 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x43b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x43b
085880a9 +0x09d:  mov    %eax,-0x10(%ebp)
085880ac +0x0a0:  mov    0x8(%ebp),%eax
085880af +0x0a3:  mov    0x4(%eax),%edx
085880b2 +0x0a6:  mov    -0x10(%ebp),%eax
085880b5 +0x0a9:  mov    %edx,(%eax)
085880b7 +0x0ab:  mov    -0x10(%ebp),%eax
085880ba +0x0ae:  movl   $0x0,0x4(%eax)
085880c1 +0x0b5:  mov    0x8(%ebp),%eax
085880c4 +0x0b8:  lea    0x24(%eax),%edx
085880c7 +0x0bb:  lea    -0x20(%ebp),%eax
085880ca +0x0be:  mov    %edx,0x4(%esp)
085880ce +0x0c2:  mov    %eax,(%esp)
085880d1 +0x0c5:  call   0858915e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x451>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x451
085880d6 +0x0ca:  sub    $0x4,%esp
085880d9 +0x0cd:  jmp    08588209 <+0x1fd>
085880de +0x0d2:  lea    -0x20(%ebp),%eax
085880e1 +0x0d5:  mov    %eax,(%esp)
085880e4 +0x0d8:  call   085891dc <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4cf>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4cf
085880e9 +0x0dd:  add    $0x4,%eax
085880ec +0x0e0:  mov    %eax,-0xc(%ebp)
085880ef +0x0e3:  mov    -0xc(%ebp),%eax
085880f2 +0x0e6:  movzbl 0x4(%eax),%eax
085880f6 +0x0ea:  xor    $0x1,%eax
085880f9 +0x0ed:  test   %al,%al
085880fb +0x0ef:  jne    085881fd <+0x1f1>
08588101 +0x0f5:  mov    -0xc(%ebp),%eax
08588104 +0x0f8:  movb   $0x0,0x4(%eax)
08588108 +0x0fc:  mov    -0x10(%ebp),%eax
0858810b +0x0ff:  mov    0x4(%eax),%ebx
0858810e +0x102:  lea    -0x20(%ebp),%eax
08588111 +0x105:  mov    %eax,(%esp)
08588114 +0x108:  call   085891dc <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4cf>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4cf
08588119 +0x10d:  mov    (%eax),%edx
0858811b +0x10f:  mov    -0x10(%ebp),%eax
0858811e +0x112:  mov    %edx,0x8(%eax,%ebx,8)
08588122 +0x116:  mov    -0x10(%ebp),%eax
08588125 +0x119:  mov    0x4(%eax),%edx
08588128 +0x11c:  mov    -0xc(%ebp),%eax
0858812b +0x11f:  mov    (%eax),%ecx
0858812d +0x121:  mov    -0x10(%ebp),%eax
08588130 +0x124:  mov    %ecx,0xc(%eax,%edx,8)
08588134 +0x128:  mov    -0x10(%ebp),%eax
08588137 +0x12b:  mov    0x4(%eax),%eax
0858813a +0x12e:  lea    0x1(%eax),%edx
0858813d +0x131:  mov    -0x10(%ebp),%eax
08588140 +0x134:  mov    %edx,0x4(%eax)
08588143 +0x137:  mov    -0x10(%ebp),%eax
08588146 +0x13a:  mov    0x4(%eax),%eax
08588149 +0x13d:  cmp    $0x64,%eax
0858814c +0x140:  jne    085881fe <+0x1f2>
08588152 +0x146:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08588157 +0x14b:  lea    -0x1c(%ebp),%edx
0858815a +0x14e:  mov    %edx,0x8(%esp)
0858815e +0x152:  movl   $0x2,0x4(%esp)
08588166 +0x15a:  mov    %eax,(%esp)
08588169 +0x15d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0858816e +0x162:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08588173 +0x167:  movl   $0x66,0x8(%esp)
0858817b +0x16f:  movl   $"OnlinePreliminaryTeam.cpp",0x4(%esp)
08588183 +0x177:  mov    %eax,(%esp)
08588186 +0x17a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0858818b +0x17f:  mov    %eax,0x4(%esp)
0858818f +0x183:  lea    -0x1c(%ebp),%eax
08588192 +0x186:  mov    %eax,(%esp)
08588195 +0x189:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0858819a +0x18e:  lea    -0x1c(%ebp),%eax
0858819d +0x191:  mov    %eax,(%esp)
085881a0 +0x194:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085881a5 +0x199:  movl   $0x1ed,0x4(%esp)
085881ad +0x1a1:  mov    %eax,(%esp)
085881b0 +0x1a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085881b5 +0x1a9:  lea    -0x1c(%ebp),%eax
085881b8 +0x1ac:  mov    %eax,(%esp)
085881bb +0x1af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085881c0 +0x1b4:  movl   $0xffffffff,0x4(%esp)
085881c8 +0x1bc:  mov    %eax,(%esp)
085881cb +0x1bf:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085881d0 +0x1c4:  lea    -0x1c(%ebp),%eax
085881d3 +0x1c7:  mov    %eax,(%esp)
085881d6 +0x1ca:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085881db +0x1cf:  mov    %eax,(%esp)
085881de +0x1d2:  call   08589148 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x43b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x43b
085881e3 +0x1d7:  mov    %eax,-0x10(%ebp)
085881e6 +0x1da:  mov    0x8(%ebp),%eax
085881e9 +0x1dd:  mov    0x4(%eax),%edx
085881ec +0x1e0:  mov    -0x10(%ebp),%eax
085881ef +0x1e3:  mov    %edx,(%eax)
085881f1 +0x1e5:  mov    -0x10(%ebp),%eax
085881f4 +0x1e8:  movl   $0x0,0x4(%eax)
085881fb +0x1ef:  jmp    085881fe <+0x1f2>
085881fd +0x1f1:  nop
085881fe +0x1f2:  lea    -0x20(%ebp),%eax
08588201 +0x1f5:  mov    %eax,(%esp)
08588204 +0x1f8:  call   085891be <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4b1>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4b1
08588209 +0x1fd:  mov    0x8(%ebp),%eax
0858820c +0x200:  lea    0x24(%eax),%edx
0858820f +0x203:  lea    -0x14(%ebp),%eax
08588212 +0x206:  mov    %edx,0x4(%esp)
08588216 +0x20a:  mov    %eax,(%esp)
08588219 +0x20d:  call   08589184 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x477>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x477
0858821e +0x212:  sub    $0x4,%esp
08588221 +0x215:  lea    -0x14(%ebp),%eax
08588224 +0x218:  mov    %eax,0x4(%esp)
08588228 +0x21c:  lea    -0x20(%ebp),%eax
0858822b +0x21f:  mov    %eax,(%esp)
0858822e +0x222:  call   085891aa <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x49d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x49d
08588233 +0x227:  test   %al,%al
08588235 +0x229:  jne    085880de <+0xd2>
0858823b +0x22f:  mov    -0x10(%ebp),%eax
0858823e +0x232:  mov    0x4(%eax),%eax
08588241 +0x235:  test   %eax,%eax
08588243 +0x237:  je     08588263 <+0x257>
08588245 +0x239:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0858824a +0x23e:  lea    -0x1c(%ebp),%edx
0858824d +0x241:  mov    %edx,0x8(%esp)
08588251 +0x245:  movl   $0x2,0x4(%esp)
08588259 +0x24d:  mov    %eax,(%esp)
0858825c +0x250:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08588261 +0x255:  jmp    08588277 <+0x26b>
08588263 +0x257:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08588268 +0x25c:  lea    -0x1c(%ebp),%edx
0858826b +0x25f:  mov    %edx,0x4(%esp)
0858826f +0x263:  mov    %eax,(%esp)
08588272 +0x266:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08588277 +0x26b:  mov    0x8(%ebp),%eax
0858827a +0x26e:  movb   $0x0,0x3d(%eax)
0858827e +0x272:  mov    $0x1,%ebx
08588283 +0x277:  lea    -0x1c(%ebp),%eax
08588286 +0x27a:  mov    %eax,(%esp)
08588289 +0x27d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0858828e +0x282:  jmp    085882ab <+0x29f>
08588290 +0x284:  mov    %edx,%ebx
08588292 +0x286:  mov    %eax,%esi
08588294 +0x288:  lea    -0x1c(%ebp),%eax
08588297 +0x28b:  mov    %eax,(%esp)
0858829a +0x28e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0858829f +0x293:  mov    %esi,%eax
085882a1 +0x295:  mov    %ebx,%edx
085882a3 +0x297:  mov    %eax,(%esp)
085882a6 +0x29a:  call   08ae3750 <_Unwind_Resume>
085882ab +0x29f:  mov    %ebx,%eax
085882ad +0x2a1:  lea    -0x8(%ebp),%esp
085882b0 +0x2a4:  add    $0x0,%esp
085882b3 +0x2a7:  pop    %ebx
085882b4 +0x2a8:  pop    %esi
085882b5 +0x2a9:  pop    %ebp
085882b6 +0x2aa:  ret
085882b7 +0x2ab:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList @ 0x858800c

/* online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList() */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::_saveTeamMatchList(COnlinePreliminaryTeam *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_18 [4];
  SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST *local_14;
  undefined4 *local_10;
  
  if (this[0x3d] == (COnlinePreliminaryTeam)0x1) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x4e);
    CStreamGuard::CStreamGuard(local_20,pSVar2,false);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08588076 to 08588276 has its CatchHandler @ 08588290 */
    CStreamGuard::operator<<(pCVar3,0x1ed);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    local_14 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST>(pCVar3);
    *(undefined4 *)local_14 = *(undefined4 *)(this + 4);
    *(undefined4 *)(local_14 + 4) = 0;
    std::
    map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                          *)local_24,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                          *)local_24);
      local_10 = (undefined4 *)(iVar4 + 4);
      if (*(char *)(iVar4 + 8) == '\x01') {
        *(undefined1 *)(iVar4 + 8) = 0;
        iVar4 = *(int *)(local_14 + 4);
        puVar5 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
                 operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>
                             *)local_24);
        *(undefined4 *)(local_14 + iVar4 * 8 + 8) = *puVar5;
        *(undefined4 *)(local_14 + *(int *)(local_14 + 4) * 8 + 0xc) = *local_10;
        *(int *)(local_14 + 4) = *(int *)(local_14 + 4) + 1;
        if (*(int *)(local_14 + 4) == 100) {
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
          pSVar2 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x66);
          CStreamGuard::Set(local_20,pSVar2);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
          CStreamGuard::operator<<(pCVar3,0x1ed);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
          CStreamGuard::operator<<(pCVar3,-1);
          pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
          local_14 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM_MATCH_LIST>(pCVar3);
          *(undefined4 *)local_14 = *(undefined4 *)(this + 4);
          *(undefined4 *)(local_14 + 4) = 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> *)
                 local_24);
    }
    if (*(int *)(local_14 + 4) == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,local_20);
    }
    else {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
    this[0x3d] = (COnlinePreliminaryTeam)0x0;
    CStreamGuard::~CStreamGuard(local_20);
  }
  return 1;
}
```
