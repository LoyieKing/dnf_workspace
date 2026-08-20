# SendResult

`_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb`

`APSystem::DB_LoadActionPoint::SendResult(int, int, APSystem::_SIG_LOAD_ACTION_POINT&, bool)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_LoadActionPoint` | `0x08124156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124156  _ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb
#           APSystem::DB_LoadActionPoint::SendResult(int, int, APSystem::_SIG_LOAD_ACTION_POINT&, bool)
# range [0x08124156, 0x0812431b]
08124156 +0x000:  push   %ebp
08124157 +0x001:  mov    %esp,%ebp
08124159 +0x003:  push   %esi
0812415a +0x004:  push   %ebx
0812415b +0x005:  sub    $0x30,%esp
0812415e +0x008:  mov    0x18(%ebp),%eax
08124161 +0x00b:  mov    %al,-0x1c(%ebp)
08124164 +0x00e:  cmpb   $0x0,-0x1c(%ebp)
08124168 +0x012:  je     08124241 <+0xeb>
0812416e +0x018:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08124173 +0x01d:  movl   $0xb1,0x8(%esp)
0812417b +0x025:  movl   $"localchina/localchina_ActionPointSystem_Dispatcher.cpp",0x4(%esp)
08124183 +0x02d:  mov    %eax,(%esp)
08124186 +0x030:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0812418b +0x035:  movl   $0x1,0x8(%esp)
08124193 +0x03d:  mov    %eax,0x4(%esp)
08124197 +0x041:  lea    -0x10(%ebp),%eax
0812419a +0x044:  mov    %eax,(%esp)
0812419d +0x047:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081241a2 +0x04c:  lea    -0x10(%ebp),%eax
081241a5 +0x04f:  mov    %eax,(%esp)
081241a8 +0x052:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081241ad +0x057:  mov    0xc(%ebp),%edx
081241b0 +0x05a:  mov    %edx,0x4(%esp)
081241b4 +0x05e:  mov    %eax,(%esp)
081241b7 +0x061:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081241bc +0x066:  lea    -0x10(%ebp),%eax
081241bf +0x069:  mov    %eax,(%esp)
081241c2 +0x06c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081241c7 +0x071:  mov    0x10(%ebp),%edx
081241ca +0x074:  mov    %edx,0x4(%esp)
081241ce +0x078:  mov    %eax,(%esp)
081241d1 +0x07b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081241d6 +0x080:  lea    -0x10(%ebp),%eax
081241d9 +0x083:  mov    %eax,(%esp)
081241dc +0x086:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081241e1 +0x08b:  movl   $0xcf1,0x8(%esp)
081241e9 +0x093:  mov    0x14(%ebp),%edx
081241ec +0x096:  mov    %edx,0x4(%esp)
081241f0 +0x09a:  mov    %eax,(%esp)
081241f3 +0x09d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081241f8 +0x0a2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081241fd +0x0a7:  lea    -0x10(%ebp),%edx
08124200 +0x0aa:  mov    %edx,0x8(%esp)
08124204 +0x0ae:  movl   $0x1,0x4(%esp)
0812420c +0x0b6:  mov    %eax,(%esp)
0812420f +0x0b9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08124214 +0x0be:  jmp    08124231 <+0xdb>
08124216 +0x0c0:  mov    %edx,%ebx
08124218 +0x0c2:  mov    %eax,%esi
0812421a +0x0c4:  lea    -0x10(%ebp),%eax
0812421d +0x0c7:  mov    %eax,(%esp)
08124220 +0x0ca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08124225 +0x0cf:  mov    %esi,%eax
08124227 +0x0d1:  mov    %ebx,%edx
08124229 +0x0d3:  mov    %eax,(%esp)
0812422c +0x0d6:  call   08ae3750 <_Unwind_Resume>
08124231 +0x0db:  lea    -0x10(%ebp),%eax
08124234 +0x0de:  mov    %eax,(%esp)
08124237 +0x0e1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0812423c +0x0e6:  jmp    08124310 <+0x1ba>
08124241 +0x0eb:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08124246 +0x0f0:  movl   $0xbc,0x8(%esp)
0812424e +0x0f8:  movl   $"localchina/localchina_ActionPointSystem_Dispatcher.cpp",0x4(%esp)
08124256 +0x100:  mov    %eax,(%esp)
08124259 +0x103:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0812425e +0x108:  movl   $0x1,0x8(%esp)
08124266 +0x110:  mov    %eax,0x4(%esp)
0812426a +0x114:  lea    -0x18(%ebp),%eax
0812426d +0x117:  mov    %eax,(%esp)
08124270 +0x11a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08124275 +0x11f:  lea    -0x18(%ebp),%eax
08124278 +0x122:  mov    %eax,(%esp)
0812427b +0x125:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08124280 +0x12a:  movl   $0x12,0x4(%esp)
08124288 +0x132:  mov    %eax,(%esp)
0812428b +0x135:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08124290 +0x13a:  lea    -0x18(%ebp),%eax
08124293 +0x13d:  mov    %eax,(%esp)
08124296 +0x140:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0812429b +0x145:  mov    0x10(%ebp),%edx
0812429e +0x148:  mov    %edx,0x4(%esp)
081242a2 +0x14c:  mov    %eax,(%esp)
081242a5 +0x14f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081242aa +0x154:  lea    -0x18(%ebp),%eax
081242ad +0x157:  mov    %eax,(%esp)
081242b0 +0x15a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081242b5 +0x15f:  movl   $0xcf1,0x8(%esp)
081242bd +0x167:  mov    0x14(%ebp),%edx
081242c0 +0x16a:  mov    %edx,0x4(%esp)
081242c4 +0x16e:  mov    %eax,(%esp)
081242c7 +0x171:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081242cc +0x176:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081242d1 +0x17b:  lea    -0x18(%ebp),%edx
081242d4 +0x17e:  mov    %edx,0x8(%esp)
081242d8 +0x182:  movl   $0x1,0x4(%esp)
081242e0 +0x18a:  mov    %eax,(%esp)
081242e3 +0x18d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081242e8 +0x192:  jmp    08124305 <+0x1af>
081242ea +0x194:  mov    %edx,%ebx
081242ec +0x196:  mov    %eax,%esi
081242ee +0x198:  lea    -0x18(%ebp),%eax
081242f1 +0x19b:  mov    %eax,(%esp)
081242f4 +0x19e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081242f9 +0x1a3:  mov    %esi,%eax
081242fb +0x1a5:  mov    %ebx,%edx
081242fd +0x1a7:  mov    %eax,(%esp)
08124300 +0x1aa:  call   08ae3750 <_Unwind_Resume>
08124305 +0x1af:  lea    -0x18(%ebp),%eax
08124308 +0x1b2:  mov    %eax,(%esp)
0812430b +0x1b5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08124310 +0x1ba:  mov    $0x1,%eax
08124315 +0x1bf:  add    $0x30,%esp
08124318 +0x1c2:  pop    %ebx
08124319 +0x1c3:  pop    %esi
0812431a +0x1c4:  pop    %ebp
0812431b +0x1c5:  ret
```

## 反编译 C

```c
// APSystem::DB_LoadActionPoint::SendResult @ 0x8124156

/* APSystem::DB_LoadActionPoint::SendResult(int, int, APSystem::_SIG_LOAD_ACTION_POINT&, bool) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::SendResult
          (DB_LoadActionPoint *this,int param_1,int param_2,_SIG_LOAD_ACTION_POINT *param_3,
          bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (param_4) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0xb1);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081241b7 to 08124213 has its CatchHandler @ 08124216 */
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_3,0xcf1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  else {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0xbc);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0812428b to 081242e7 has its CatchHandler @ 081242ea */
    CStreamGuard::operator<<(pCVar2,0x12);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    CStreamGuard::put_binary(pCVar2,param_3,0xcf1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return 1;
}
```
