# dispatch

`_ZN18DB_LoadNoCacheData8dispatchEiiP6Stream`

`DB_LoadNoCacheData::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadNoCacheData` | `0x08437df4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437df4  _ZN18DB_LoadNoCacheData8dispatchEiiP6Stream
#           DB_LoadNoCacheData::dispatch(int, int, Stream*)
# range [0x08437df4, 0x08437f57]
08437df4 +0x000:  push   %ebp
08437df5 +0x001:  mov    %esp,%ebp
08437df7 +0x003:  push   %esi
08437df8 +0x004:  push   %ebx
08437df9 +0x005:  sub    $0x20,%esp
08437dfc +0x008:  mov    0x8(%ebp),%eax
08437dff +0x00b:  mov    0x14(%ebp),%edx
08437e02 +0x00e:  mov    %edx,0xc(%esp)
08437e06 +0x012:  mov    0x10(%ebp),%edx
08437e09 +0x015:  mov    %edx,0x8(%esp)
08437e0d +0x019:  mov    0xc(%ebp),%edx
08437e10 +0x01c:  mov    %edx,0x4(%esp)
08437e14 +0x020:  mov    %eax,(%esp)
08437e17 +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08437e1c +0x028:  xor    $0x1,%eax
08437e1f +0x02b:  test   %al,%al
08437e21 +0x02d:  je     08437e2d <+0x39>
08437e23 +0x02f:  mov    $0x0,%ebx
08437e28 +0x034:  jmp    08437f4f <+0x15b>
08437e2d +0x039:  movl   $0x0,-0x10(%ebp)
08437e34 +0x040:  lea    -0x10(%ebp),%eax
08437e37 +0x043:  mov    %eax,0x4(%esp)
08437e3b +0x047:  mov    0x14(%ebp),%eax
08437e3e +0x04a:  mov    %eax,(%esp)
08437e41 +0x04d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08437e46 +0x052:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08437e4b +0x057:  movl   $0x8549,0x8(%esp)
08437e53 +0x05f:  movl   $"DBThread.cpp",0x4(%esp)
08437e5b +0x067:  mov    %eax,(%esp)
08437e5e +0x06a:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08437e63 +0x06f:  movl   $0x1,0x8(%esp)
08437e6b +0x077:  mov    %eax,0x4(%esp)
08437e6f +0x07b:  lea    -0x18(%ebp),%eax
08437e72 +0x07e:  mov    %eax,(%esp)
08437e75 +0x081:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08437e7a +0x086:  lea    -0x18(%ebp),%eax
08437e7d +0x089:  mov    %eax,(%esp)
08437e80 +0x08c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437e85 +0x091:  mov    0xc(%ebp),%edx
08437e88 +0x094:  mov    %edx,0x4(%esp)
08437e8c +0x098:  mov    %eax,(%esp)
08437e8f +0x09b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437e94 +0x0a0:  lea    -0x18(%ebp),%eax
08437e97 +0x0a3:  mov    %eax,(%esp)
08437e9a +0x0a6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437e9f +0x0ab:  mov    0x10(%ebp),%edx
08437ea2 +0x0ae:  mov    %edx,0x4(%esp)
08437ea6 +0x0b2:  mov    %eax,(%esp)
08437ea9 +0x0b5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437eae +0x0ba:  lea    -0x18(%ebp),%eax
08437eb1 +0x0bd:  mov    %eax,(%esp)
08437eb4 +0x0c0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08437eb9 +0x0c5:  mov    %eax,(%esp)
08437ebc +0x0c8:  call   084536bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x62d2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x62d2
08437ec1 +0x0cd:  mov    %eax,-0xc(%ebp)
08437ec4 +0x0d0:  cmpl   $0x0,-0xc(%ebp)
08437ec8 +0x0d4:  jne    08437ed1 <+0xdd>
08437eca +0x0d6:  mov    $0x0,%ebx
08437ecf +0x0db:  jmp    08437f44 <+0x150>
08437ed1 +0x0dd:  movl   $0x2c,0x8(%esp)
08437ed9 +0x0e5:  movl   $0x0,0x4(%esp)
08437ee1 +0x0ed:  mov    -0xc(%ebp),%eax
08437ee4 +0x0f0:  mov    %eax,(%esp)
08437ee7 +0x0f3:  call   0807dcc0 <_init+0x5b8>
08437eec +0x0f8:  mov    -0x10(%ebp),%edx
08437eef +0x0fb:  mov    -0xc(%ebp),%eax
08437ef2 +0x0fe:  mov    %edx,(%eax)
08437ef4 +0x100:  mov    -0xc(%ebp),%eax
08437ef7 +0x103:  mov    %eax,0x4(%esp)
08437efb +0x107:  mov    0x8(%ebp),%eax
08437efe +0x10a:  mov    %eax,(%esp)
08437f01 +0x10d:  call   08437f58 <_ZN18DB_LoadNoCacheData22LoadBloodDungeonRewardEP22SIG_LOAD_NO_CACHE_DATA>  ; DB_LoadNoCacheData::LoadBloodDungeonReward(SIG_LOAD_NO_CACHE_DATA*)
08437f06 +0x112:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08437f0b +0x117:  lea    -0x18(%ebp),%edx
08437f0e +0x11a:  mov    %edx,0x8(%esp)
08437f12 +0x11e:  movl   $0x1,0x4(%esp)
08437f1a +0x126:  mov    %eax,(%esp)
08437f1d +0x129:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08437f22 +0x12e:  mov    $0x1,%ebx
08437f27 +0x133:  jmp    08437f44 <+0x150>
08437f29 +0x135:  mov    %edx,%ebx
08437f2b +0x137:  mov    %eax,%esi
08437f2d +0x139:  lea    -0x18(%ebp),%eax
08437f30 +0x13c:  mov    %eax,(%esp)
08437f33 +0x13f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437f38 +0x144:  mov    %esi,%eax
08437f3a +0x146:  mov    %ebx,%edx
08437f3c +0x148:  mov    %eax,(%esp)
08437f3f +0x14b:  call   08ae3750 <_Unwind_Resume>
08437f44 +0x150:  lea    -0x18(%ebp),%eax
08437f47 +0x153:  mov    %eax,(%esp)
08437f4a +0x156:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437f4f +0x15b:  mov    %ebx,%eax
08437f51 +0x15d:  add    $0x20,%esp
08437f54 +0x160:  pop    %ebx
08437f55 +0x161:  pop    %esi
08437f56 +0x162:  pop    %ebp
08437f57 +0x163:  ret
```

## 反编译 C

```c
// DB_LoadNoCacheData::dispatch @ 0x8437df4

/* DB_LoadNoCacheData::dispatch(int, int, Stream*) */

bool __thiscall
DB_LoadNoCacheData::dispatch(DB_LoadNoCacheData *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  bool bVar4;
  CStreamGuard local_1c [8];
  int local_14;
  SIG_LOAD_NO_CACHE_DATA *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_14 = 0;
    Stream::operator>>(param_3,&local_14);
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8549);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08437e8f to 08437f21 has its CatchHandler @ 08437f29 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_NO_CACHE_DATA>(pCVar3);
    bVar4 = local_10 != (SIG_LOAD_NO_CACHE_DATA *)0x0;
    if (bVar4) {
      memset(local_10,0,0x2c);
      *(int *)local_10 = local_14;
      LoadBloodDungeonReward(this,local_10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}
```
