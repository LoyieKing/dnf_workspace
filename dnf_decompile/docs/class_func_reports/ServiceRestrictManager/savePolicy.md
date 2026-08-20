# savePolicy

`_ZN22ServiceRestrictManager10savePolicyEv`

`ServiceRestrictManager::savePolicy()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e8ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e8ce  _ZN22ServiceRestrictManager10savePolicyEv
#           ServiceRestrictManager::savePolicy()
# range [0x0816e8ce, 0x0816ea69]
0816e8ce +0x000:  push   %ebp
0816e8cf +0x001:  mov    %esp,%ebp
0816e8d1 +0x003:  push   %esi
0816e8d2 +0x004:  push   %ebx
0816e8d3 +0x005:  sub    $0x40,%esp
0816e8d6 +0x008:  mov    0x8(%ebp),%eax
0816e8d9 +0x00b:  movzbl 0x19(%eax),%eax
0816e8dd +0x00f:  xor    $0x1,%eax
0816e8e0 +0x012:  test   %al,%al
0816e8e2 +0x014:  jne    0816ea5f <+0x191>
0816e8e8 +0x01a:  mov    0x8(%ebp),%edx
0816e8eb +0x01d:  lea    -0x24(%ebp),%eax
0816e8ee +0x020:  mov    %edx,0x4(%esp)
0816e8f2 +0x024:  mov    %eax,(%esp)
0816e8f5 +0x027:  call   0816f110 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3fe>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3fe
0816e8fa +0x02c:  sub    $0x4,%esp
0816e8fd +0x02f:  jmp    0816ea2e <+0x160>
0816e902 +0x034:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0816e907 +0x039:  movl   $0x1de,0x8(%esp)
0816e90f +0x041:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e917 +0x049:  mov    %eax,(%esp)
0816e91a +0x04c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0816e91f +0x051:  movl   $0x1,0x8(%esp)
0816e927 +0x059:  mov    %eax,0x4(%esp)
0816e92b +0x05d:  lea    -0x2c(%ebp),%eax
0816e92e +0x060:  mov    %eax,(%esp)
0816e931 +0x063:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0816e936 +0x068:  movl   $0xffffffff,0x8(%esp)
0816e93e +0x070:  movl   $0x2,0x4(%esp)
0816e946 +0x078:  lea    -0x2c(%ebp),%eax
0816e949 +0x07b:  mov    %eax,(%esp)
0816e94c +0x07e:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0816e951 +0x083:  lea    -0x2c(%ebp),%eax
0816e954 +0x086:  mov    %eax,(%esp)
0816e957 +0x089:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0816e95c +0x08e:  mov    %eax,(%esp)
0816e95f +0x091:  call   0815e9a2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc16>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc16
0816e964 +0x096:  mov    %eax,-0xc(%ebp)
0816e967 +0x099:  cmpl   $0x0,-0xc(%ebp)
0816e96b +0x09d:  jne    0816e9aa <+0xdc>
0816e96d +0x09f:  movl   $0x5,0xc(%esp)
0816e975 +0x0a7:  movl   $0x1e3,0x8(%esp)
0816e97d +0x0af:  movl   $&_ZZN22ServiceRestrictManager10savePolicyEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816e985 +0x0b7:  lea    -0x1c(%ebp),%eax
0816e988 +0x0ba:  mov    %eax,(%esp)
0816e98b +0x0bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816e990 +0x0c2:  movl   $"[Taiwan, Restrict] SigSaveRestrictPolicy is null.",0x4(%esp)
0816e998 +0x0ca:  lea    -0x1c(%ebp),%eax
0816e99b +0x0cd:  mov    %eax,(%esp)
0816e99e +0x0d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816e9a3 +0x0d5:  mov    $0x0,%ebx
0816e9a8 +0x0da:  jmp    0816ea14 <+0x146>
0816e9aa +0x0dc:  mov    -0xc(%ebp),%eax
0816e9ad +0x0df:  mov    %eax,(%esp)
0816e9b0 +0x0e2:  call   0815dda8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c
0816e9b5 +0x0e7:  lea    -0x24(%ebp),%eax
0816e9b8 +0x0ea:  mov    %eax,(%esp)
0816e9bb +0x0ed:  call   0816f102 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3f0>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3f0
0816e9c0 +0x0f2:  mov    0x4(%eax),%eax
0816e9c3 +0x0f5:  mov    (%eax),%edx
0816e9c5 +0x0f7:  add    $0x1c,%edx
0816e9c8 +0x0fa:  mov    (%edx),%ecx
0816e9ca +0x0fc:  mov    -0xc(%ebp),%edx
0816e9cd +0x0ff:  mov    %edx,0x4(%esp)
0816e9d1 +0x103:  mov    %eax,(%esp)
0816e9d4 +0x106:  call   *%ecx
0816e9d6 +0x108:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0816e9db +0x10d:  lea    -0x2c(%ebp),%edx
0816e9de +0x110:  mov    %edx,0x8(%esp)
0816e9e2 +0x114:  movl   $0x2,0x4(%esp)
0816e9ea +0x11c:  mov    %eax,(%esp)
0816e9ed +0x11f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816e9f2 +0x124:  mov    $0x1,%ebx
0816e9f7 +0x129:  jmp    0816ea14 <+0x146>
0816e9f9 +0x12b:  mov    %edx,%ebx
0816e9fb +0x12d:  mov    %eax,%esi
0816e9fd +0x12f:  lea    -0x2c(%ebp),%eax
0816ea00 +0x132:  mov    %eax,(%esp)
0816ea03 +0x135:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816ea08 +0x13a:  mov    %esi,%eax
0816ea0a +0x13c:  mov    %ebx,%edx
0816ea0c +0x13e:  mov    %eax,(%esp)
0816ea0f +0x141:  call   08ae3750 <_Unwind_Resume>
0816ea14 +0x146:  lea    -0x2c(%ebp),%eax
0816ea17 +0x149:  mov    %eax,(%esp)
0816ea1a +0x14c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816ea1f +0x151:  test   %ebx,%ebx
0816ea21 +0x153:  je     0816ea60 <+0x192>
0816ea23 +0x155:  lea    -0x24(%ebp),%eax
0816ea26 +0x158:  mov    %eax,(%esp)
0816ea29 +0x15b:  call   0816f136 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x424>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x424
0816ea2e +0x160:  mov    0x8(%ebp),%edx
0816ea31 +0x163:  lea    -0x20(%ebp),%eax
0816ea34 +0x166:  mov    %edx,0x4(%esp)
0816ea38 +0x16a:  mov    %eax,(%esp)
0816ea3b +0x16d:  call   0816f0c8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3b6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3b6
0816ea40 +0x172:  sub    $0x4,%esp
0816ea43 +0x175:  lea    -0x20(%ebp),%eax
0816ea46 +0x178:  mov    %eax,0x4(%esp)
0816ea4a +0x17c:  lea    -0x24(%ebp),%eax
0816ea4d +0x17f:  mov    %eax,(%esp)
0816ea50 +0x182:  call   0816f0ee <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x3dc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x3dc
0816ea55 +0x187:  test   %al,%al
0816ea57 +0x189:  jne    0816e902 <+0x34>
0816ea5d +0x18f:  jmp    0816ea60 <+0x192>
0816ea5f +0x191:  nop
0816ea60 +0x192:  lea    -0x8(%ebp),%esp
0816ea63 +0x195:  add    $0x0,%esp
0816ea66 +0x198:  pop    %ebx
0816ea67 +0x199:  pop    %esi
0816ea68 +0x19a:  pop    %ebp
0816ea69 +0x19b:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::savePolicy @ 0x816e8ce

/* ServiceRestrictManager::savePolicy() */

void __thiscall ServiceRestrictManager::savePolicy(ServiceRestrictManager *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this_00;
  int iVar3;
  bool bVar4;
  CStreamGuard local_30 [8];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_28 [4];
  map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
  local_24 [4];
  cMyTrace local_20 [16];
  SigLoadRestrictPolicy *local_10;
  
  if (this[0x19] == (ServiceRestrictManager)0x1) {
    std::
    map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
      ::end(local_24);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
              operator!=((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localtaiwan/System/ServiceRestrictManager.cpp",0x1de);
      CStreamGuard::CStreamGuard(local_30,pSVar2,true);
                    /* try { // try from 0816e94c to 0816e9f1 has its CatchHandler @ 0816e9f9 */
      Taiwan::internal_stream(local_30,2,0xffffffff);
      this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this_00);
      bVar4 = local_10 != (SigLoadRestrictPolicy *)0x0;
      if (bVar4) {
        Taiwan::SigLoadRestrictPolicy::init(local_10);
        iVar3 = std::
                _Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
                operator->((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                            *)local_28);
        (**(code **)(**(int **)(iVar3 + 4) + 0x1c))(*(int **)(iVar3 + 4),local_10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
      }
      else {
        cMyTrace::cMyTrace(local_20,"void ServiceRestrictManager::savePolicy()",0x1e3,5);
        cMyTrace::operator()(local_20,"[Taiwan, Restrict] SigSaveRestrictPolicy is null.");
      }
      CStreamGuard::~CStreamGuard(local_30);
      if (!bVar4) {
        return;
      }
      std::_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>::
      operator++((_Rb_tree_iterator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>
                  *)local_28);
    }
  }
  return;
}
```
