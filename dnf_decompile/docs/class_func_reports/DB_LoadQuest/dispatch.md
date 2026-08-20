# dispatch

`_ZN12DB_LoadQuest8dispatchEiiP6Stream`

`DB_LoadQuest::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadQuest` | `0x0840e236` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840e236  _ZN12DB_LoadQuest8dispatchEiiP6Stream
#           DB_LoadQuest::dispatch(int, int, Stream*)
# range [0x0840e236, 0x0840e399]
0840e236 +0x000:  push   %ebp
0840e237 +0x001:  mov    %esp,%ebp
0840e239 +0x003:  push   %esi
0840e23a +0x004:  push   %ebx
0840e23b +0x005:  sub    $0x20,%esp
0840e23e +0x008:  mov    0x8(%ebp),%eax
0840e241 +0x00b:  mov    0x14(%ebp),%edx
0840e244 +0x00e:  mov    %edx,0xc(%esp)
0840e248 +0x012:  mov    0x10(%ebp),%edx
0840e24b +0x015:  mov    %edx,0x8(%esp)
0840e24f +0x019:  mov    0xc(%ebp),%edx
0840e252 +0x01c:  mov    %edx,0x4(%esp)
0840e256 +0x020:  mov    %eax,(%esp)
0840e259 +0x023:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0840e25e +0x028:  xor    $0x1,%eax
0840e261 +0x02b:  test   %al,%al
0840e263 +0x02d:  je     0840e26f <+0x39>
0840e265 +0x02f:  mov    $0x0,%ebx
0840e26a +0x034:  jmp    0840e390 <+0x15a>
0840e26f +0x039:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0840e274 +0x03e:  movl   $0x29f9,0x8(%esp)
0840e27c +0x046:  movl   $"DBThread.cpp",0x4(%esp)
0840e284 +0x04e:  mov    %eax,(%esp)
0840e287 +0x051:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0840e28c +0x056:  movl   $0x1,0x8(%esp)
0840e294 +0x05e:  mov    %eax,0x4(%esp)
0840e298 +0x062:  lea    -0x14(%ebp),%eax
0840e29b +0x065:  mov    %eax,(%esp)
0840e29e +0x068:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840e2a3 +0x06d:  lea    -0x14(%ebp),%eax
0840e2a6 +0x070:  mov    %eax,(%esp)
0840e2a9 +0x073:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840e2ae +0x078:  mov    0xc(%ebp),%edx
0840e2b1 +0x07b:  mov    %edx,0x4(%esp)
0840e2b5 +0x07f:  mov    %eax,(%esp)
0840e2b8 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840e2bd +0x087:  lea    -0x14(%ebp),%eax
0840e2c0 +0x08a:  mov    %eax,(%esp)
0840e2c3 +0x08d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840e2c8 +0x092:  mov    0x10(%ebp),%edx
0840e2cb +0x095:  mov    %edx,0x4(%esp)
0840e2cf +0x099:  mov    %eax,(%esp)
0840e2d2 +0x09c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840e2d7 +0x0a1:  lea    -0x14(%ebp),%eax
0840e2da +0x0a4:  mov    %eax,(%esp)
0840e2dd +0x0a7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0840e2e2 +0x0ac:  mov    %eax,(%esp)
0840e2e5 +0x0af:  call   08236d5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc406
0840e2ea +0x0b4:  mov    %eax,-0xc(%ebp)
0840e2ed +0x0b7:  movl   $0x7608,0x8(%esp)
0840e2f5 +0x0bf:  movl   $0x0,0x4(%esp)
0840e2fd +0x0c7:  mov    -0xc(%ebp),%eax
0840e300 +0x0ca:  mov    %eax,(%esp)
0840e303 +0x0cd:  call   0807dcc0 <_init+0x5b8>
0840e308 +0x0d2:  mov    -0xc(%ebp),%eax
0840e30b +0x0d5:  movl   $0x0,0x4(%eax)
0840e312 +0x0dc:  mov    0x14(%ebp),%eax
0840e315 +0x0df:  mov    %eax,(%esp)
0840e318 +0x0e2:  call   084509ca <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x35e0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x35e0
0840e31d +0x0e7:  mov    (%eax),%edx
0840e31f +0x0e9:  mov    -0xc(%ebp),%eax
0840e322 +0x0ec:  mov    %edx,(%eax)
0840e324 +0x0ee:  mov    -0xc(%ebp),%eax
0840e327 +0x0f1:  mov    %eax,0x4(%esp)
0840e32b +0x0f5:  mov    0x8(%ebp),%eax
0840e32e +0x0f8:  mov    %eax,(%esp)
0840e331 +0x0fb:  call   0840e39a <_ZN12DB_LoadQuest12GetUserQuestEP14SIG_LOAD_QUEST>  ; DB_LoadQuest::GetUserQuest(SIG_LOAD_QUEST*)
0840e336 +0x100:  xor    $0x1,%eax
0840e339 +0x103:  test   %al,%al
0840e33b +0x105:  je     0840e347 <+0x111>
0840e33d +0x107:  mov    -0xc(%ebp),%eax
0840e340 +0x10a:  movl   $0x1,0x4(%eax)
0840e347 +0x111:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0840e34c +0x116:  lea    -0x14(%ebp),%edx
0840e34f +0x119:  mov    %edx,0x8(%esp)
0840e353 +0x11d:  movl   $0x1,0x4(%esp)
0840e35b +0x125:  mov    %eax,(%esp)
0840e35e +0x128:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0840e363 +0x12d:  mov    $0x1,%ebx
0840e368 +0x132:  lea    -0x14(%ebp),%eax
0840e36b +0x135:  mov    %eax,(%esp)
0840e36e +0x138:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840e373 +0x13d:  jmp    0840e390 <+0x15a>
0840e375 +0x13f:  mov    %edx,%ebx
0840e377 +0x141:  mov    %eax,%esi
0840e379 +0x143:  lea    -0x14(%ebp),%eax
0840e37c +0x146:  mov    %eax,(%esp)
0840e37f +0x149:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840e384 +0x14e:  mov    %esi,%eax
0840e386 +0x150:  mov    %ebx,%edx
0840e388 +0x152:  mov    %eax,(%esp)
0840e38b +0x155:  call   08ae3750 <_Unwind_Resume>
0840e390 +0x15a:  mov    %ebx,%eax
0840e392 +0x15c:  add    $0x20,%esp
0840e395 +0x15f:  pop    %ebx
0840e396 +0x160:  pop    %esi
0840e397 +0x161:  pop    %ebp
0840e398 +0x162:  ret
0840e399 +0x163:  nop
```

## 反编译 C

```c
// DB_LoadQuest::dispatch @ 0x840e236

/* DB_LoadQuest::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadQuest::dispatch(DB_LoadQuest *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  SIG_LOAD_QUEST *pSVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_QUEST *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x29f9);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0840e2b8 to 0840e362 has its CatchHandler @ 0840e375 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_QUEST>(pCVar3);
    memset(local_10,0,0x7608);
    *(undefined4 *)(local_10 + 4) = 0;
    pSVar4 = Stream::GetOutBuffer<SIG_LOAD_QUEST>(param_3);
    *(undefined4 *)local_10 = *(undefined4 *)pSVar4;
    cVar1 = GetUserQuest(this,local_10);
    if (cVar1 != '\x01') {
      *(undefined4 *)(local_10 + 4) = 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_18);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
