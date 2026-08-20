# UpdateChannelUser

`_ZN9GameWorld17UpdateChannelUserEv`

`GameWorld::UpdateChannelUser()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cb72a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cb72a  _ZN9GameWorld17UpdateChannelUserEv
#           GameWorld::UpdateChannelUser()
# range [0x086cb72a, 0x086cb889]
086cb72a +0x000:  push   %ebp
086cb72b +0x001:  mov    %esp,%ebp
086cb72d +0x003:  push   %esi
086cb72e +0x004:  push   %ebx
086cb72f +0x005:  sub    $0x60,%esp
086cb732 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cb737 +0x00d:  movl   $0x1146,0x8(%esp)
086cb73f +0x015:  movl   $"world.cpp",0x4(%esp)
086cb747 +0x01d:  mov    %eax,(%esp)
086cb74a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cb74f +0x025:  movl   $0x1,0x8(%esp)
086cb757 +0x02d:  mov    %eax,0x4(%esp)
086cb75b +0x031:  lea    -0x14(%ebp),%eax
086cb75e +0x034:  mov    %eax,(%esp)
086cb761 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cb766 +0x03c:  lea    -0x14(%ebp),%eax
086cb769 +0x03f:  mov    %eax,(%esp)
086cb76c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb771 +0x047:  movl   $0x2e,0x4(%esp)
086cb779 +0x04f:  mov    %eax,(%esp)
086cb77c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb781 +0x057:  lea    -0x14(%ebp),%eax
086cb784 +0x05a:  mov    %eax,(%esp)
086cb787 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb78c +0x062:  movl   $0xffffffff,0x4(%esp)
086cb794 +0x06a:  mov    %eax,(%esp)
086cb797 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb79c +0x072:  movl   $0x3a,0x8(%esp)
086cb7a4 +0x07a:  movl   $0x0,0x4(%esp)
086cb7ac +0x082:  lea    -0x4e(%ebp),%eax
086cb7af +0x085:  mov    %eax,(%esp)
086cb7b2 +0x088:  call   0807dcc0 <_init+0x5b8>
086cb7b7 +0x08d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb7bc +0x092:  mov    0x198(%eax),%eax
086cb7c2 +0x098:  mov    %eax,-0x4e(%ebp)
086cb7c5 +0x09b:  mov    0x8(%ebp),%eax
086cb7c8 +0x09e:  add    $0x134,%eax
086cb7cd +0x0a3:  mov    %eax,(%esp)
086cb7d0 +0x0a6:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086cb7d5 +0x0ab:  mov    %ax,-0x4a(%ebp)
086cb7d9 +0x0af:  movl   $0x0,-0xc(%ebp)
086cb7e0 +0x0b6:  jmp    086cb7fa <+0xd0>
086cb7e2 +0x0b8:  mov    -0xc(%ebp),%eax
086cb7e5 +0x0bb:  mov    -0xc(%ebp),%ecx
086cb7e8 +0x0be:  mov    0x8(%ebp),%edx
086cb7eb +0x0c1:  add    $0x58,%ecx
086cb7ee +0x0c4:  mov    0x4(%edx,%ecx,4),%edx
086cb7f2 +0x0c8:  mov    %edx,-0x48(%ebp,%eax,4)
086cb7f6 +0x0cc:  addl   $0x1,-0xc(%ebp)
086cb7fa +0x0d0:  cmpl   $0xa,-0xc(%ebp)
086cb7fe +0x0d4:  setle  %al
086cb801 +0x0d7:  test   %al,%al
086cb803 +0x0d9:  jne    086cb7e2 <+0xb8>
086cb805 +0x0db:  mov    0x8(%ebp),%eax
086cb808 +0x0de:  mov    0x194(%eax),%eax
086cb80e +0x0e4:  mov    %eax,-0x1c(%ebp)
086cb811 +0x0e7:  mov    0x8(%ebp),%eax
086cb814 +0x0ea:  mov    0x190(%eax),%eax
086cb81a +0x0f0:  mov    %eax,-0x18(%ebp)
086cb81d +0x0f3:  lea    -0x14(%ebp),%eax
086cb820 +0x0f6:  mov    %eax,(%esp)
086cb823 +0x0f9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cb828 +0x0fe:  movl   $0x3a,0x8(%esp)
086cb830 +0x106:  lea    -0x4e(%ebp),%edx
086cb833 +0x109:  mov    %edx,0x4(%esp)
086cb837 +0x10d:  mov    %eax,(%esp)
086cb83a +0x110:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
086cb83f +0x115:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cb844 +0x11a:  lea    -0x14(%ebp),%edx
086cb847 +0x11d:  mov    %edx,0x8(%esp)
086cb84b +0x121:  movl   $0x2,0x4(%esp)
086cb853 +0x129:  mov    %eax,(%esp)
086cb856 +0x12c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cb85b +0x131:  jmp    086cb878 <+0x14e>
086cb85d +0x133:  mov    %edx,%ebx
086cb85f +0x135:  mov    %eax,%esi
086cb861 +0x137:  lea    -0x14(%ebp),%eax
086cb864 +0x13a:  mov    %eax,(%esp)
086cb867 +0x13d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cb86c +0x142:  mov    %esi,%eax
086cb86e +0x144:  mov    %ebx,%edx
086cb870 +0x146:  mov    %eax,(%esp)
086cb873 +0x149:  call   08ae3750 <_Unwind_Resume>
086cb878 +0x14e:  lea    -0x14(%ebp),%eax
086cb87b +0x151:  mov    %eax,(%esp)
086cb87e +0x154:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cb883 +0x159:  add    $0x60,%esp
086cb886 +0x15c:  pop    %ebx
086cb887 +0x15d:  pop    %esi
086cb888 +0x15e:  pop    %ebp
086cb889 +0x15f:  ret
```

## 反编译 C

```c
// GameWorld::UpdateChannelUser @ 0x86cb72a

/* GameWorld::UpdateChannelUser() */

void __thiscall GameWorld::UpdateChannelUser(GameWorld *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 local_52;
  undefined2 local_4e;
  undefined4 auStack_4c [11];
  undefined4 local_20;
  undefined4 local_1c;
  CStreamGuard local_18 [8];
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x1146);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086cb77c to 086cb85a has its CatchHandler @ 086cb85d */
  CStreamGuard::operator<<(pCVar2,0x2e);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  memset(&local_52,0,0x3a);
  iVar3 = G_CEnvironment();
  local_52 = *(undefined4 *)(iVar3 + 0x198);
  local_4e = std::
             map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
             ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                     *)(this + 0x134));
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    auStack_4c[local_10] = *(undefined4 *)(this + (local_10 + 0x58) * 4 + 4);
  }
  local_20 = *(undefined4 *)(this + 0x194);
  local_1c = *(undefined4 *)(this + 400);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,&local_52,0x3a);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
