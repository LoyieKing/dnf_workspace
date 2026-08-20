# SendBuffertoClient

`_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs`

`CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)`

| 类 | 地址 |
|---|---|
| `CBusinessImpl` | `0x080de240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de240  _ZN13CBusinessImpl18SendBuffertoClientEiiijPhs
#           CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)
# range [0x080de240, 0x080de3ed]
080de240 +0x000:  push   %ebp
080de241 +0x001:  mov    %esp,%ebp
080de243 +0x003:  push   %esi
080de244 +0x004:  push   %ebx
080de245 +0x005:  sub    $0x40,%esp
080de248 +0x008:  mov    0x20(%ebp),%eax
080de24b +0x00b:  mov    %ax,-0x2c(%ebp)
080de24f +0x00f:  movswl -0x2c(%ebp),%eax
080de253 +0x013:  add    $0x14,%eax
080de256 +0x016:  mov    %eax,-0xc(%ebp)
080de259 +0x019:  movl   $0x1,0x4(%esp)
080de261 +0x021:  lea    -0x14(%ebp),%eax
080de264 +0x024:  mov    %eax,(%esp)
080de267 +0x027:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
080de26c +0x02c:  cmpl   $0xfff,-0xc(%ebp)
080de273 +0x033:  jg     080de2a3 <+0x63>
080de275 +0x035:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
080de27a +0x03a:  movl   $0x3a,0x8(%esp)
080de282 +0x042:  movl   $"BusinessImpl.cpp",0x4(%esp)
080de28a +0x04a:  mov    %eax,(%esp)
080de28d +0x04d:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
080de292 +0x052:  mov    %eax,0x4(%esp)
080de296 +0x056:  lea    -0x14(%ebp),%eax
080de299 +0x059:  mov    %eax,(%esp)
080de29c +0x05c:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
080de2a1 +0x061:  jmp    080de30f <+0xcf>
080de2a3 +0x063:  cmpl   $0xfff,-0xc(%ebp)
080de2aa +0x06a:  jle    080de2e3 <+0xa3>
080de2ac +0x06c:  cmpl   $0x3fff,-0xc(%ebp)
080de2b3 +0x073:  jg     080de2e3 <+0xa3>
080de2b5 +0x075:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080de2ba +0x07a:  movl   $0x3e,0x8(%esp)
080de2c2 +0x082:  movl   $"BusinessImpl.cpp",0x4(%esp)
080de2ca +0x08a:  mov    %eax,(%esp)
080de2cd +0x08d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080de2d2 +0x092:  mov    %eax,0x4(%esp)
080de2d6 +0x096:  lea    -0x14(%ebp),%eax
080de2d9 +0x099:  mov    %eax,(%esp)
080de2dc +0x09c:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
080de2e1 +0x0a1:  jmp    080de30f <+0xcf>
080de2e3 +0x0a3:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
080de2e8 +0x0a8:  movl   $0x42,0x8(%esp)
080de2f0 +0x0b0:  movl   $"BusinessImpl.cpp",0x4(%esp)
080de2f8 +0x0b8:  mov    %eax,(%esp)
080de2fb +0x0bb:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
080de300 +0x0c0:  mov    %eax,0x4(%esp)
080de304 +0x0c4:  lea    -0x14(%ebp),%eax
080de307 +0x0c7:  mov    %eax,(%esp)
080de30a +0x0ca:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
080de30f +0x0cf:  lea    -0x14(%ebp),%eax
080de312 +0x0d2:  mov    %eax,(%esp)
080de315 +0x0d5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de31a +0x0da:  movl   $0x252,0x4(%esp)
080de322 +0x0e2:  mov    %eax,(%esp)
080de325 +0x0e5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de32a +0x0ea:  lea    -0x14(%ebp),%eax
080de32d +0x0ed:  mov    %eax,(%esp)
080de330 +0x0f0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de335 +0x0f5:  movl   $0xffffffff,0x4(%esp)
080de33d +0x0fd:  mov    %eax,(%esp)
080de340 +0x100:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de345 +0x105:  mov    0xc(%ebp),%eax
080de348 +0x108:  mov    %eax,-0x20(%ebp)
080de34b +0x10b:  mov    0x18(%ebp),%eax
080de34e +0x10e:  mov    %eax,-0x1c(%ebp)
080de351 +0x111:  movzwl -0x2c(%ebp),%eax
080de355 +0x115:  mov    %ax,-0x18(%ebp)
080de359 +0x119:  lea    -0x14(%ebp),%eax
080de35c +0x11c:  mov    %eax,(%esp)
080de35f +0x11f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080de364 +0x124:  movl   $0xc,0x8(%esp)
080de36c +0x12c:  lea    -0x20(%ebp),%edx
080de36f +0x12f:  mov    %edx,0x4(%esp)
080de373 +0x133:  mov    %eax,(%esp)
080de376 +0x136:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
080de37b +0x13b:  movswl -0x2c(%ebp),%ebx
080de37f +0x13f:  lea    -0x14(%ebp),%eax
080de382 +0x142:  mov    %eax,(%esp)
080de385 +0x145:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080de38a +0x14a:  mov    %ebx,0x8(%esp)
080de38e +0x14e:  mov    0x1c(%ebp),%edx
080de391 +0x151:  mov    %edx,0x4(%esp)
080de395 +0x155:  mov    %eax,(%esp)
080de398 +0x158:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
080de39d +0x15d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080de3a2 +0x162:  lea    -0x14(%ebp),%edx
080de3a5 +0x165:  mov    %edx,0x8(%esp)
080de3a9 +0x169:  movl   $0x1,0x4(%esp)
080de3b1 +0x171:  mov    %eax,(%esp)
080de3b4 +0x174:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080de3b9 +0x179:  mov    $0x0,%ebx
080de3be +0x17e:  lea    -0x14(%ebp),%eax
080de3c1 +0x181:  mov    %eax,(%esp)
080de3c4 +0x184:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de3c9 +0x189:  mov    %ebx,%eax
080de3cb +0x18b:  add    $0x40,%esp
080de3ce +0x18e:  pop    %ebx
080de3cf +0x18f:  pop    %esi
080de3d0 +0x190:  pop    %ebp
080de3d1 +0x191:  ret
080de3d2 +0x192:  mov    %edx,%ebx
080de3d4 +0x194:  mov    %eax,%esi
080de3d6 +0x196:  lea    -0x14(%ebp),%eax
080de3d9 +0x199:  mov    %eax,(%esp)
080de3dc +0x19c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de3e1 +0x1a1:  mov    %esi,%eax
080de3e3 +0x1a3:  mov    %ebx,%edx
080de3e5 +0x1a5:  mov    %eax,(%esp)
080de3e8 +0x1a8:  call   08ae3750 <_Unwind_Resume>
080de3ed +0x1ad:  nop
```

## 反编译 C

```c
// CBusinessImpl::SendBuffertoClient @ 0x80de240

/* CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short) */

undefined4 __thiscall
CBusinessImpl::SendBuffertoClient
          (CBusinessImpl *this,int param_1,int param_2,int param_3,uint param_4,uchar *param_5,
          short param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int local_24;
  uint local_20;
  short local_1c;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = param_6 + 0x14;
  CStreamGuard::CStreamGuard(local_18,true);
  if (local_10 < 0x1000) {
                    /* try { // try from 080de28d to 080de3b8 has its CatchHandler @ 080de3d2 */
    pSVar1 = (Stream *)
             SmallStreamPool::Acquire(GlobalData::s_small_stream_pool,"BusinessImpl.cpp",0x3a);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else if ((local_10 < 0x1000) || (0x3fff < local_10)) {
    pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"BusinessImpl.cpp",0x42)
    ;
    CStreamGuard::Set(local_18,pSVar1);
  }
  else {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x3e);
    CStreamGuard::Set(local_18,pSVar1);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,0x252);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  local_24 = param_1;
  local_20 = param_4;
  local_1c = param_6;
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,&local_24,0xc);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,param_5,(int)param_6);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}
```
