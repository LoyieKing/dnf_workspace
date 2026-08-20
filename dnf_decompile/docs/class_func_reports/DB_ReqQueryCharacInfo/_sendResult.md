# _sendResult

`_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii`

`DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfo` | `0x08426e04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08426e04  _ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii
#           DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int)
# range [0x08426e04, 0x08426f45]
08426e04 +0x000:  push   %ebp
08426e05 +0x001:  mov    %esp,%ebp
08426e07 +0x003:  push   %esi
08426e08 +0x004:  push   %ebx
08426e09 +0x005:  sub    $0x20,%esp
08426e0c +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08426e11 +0x00d:  movl   $0x6716,0x8(%esp)
08426e19 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08426e21 +0x01d:  mov    %eax,(%esp)
08426e24 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08426e29 +0x025:  movl   $0x1,0x8(%esp)
08426e31 +0x02d:  mov    %eax,0x4(%esp)
08426e35 +0x031:  lea    -0x14(%ebp),%eax
08426e38 +0x034:  mov    %eax,(%esp)
08426e3b +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08426e40 +0x03c:  lea    -0x14(%ebp),%eax
08426e43 +0x03f:  mov    %eax,(%esp)
08426e46 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426e4b +0x047:  movl   $0xc4,0x4(%esp)
08426e53 +0x04f:  mov    %eax,(%esp)
08426e56 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426e5b +0x057:  lea    -0x14(%ebp),%eax
08426e5e +0x05a:  mov    %eax,(%esp)
08426e61 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08426e66 +0x062:  mov    0x10(%ebp),%edx
08426e69 +0x065:  mov    %edx,0x4(%esp)
08426e6d +0x069:  mov    %eax,(%esp)
08426e70 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08426e75 +0x071:  lea    -0x14(%ebp),%eax
08426e78 +0x074:  mov    %eax,(%esp)
08426e7b +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08426e80 +0x07c:  mov    %eax,(%esp)
08426e83 +0x07f:  call   08452128 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4d3e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4d3e
08426e88 +0x084:  mov    %eax,-0xc(%ebp)
08426e8b +0x087:  mov    -0xc(%ebp),%eax
08426e8e +0x08a:  mov    0xc(%ebp),%edx
08426e91 +0x08d:  mov    %edx,0x20(%eax)
08426e94 +0x090:  cmpl   $0x0,0xc(%ebp)
08426e98 +0x094:  jne    08426ef5 <+0xf1>
08426e9a +0x096:  mov    -0xc(%ebp),%eax
08426e9d +0x099:  movl   $0x1d,0x8(%esp)
08426ea5 +0x0a1:  mov    0x14(%ebp),%edx
08426ea8 +0x0a4:  mov    %edx,0x4(%esp)
08426eac +0x0a8:  mov    %eax,(%esp)
08426eaf +0x0ab:  call   0807d8d0 <_init+0x1c8>
08426eb4 +0x0b0:  mov    -0xc(%ebp),%eax
08426eb7 +0x0b3:  mov    0x18(%ebp),%edx
08426eba +0x0b6:  mov    %edx,0x24(%eax)
08426ebd +0x0b9:  mov    0x1c(%ebp),%eax
08426ec0 +0x0bc:  mov    %eax,%edx
08426ec2 +0x0be:  mov    -0xc(%ebp),%eax
08426ec5 +0x0c1:  mov    %dl,0x28(%eax)
08426ec8 +0x0c4:  mov    0x20(%ebp),%eax
08426ecb +0x0c7:  mov    %eax,%edx
08426ecd +0x0c9:  mov    -0xc(%ebp),%eax
08426ed0 +0x0cc:  mov    %dx,0x2a(%eax)
08426ed4 +0x0d0:  mov    0x24(%ebp),%eax
08426ed7 +0x0d3:  mov    %eax,%edx
08426ed9 +0x0d5:  mov    -0xc(%ebp),%eax
08426edc +0x0d8:  mov    %dl,0x2c(%eax)
08426edf +0x0db:  mov    0x28(%ebp),%eax
08426ee2 +0x0de:  mov    %eax,%edx
08426ee4 +0x0e0:  mov    -0xc(%ebp),%eax
08426ee7 +0x0e3:  mov    %dl,0x2d(%eax)
08426eea +0x0e6:  mov    0x2c(%ebp),%eax
08426eed +0x0e9:  mov    %eax,%edx
08426eef +0x0eb:  mov    -0xc(%ebp),%eax
08426ef2 +0x0ee:  mov    %dl,0x2e(%eax)
08426ef5 +0x0f1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08426efa +0x0f6:  lea    -0x14(%ebp),%edx
08426efd +0x0f9:  mov    %edx,0x8(%esp)
08426f01 +0x0fd:  movl   $0x1,0x4(%esp)
08426f09 +0x105:  mov    %eax,(%esp)
08426f0c +0x108:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08426f11 +0x10d:  mov    $0x1,%ebx
08426f16 +0x112:  lea    -0x14(%ebp),%eax
08426f19 +0x115:  mov    %eax,(%esp)
08426f1c +0x118:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426f21 +0x11d:  mov    %ebx,%eax
08426f23 +0x11f:  add    $0x20,%esp
08426f26 +0x122:  pop    %ebx
08426f27 +0x123:  pop    %esi
08426f28 +0x124:  pop    %ebp
08426f29 +0x125:  ret
08426f2a +0x126:  mov    %edx,%ebx
08426f2c +0x128:  mov    %eax,%esi
08426f2e +0x12a:  lea    -0x14(%ebp),%eax
08426f31 +0x12d:  mov    %eax,(%esp)
08426f34 +0x130:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426f39 +0x135:  mov    %esi,%eax
08426f3b +0x137:  mov    %ebx,%edx
08426f3d +0x139:  mov    %eax,(%esp)
08426f40 +0x13c:  call   08ae3750 <_Unwind_Resume>
08426f45 +0x141:  nop
```

## 反编译 C

```c
// DB_ReqQueryCharacInfo::_sendResult @ 0x8426e04

/* DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int) */

undefined4 __thiscall
DB_ReqQueryCharacInfo::_sendResult
          (DB_ReqQueryCharacInfo *this,int param_1,int param_2,char *param_3,int param_4,int param_5
          ,int param_6,int param_7,int param_8,int param_9)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6716);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08426e56 to 08426f10 has its CatchHandler @ 08426f2a */
  CStreamGuard::operator<<(pCVar2,0xc4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  *(int *)(local_10 + 0x20) = param_1;
  if (param_1 == 0) {
    strncpy((char *)local_10,param_3,0x1d);
    *(int *)(local_10 + 0x24) = param_4;
    local_10[0x28] = SUB41(param_5,0);
    *(short *)(local_10 + 0x2a) = (short)param_6;
    local_10[0x2c] = SUB41(param_7,0);
    local_10[0x2d] = SUB41(param_8,0);
    local_10[0x2e] = SUB41(param_9,0);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
