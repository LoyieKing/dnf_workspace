# _saveData

`_ZN9item_lock9CItemLock9_saveDataEP5CUser`

`item_lock::CItemLock::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x0854176e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854176e  _ZN9item_lock9CItemLock9_saveDataEP5CUser
#           item_lock::CItemLock::_saveData(CUser*)
# range [0x0854176e, 0x08541953]
0854176e +0x000:  push   %ebp
0854176f +0x001:  mov    %esp,%ebp
08541771 +0x003:  push   %esi
08541772 +0x004:  push   %ebx
08541773 +0x005:  sub    $0x40,%esp
08541776 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0854177b +0x00d:  movl   $0x4b,0x8(%esp)
08541783 +0x015:  movl   $"ItemLock.cpp",0x4(%esp)
0854178b +0x01d:  mov    %eax,(%esp)
0854178e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08541793 +0x025:  movl   $0x1,0x8(%esp)
0854179b +0x02d:  mov    %eax,0x4(%esp)
0854179f +0x031:  lea    -0x1c(%ebp),%eax
085417a2 +0x034:  mov    %eax,(%esp)
085417a5 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085417aa +0x03c:  lea    -0x1c(%ebp),%eax
085417ad +0x03f:  mov    %eax,(%esp)
085417b0 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085417b5 +0x047:  movl   $0x1b8,0x4(%esp)
085417bd +0x04f:  mov    %eax,(%esp)
085417c0 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085417c5 +0x057:  mov    0xc(%ebp),%eax
085417c8 +0x05a:  mov    %eax,(%esp)
085417cb +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085417d0 +0x062:  mov    %eax,%ebx
085417d2 +0x064:  lea    -0x1c(%ebp),%eax
085417d5 +0x067:  mov    %eax,(%esp)
085417d8 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085417dd +0x06f:  mov    %ebx,0x4(%esp)
085417e1 +0x073:  mov    %eax,(%esp)
085417e4 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085417e9 +0x07b:  lea    -0x1c(%ebp),%eax
085417ec +0x07e:  mov    %eax,(%esp)
085417ef +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085417f4 +0x086:  mov    %eax,(%esp)
085417f7 +0x089:  call   08543238 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x21a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x21a
085417fc +0x08e:  mov    %eax,-0x10(%ebp)
085417ff +0x091:  movl   $0x324,0x8(%esp)
08541807 +0x099:  movl   $0x0,0x4(%esp)
0854180f +0x0a1:  mov    -0x10(%ebp),%eax
08541812 +0x0a4:  mov    %eax,(%esp)
08541815 +0x0a7:  call   0807dcc0 <_init+0x5b8>
0854181a +0x0ac:  movl   $0xffffffff,0x4(%esp)
08541822 +0x0b4:  mov    0xc(%ebp),%eax
08541825 +0x0b7:  mov    %eax,(%esp)
08541828 +0x0ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0854182d +0x0bf:  mov    %eax,%edx
0854182f +0x0c1:  mov    -0x10(%ebp),%eax
08541832 +0x0c4:  mov    %edx,(%eax)
08541834 +0x0c6:  mov    0x8(%ebp),%eax
08541837 +0x0c9:  lea    0x8(%eax),%edx
0854183a +0x0cc:  lea    -0x20(%ebp),%eax
0854183d +0x0cf:  mov    %edx,0x4(%esp)
08541841 +0x0d3:  mov    %eax,(%esp)
08541844 +0x0d6:  call   0854324e <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x230>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x230
08541849 +0x0db:  sub    $0x4,%esp
0854184c +0x0de:  jmp    085418d3 <+0x165>
08541851 +0x0e3:  lea    -0x20(%ebp),%eax
08541854 +0x0e6:  mov    %eax,(%esp)
08541857 +0x0e9:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
0854185c +0x0ee:  movzbl (%eax),%eax
0854185f +0x0f1:  movzbl %al,%eax
08541862 +0x0f4:  sub    $0x1,%eax
08541865 +0x0f7:  mov    %eax,-0xc(%ebp)
08541868 +0x0fa:  cmpl   $0x63,-0xc(%ebp)
0854186c +0x0fe:  jg     08541874 <+0x106>
0854186e +0x100:  cmpl   $0x0,-0xc(%ebp)
08541872 +0x104:  jns    085418a9 <+0x13b>
08541874 +0x106:  mov    -0xc(%ebp),%eax
08541877 +0x109:  mov    %eax,0x14(%esp)
0854187b +0x10d:  movl   $"itemlock error index %d",0x10(%esp)
08541883 +0x115:  movl   $0x59,0xc(%esp)
0854188b +0x11d:  movl   $&_ZZN9item_lock9CItemLock9_saveDataEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08541893 +0x125:  movl   $"ItemLock.cpp",0x4(%esp)
0854189b +0x12d:  movl   $0x1,(%esp)
085418a2 +0x134:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085418a7 +0x139:  jmp    085418c8 <+0x15a>
085418a9 +0x13b:  mov    -0xc(%ebp),%ebx
085418ac +0x13e:  lea    -0x20(%ebp),%eax
085418af +0x141:  mov    %eax,(%esp)
085418b2 +0x144:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
085418b7 +0x149:  mov    -0x10(%ebp),%ecx
085418ba +0x14c:  mov    0x8(%eax),%edx
085418bd +0x14f:  mov    0x4(%eax),%eax
085418c0 +0x152:  mov    %eax,0x4(%ecx,%ebx,8)
085418c4 +0x156:  mov    %edx,0x8(%ecx,%ebx,8)
085418c8 +0x15a:  lea    -0x20(%ebp),%eax
085418cb +0x15d:  mov    %eax,(%esp)
085418ce +0x160:  call   085432ae <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x290>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x290
085418d3 +0x165:  mov    0x8(%ebp),%eax
085418d6 +0x168:  lea    0x8(%eax),%edx
085418d9 +0x16b:  lea    -0x14(%ebp),%eax
085418dc +0x16e:  mov    %edx,0x4(%esp)
085418e0 +0x172:  mov    %eax,(%esp)
085418e3 +0x175:  call   08543274 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x256>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x256
085418e8 +0x17a:  sub    $0x4,%esp
085418eb +0x17d:  lea    -0x14(%ebp),%eax
085418ee +0x180:  mov    %eax,0x4(%esp)
085418f2 +0x184:  lea    -0x20(%ebp),%eax
085418f5 +0x187:  mov    %eax,(%esp)
085418f8 +0x18a:  call   0854329a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x27c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x27c
085418fd +0x18f:  test   %al,%al
085418ff +0x191:  jne    08541851 <+0xe3>
08541905 +0x197:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0854190a +0x19c:  lea    -0x1c(%ebp),%edx
0854190d +0x19f:  mov    %edx,0x8(%esp)
08541911 +0x1a3:  movl   $0x2,0x4(%esp)
08541919 +0x1ab:  mov    %eax,(%esp)
0854191c +0x1ae:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08541921 +0x1b3:  mov    $0x1,%ebx
08541926 +0x1b8:  lea    -0x1c(%ebp),%eax
08541929 +0x1bb:  mov    %eax,(%esp)
0854192c +0x1be:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08541931 +0x1c3:  mov    %ebx,%eax
08541933 +0x1c5:  lea    -0x8(%ebp),%esp
08541936 +0x1c8:  add    $0x0,%esp
08541939 +0x1cb:  pop    %ebx
0854193a +0x1cc:  pop    %esi
0854193b +0x1cd:  pop    %ebp
0854193c +0x1ce:  ret
0854193d +0x1cf:  mov    %edx,%ebx
0854193f +0x1d1:  mov    %eax,%esi
08541941 +0x1d3:  lea    -0x1c(%ebp),%eax
08541944 +0x1d6:  mov    %eax,(%esp)
08541947 +0x1d9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0854194c +0x1de:  mov    %esi,%eax
0854194e +0x1e0:  mov    %ebx,%edx
08541950 +0x1e2:  mov    %eax,(%esp)
08541953 +0x1e5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// item_lock::CItemLock::_saveData @ 0x854176e

/* item_lock::CItemLock::_saveData(CUser*) */

undefined4 __thiscall item_lock::CItemLock::_saveData(CItemLock *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_18 [4];
  SIG_ITEM_LOCK_UPDATE *local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemLock.cpp",0x4b);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085417c0 to 08541920 has its CatchHandler @ 0854193d */
  CStreamGuard::operator<<(pCVar3,0x1b8);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_14 = CStreamGuard::GetInBuffer<SIG_ITEM_LOCK_UPDATE>(pCVar3);
  memset(local_14,0,0x324);
  uVar5 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_14 = uVar5;
  std::
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_24,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    pbVar6 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                     operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                                local_24);
    iVar4 = *pbVar6 - 1;
    local_10 = iVar4;
    if ((iVar4 < 100) && (-1 < iVar4)) {
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_24);
      uVar5 = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(local_14 + iVar4 * 8 + 4) = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(local_14 + iVar4 * 8 + 8) = uVar5;
    }
    else {
      LogManager::logFormat
                (1,"ItemLock.cpp","virtual bool item_lock::CItemLock::_saveData(CUser*)",0x59,
                 "itemlock error index %d",iVar4);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_24);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}
```
