# SendResult_forchina

`_ZN16DB_LoadInventory19SendResult_forchinaEiiP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::SendResult_forchina(int, int, SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840d98c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840d98c  _ZN16DB_LoadInventory19SendResult_forchinaEiiP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::SendResult_forchina(int, int, SIG_LOAD_INVENTORY*)
# range [0x0840d98c, 0x0840da69]
0840d98c +0x00:  push   %ebp
0840d98d +0x01:  mov    %esp,%ebp
0840d98f +0x03:  push   %esi
0840d990 +0x04:  push   %ebx
0840d991 +0x05:  sub    $0x20,%esp
0840d994 +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0840d999 +0x0d:  movl   $0x2939,0x8(%esp)
0840d9a1 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0840d9a9 +0x1d:  mov    %eax,(%esp)
0840d9ac +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0840d9b1 +0x25:  movl   $0x1,0x8(%esp)
0840d9b9 +0x2d:  mov    %eax,0x4(%esp)
0840d9bd +0x31:  lea    -0x10(%ebp),%eax
0840d9c0 +0x34:  mov    %eax,(%esp)
0840d9c3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840d9c8 +0x3c:  lea    -0x10(%ebp),%eax
0840d9cb +0x3f:  mov    %eax,(%esp)
0840d9ce +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840d9d3 +0x47:  mov    0xc(%ebp),%edx
0840d9d6 +0x4a:  mov    %edx,0x4(%esp)
0840d9da +0x4e:  mov    %eax,(%esp)
0840d9dd +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840d9e2 +0x56:  lea    -0x10(%ebp),%eax
0840d9e5 +0x59:  mov    %eax,(%esp)
0840d9e8 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0840d9ed +0x61:  mov    0x10(%ebp),%edx
0840d9f0 +0x64:  mov    %edx,0x4(%esp)
0840d9f4 +0x68:  mov    %eax,(%esp)
0840d9f7 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840d9fc +0x70:  lea    -0x10(%ebp),%eax
0840d9ff +0x73:  mov    %eax,(%esp)
0840da02 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0840da07 +0x7b:  movl   $&_ZL14gUnicodeBuffer+0xaf20,0x8(%esp)
0840da0f +0x83:  mov    0x14(%ebp),%edx
0840da12 +0x86:  mov    %edx,0x4(%esp)
0840da16 +0x8a:  mov    %eax,(%esp)
0840da19 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0840da1e +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0840da23 +0x97:  lea    -0x10(%ebp),%edx
0840da26 +0x9a:  mov    %edx,0x8(%esp)
0840da2a +0x9e:  movl   $0x1,0x4(%esp)
0840da32 +0xa6:  mov    %eax,(%esp)
0840da35 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0840da3a +0xae:  mov    $0x1,%ebx
0840da3f +0xb3:  lea    -0x10(%ebp),%eax
0840da42 +0xb6:  mov    %eax,(%esp)
0840da45 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840da4a +0xbe:  mov    %ebx,%eax
0840da4c +0xc0:  add    $0x20,%esp
0840da4f +0xc3:  pop    %ebx
0840da50 +0xc4:  pop    %esi
0840da51 +0xc5:  pop    %ebp
0840da52 +0xc6:  ret
0840da53 +0xc7:  mov    %edx,%ebx
0840da55 +0xc9:  mov    %eax,%esi
0840da57 +0xcb:  lea    -0x10(%ebp),%eax
0840da5a +0xce:  mov    %eax,(%esp)
0840da5d +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840da62 +0xd6:  mov    %esi,%eax
0840da64 +0xd8:  mov    %ebx,%edx
0840da66 +0xda:  mov    %eax,(%esp)
0840da69 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadInventory::SendResult_forchina @ 0x840d98c

/* DB_LoadInventory::SendResult_forchina(int, int, SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::SendResult_forchina
          (DB_LoadInventory *this,int param_1,int param_2,SIG_LOAD_INVENTORY *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x2939);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0840d9dd to 0840da39 has its CatchHandler @ 0840da53 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x1544c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
