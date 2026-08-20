# makeRequest

`_ZN16DB_LoadDimension11makeRequestEij`

`DB_LoadDimension::makeRequest(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadDimension` | `0x08431d8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08431d8c  _ZN16DB_LoadDimension11makeRequestEij
#           DB_LoadDimension::makeRequest(int, unsigned int)
# range [0x08431d8c, 0x08431ecd]
08431d8c +0x000:  push   %ebp
08431d8d +0x001:  mov    %esp,%ebp
08431d8f +0x003:  push   %esi
08431d90 +0x004:  push   %ebx
08431d91 +0x005:  sub    $0x30,%esp
08431d94 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08431d99 +0x00d:  movl   $0x7916,0x8(%esp)
08431da1 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08431da9 +0x01d:  mov    %eax,(%esp)
08431dac +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08431db1 +0x025:  movl   $0x1,0x8(%esp)
08431db9 +0x02d:  mov    %eax,0x4(%esp)
08431dbd +0x031:  lea    -0x20(%ebp),%eax
08431dc0 +0x034:  mov    %eax,(%esp)
08431dc3 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08431dc8 +0x03c:  lea    -0x20(%ebp),%eax
08431dcb +0x03f:  mov    %eax,(%esp)
08431dce +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431dd3 +0x047:  movl   $0x14e,0x4(%esp)
08431ddb +0x04f:  mov    %eax,(%esp)
08431dde +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08431de3 +0x057:  lea    -0x20(%ebp),%eax
08431de6 +0x05a:  mov    %eax,(%esp)
08431de9 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08431dee +0x062:  mov    0x8(%ebp),%edx
08431df1 +0x065:  mov    %edx,0x4(%esp)
08431df5 +0x069:  mov    %eax,(%esp)
08431df8 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08431dfd +0x071:  lea    -0x20(%ebp),%eax
08431e00 +0x074:  mov    %eax,(%esp)
08431e03 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08431e08 +0x07c:  mov    %eax,(%esp)
08431e0b +0x07f:  call   08452ee2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5af8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5af8
08431e10 +0x084:  mov    %eax,-0x18(%ebp)
08431e13 +0x087:  mov    -0x18(%ebp),%eax
08431e16 +0x08a:  mov    0xc(%ebp),%edx
08431e19 +0x08d:  mov    %edx,(%eax)
08431e1b +0x08f:  movl   $0x0,-0x10(%ebp)
08431e22 +0x096:  jmp    08431e51 <+0xc5>
08431e24 +0x098:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08431e29 +0x09d:  mov    -0x10(%ebp),%edx
08431e2c +0x0a0:  mov    %edx,0x4(%esp)
08431e30 +0x0a4:  mov    %eax,(%esp)
08431e33 +0x0a7:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
08431e38 +0x0ac:  movsbl %al,%eax
08431e3b +0x0af:  mov    %eax,-0xc(%ebp)
08431e3e +0x0b2:  mov    -0x10(%ebp),%eax
08431e41 +0x0b5:  mov    -0xc(%ebp),%edx
08431e44 +0x0b8:  mov    %edx,%ecx
08431e46 +0x0ba:  mov    -0x18(%ebp),%edx
08431e49 +0x0bd:  mov    %cl,0x4(%edx,%eax,1)
08431e4d +0x0c1:  addl   $0x1,-0x10(%ebp)
08431e51 +0x0c5:  cmpl   $0x5,-0x10(%ebp)
08431e55 +0x0c9:  setle  %al
08431e58 +0x0cc:  test   %al,%al
08431e5a +0x0ce:  jne    08431e24 <+0x98>
08431e5c +0x0d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08431e61 +0x0d5:  movl   $0x2,0x4(%esp)
08431e69 +0x0dd:  mov    %eax,(%esp)
08431e6c +0x0e0:  call   0822b638 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce2
08431e71 +0x0e5:  movsbl %al,%eax
08431e74 +0x0e8:  mov    %eax,-0x14(%ebp)
08431e77 +0x0eb:  mov    -0x14(%ebp),%eax
08431e7a +0x0ee:  mov    %eax,%edx
08431e7c +0x0f0:  mov    -0x18(%ebp),%eax
08431e7f +0x0f3:  mov    %dl,0xc(%eax)
08431e82 +0x0f6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08431e87 +0x0fb:  lea    -0x20(%ebp),%edx
08431e8a +0x0fe:  mov    %edx,0x8(%esp)
08431e8e +0x102:  movl   $0x2,0x4(%esp)
08431e96 +0x10a:  mov    %eax,(%esp)
08431e99 +0x10d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08431e9e +0x112:  jmp    08431ebb <+0x12f>
08431ea0 +0x114:  mov    %edx,%ebx
08431ea2 +0x116:  mov    %eax,%esi
08431ea4 +0x118:  lea    -0x20(%ebp),%eax
08431ea7 +0x11b:  mov    %eax,(%esp)
08431eaa +0x11e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08431eaf +0x123:  mov    %esi,%eax
08431eb1 +0x125:  mov    %ebx,%edx
08431eb3 +0x127:  mov    %eax,(%esp)
08431eb6 +0x12a:  call   08ae3750 <_Unwind_Resume>
08431ebb +0x12f:  lea    -0x20(%ebp),%eax
08431ebe +0x132:  mov    %eax,(%esp)
08431ec1 +0x135:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08431ec6 +0x13a:  add    $0x30,%esp
08431ec9 +0x13d:  pop    %ebx
08431eca +0x13e:  pop    %esi
08431ecb +0x13f:  pop    %ebp
08431ecc +0x140:  ret
08431ecd +0x141:  nop
```

## 反编译 C

```c
// DB_LoadDimension::makeRequest @ 0x8431d8c

/* DB_LoadDimension::makeRequest(int, unsigned int) */

void DB_LoadDimension::makeRequest(int param_1,uint param_2)

{
  SIG_LOAD_DIMENSION SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CDataManager *pCVar4;
  CStreamGuard local_24 [8];
  SIG_LOAD_DIMENSION *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7916);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08431dde to 08431e9d has its CatchHandler @ 08431ea0 */
  CStreamGuard::operator<<(pCVar3,0x14e);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_1c = CStreamGuard::GetInBuffer<SIG_LOAD_DIMENSION>(pCVar3);
  *(uint *)local_1c = param_2;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    pCVar4 = (CDataManager *)G_CDataManager();
    SVar1 = (SIG_LOAD_DIMENSION)CDataManager::get_dimensionInout(pCVar4,local_14);
    local_10 = (int)(char)SVar1;
    local_1c[local_14 + 4] = SVar1;
  }
  pCVar4 = (CDataManager *)G_CDataManager();
  SVar1 = (SIG_LOAD_DIMENSION)CDataManager::get_limit_inout_count(pCVar4,2);
  local_18 = (int)(char)SVar1;
  local_1c[0xc] = SVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return;
}
```
