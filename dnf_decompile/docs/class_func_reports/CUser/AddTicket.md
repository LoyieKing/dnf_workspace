# AddTicket

`_ZN5CUser9AddTicketEib`

`CUser::AddTicket(int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08678282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08678282  _ZN5CUser9AddTicketEib
#           CUser::AddTicket(int, bool)
# range [0x08678282, 0x0867846d]
08678282 +0x000:  push   %ebp
08678283 +0x001:  mov    %esp,%ebp
08678285 +0x003:  push   %esi
08678286 +0x004:  push   %ebx
08678287 +0x005:  sub    $0x40,%esp
0867828a +0x008:  mov    0x10(%ebp),%eax
0867828d +0x00b:  mov    %al,-0x2c(%ebp)
08678290 +0x00e:  movzbl -0x2c(%ebp),%eax
08678294 +0x012:  xor    $0x1,%eax
08678297 +0x015:  test   %al,%al
08678299 +0x017:  je     086782b8 <+0x36>
0867829b +0x019:  mov    0x8(%ebp),%eax
0867829e +0x01c:  lea    0x8cf80(%eax),%edx
086782a4 +0x022:  lea    0xc(%ebp),%eax
086782a7 +0x025:  mov    %eax,0x4(%esp)
086782ab +0x029:  mov    %edx,(%esp)
086782ae +0x02c:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
086782b3 +0x031:  jmp    08678463 <+0x1e1>
086782b8 +0x036:  mov    0x8(%ebp),%eax
086782bb +0x039:  lea    0x8cf80(%eax),%edx
086782c1 +0x03f:  lea    -0x14(%ebp),%eax
086782c4 +0x042:  mov    %edx,0x4(%esp)
086782c8 +0x046:  mov    %eax,(%esp)
086782cb +0x049:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
086782d0 +0x04e:  sub    $0x4,%esp
086782d3 +0x051:  jmp    0867830f <+0x8d>
086782d5 +0x053:  lea    -0x14(%ebp),%eax
086782d8 +0x056:  mov    %eax,(%esp)
086782db +0x059:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
086782e0 +0x05e:  mov    (%eax),%edx
086782e2 +0x060:  mov    0xc(%ebp),%eax
086782e5 +0x063:  cmp    %eax,%edx
086782e7 +0x065:  sete   %al
086782ea +0x068:  test   %al,%al
086782ec +0x06a:  jne    08678462 <+0x1e0>
086782f2 +0x070:  lea    -0xc(%ebp),%eax
086782f5 +0x073:  movl   $0x0,0x8(%esp)
086782fd +0x07b:  lea    -0x14(%ebp),%edx
08678300 +0x07e:  mov    %edx,0x4(%esp)
08678304 +0x082:  mov    %eax,(%esp)
08678307 +0x085:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
0867830c +0x08a:  sub    $0x4,%esp
0867830f +0x08d:  mov    0x8(%ebp),%eax
08678312 +0x090:  lea    0x8cf80(%eax),%edx
08678318 +0x096:  lea    -0x10(%ebp),%eax
0867831b +0x099:  mov    %edx,0x4(%esp)
0867831f +0x09d:  mov    %eax,(%esp)
08678322 +0x0a0:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
08678327 +0x0a5:  sub    $0x4,%esp
0867832a +0x0a8:  lea    -0x10(%ebp),%eax
0867832d +0x0ab:  mov    %eax,0x4(%esp)
08678331 +0x0af:  lea    -0x14(%ebp),%eax
08678334 +0x0b2:  mov    %eax,(%esp)
08678337 +0x0b5:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0867833c +0x0ba:  test   %al,%al
0867833e +0x0bc:  jne    086782d5 <+0x53>
08678340 +0x0be:  mov    0x8(%ebp),%eax
08678343 +0x0c1:  lea    0x8cf80(%eax),%edx
08678349 +0x0c7:  lea    0xc(%ebp),%eax
0867834c +0x0ca:  mov    %eax,0x4(%esp)
08678350 +0x0ce:  mov    %edx,(%esp)
08678353 +0x0d1:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
08678358 +0x0d6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0867835d +0x0db:  movl   $0x703d,0x8(%esp)
08678365 +0x0e3:  movl   $"user.cpp",0x4(%esp)
0867836d +0x0eb:  mov    %eax,(%esp)
08678370 +0x0ee:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08678375 +0x0f3:  movl   $0x1,0x8(%esp)
0867837d +0x0fb:  mov    %eax,0x4(%esp)
08678381 +0x0ff:  lea    -0x1c(%ebp),%eax
08678384 +0x102:  mov    %eax,(%esp)
08678387 +0x105:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0867838c +0x10a:  lea    -0x1c(%ebp),%eax
0867838f +0x10d:  mov    %eax,(%esp)
08678392 +0x110:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08678397 +0x115:  movl   $0x28,0x4(%esp)
0867839f +0x11d:  mov    %eax,(%esp)
086783a2 +0x120:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086783a7 +0x125:  mov    0x8(%ebp),%eax
086783aa +0x128:  mov    %eax,(%esp)
086783ad +0x12b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086783b2 +0x130:  mov    %eax,%ebx
086783b4 +0x132:  lea    -0x1c(%ebp),%eax
086783b7 +0x135:  mov    %eax,(%esp)
086783ba +0x138:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086783bf +0x13d:  mov    %ebx,0x4(%esp)
086783c3 +0x141:  mov    %eax,(%esp)
086783c6 +0x144:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086783cb +0x149:  movl   $0x8,0x8(%esp)
086783d3 +0x151:  movl   $0x0,0x4(%esp)
086783db +0x159:  lea    -0x24(%ebp),%eax
086783de +0x15c:  mov    %eax,(%esp)
086783e1 +0x15f:  call   0807dcc0 <_init+0x5b8>
086783e6 +0x164:  mov    0x8(%ebp),%eax
086783e9 +0x167:  mov    %eax,(%esp)
086783ec +0x16a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086783f1 +0x16f:  mov    %eax,-0x24(%ebp)
086783f4 +0x172:  mov    0xc(%ebp),%eax
086783f7 +0x175:  mov    %eax,-0x20(%ebp)
086783fa +0x178:  lea    -0x1c(%ebp),%eax
086783fd +0x17b:  mov    %eax,(%esp)
08678400 +0x17e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08678405 +0x183:  movl   $0x8,0x8(%esp)
0867840d +0x18b:  lea    -0x24(%ebp),%edx
08678410 +0x18e:  mov    %edx,0x4(%esp)
08678414 +0x192:  mov    %eax,(%esp)
08678417 +0x195:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0867841c +0x19a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08678421 +0x19f:  lea    -0x1c(%ebp),%edx
08678424 +0x1a2:  mov    %edx,0x8(%esp)
08678428 +0x1a6:  movl   $0x2,0x4(%esp)
08678430 +0x1ae:  mov    %eax,(%esp)
08678433 +0x1b1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08678438 +0x1b6:  jmp    08678455 <+0x1d3>
0867843a +0x1b8:  mov    %edx,%ebx
0867843c +0x1ba:  mov    %eax,%esi
0867843e +0x1bc:  lea    -0x1c(%ebp),%eax
08678441 +0x1bf:  mov    %eax,(%esp)
08678444 +0x1c2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08678449 +0x1c7:  mov    %esi,%eax
0867844b +0x1c9:  mov    %ebx,%edx
0867844d +0x1cb:  mov    %eax,(%esp)
08678450 +0x1ce:  call   08ae3750 <_Unwind_Resume>
08678455 +0x1d3:  lea    -0x1c(%ebp),%eax
08678458 +0x1d6:  mov    %eax,(%esp)
0867845b +0x1d9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08678460 +0x1de:  jmp    08678463 <+0x1e1>
08678462 +0x1e0:  nop
08678463 +0x1e1:  lea    -0x8(%ebp),%esp
08678466 +0x1e4:  add    $0x0,%esp
08678469 +0x1e7:  pop    %ebx
0867846a +0x1e8:  pop    %esi
0867846b +0x1e9:  pop    %ebp
0867846c +0x1ea:  ret
0867846d +0x1eb:  nop
```

## 反编译 C

```c
// CUser::AddTicket @ 0x8678282

/* CUser::AddTicket(int, bool) */

void __thiscall CUser::AddTicket(CUser *this,int param_1,bool param_2)

{
  char cVar1;
  int *piVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined3 in_stack_0000000d;
  undefined4 local_28;
  int local_24;
  CStreamGuard local_20 [8];
  _List_iterator<int> local_18 [4];
  _List_iterator local_14 [4];
  _List_iterator<int> local_10 [4];
  
  if (param_2) {
    std::list<int,std::allocator<int>>::begin();
    while( true ) {
      std::list<int,std::allocator<int>>::end();
      cVar1 = std::_List_iterator<int>::operator!=(local_18,local_14);
      if (cVar1 == '\0') break;
      piVar2 = (int *)std::_List_iterator<int>::operator*(local_18);
      if (*piVar2 == param_1) {
        return;
      }
      std::_List_iterator<int>::operator++(local_10,(int)local_18);
    }
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(this + 0x8cf80),&param_1);
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x703d);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 086783a2 to 08678437 has its CatchHandler @ 0867843a */
    CStreamGuard::operator<<(pCVar4,0x28);
    iVar5 = GetUID(this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,iVar5);
    memset(&local_28,0,8);
    local_28 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    local_24 = param_1;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    CStreamGuard::put_binary(pCVar4,&local_28,8);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    CStreamGuard::~CStreamGuard(local_20);
  }
  else {
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(this + 0x8cf80),&param_1);
  }
  return;
}
```
