# updatePolicy

`_ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE`

`ServiceRestrictManager::updatePolicy(RestrictCategory::Enum)`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816eb62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816eb62  _ZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumE
#           ServiceRestrictManager::updatePolicy(RestrictCategory::Enum)
# range [0x0816eb62, 0x0816ecd1]
0816eb62 +0x000:  push   %ebp
0816eb63 +0x001:  mov    %esp,%ebp
0816eb65 +0x003:  push   %esi
0816eb66 +0x004:  push   %ebx
0816eb67 +0x005:  sub    $0x40,%esp
0816eb6a +0x008:  mov    0x8(%ebp),%edx
0816eb6d +0x00b:  lea    -0x24(%ebp),%eax
0816eb70 +0x00e:  lea    0xc(%ebp),%ecx
0816eb73 +0x011:  mov    %ecx,0x8(%esp)
0816eb77 +0x015:  mov    %edx,0x4(%esp)
0816eb7b +0x019:  mov    %eax,(%esp)
0816eb7e +0x01c:  call   0816f09c <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x38a>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x38a
0816eb83 +0x021:  sub    $0x4,%esp
0816eb86 +0x024:  mov    0x8(%ebp),%edx
0816eb89 +0x027:  lea    -0x20(%ebp),%eax
0816eb8c +0x02a:  mov    %edx,0x4(%esp)
0816eb90 +0x02e:  mov    %eax,(%esp)
0816eb93 +0x031:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816eb98 +0x036:  sub    $0x4,%esp
0816eb9b +0x039:  lea    -0x20(%ebp),%eax
0816eb9e +0x03c:  mov    %eax,0x4(%esp)
0816eba2 +0x040:  lea    -0x24(%ebp),%eax
0816eba5 +0x043:  mov    %eax,(%esp)
0816eba8 +0x046:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816ebad +0x04b:  test   %al,%al
0816ebaf +0x04d:  je     0816ecc8 <+0x166>
0816ebb5 +0x053:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0816ebba +0x058:  movl   $0x1fd,0x8(%esp)
0816ebc2 +0x060:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816ebca +0x068:  mov    %eax,(%esp)
0816ebcd +0x06b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0816ebd2 +0x070:  movl   $0x1,0x8(%esp)
0816ebda +0x078:  mov    %eax,0x4(%esp)
0816ebde +0x07c:  lea    -0x2c(%ebp),%eax
0816ebe1 +0x07f:  mov    %eax,(%esp)
0816ebe4 +0x082:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0816ebe9 +0x087:  movl   $0xffffffff,0x8(%esp)
0816ebf1 +0x08f:  movl   $0x2,0x4(%esp)
0816ebf9 +0x097:  lea    -0x2c(%ebp),%eax
0816ebfc +0x09a:  mov    %eax,(%esp)
0816ebff +0x09d:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0816ec04 +0x0a2:  lea    -0x2c(%ebp),%eax
0816ec07 +0x0a5:  mov    %eax,(%esp)
0816ec0a +0x0a8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0816ec0f +0x0ad:  mov    %eax,(%esp)
0816ec12 +0x0b0:  call   0815e9a2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc16>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc16
0816ec17 +0x0b5:  mov    %eax,-0xc(%ebp)
0816ec1a +0x0b8:  cmpl   $0x0,-0xc(%ebp)
0816ec1e +0x0bc:  jne    0816ec58 <+0xf6>
0816ec20 +0x0be:  movl   $0x5,0xc(%esp)
0816ec28 +0x0c6:  movl   $0x202,0x8(%esp)
0816ec30 +0x0ce:  movl   $&_ZZN22ServiceRestrictManager12updatePolicyEN16RestrictCategory4EnumEE19__PRETTY_FUNCTION__,0x4(%esp)
0816ec38 +0x0d6:  lea    -0x1c(%ebp),%eax
0816ec3b +0x0d9:  mov    %eax,(%esp)
0816ec3e +0x0dc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816ec43 +0x0e1:  movl   $"[Taiwan, Restrict] SigSaveRestrictPolicy is null.",0x4(%esp)
0816ec4b +0x0e9:  lea    -0x1c(%ebp),%eax
0816ec4e +0x0ec:  mov    %eax,(%esp)
0816ec51 +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816ec56 +0x0f4:  jmp    0816ecbd <+0x15b>
0816ec58 +0x0f6:  mov    -0xc(%ebp),%eax
0816ec5b +0x0f9:  mov    %eax,(%esp)
0816ec5e +0x0fc:  call   0815dda8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c
0816ec63 +0x101:  lea    -0x24(%ebp),%eax
0816ec66 +0x104:  mov    %eax,(%esp)
0816ec69 +0x107:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816ec6e +0x10c:  mov    0x4(%eax),%eax
0816ec71 +0x10f:  mov    (%eax),%edx
0816ec73 +0x111:  add    $0x1c,%edx
0816ec76 +0x114:  mov    (%edx),%ecx
0816ec78 +0x116:  mov    -0xc(%ebp),%edx
0816ec7b +0x119:  mov    %edx,0x4(%esp)
0816ec7f +0x11d:  mov    %eax,(%esp)
0816ec82 +0x120:  call   *%ecx
0816ec84 +0x122:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0816ec89 +0x127:  lea    -0x2c(%ebp),%edx
0816ec8c +0x12a:  mov    %edx,0x8(%esp)
0816ec90 +0x12e:  movl   $0x2,0x4(%esp)
0816ec98 +0x136:  mov    %eax,(%esp)
0816ec9b +0x139:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816eca0 +0x13e:  jmp    0816ecbd <+0x15b>
0816eca2 +0x140:  mov    %edx,%ebx
0816eca4 +0x142:  mov    %eax,%esi
0816eca6 +0x144:  lea    -0x2c(%ebp),%eax
0816eca9 +0x147:  mov    %eax,(%esp)
0816ecac +0x14a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816ecb1 +0x14f:  mov    %esi,%eax
0816ecb3 +0x151:  mov    %ebx,%edx
0816ecb5 +0x153:  mov    %eax,(%esp)
0816ecb8 +0x156:  call   08ae3750 <_Unwind_Resume>
0816ecbd +0x15b:  lea    -0x2c(%ebp),%eax
0816ecc0 +0x15e:  mov    %eax,(%esp)
0816ecc3 +0x161:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816ecc8 +0x166:  lea    -0x8(%ebp),%esp
0816eccb +0x169:  add    $0x0,%esp
0816ecce +0x16c:  pop    %ebx
0816eccf +0x16d:  pop    %esi
0816ecd0 +0x16e:  pop    %ebp
0816ecd1 +0x16f:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::updatePolicy @ 0x816eb62

/* ServiceRestrictManager::updatePolicy(RestrictCategory::Enum) */

void ServiceRestrictManager::updatePolicy(void)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this;
  int iVar3;
  CStreamGuard local_30 [8];
  _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>> local_28 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  SigLoadRestrictPolicy *local_10;
  
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::find(local_28);
  std::
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
          operator!=(local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 != '\0') {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/System/ServiceRestrictManager.cpp",0x1fd);
    CStreamGuard::CStreamGuard(local_30,pSVar2,true);
                    /* try { // try from 0816ebff to 0816ec9f has its CatchHandler @ 0816eca2 */
    Taiwan::internal_stream(local_30,2,0xffffffff);
    this = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this);
    if (local_10 == (SigLoadRestrictPolicy *)0x0) {
      cMyTrace::cMyTrace(local_20,
                         "void ServiceRestrictManager::updatePolicy(RestrictCategory::Enum)",0x202,5
                        );
      cMyTrace::operator()(local_20,"[Taiwan, Restrict] SigSaveRestrictPolicy is null.");
    }
    else {
      Taiwan::SigLoadRestrictPolicy::init(local_10);
      iVar3 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator->(local_28);
      (**(code **)(**(int **)(iVar3 + 4) + 0x1c))(*(int **)(iVar3 + 4),local_10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
    }
    CStreamGuard::~CStreamGuard(local_30);
  }
  return;
}
```
