# SendResult

`_ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb`

`advancealtar::DB_Load::SendResult(int, int, advancealtar::_CharacAdvanceAltarDbData&, bool)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813ea46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813ea46  _ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb
#           advancealtar::DB_Load::SendResult(int, int, advancealtar::_CharacAdvanceAltarDbData&, bool)
# range [0x0813ea46, 0x0813eb37]
0813ea46 +0x00:  push   %ebp
0813ea47 +0x01:  mov    %esp,%ebp
0813ea49 +0x03:  push   %esi
0813ea4a +0x04:  push   %ebx
0813ea4b +0x05:  sub    $0x30,%esp
0813ea4e +0x08:  mov    0x18(%ebp),%eax
0813ea51 +0x0b:  mov    %al,-0x1c(%ebp)
0813ea54 +0x0e:  cmpb   $0x0,-0x1c(%ebp)
0813ea58 +0x12:  je     0813eb2c <+0xe6>
0813ea5e +0x18:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0813ea63 +0x1d:  movl   $0x1bf,0x8(%esp)
0813ea6b +0x25:  movl   $"localglobal/global_AdvanceAltar_Dispatcher.cpp",0x4(%esp)
0813ea73 +0x2d:  mov    %eax,(%esp)
0813ea76 +0x30:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0813ea7b +0x35:  movl   $0x1,0x8(%esp)
0813ea83 +0x3d:  mov    %eax,0x4(%esp)
0813ea87 +0x41:  lea    -0x10(%ebp),%eax
0813ea8a +0x44:  mov    %eax,(%esp)
0813ea8d +0x47:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0813ea92 +0x4c:  lea    -0x10(%ebp),%eax
0813ea95 +0x4f:  mov    %eax,(%esp)
0813ea98 +0x52:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0813ea9d +0x57:  mov    0xc(%ebp),%edx
0813eaa0 +0x5a:  mov    %edx,0x4(%esp)
0813eaa4 +0x5e:  mov    %eax,(%esp)
0813eaa7 +0x61:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0813eaac +0x66:  lea    -0x10(%ebp),%eax
0813eaaf +0x69:  mov    %eax,(%esp)
0813eab2 +0x6c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0813eab7 +0x71:  mov    0x10(%ebp),%edx
0813eaba +0x74:  mov    %edx,0x4(%esp)
0813eabe +0x78:  mov    %eax,(%esp)
0813eac1 +0x7b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0813eac6 +0x80:  lea    -0x10(%ebp),%eax
0813eac9 +0x83:  mov    %eax,(%esp)
0813eacc +0x86:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0813ead1 +0x8b:  movl   $0x51c,0x8(%esp)
0813ead9 +0x93:  mov    0x14(%ebp),%edx
0813eadc +0x96:  mov    %edx,0x4(%esp)
0813eae0 +0x9a:  mov    %eax,(%esp)
0813eae3 +0x9d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0813eae8 +0xa2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0813eaed +0xa7:  lea    -0x10(%ebp),%edx
0813eaf0 +0xaa:  mov    %edx,0x8(%esp)
0813eaf4 +0xae:  movl   $0x1,0x4(%esp)
0813eafc +0xb6:  mov    %eax,(%esp)
0813eaff +0xb9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0813eb04 +0xbe:  jmp    0813eb21 <+0xdb>
0813eb06 +0xc0:  mov    %edx,%ebx
0813eb08 +0xc2:  mov    %eax,%esi
0813eb0a +0xc4:  lea    -0x10(%ebp),%eax
0813eb0d +0xc7:  mov    %eax,(%esp)
0813eb10 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0813eb15 +0xcf:  mov    %esi,%eax
0813eb17 +0xd1:  mov    %ebx,%edx
0813eb19 +0xd3:  mov    %eax,(%esp)
0813eb1c +0xd6:  call   08ae3750 <_Unwind_Resume>
0813eb21 +0xdb:  lea    -0x10(%ebp),%eax
0813eb24 +0xde:  mov    %eax,(%esp)
0813eb27 +0xe1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0813eb2c +0xe6:  mov    $0x1,%eax
0813eb31 +0xeb:  add    $0x30,%esp
0813eb34 +0xee:  pop    %ebx
0813eb35 +0xef:  pop    %esi
0813eb36 +0xf0:  pop    %ebp
0813eb37 +0xf1:  ret
```

## 反编译 C

```c
// advancealtar::DB_Load::SendResult @ 0x813ea46

/* advancealtar::DB_Load::SendResult(int, int, advancealtar::_CharacAdvanceAltarDbData&, bool) */

undefined4 __thiscall
advancealtar::DB_Load::SendResult
          (DB_Load *this,int param_1,int param_2,_CharacAdvanceAltarDbData *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  if (param_4) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localglobal/global_AdvanceAltar_Dispatcher.cpp",0x1bf);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0813eaa7 to 0813eb03 has its CatchHandler @ 0813eb06 */
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_3,0x51c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return 1;
}
```
