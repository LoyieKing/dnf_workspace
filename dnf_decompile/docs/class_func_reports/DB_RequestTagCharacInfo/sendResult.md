# sendResult

`_ZN23DB_RequestTagCharacInfo10sendResultEiP27SIG_REQUEST_TAG_CHARAC_INFO`

`DB_RequestTagCharacInfo::sendResult(int, SIG_REQUEST_TAG_CHARAC_INFO*)`

| 类 | 地址 |
|---|---|
| `DB_RequestTagCharacInfo` | `0x084478a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084478a6  _ZN23DB_RequestTagCharacInfo10sendResultEiP27SIG_REQUEST_TAG_CHARAC_INFO
#           DB_RequestTagCharacInfo::sendResult(int, SIG_REQUEST_TAG_CHARAC_INFO*)
# range [0x084478a6, 0x08447991]
084478a6 +0x00:  push   %ebp
084478a7 +0x01:  mov    %esp,%ebp
084478a9 +0x03:  push   %esi
084478aa +0x04:  push   %ebx
084478ab +0x05:  sub    $0x20,%esp
084478ae +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084478b3 +0x0d:  movl   $0xb23f,0x8(%esp)
084478bb +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084478c3 +0x1d:  mov    %eax,(%esp)
084478c6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084478cb +0x25:  movl   $0x1,0x8(%esp)
084478d3 +0x2d:  mov    %eax,0x4(%esp)
084478d7 +0x31:  lea    -0x14(%ebp),%eax
084478da +0x34:  mov    %eax,(%esp)
084478dd +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084478e2 +0x3c:  lea    -0x14(%ebp),%eax
084478e5 +0x3f:  mov    %eax,(%esp)
084478e8 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084478ed +0x47:  movl   $0x2fe,0x4(%esp)
084478f5 +0x4f:  mov    %eax,(%esp)
084478f8 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084478fd +0x57:  lea    -0x14(%ebp),%eax
08447900 +0x5a:  mov    %eax,(%esp)
08447903 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08447908 +0x62:  mov    0xc(%ebp),%edx
0844790b +0x65:  mov    %edx,0x4(%esp)
0844790f +0x69:  mov    %eax,(%esp)
08447912 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08447917 +0x71:  lea    -0x14(%ebp),%eax
0844791a +0x74:  mov    %eax,(%esp)
0844791d +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08447922 +0x7c:  mov    %eax,(%esp)
08447925 +0x7f:  call   0823744e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcaf8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcaf8
0844792a +0x84:  mov    %eax,-0xc(%ebp)
0844792d +0x87:  movl   $0x414c,0x8(%esp)
08447935 +0x8f:  mov    0x10(%ebp),%eax
08447938 +0x92:  mov    %eax,0x4(%esp)
0844793c +0x96:  mov    -0xc(%ebp),%eax
0844793f +0x99:  mov    %eax,(%esp)
08447942 +0x9c:  call   0807d8a0 <_init+0x198>
08447947 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0844794c +0xa6:  lea    -0x14(%ebp),%edx
0844794f +0xa9:  mov    %edx,0x8(%esp)
08447953 +0xad:  movl   $0x1,0x4(%esp)
0844795b +0xb5:  mov    %eax,(%esp)
0844795e +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08447963 +0xbd:  jmp    08447980 <+0xda>
08447965 +0xbf:  mov    %edx,%ebx
08447967 +0xc1:  mov    %eax,%esi
08447969 +0xc3:  lea    -0x14(%ebp),%eax
0844796c +0xc6:  mov    %eax,(%esp)
0844796f +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08447974 +0xce:  mov    %esi,%eax
08447976 +0xd0:  mov    %ebx,%edx
08447978 +0xd2:  mov    %eax,(%esp)
0844797b +0xd5:  call   08ae3750 <_Unwind_Resume>
08447980 +0xda:  lea    -0x14(%ebp),%eax
08447983 +0xdd:  mov    %eax,(%esp)
08447986 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844798b +0xe5:  add    $0x20,%esp
0844798e +0xe8:  pop    %ebx
0844798f +0xe9:  pop    %esi
08447990 +0xea:  pop    %ebp
08447991 +0xeb:  ret
```

## 反编译 C

```c
// DB_RequestTagCharacInfo::sendResult @ 0x84478a6

/* DB_RequestTagCharacInfo::sendResult(int, SIG_REQUEST_TAG_CHARAC_INFO*) */

void __thiscall
DB_RequestTagCharacInfo::sendResult
          (DB_RequestTagCharacInfo *this,int param_1,SIG_REQUEST_TAG_CHARAC_INFO *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_TAG_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb23f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084478f8 to 08447962 has its CatchHandler @ 08447965 */
  CStreamGuard::operator<<(pCVar2,0x2fe);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(pCVar2);
  memcpy(local_10,param_2,0x414c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
