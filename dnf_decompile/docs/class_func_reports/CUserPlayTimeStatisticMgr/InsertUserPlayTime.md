# InsertUserPlayTime

`_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv`

`CUserPlayTimeStatisticMgr::InsertUserPlayTime()`

| 类 | 地址 |
|---|---|
| `CUserPlayTimeStatisticMgr` | `0x0860cd14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860cd14  _ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv
#           CUserPlayTimeStatisticMgr::InsertUserPlayTime()
# range [0x0860cd14, 0x0860cfa4]
0860cd14 +0x000:  push   %ebp
0860cd15 +0x001:  mov    %esp,%ebp
0860cd17 +0x003:  push   %esi
0860cd18 +0x004:  push   %ebx
0860cd19 +0x005:  sub    $0x30,%esp
0860cd1c +0x008:  mov    0x8(%ebp),%eax
0860cd1f +0x00b:  mov    %eax,(%esp)
0860cd22 +0x00e:  call   08611098 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1116>  ; global constructors keyed to Statistics::Statistics()+0x1116
0860cd27 +0x013:  test   %eax,%eax
0860cd29 +0x015:  setne  %al
0860cd2c +0x018:  test   %al,%al
0860cd2e +0x01a:  je     0860cf96 <+0x282>
0860cd34 +0x020:  mov    0x8(%ebp),%edx
0860cd37 +0x023:  lea    -0x1c(%ebp),%eax
0860cd3a +0x026:  mov    %edx,0x4(%esp)
0860cd3e +0x02a:  mov    %eax,(%esp)
0860cd41 +0x02d:  call   086110ac <_GLOBAL__I__ZN10StatisticsC2Ev+0x112a>  ; global constructors keyed to Statistics::Statistics()+0x112a
0860cd46 +0x032:  sub    $0x4,%esp
0860cd49 +0x035:  mov    0x8(%ebp),%edx
0860cd4c +0x038:  lea    -0x20(%ebp),%eax
0860cd4f +0x03b:  mov    %edx,0x4(%esp)
0860cd53 +0x03f:  mov    %eax,(%esp)
0860cd56 +0x042:  call   08610fb0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x102e>  ; global constructors keyed to Statistics::Statistics()+0x102e
0860cd5b +0x047:  sub    $0x4,%esp
0860cd5e +0x04a:  movl   $0x0,0x8(%esp)
0860cd66 +0x052:  movl   $0x0,0x4(%esp)
0860cd6e +0x05a:  lea    -0x28(%ebp),%eax
0860cd71 +0x05d:  mov    %eax,(%esp)
0860cd74 +0x060:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0860cd79 +0x065:  movl   $0x0,-0x18(%ebp)
0860cd80 +0x06c:  movl   $0x0,-0x14(%ebp)
0860cd87 +0x073:  movl   $0x0,-0x10(%ebp)
0860cd8e +0x07a:  jmp    0860cf05 <+0x1f1>
0860cd93 +0x07f:  lea    -0x1c(%ebp),%eax
0860cd96 +0x082:  mov    %eax,(%esp)
0860cd99 +0x085:  call   08610fea <_GLOBAL__I__ZN10StatisticsC2Ev+0x1068>  ; global constructors keyed to Statistics::Statistics()+0x1068
0860cd9e +0x08a:  mov    (%eax),%eax
0860cda0 +0x08c:  mov    %eax,-0x10(%ebp)
0860cda3 +0x08f:  lea    -0x1c(%ebp),%eax
0860cda6 +0x092:  mov    %eax,(%esp)
0860cda9 +0x095:  call   08610fea <_GLOBAL__I__ZN10StatisticsC2Ev+0x1068>  ; global constructors keyed to Statistics::Statistics()+0x1068
0860cdae +0x09a:  add    $0x4,%eax
0860cdb1 +0x09d:  mov    %eax,-0xc(%ebp)
0860cdb4 +0x0a0:  lea    -0x28(%ebp),%eax
0860cdb7 +0x0a3:  mov    %eax,(%esp)
0860cdba +0x0a6:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
0860cdbf +0x0ab:  test   %eax,%eax
0860cdc1 +0x0ad:  setne  %al
0860cdc4 +0x0b0:  test   %al,%al
0860cdc6 +0x0b2:  je     0860ce5f <+0x14b>
0860cdcc +0x0b8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0860cdd1 +0x0bd:  movl   $0x24a,0x8(%esp)
0860cdd9 +0x0c5:  movl   $"Statistics.cpp",0x4(%esp)
0860cde1 +0x0cd:  mov    %eax,(%esp)
0860cde4 +0x0d0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860cde9 +0x0d5:  mov    %eax,0x4(%esp)
0860cded +0x0d9:  lea    -0x28(%ebp),%eax
0860cdf0 +0x0dc:  mov    %eax,(%esp)
0860cdf3 +0x0df:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0860cdf8 +0x0e4:  lea    -0x28(%ebp),%eax
0860cdfb +0x0e7:  mov    %eax,(%esp)
0860cdfe +0x0ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ce03 +0x0ef:  movl   $0xb6,0x4(%esp)
0860ce0b +0x0f7:  mov    %eax,(%esp)
0860ce0e +0x0fa:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ce13 +0x0ff:  lea    -0x28(%ebp),%eax
0860ce16 +0x102:  mov    %eax,(%esp)
0860ce19 +0x105:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0860ce1e +0x10a:  movl   $0xffffffff,0x4(%esp)
0860ce26 +0x112:  mov    %eax,(%esp)
0860ce29 +0x115:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0860ce2e +0x11a:  lea    -0x28(%ebp),%eax
0860ce31 +0x11d:  mov    %eax,(%esp)
0860ce34 +0x120:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0860ce39 +0x125:  mov    %eax,(%esp)
0860ce3c +0x128:  call   086110f0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x116e>  ; global constructors keyed to Statistics::Statistics()+0x116e
0860ce41 +0x12d:  mov    %eax,-0x18(%ebp)
0860ce44 +0x130:  movl   $0xf4,0x8(%esp)
0860ce4c +0x138:  movl   $0x0,0x4(%esp)
0860ce54 +0x140:  mov    -0x18(%ebp),%eax
0860ce57 +0x143:  mov    %eax,(%esp)
0860ce5a +0x146:  call   0807dcc0 <_init+0x5b8>
0860ce5f +0x14b:  mov    -0x14(%ebp),%edx
0860ce62 +0x14e:  mov    -0x18(%ebp),%ecx
0860ce65 +0x151:  mov    %edx,%eax
0860ce67 +0x153:  add    %eax,%eax
0860ce69 +0x155:  add    %edx,%eax
0860ce6b +0x157:  shl    $0x2,%eax
0860ce6e +0x15a:  lea    (%ecx,%eax,1),%eax
0860ce71 +0x15d:  lea    0x4(%eax),%edx
0860ce74 +0x160:  mov    -0x10(%ebp),%eax
0860ce77 +0x163:  mov    %eax,(%edx)
0860ce79 +0x165:  mov    -0x14(%ebp),%edx
0860ce7c +0x168:  mov    -0xc(%ebp),%eax
0860ce7f +0x16b:  mov    (%eax),%ecx
0860ce81 +0x16d:  mov    -0x18(%ebp),%ebx
0860ce84 +0x170:  mov    %edx,%eax
0860ce86 +0x172:  add    %eax,%eax
0860ce88 +0x174:  add    %edx,%eax
0860ce8a +0x176:  shl    $0x2,%eax
0860ce8d +0x179:  lea    (%ebx,%eax,1),%eax
0860ce90 +0x17c:  add    $0x8,%eax
0860ce93 +0x17f:  mov    %ecx,(%eax)
0860ce95 +0x181:  mov    -0x14(%ebp),%edx
0860ce98 +0x184:  mov    -0xc(%ebp),%eax
0860ce9b +0x187:  mov    0x4(%eax),%ecx
0860ce9e +0x18a:  mov    -0x18(%ebp),%ebx
0860cea1 +0x18d:  mov    %edx,%eax
0860cea3 +0x18f:  add    %eax,%eax
0860cea5 +0x191:  add    %edx,%eax
0860cea7 +0x193:  shl    $0x2,%eax
0860ceaa +0x196:  lea    (%ebx,%eax,1),%eax
0860cead +0x199:  add    $0xc,%eax
0860ceb0 +0x19c:  mov    %ecx,(%eax)
0860ceb2 +0x19e:  addl   $0x1,-0x14(%ebp)
0860ceb6 +0x1a2:  cmpl   $0x13,-0x14(%ebp)
0860ceba +0x1a6:  jle    0860cefa <+0x1e6>
0860cebc +0x1a8:  mov    -0x18(%ebp),%eax
0860cebf +0x1ab:  mov    -0x14(%ebp),%edx
0860cec2 +0x1ae:  mov    %edx,(%eax)
0860cec4 +0x1b0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860cec9 +0x1b5:  lea    -0x28(%ebp),%edx
0860cecc +0x1b8:  mov    %edx,0x8(%esp)
0860ced0 +0x1bc:  movl   $0x4,0x4(%esp)
0860ced8 +0x1c4:  mov    %eax,(%esp)
0860cedb +0x1c7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860cee0 +0x1cc:  movl   $0x0,0x4(%esp)
0860cee8 +0x1d4:  lea    -0x28(%ebp),%eax
0860ceeb +0x1d7:  mov    %eax,(%esp)
0860ceee +0x1da:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0860cef3 +0x1df:  movl   $0x0,-0x14(%ebp)
0860cefa +0x1e6:  lea    -0x1c(%ebp),%eax
0860cefd +0x1e9:  mov    %eax,(%esp)
0860cf00 +0x1ec:  call   086110d2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1150>  ; global constructors keyed to Statistics::Statistics()+0x1150
0860cf05 +0x1f1:  lea    -0x20(%ebp),%eax
0860cf08 +0x1f4:  mov    %eax,0x4(%esp)
0860cf0c +0x1f8:  lea    -0x1c(%ebp),%eax
0860cf0f +0x1fb:  mov    %eax,(%esp)
0860cf12 +0x1fe:  call   08610fd6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1054>  ; global constructors keyed to Statistics::Statistics()+0x1054
0860cf17 +0x203:  test   %al,%al
0860cf19 +0x205:  jne    0860cd93 <+0x7f>
0860cf1f +0x20b:  cmpl   $0x0,-0x14(%ebp)
0860cf23 +0x20f:  jle    0860cf63 <+0x24f>
0860cf25 +0x211:  mov    -0x18(%ebp),%eax
0860cf28 +0x214:  mov    -0x14(%ebp),%edx
0860cf2b +0x217:  mov    %edx,(%eax)
0860cf2d +0x219:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860cf32 +0x21e:  lea    -0x28(%ebp),%edx
0860cf35 +0x221:  mov    %edx,0x8(%esp)
0860cf39 +0x225:  movl   $0x4,0x4(%esp)
0860cf41 +0x22d:  mov    %eax,(%esp)
0860cf44 +0x230:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0860cf49 +0x235:  movl   $0x0,0x4(%esp)
0860cf51 +0x23d:  lea    -0x28(%ebp),%eax
0860cf54 +0x240:  mov    %eax,(%esp)
0860cf57 +0x243:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
0860cf5c +0x248:  movl   $0x0,-0x14(%ebp)
0860cf63 +0x24f:  mov    0x8(%ebp),%eax
0860cf66 +0x252:  mov    %eax,(%esp)
0860cf69 +0x255:  call   08611106 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1184>  ; global constructors keyed to Statistics::Statistics()+0x1184
0860cf6e +0x25a:  jmp    0860cf8b <+0x277>
0860cf70 +0x25c:  mov    %edx,%ebx
0860cf72 +0x25e:  mov    %eax,%esi
0860cf74 +0x260:  lea    -0x28(%ebp),%eax
0860cf77 +0x263:  mov    %eax,(%esp)
0860cf7a +0x266:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860cf7f +0x26b:  mov    %esi,%eax
0860cf81 +0x26d:  mov    %ebx,%edx
0860cf83 +0x26f:  mov    %eax,(%esp)
0860cf86 +0x272:  call   08ae3750 <_Unwind_Resume>
0860cf8b +0x277:  lea    -0x28(%ebp),%eax
0860cf8e +0x27a:  mov    %eax,(%esp)
0860cf91 +0x27d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860cf96 +0x282:  mov    $0x1,%eax
0860cf9b +0x287:  lea    -0x8(%ebp),%esp
0860cf9e +0x28a:  add    $0x0,%esp
0860cfa1 +0x28d:  pop    %ebx
0860cfa2 +0x28e:  pop    %esi
0860cfa3 +0x28f:  pop    %ebp
0860cfa4 +0x290:  ret
```

## 反编译 C

```c
// CUserPlayTimeStatisticMgr::InsertUserPlayTime @ 0x860cd14

/* CUserPlayTimeStatisticMgr::InsertUserPlayTime() */

undefined4 __thiscall CUserPlayTimeStatisticMgr::InsertUserPlayTime(CUserPlayTimeStatisticMgr *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_2c [8];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_24 [4];
  map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
  local_20 [4];
  SIG_USER_PLAY_TIME_STATISTIC *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  iVar2 = std::
          map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
          ::size((map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
                  *)this);
  if (iVar2 != 0) {
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::begin(local_20);
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::end(local_24);
    CStreamGuard::CStreamGuard(local_2c,(Stream *)0x0,false);
    local_1c = (SIG_USER_PLAY_TIME_STATISTIC *)0x0;
    local_18 = 0;
    local_14 = 0;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                         local_20,(_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                          local_20);
      local_14 = *puVar3;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)
                         local_20);
      local_10 = (undefined4 *)(iVar2 + 4);
      iVar2 = CStreamGuard::Get(local_2c);
      if (iVar2 != 0) {
                    /* try { // try from 0860cde4 to 0860cf6d has its CatchHandler @ 0860cf70 */
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x24a);
        CStreamGuard::Set(local_2c,pSVar4);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
        CStreamGuard::operator<<(pCVar5,0xb6);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
        local_1c = CStreamGuard::GetInBuffer<SIG_USER_PLAY_TIME_STATISTIC>(pCVar5);
        memset(local_1c,0,0xf4);
      }
      *(undefined4 *)(local_1c + local_18 * 0xc + 4) = local_14;
      *(undefined4 *)(local_1c + local_18 * 0xc + 8) = *local_10;
      *(undefined4 *)(local_1c + local_18 * 0xc + 0xc) = local_10[1];
      local_18 = local_18 + 1;
      if (0x13 < local_18) {
        *(int *)local_1c = local_18;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
        CStreamGuard::Set(local_2c,(Stream *)0x0);
        local_18 = 0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,stUserPlayInfo_t>> *)local_20);
    }
    if (0 < local_18) {
      *(int *)local_1c = local_18;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
      CStreamGuard::Set(local_2c,(Stream *)0x0);
      local_18 = 0;
    }
    std::
    map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
    ::clear((map<unsigned_int,stUserPlayInfo_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUserPlayInfo_t>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return 1;
}
```
