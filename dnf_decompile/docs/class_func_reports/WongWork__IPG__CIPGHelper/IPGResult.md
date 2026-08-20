# IPGResult

`_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_`

`WongWork::IPG::CIPGHelper::IPGResult(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x0810085e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810085e  _ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_
#           WongWork::IPG::CIPGHelper::IPGResult(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)
# range [0x0810085e, 0x08100a2d]
0810085e +0x000:  push   %ebp
0810085f +0x001:  mov    %esp,%ebp
08100861 +0x003:  push   %esi
08100862 +0x004:  push   %ebx
08100863 +0x005:  sub    $0x20,%esp
08100866 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0810086b +0x00d:  movl   $0x196,0x8(%esp)
08100873 +0x015:  movl   $"IPGHelper.cpp",0x4(%esp)
0810087b +0x01d:  mov    %eax,(%esp)
0810087e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08100883 +0x025:  movl   $0x1,0x8(%esp)
0810088b +0x02d:  mov    %eax,0x4(%esp)
0810088f +0x031:  lea    -0x10(%ebp),%eax
08100892 +0x034:  mov    %eax,(%esp)
08100895 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0810089a +0x03c:  lea    -0x10(%ebp),%eax
0810089d +0x03f:  mov    %eax,(%esp)
081008a0 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081008a5 +0x047:  movl   $0x48,0x4(%esp)
081008ad +0x04f:  mov    %eax,(%esp)
081008b0 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081008b5 +0x057:  lea    -0x10(%ebp),%eax
081008b8 +0x05a:  mov    %eax,(%esp)
081008bb +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081008c0 +0x062:  movl   $0xffffffff,0x4(%esp)
081008c8 +0x06a:  mov    %eax,(%esp)
081008cb +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081008d0 +0x072:  cmpl   $0x0,0x10(%ebp)
081008d4 +0x076:  je     08100985 <+0x127>
081008da +0x07c:  mov    0xc(%ebp),%eax
081008dd +0x07f:  lea    0x28(%eax),%edx
081008e0 +0x082:  mov    0x10(%ebp),%eax
081008e3 +0x085:  add    $0x28,%eax
081008e6 +0x088:  movl   $0x41,0x8(%esp)
081008ee +0x090:  mov    %edx,0x4(%esp)
081008f2 +0x094:  mov    %eax,(%esp)
081008f5 +0x097:  call   0807d8a0 <_init+0x198>
081008fa +0x09c:  mov    0xc(%ebp),%eax
081008fd +0x09f:  mov    0x20(%eax),%edx
08100900 +0x0a2:  mov    0x10(%ebp),%eax
08100903 +0x0a5:  mov    %edx,0x20(%eax)
08100906 +0x0a8:  mov    0xc(%ebp),%eax
08100909 +0x0ab:  mov    0x2d8(%eax),%edx
0810090f +0x0b1:  mov    0x10(%ebp),%eax
08100912 +0x0b4:  mov    %edx,0x2d8(%eax)
08100918 +0x0ba:  mov    0xc(%ebp),%eax
0810091b +0x0bd:  mov    0x1c(%eax),%edx
0810091e +0x0c0:  mov    0x10(%ebp),%eax
08100921 +0x0c3:  mov    %edx,0x1c(%eax)
08100924 +0x0c6:  lea    -0x10(%ebp),%eax
08100927 +0x0c9:  mov    %eax,(%esp)
0810092a +0x0cc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0810092f +0x0d1:  movl   $0x1,0x4(%esp)
08100937 +0x0d9:  mov    %eax,(%esp)
0810093a +0x0dc:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0810093f +0x0e1:  lea    -0x10(%ebp),%eax
08100942 +0x0e4:  mov    %eax,(%esp)
08100945 +0x0e7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0810094a +0x0ec:  movl   $0x2dc,0x8(%esp)
08100952 +0x0f4:  mov    0x10(%ebp),%edx
08100955 +0x0f7:  mov    %edx,0x4(%esp)
08100959 +0x0fb:  mov    %eax,(%esp)
0810095c +0x0fe:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08100961 +0x103:  lea    -0x10(%ebp),%eax
08100964 +0x106:  mov    %eax,(%esp)
08100967 +0x109:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0810096c +0x10e:  movl   $0x2dc,0x8(%esp)
08100974 +0x116:  mov    0xc(%ebp),%edx
08100977 +0x119:  mov    %edx,0x4(%esp)
0810097b +0x11d:  mov    %eax,(%esp)
0810097e +0x120:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08100983 +0x125:  jmp    081009c2 <+0x164>
08100985 +0x127:  lea    -0x10(%ebp),%eax
08100988 +0x12a:  mov    %eax,(%esp)
0810098b +0x12d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08100990 +0x132:  movl   $0x0,0x4(%esp)
08100998 +0x13a:  mov    %eax,(%esp)
0810099b +0x13d:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
081009a0 +0x142:  lea    -0x10(%ebp),%eax
081009a3 +0x145:  mov    %eax,(%esp)
081009a6 +0x148:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081009ab +0x14d:  movl   $0x2dc,0x8(%esp)
081009b3 +0x155:  mov    0xc(%ebp),%edx
081009b6 +0x158:  mov    %edx,0x4(%esp)
081009ba +0x15c:  mov    %eax,(%esp)
081009bd +0x15f:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081009c2 +0x164:  mov    0xc(%ebp),%eax
081009c5 +0x167:  movzbl 0x24(%eax),%eax
081009c9 +0x16b:  test   %al,%al
081009cb +0x16d:  je     081009eb <+0x18d>
081009cd +0x16f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081009d2 +0x174:  lea    -0x10(%ebp),%edx
081009d5 +0x177:  mov    %edx,0x8(%esp)
081009d9 +0x17b:  movl   $0x1,0x4(%esp)
081009e1 +0x183:  mov    %eax,(%esp)
081009e4 +0x186:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081009e9 +0x18b:  jmp    08100a1c <+0x1be>
081009eb +0x18d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081009f0 +0x192:  lea    -0x10(%ebp),%edx
081009f3 +0x195:  mov    %edx,0x4(%esp)
081009f7 +0x199:  mov    %eax,(%esp)
081009fa +0x19c:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
081009ff +0x1a1:  jmp    08100a1c <+0x1be>
08100a01 +0x1a3:  mov    %edx,%ebx
08100a03 +0x1a5:  mov    %eax,%esi
08100a05 +0x1a7:  lea    -0x10(%ebp),%eax
08100a08 +0x1aa:  mov    %eax,(%esp)
08100a0b +0x1ad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08100a10 +0x1b2:  mov    %esi,%eax
08100a12 +0x1b4:  mov    %ebx,%edx
08100a14 +0x1b6:  mov    %eax,(%esp)
08100a17 +0x1b9:  call   08ae3750 <_Unwind_Resume>
08100a1c +0x1be:  lea    -0x10(%ebp),%eax
08100a1f +0x1c1:  mov    %eax,(%esp)
08100a22 +0x1c4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08100a27 +0x1c9:  add    $0x20,%esp
08100a2a +0x1cc:  pop    %ebx
08100a2b +0x1cd:  pop    %esi
08100a2c +0x1ce:  pop    %ebp
08100a2d +0x1cf:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGResult @ 0x810085e

/* WongWork::IPG::CIPGHelper::IPGResult(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGResult(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"IPGHelper.cpp",0x196);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081008b0 to 081009fe has its CatchHandler @ 08100a01 */
  CStreamGuard::operator<<(pCVar2,0x48);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  if (param_2 == (SIPGData *)0x0) {
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,'\0');
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_1,0x2dc);
  }
  else {
    memcpy(param_2 + 0x28,param_1 + 0x28,0x41);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,'\x01');
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_2,0x2dc);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_1,0x2dc);
  }
  if (param_1[0x24] == (SIPGData)0x0) {
    StreamPool::Free(GlobalData::s_stream_pool,local_14);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  }
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
