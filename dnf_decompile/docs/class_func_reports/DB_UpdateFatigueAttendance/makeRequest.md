# makeRequest

`_ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE`

`DB_UpdateFatigueAttendance::makeRequest(unsigned int, std::map<unsigned char, short, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, short> > > const&)`

| 类 | 地址 |
|---|---|
| `DB_UpdateFatigueAttendance` | `0x084447d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084447d6  _ZN26DB_UpdateFatigueAttendance11makeRequestEjRKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE
#           DB_UpdateFatigueAttendance::makeRequest(unsigned int, std::map<unsigned char, short, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, short> > > const&)
# range [0x084447d6, 0x08444971]
084447d6 +0x000:  push   %ebp
084447d7 +0x001:  mov    %esp,%ebp
084447d9 +0x003:  push   %esi
084447da +0x004:  push   %ebx
084447db +0x005:  sub    $0x20,%esp
084447de +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084447e3 +0x00d:  movl   $0xab72,0x8(%esp)
084447eb +0x015:  movl   $"DBThread.cpp",0x4(%esp)
084447f3 +0x01d:  mov    %eax,(%esp)
084447f6 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084447fb +0x025:  movl   $0x1,0x8(%esp)
08444803 +0x02d:  mov    %eax,0x4(%esp)
08444807 +0x031:  lea    -0x10(%ebp),%eax
0844480a +0x034:  mov    %eax,(%esp)
0844480d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08444812 +0x03c:  lea    -0x10(%ebp),%eax
08444815 +0x03f:  mov    %eax,(%esp)
08444818 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844481d +0x047:  movl   $0x2ac,0x4(%esp)
08444825 +0x04f:  mov    %eax,(%esp)
08444828 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844482d +0x057:  lea    -0x10(%ebp),%eax
08444830 +0x05a:  mov    %eax,(%esp)
08444833 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444838 +0x062:  movl   $0xffffffff,0x4(%esp)
08444840 +0x06a:  mov    %eax,(%esp)
08444843 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444848 +0x072:  lea    -0x10(%ebp),%eax
0844484b +0x075:  mov    %eax,(%esp)
0844484e +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08444853 +0x07d:  mov    0x8(%ebp),%edx
08444856 +0x080:  mov    %edx,0x4(%esp)
0844485a +0x084:  mov    %eax,(%esp)
0844485d +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08444862 +0x08c:  mov    0xc(%ebp),%eax
08444865 +0x08f:  mov    %eax,(%esp)
08444868 +0x092:  call   08450242 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2e58>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2e58
0844486d +0x097:  mov    %eax,%ebx
0844486f +0x099:  lea    -0x10(%ebp),%eax
08444872 +0x09c:  mov    %eax,(%esp)
08444875 +0x09f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844487a +0x0a4:  mov    %ebx,0x4(%esp)
0844487e +0x0a8:  mov    %eax,(%esp)
08444881 +0x0ab:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08444886 +0x0b0:  lea    -0x14(%ebp),%eax
08444889 +0x0b3:  mov    0xc(%ebp),%edx
0844488c +0x0b6:  mov    %edx,0x4(%esp)
08444890 +0x0ba:  mov    %eax,(%esp)
08444893 +0x0bd:  call   084540fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d14>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d14
08444898 +0x0c2:  sub    $0x4,%esp
0844489b +0x0c5:  lea    -0x18(%ebp),%eax
0844489e +0x0c8:  mov    0xc(%ebp),%edx
084448a1 +0x0cb:  mov    %edx,0x4(%esp)
084448a5 +0x0cf:  mov    %eax,(%esp)
084448a8 +0x0d2:  call   08454124 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d3a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d3a
084448ad +0x0d7:  sub    $0x4,%esp
084448b0 +0x0da:  jmp    0844490e <+0x138>
084448b2 +0x0dc:  lea    -0x14(%ebp),%eax
084448b5 +0x0df:  mov    %eax,(%esp)
084448b8 +0x0e2:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
084448bd +0x0e7:  movzbl (%eax),%eax
084448c0 +0x0ea:  movzbl %al,%ebx
084448c3 +0x0ed:  lea    -0x10(%ebp),%eax
084448c6 +0x0f0:  mov    %eax,(%esp)
084448c9 +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084448ce +0x0f8:  mov    %ebx,0x4(%esp)
084448d2 +0x0fc:  mov    %eax,(%esp)
084448d5 +0x0ff:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
084448da +0x104:  lea    -0x14(%ebp),%eax
084448dd +0x107:  mov    %eax,(%esp)
084448e0 +0x10a:  call   0845415e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d74
084448e5 +0x10f:  movzwl 0x2(%eax),%eax
084448e9 +0x113:  movswl %ax,%ebx
084448ec +0x116:  lea    -0x10(%ebp),%eax
084448ef +0x119:  mov    %eax,(%esp)
084448f2 +0x11c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084448f7 +0x121:  mov    %ebx,0x4(%esp)
084448fb +0x125:  mov    %eax,(%esp)
084448fe +0x128:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
08444903 +0x12d:  lea    -0x14(%ebp),%eax
08444906 +0x130:  mov    %eax,(%esp)
08444909 +0x133:  call   0845416c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d82>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d82
0844490e +0x138:  lea    -0x18(%ebp),%eax
08444911 +0x13b:  mov    %eax,0x4(%esp)
08444915 +0x13f:  lea    -0x14(%ebp),%eax
08444918 +0x142:  mov    %eax,(%esp)
0844491b +0x145:  call   0845414a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6d60>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6d60
08444920 +0x14a:  test   %al,%al
08444922 +0x14c:  jne    084448b2 <+0xdc>
08444924 +0x14e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08444929 +0x153:  lea    -0x10(%ebp),%edx
0844492c +0x156:  mov    %edx,0x8(%esp)
08444930 +0x15a:  movl   $0x2,0x4(%esp)
08444938 +0x162:  mov    %eax,(%esp)
0844493b +0x165:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08444940 +0x16a:  jmp    0844495d <+0x187>
08444942 +0x16c:  mov    %edx,%ebx
08444944 +0x16e:  mov    %eax,%esi
08444946 +0x170:  lea    -0x10(%ebp),%eax
08444949 +0x173:  mov    %eax,(%esp)
0844494c +0x176:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444951 +0x17b:  mov    %esi,%eax
08444953 +0x17d:  mov    %ebx,%edx
08444955 +0x17f:  mov    %eax,(%esp)
08444958 +0x182:  call   08ae3750 <_Unwind_Resume>
0844495d +0x187:  lea    -0x10(%ebp),%eax
08444960 +0x18a:  mov    %eax,(%esp)
08444963 +0x18d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08444968 +0x192:  lea    -0x8(%ebp),%esp
0844496b +0x195:  add    $0x0,%esp
0844496e +0x198:  pop    %ebx
0844496f +0x199:  pop    %esi
08444970 +0x19a:  pop    %ebp
08444971 +0x19b:  ret
```

## 反编译 C

```c
// DB_UpdateFatigueAttendance::makeRequest @ 0x84447d6

/* DB_UpdateFatigueAttendance::makeRequest(unsigned int, std::map<unsigned char, short,
   std::less<unsigned char>, std::allocator<std::pair<unsigned char const, short> > > const&) */

void DB_UpdateFatigueAttendance::makeRequest(uint param_1,map *param_2)

{
  uchar uVar1;
  short sVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  uchar *puVar7;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_1c [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_18 [4];
  CStreamGuard local_14 [8];
  
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab72);
  CStreamGuard::CStreamGuard(local_14,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444828 to 0844493f has its CatchHandler @ 08444942 */
  CStreamGuard::operator<<(pCVar5,0x2ac);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,-1);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,param_1);
  iVar6 = std::
          map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          ::size((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                  *)param_2);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar5,iVar6);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_18);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_1c);
  while( true ) {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18,
                       (_Rb_tree_const_iterator *)local_1c);
    if (cVar3 == '\0') break;
    puVar7 = (uchar *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                 local_18);
    uVar1 = *puVar7;
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar5,uVar1);
    iVar6 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18);
    sVar2 = *(short *)(iVar6 + 2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar5,sVar2);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)local_18);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
