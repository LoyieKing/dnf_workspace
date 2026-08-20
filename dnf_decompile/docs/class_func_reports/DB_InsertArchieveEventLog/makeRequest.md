# makeRequest

`_ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE`

`DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)`

| 类 | 地址 |
|---|---|
| `DB_InsertArchieveEventLog` | `0x0842e856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e856  _ZN25DB_InsertArchieveEventLog11makeRequestEjjN24SIG_INSERT_ACHIEVE_EVENT17ENUM_ACHIEVE_TYPEE
#           DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int, SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE)
# range [0x0842e856, 0x0842e943]
0842e856 +0x00:  push   %ebp
0842e857 +0x01:  mov    %esp,%ebp
0842e859 +0x03:  push   %esi
0842e85a +0x04:  push   %ebx
0842e85b +0x05:  sub    $0x20,%esp
0842e85e +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842e863 +0x0d:  movl   $0x7349,0x8(%esp)
0842e86b +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842e873 +0x1d:  mov    %eax,(%esp)
0842e876 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842e87b +0x25:  movl   $0x1,0x8(%esp)
0842e883 +0x2d:  mov    %eax,0x4(%esp)
0842e887 +0x31:  lea    -0x14(%ebp),%eax
0842e88a +0x34:  mov    %eax,(%esp)
0842e88d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842e892 +0x3c:  lea    -0x14(%ebp),%eax
0842e895 +0x3f:  mov    %eax,(%esp)
0842e898 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e89d +0x47:  movl   $0x117,0x4(%esp)
0842e8a5 +0x4f:  mov    %eax,(%esp)
0842e8a8 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e8ad +0x57:  lea    -0x14(%ebp),%eax
0842e8b0 +0x5a:  mov    %eax,(%esp)
0842e8b3 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e8b8 +0x62:  movl   $0xffffffff,0x4(%esp)
0842e8c0 +0x6a:  mov    %eax,(%esp)
0842e8c3 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e8c8 +0x72:  lea    -0x14(%ebp),%eax
0842e8cb +0x75:  mov    %eax,(%esp)
0842e8ce +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842e8d3 +0x7d:  mov    %eax,(%esp)
0842e8d6 +0x80:  call   08452984 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x559a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x559a
0842e8db +0x85:  mov    %eax,-0xc(%ebp)
0842e8de +0x88:  mov    -0xc(%ebp),%eax
0842e8e1 +0x8b:  mov    0x8(%ebp),%edx
0842e8e4 +0x8e:  mov    %edx,(%eax)
0842e8e6 +0x90:  mov    -0xc(%ebp),%eax
0842e8e9 +0x93:  mov    0xc(%ebp),%edx
0842e8ec +0x96:  mov    %edx,0x4(%eax)
0842e8ef +0x99:  mov    -0xc(%ebp),%eax
0842e8f2 +0x9c:  mov    0x10(%ebp),%edx
0842e8f5 +0x9f:  mov    %edx,0x8(%eax)
0842e8f8 +0xa2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842e8fd +0xa7:  lea    -0x14(%ebp),%edx
0842e900 +0xaa:  mov    %edx,0x8(%esp)
0842e904 +0xae:  movl   $0x4,0x4(%esp)
0842e90c +0xb6:  mov    %eax,(%esp)
0842e90f +0xb9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842e914 +0xbe:  jmp    0842e931 <+0xdb>
0842e916 +0xc0:  mov    %edx,%ebx
0842e918 +0xc2:  mov    %eax,%esi
0842e91a +0xc4:  lea    -0x14(%ebp),%eax
0842e91d +0xc7:  mov    %eax,(%esp)
0842e920 +0xca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e925 +0xcf:  mov    %esi,%eax
0842e927 +0xd1:  mov    %ebx,%edx
0842e929 +0xd3:  mov    %eax,(%esp)
0842e92c +0xd6:  call   08ae3750 <_Unwind_Resume>
0842e931 +0xdb:  lea    -0x14(%ebp),%eax
0842e934 +0xde:  mov    %eax,(%esp)
0842e937 +0xe1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e93c +0xe6:  add    $0x20,%esp
0842e93f +0xe9:  pop    %ebx
0842e940 +0xea:  pop    %esi
0842e941 +0xeb:  pop    %ebp
0842e942 +0xec:  ret
0842e943 +0xed:  nop
```

## 反编译 C

```c
// DB_InsertArchieveEventLog::makeRequest @ 0x842e856

/* DB_InsertArchieveEventLog::makeRequest(unsigned int, unsigned int,
   SIG_INSERT_ACHIEVE_EVENT::ENUM_ACHIEVE_TYPE) */

void DB_InsertArchieveEventLog::makeRequest
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_ACHIEVE_EVENT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7349);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e8a8 to 0842e913 has its CatchHandler @ 0842e916 */
  CStreamGuard::operator<<(pCVar2,0x117);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_ACHIEVE_EVENT>(pCVar2);
  *(undefined4 *)local_10 = param_1;
  *(undefined4 *)(local_10 + 4) = param_2;
  *(undefined4 *)(local_10 + 8) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
