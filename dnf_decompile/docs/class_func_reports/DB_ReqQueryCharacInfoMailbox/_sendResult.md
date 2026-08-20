# _sendResult

`_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii`

`DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfoMailbox` | `0x0843c224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c224  _ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii
#           DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int)
# range [0x0843c224, 0x0843c355]
0843c224 +0x000:  push   %ebp
0843c225 +0x001:  mov    %esp,%ebp
0843c227 +0x003:  push   %esi
0843c228 +0x004:  push   %ebx
0843c229 +0x005:  sub    $0x20,%esp
0843c22c +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843c231 +0x00d:  movl   $0x8ed6,0x8(%esp)
0843c239 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843c241 +0x01d:  mov    %eax,(%esp)
0843c244 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843c249 +0x025:  movl   $0x1,0x8(%esp)
0843c251 +0x02d:  mov    %eax,0x4(%esp)
0843c255 +0x031:  lea    -0x14(%ebp),%eax
0843c258 +0x034:  mov    %eax,(%esp)
0843c25b +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843c260 +0x03c:  lea    -0x14(%ebp),%eax
0843c263 +0x03f:  mov    %eax,(%esp)
0843c266 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c26b +0x047:  movl   $0x1f6,0x4(%esp)
0843c273 +0x04f:  mov    %eax,(%esp)
0843c276 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c27b +0x057:  lea    -0x14(%ebp),%eax
0843c27e +0x05a:  mov    %eax,(%esp)
0843c281 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c286 +0x062:  mov    0x10(%ebp),%edx
0843c289 +0x065:  mov    %edx,0x4(%esp)
0843c28d +0x069:  mov    %eax,(%esp)
0843c290 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c295 +0x071:  lea    -0x14(%ebp),%eax
0843c298 +0x074:  mov    %eax,(%esp)
0843c29b +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843c2a0 +0x07c:  mov    %eax,(%esp)
0843c2a3 +0x07f:  call   08452128 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4d3e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4d3e
0843c2a8 +0x084:  mov    %eax,-0xc(%ebp)
0843c2ab +0x087:  mov    -0xc(%ebp),%eax
0843c2ae +0x08a:  mov    0xc(%ebp),%edx
0843c2b1 +0x08d:  mov    %edx,0x20(%eax)
0843c2b4 +0x090:  cmpl   $0x0,0xc(%ebp)
0843c2b8 +0x094:  jne    0843c30a <+0xe6>
0843c2ba +0x096:  mov    -0xc(%ebp),%eax
0843c2bd +0x099:  movl   $0x1d,0x8(%esp)
0843c2c5 +0x0a1:  mov    0x14(%ebp),%edx
0843c2c8 +0x0a4:  mov    %edx,0x4(%esp)
0843c2cc +0x0a8:  mov    %eax,(%esp)
0843c2cf +0x0ab:  call   0807d8d0 <_init+0x1c8>
0843c2d4 +0x0b0:  mov    -0xc(%ebp),%eax
0843c2d7 +0x0b3:  mov    0x18(%ebp),%edx
0843c2da +0x0b6:  mov    %edx,0x24(%eax)
0843c2dd +0x0b9:  mov    0x1c(%ebp),%eax
0843c2e0 +0x0bc:  mov    %eax,%edx
0843c2e2 +0x0be:  mov    -0xc(%ebp),%eax
0843c2e5 +0x0c1:  mov    %dl,0x28(%eax)
0843c2e8 +0x0c4:  mov    0x20(%ebp),%eax
0843c2eb +0x0c7:  mov    %eax,%edx
0843c2ed +0x0c9:  mov    -0xc(%ebp),%eax
0843c2f0 +0x0cc:  mov    %dx,0x2a(%eax)
0843c2f4 +0x0d0:  mov    0x24(%ebp),%eax
0843c2f7 +0x0d3:  mov    %eax,%edx
0843c2f9 +0x0d5:  mov    -0xc(%ebp),%eax
0843c2fc +0x0d8:  mov    %dl,0x2c(%eax)
0843c2ff +0x0db:  mov    0x28(%ebp),%eax
0843c302 +0x0de:  mov    %eax,%edx
0843c304 +0x0e0:  mov    -0xc(%ebp),%eax
0843c307 +0x0e3:  mov    %dl,0x2d(%eax)
0843c30a +0x0e6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843c30f +0x0eb:  lea    -0x14(%ebp),%edx
0843c312 +0x0ee:  mov    %edx,0x8(%esp)
0843c316 +0x0f2:  movl   $0x1,0x4(%esp)
0843c31e +0x0fa:  mov    %eax,(%esp)
0843c321 +0x0fd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843c326 +0x102:  mov    $0x1,%ebx
0843c32b +0x107:  lea    -0x14(%ebp),%eax
0843c32e +0x10a:  mov    %eax,(%esp)
0843c331 +0x10d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c336 +0x112:  mov    %ebx,%eax
0843c338 +0x114:  add    $0x20,%esp
0843c33b +0x117:  pop    %ebx
0843c33c +0x118:  pop    %esi
0843c33d +0x119:  pop    %ebp
0843c33e +0x11a:  ret
0843c33f +0x11b:  mov    %edx,%ebx
0843c341 +0x11d:  mov    %eax,%esi
0843c343 +0x11f:  lea    -0x14(%ebp),%eax
0843c346 +0x122:  mov    %eax,(%esp)
0843c349 +0x125:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c34e +0x12a:  mov    %esi,%eax
0843c350 +0x12c:  mov    %ebx,%edx
0843c352 +0x12e:  mov    %eax,(%esp)
0843c355 +0x131:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_ReqQueryCharacInfoMailbox::_sendResult @ 0x843c224

/* DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int) */

undefined4 __thiscall
DB_ReqQueryCharacInfoMailbox::_sendResult
          (DB_ReqQueryCharacInfoMailbox *this,int param_1,int param_2,char *param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8ed6);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843c276 to 0843c325 has its CatchHandler @ 0843c33f */
  CStreamGuard::operator<<(pCVar2,0x1f6);
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
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
