# SendPacket

`_ZN11game_master6CMacro10SendPacketEPKci`

`game_master::CMacro::SendPacket(char const*, int)`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a8924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8924  _ZN11game_master6CMacro10SendPacketEPKci
#           game_master::CMacro::SendPacket(char const*, int)
# range [0x084a8924, 0x084a8a99]
084a8924 +0x000:  push   %ebp
084a8925 +0x001:  mov    %esp,%ebp
084a8927 +0x003:  push   %esi
084a8928 +0x004:  push   %ebx
084a8929 +0x005:  sub    $0x20,%esp
084a892c +0x008:  mov    0x10(%ebp),%eax
084a892f +0x00b:  add    $0x8,%eax
084a8932 +0x00e:  mov    %eax,-0xc(%ebp)
084a8935 +0x011:  movl   $0x1,0x4(%esp)
084a893d +0x019:  lea    -0x14(%ebp),%eax
084a8940 +0x01c:  mov    %eax,(%esp)
084a8943 +0x01f:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
084a8948 +0x024:  cmpl   $0xfff,-0xc(%ebp)
084a894f +0x02b:  jg     084a897f <+0x5b>
084a8951 +0x02d:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
084a8956 +0x032:  movl   $0xed,0x8(%esp)
084a895e +0x03a:  movl   $"GameMaster.cpp",0x4(%esp)
084a8966 +0x042:  mov    %eax,(%esp)
084a8969 +0x045:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
084a896e +0x04a:  mov    %eax,0x4(%esp)
084a8972 +0x04e:  lea    -0x14(%ebp),%eax
084a8975 +0x051:  mov    %eax,(%esp)
084a8978 +0x054:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
084a897d +0x059:  jmp    084a89eb <+0xc7>
084a897f +0x05b:  cmpl   $0xfff,-0xc(%ebp)
084a8986 +0x062:  jle    084a89bf <+0x9b>
084a8988 +0x064:  cmpl   $0x3fff,-0xc(%ebp)
084a898f +0x06b:  jg     084a89bf <+0x9b>
084a8991 +0x06d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084a8996 +0x072:  movl   $0xf1,0x8(%esp)
084a899e +0x07a:  movl   $"GameMaster.cpp",0x4(%esp)
084a89a6 +0x082:  mov    %eax,(%esp)
084a89a9 +0x085:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084a89ae +0x08a:  mov    %eax,0x4(%esp)
084a89b2 +0x08e:  lea    -0x14(%ebp),%eax
084a89b5 +0x091:  mov    %eax,(%esp)
084a89b8 +0x094:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
084a89bd +0x099:  jmp    084a89eb <+0xc7>
084a89bf +0x09b:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
084a89c4 +0x0a0:  movl   $0xf5,0x8(%esp)
084a89cc +0x0a8:  movl   $"GameMaster.cpp",0x4(%esp)
084a89d4 +0x0b0:  mov    %eax,(%esp)
084a89d7 +0x0b3:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
084a89dc +0x0b8:  mov    %eax,0x4(%esp)
084a89e0 +0x0bc:  lea    -0x14(%ebp),%eax
084a89e3 +0x0bf:  mov    %eax,(%esp)
084a89e6 +0x0c2:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
084a89eb +0x0c7:  lea    -0x14(%ebp),%eax
084a89ee +0x0ca:  mov    %eax,(%esp)
084a89f1 +0x0cd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084a89f6 +0x0d2:  movl   $0x0,0x4(%esp)
084a89fe +0x0da:  mov    %eax,(%esp)
084a8a01 +0x0dd:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084a8a06 +0x0e2:  mov    0x8(%ebp),%eax
084a8a09 +0x0e5:  mov    0x14(%eax),%eax
084a8a0c +0x0e8:  mov    %eax,(%esp)
084a8a0f +0x0eb:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084a8a14 +0x0f0:  mov    %eax,%ebx
084a8a16 +0x0f2:  lea    -0x14(%ebp),%eax
084a8a19 +0x0f5:  mov    %eax,(%esp)
084a8a1c +0x0f8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084a8a21 +0x0fd:  mov    %ebx,0x4(%esp)
084a8a25 +0x101:  mov    %eax,(%esp)
084a8a28 +0x104:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084a8a2d +0x109:  lea    -0x14(%ebp),%eax
084a8a30 +0x10c:  mov    %eax,(%esp)
084a8a33 +0x10f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084a8a38 +0x114:  mov    0x10(%ebp),%edx
084a8a3b +0x117:  mov    %edx,0x8(%esp)
084a8a3f +0x11b:  mov    0xc(%ebp),%edx
084a8a42 +0x11e:  mov    %edx,0x4(%esp)
084a8a46 +0x122:  mov    %eax,(%esp)
084a8a49 +0x125:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084a8a4e +0x12a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084a8a53 +0x12f:  lea    -0x14(%ebp),%edx
084a8a56 +0x132:  mov    %edx,0x8(%esp)
084a8a5a +0x136:  movl   $0x1,0x4(%esp)
084a8a62 +0x13e:  mov    %eax,(%esp)
084a8a65 +0x141:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084a8a6a +0x146:  jmp    084a8a87 <+0x163>
084a8a6c +0x148:  mov    %edx,%ebx
084a8a6e +0x14a:  mov    %eax,%esi
084a8a70 +0x14c:  lea    -0x14(%ebp),%eax
084a8a73 +0x14f:  mov    %eax,(%esp)
084a8a76 +0x152:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084a8a7b +0x157:  mov    %esi,%eax
084a8a7d +0x159:  mov    %ebx,%edx
084a8a7f +0x15b:  mov    %eax,(%esp)
084a8a82 +0x15e:  call   08ae3750 <_Unwind_Resume>
084a8a87 +0x163:  lea    -0x14(%ebp),%eax
084a8a8a +0x166:  mov    %eax,(%esp)
084a8a8d +0x169:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084a8a92 +0x16e:  add    $0x20,%esp
084a8a95 +0x171:  pop    %ebx
084a8a96 +0x172:  pop    %esi
084a8a97 +0x173:  pop    %ebp
084a8a98 +0x174:  ret
084a8a99 +0x175:  nop
```

## 反编译 C

```c
// game_master::CMacro::SendPacket @ 0x84a8924

/* game_master::CMacro::SendPacket(char const*, int) */

void __thiscall game_master::CMacro::SendPacket(CMacro *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = param_2 + 8;
  CStreamGuard::CStreamGuard(local_18,true);
  if (local_10 < 0x1000) {
                    /* try { // try from 084a8969 to 084a8a69 has its CatchHandler @ 084a8a6c */
    pSVar1 = (Stream *)
             SmallStreamPool::Acquire(GlobalData::s_small_stream_pool,"GameMaster.cpp",0xed);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else if ((local_10 < 0x1000) || (0x3fff < local_10)) {
    pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"GameMaster.cpp",0xf5);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0xf1);
    CStreamGuard::Set(local_18,pSVar1);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,0);
  iVar3 = CUser::GetUID(*(CUser **)(this + 0x14));
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,param_1,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
