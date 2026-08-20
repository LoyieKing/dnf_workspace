# _saveData

`_ZN10expert_job16CCharacExpertJob9_saveDataEP5CUser`

`expert_job::CCharacExpertJob::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b0ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b0ac  _ZN10expert_job16CCharacExpertJob9_saveDataEP5CUser
#           expert_job::CCharacExpertJob::_saveData(CUser*)
# range [0x0832b0ac, 0x0832b1f9]
0832b0ac +0x000:  push   %ebp
0832b0ad +0x001:  mov    %esp,%ebp
0832b0af +0x003:  push   %esi
0832b0b0 +0x004:  push   %ebx
0832b0b1 +0x005:  sub    $0x20,%esp
0832b0b4 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0832b0b9 +0x00d:  movl   $0x16,0x8(%esp)
0832b0c1 +0x015:  movl   $"CharacExpertJob.cpp",0x4(%esp)
0832b0c9 +0x01d:  mov    %eax,(%esp)
0832b0cc +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0832b0d1 +0x025:  movl   $0x1,0x8(%esp)
0832b0d9 +0x02d:  mov    %eax,0x4(%esp)
0832b0dd +0x031:  lea    -0x14(%ebp),%eax
0832b0e0 +0x034:  mov    %eax,(%esp)
0832b0e3 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0832b0e8 +0x03c:  lea    -0x14(%ebp),%eax
0832b0eb +0x03f:  mov    %eax,(%esp)
0832b0ee +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0832b0f3 +0x047:  movl   $0x181,0x4(%esp)
0832b0fb +0x04f:  mov    %eax,(%esp)
0832b0fe +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0832b103 +0x057:  mov    0xc(%ebp),%eax
0832b106 +0x05a:  mov    %eax,(%esp)
0832b109 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0832b10e +0x062:  mov    %eax,%ebx
0832b110 +0x064:  lea    -0x14(%ebp),%eax
0832b113 +0x067:  mov    %eax,(%esp)
0832b116 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0832b11b +0x06f:  mov    %ebx,0x4(%esp)
0832b11f +0x073:  mov    %eax,(%esp)
0832b122 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0832b127 +0x07b:  lea    -0x14(%ebp),%eax
0832b12a +0x07e:  mov    %eax,(%esp)
0832b12d +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0832b132 +0x086:  mov    %eax,(%esp)
0832b135 +0x089:  call   0832b87e <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x1e4>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x1e4
0832b13a +0x08e:  mov    %eax,-0xc(%ebp)
0832b13d +0x091:  movl   $0x30,0x8(%esp)
0832b145 +0x099:  movl   $0x0,0x4(%esp)
0832b14d +0x0a1:  mov    -0xc(%ebp),%eax
0832b150 +0x0a4:  mov    %eax,(%esp)
0832b153 +0x0a7:  call   0807dcc0 <_init+0x5b8>
0832b158 +0x0ac:  mov    0xc(%ebp),%eax
0832b15b +0x0af:  mov    %eax,(%esp)
0832b15e +0x0b2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0832b163 +0x0b7:  mov    -0xc(%ebp),%edx
0832b166 +0x0ba:  mov    %eax,(%edx)
0832b168 +0x0bc:  mov    0x8(%ebp),%eax
0832b16b +0x0bf:  movzwl 0x6(%eax),%edx
0832b16f +0x0c3:  mov    -0xc(%ebp),%eax
0832b172 +0x0c6:  mov    %dx,0x4(%eax)
0832b176 +0x0ca:  mov    0x8(%ebp),%eax
0832b179 +0x0cd:  mov    0x8(%eax),%edx
0832b17c +0x0d0:  mov    -0xc(%ebp),%eax
0832b17f +0x0d3:  mov    %edx,0x8(%eax)
0832b182 +0x0d6:  mov    0x8(%ebp),%eax
0832b185 +0x0d9:  mov    0xc(%eax),%edx
0832b188 +0x0dc:  mov    -0xc(%ebp),%eax
0832b18b +0x0df:  mov    %edx,0xc(%eax)
0832b18e +0x0e2:  mov    0x8(%ebp),%eax
0832b191 +0x0e5:  lea    0x10(%eax),%edx
0832b194 +0x0e8:  mov    -0xc(%ebp),%eax
0832b197 +0x0eb:  add    $0x10,%eax
0832b19a +0x0ee:  movl   $0x1e,0x8(%esp)
0832b1a2 +0x0f6:  mov    %edx,0x4(%esp)
0832b1a6 +0x0fa:  mov    %eax,(%esp)
0832b1a9 +0x0fd:  call   0807d8a0 <_init+0x198>
0832b1ae +0x102:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0832b1b3 +0x107:  lea    -0x14(%ebp),%edx
0832b1b6 +0x10a:  mov    %edx,0x8(%esp)
0832b1ba +0x10e:  movl   $0x2,0x4(%esp)
0832b1c2 +0x116:  mov    %eax,(%esp)
0832b1c5 +0x119:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0832b1ca +0x11e:  mov    $0x1,%ebx
0832b1cf +0x123:  lea    -0x14(%ebp),%eax
0832b1d2 +0x126:  mov    %eax,(%esp)
0832b1d5 +0x129:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832b1da +0x12e:  mov    %ebx,%eax
0832b1dc +0x130:  add    $0x20,%esp
0832b1df +0x133:  pop    %ebx
0832b1e0 +0x134:  pop    %esi
0832b1e1 +0x135:  pop    %ebp
0832b1e2 +0x136:  ret
0832b1e3 +0x137:  mov    %edx,%ebx
0832b1e5 +0x139:  mov    %eax,%esi
0832b1e7 +0x13b:  lea    -0x14(%ebp),%eax
0832b1ea +0x13e:  mov    %eax,(%esp)
0832b1ed +0x141:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0832b1f2 +0x146:  mov    %esi,%eax
0832b1f4 +0x148:  mov    %ebx,%edx
0832b1f6 +0x14a:  mov    %eax,(%esp)
0832b1f9 +0x14d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::_saveData @ 0x832b0ac

/* expert_job::CCharacExpertJob::_saveData(CUser*) */

undefined4 __thiscall expert_job::CCharacExpertJob::_saveData(CCharacExpertJob *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_EXPERT_JOB *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacExpertJob.cpp",0x16);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0832b0fe to 0832b1c9 has its CatchHandler @ 0832b1e3 */
  CStreamGuard::operator<<(pCVar2,0x181);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EXPERT_JOB>(pCVar2);
  memset(local_10,0,0x30);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(undefined2 *)(local_10 + 4) = *(undefined2 *)(this + 6);
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0xc);
  memcpy(local_10 + 0x10,this + 0x10,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
