# ReqDBSaveHackInfo

`_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii`

`WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8f62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8f62  _ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii
#           WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
# range [0x080f8f62, 0x080f9069]
080f8f62 +0x000:  push   %ebp
080f8f63 +0x001:  mov    %esp,%ebp
080f8f65 +0x003:  push   %esi
080f8f66 +0x004:  push   %ebx
080f8f67 +0x005:  sub    $0x30,%esp
080f8f6a +0x008:  mov    0x10(%ebp),%eax
080f8f6d +0x00b:  mov    %ax,-0x1c(%ebp)
080f8f71 +0x00f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080f8f76 +0x014:  movl   $0x249,0x8(%esp)
080f8f7e +0x01c:  movl   $"HackAnalyzer.cpp",0x4(%esp)
080f8f86 +0x024:  mov    %eax,(%esp)
080f8f89 +0x027:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080f8f8e +0x02c:  movl   $0x1,0x8(%esp)
080f8f96 +0x034:  mov    %eax,0x4(%esp)
080f8f9a +0x038:  lea    -0x14(%ebp),%eax
080f8f9d +0x03b:  mov    %eax,(%esp)
080f8fa0 +0x03e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080f8fa5 +0x043:  lea    -0x14(%ebp),%eax
080f8fa8 +0x046:  mov    %eax,(%esp)
080f8fab +0x049:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080f8fb0 +0x04e:  movl   $0x9a,0x4(%esp)
080f8fb8 +0x056:  mov    %eax,(%esp)
080f8fbb +0x059:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080f8fc0 +0x05e:  lea    -0x14(%ebp),%eax
080f8fc3 +0x061:  mov    %eax,(%esp)
080f8fc6 +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080f8fcb +0x069:  movl   $0xffffffff,0x4(%esp)
080f8fd3 +0x071:  mov    %eax,(%esp)
080f8fd6 +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080f8fdb +0x079:  lea    -0x14(%ebp),%eax
080f8fde +0x07c:  mov    %eax,(%esp)
080f8fe1 +0x07f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080f8fe6 +0x084:  mov    %eax,(%esp)
080f8fe9 +0x087:  call   080f9e44 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x650>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x650
080f8fee +0x08c:  mov    %eax,-0xc(%ebp)
080f8ff1 +0x08f:  mov    -0xc(%ebp),%eax
080f8ff4 +0x092:  mov    0x8(%ebp),%edx
080f8ff7 +0x095:  mov    %edx,(%eax)
080f8ff9 +0x097:  mov    -0xc(%ebp),%eax
080f8ffc +0x09a:  mov    0xc(%ebp),%edx
080f8fff +0x09d:  mov    %edx,0x4(%eax)
080f9002 +0x0a0:  mov    -0xc(%ebp),%eax
080f9005 +0x0a3:  movzwl -0x1c(%ebp),%edx
080f9009 +0x0a7:  mov    %dx,0x8(%eax)
080f900d +0x0ab:  mov    -0xc(%ebp),%eax
080f9010 +0x0ae:  mov    0x14(%ebp),%edx
080f9013 +0x0b1:  mov    %edx,0xa(%eax)
080f9016 +0x0b4:  mov    -0xc(%ebp),%eax
080f9019 +0x0b7:  mov    0x18(%ebp),%edx
080f901c +0x0ba:  mov    %edx,0xe(%eax)
080f901f +0x0bd:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080f9024 +0x0c2:  lea    -0x14(%ebp),%edx
080f9027 +0x0c5:  mov    %edx,0x8(%esp)
080f902b +0x0c9:  movl   $0x4,0x4(%esp)
080f9033 +0x0d1:  mov    %eax,(%esp)
080f9036 +0x0d4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080f903b +0x0d9:  jmp    080f9058 <+0xf6>
080f903d +0x0db:  mov    %edx,%ebx
080f903f +0x0dd:  mov    %eax,%esi
080f9041 +0x0df:  lea    -0x14(%ebp),%eax
080f9044 +0x0e2:  mov    %eax,(%esp)
080f9047 +0x0e5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080f904c +0x0ea:  mov    %esi,%eax
080f904e +0x0ec:  mov    %ebx,%edx
080f9050 +0x0ee:  mov    %eax,(%esp)
080f9053 +0x0f1:  call   08ae3750 <_Unwind_Resume>
080f9058 +0x0f6:  lea    -0x14(%ebp),%eax
080f905b +0x0f9:  mov    %eax,(%esp)
080f905e +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080f9063 +0x101:  add    $0x30,%esp
080f9066 +0x104:  pop    %ebx
080f9067 +0x105:  pop    %esi
080f9068 +0x106:  pop    %ebp
080f9069 +0x107:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::ReqDBSaveHackInfo @ 0x80f8f62

/* WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
    */

void WongWork::CHackAnalyzer::ReqDBSaveHackInfo
               (uint param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"HackAnalyzer.cpp",0x249);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080f8fbb to 080f903a has its CatchHandler @ 080f903d */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(ushort *)(local_10 + 8) = param_3;
  *(int *)(local_10 + 10) = param_4;
  *(int *)(local_10 + 0xe) = param_5;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
