# makeRequest

`_ZN12advancealtar9DB_Update11makeRequestEiRKNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::DB_Update::makeRequest(int, advancealtar::_CharacAdvanceAltarDbData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813eb38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813eb38  _ZN12advancealtar9DB_Update11makeRequestEiRKNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::DB_Update::makeRequest(int, advancealtar::_CharacAdvanceAltarDbData const&)
# range [0x0813eb38, 0x0813ec23]
0813eb38 +0x00:  push   %ebp
0813eb39 +0x01:  mov    %esp,%ebp
0813eb3b +0x03:  push   %esi
0813eb3c +0x04:  push   %ebx
0813eb3d +0x05:  sub    $0x20,%esp
0813eb40 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0813eb45 +0x0d:  movl   $0x1d9,0x8(%esp)
0813eb4d +0x15:  movl   $"localglobal/global_AdvanceAltar_Dispatcher.cpp",0x4(%esp)
0813eb55 +0x1d:  mov    %eax,(%esp)
0813eb58 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0813eb5d +0x25:  movl   $0x1,0x8(%esp)
0813eb65 +0x2d:  mov    %eax,0x4(%esp)
0813eb69 +0x31:  lea    -0x14(%ebp),%eax
0813eb6c +0x34:  mov    %eax,(%esp)
0813eb6f +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0813eb74 +0x3c:  lea    -0x14(%ebp),%eax
0813eb77 +0x3f:  mov    %eax,(%esp)
0813eb7a +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0813eb7f +0x47:  movl   $0x1a,0x4(%esp)
0813eb87 +0x4f:  mov    %eax,(%esp)
0813eb8a +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0813eb8f +0x57:  lea    -0x14(%ebp),%eax
0813eb92 +0x5a:  mov    %eax,(%esp)
0813eb95 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0813eb9a +0x62:  mov    0x8(%ebp),%edx
0813eb9d +0x65:  mov    %edx,0x4(%esp)
0813eba1 +0x69:  mov    %eax,(%esp)
0813eba4 +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0813eba9 +0x71:  lea    -0x14(%ebp),%eax
0813ebac +0x74:  mov    %eax,(%esp)
0813ebaf +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0813ebb4 +0x7c:  mov    %eax,(%esp)
0813ebb7 +0x7f:  call   081367a6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x23ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x23ad
0813ebbc +0x84:  mov    %eax,-0xc(%ebp)
0813ebbf +0x87:  movl   $0x51c,0x8(%esp)
0813ebc7 +0x8f:  mov    0xc(%ebp),%eax
0813ebca +0x92:  mov    %eax,0x4(%esp)
0813ebce +0x96:  mov    -0xc(%ebp),%eax
0813ebd1 +0x99:  mov    %eax,(%esp)
0813ebd4 +0x9c:  call   0807d8a0 <_init+0x198>
0813ebd9 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0813ebde +0xa6:  lea    -0x14(%ebp),%edx
0813ebe1 +0xa9:  mov    %edx,0x8(%esp)
0813ebe5 +0xad:  movl   $0x2,0x4(%esp)
0813ebed +0xb5:  mov    %eax,(%esp)
0813ebf0 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0813ebf5 +0xbd:  jmp    0813ec12 <+0xda>
0813ebf7 +0xbf:  mov    %edx,%ebx
0813ebf9 +0xc1:  mov    %eax,%esi
0813ebfb +0xc3:  lea    -0x14(%ebp),%eax
0813ebfe +0xc6:  mov    %eax,(%esp)
0813ec01 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0813ec06 +0xce:  mov    %esi,%eax
0813ec08 +0xd0:  mov    %ebx,%edx
0813ec0a +0xd2:  mov    %eax,(%esp)
0813ec0d +0xd5:  call   08ae3750 <_Unwind_Resume>
0813ec12 +0xda:  lea    -0x14(%ebp),%eax
0813ec15 +0xdd:  mov    %eax,(%esp)
0813ec18 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0813ec1d +0xe5:  add    $0x20,%esp
0813ec20 +0xe8:  pop    %ebx
0813ec21 +0xe9:  pop    %esi
0813ec22 +0xea:  pop    %ebp
0813ec23 +0xeb:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::makeRequest @ 0x813eb38

/* advancealtar::DB_Update::makeRequest(int, advancealtar::_CharacAdvanceAltarDbData const&) */

void advancealtar::DB_Update::makeRequest(int param_1,_CharacAdvanceAltarDbData *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  _CharacAdvanceAltarDbData *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localglobal/global_AdvanceAltar_Dispatcher.cpp",0x1d9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0813eb8a to 0813ebf4 has its CatchHandler @ 0813ebf7 */
  CStreamGuard::operator<<(pCVar2,0x1a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<advancealtar::_CharacAdvanceAltarDbData>(pCVar2);
  memcpy(local_10,param_2,0x51c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
