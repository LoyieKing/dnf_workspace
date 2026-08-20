# LoadServerMessageFromDB

`_ZN27CSharedServerMessageManager23LoadServerMessageFromDBEv`

`CSharedServerMessageManager::LoadServerMessageFromDB()`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08601878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08601878  _ZN27CSharedServerMessageManager23LoadServerMessageFromDBEv
#           CSharedServerMessageManager::LoadServerMessageFromDB()
# range [0x08601878, 0x08601973]
08601878 +0x00:  push   %ebp
08601879 +0x01:  mov    %esp,%ebp
0860187b +0x03:  push   %esi
0860187c +0x04:  push   %ebx
0860187d +0x05:  sub    $0x20,%esp
08601880 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08601885 +0x0d:  movl   $0x21b,0x8(%esp)
0860188d +0x15:  movl   $"SharedServerMessageManager.cpp",0x4(%esp)
08601895 +0x1d:  mov    %eax,(%esp)
08601898 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0860189d +0x25:  movl   $0x1,0x8(%esp)
086018a5 +0x2d:  mov    %eax,0x4(%esp)
086018a9 +0x31:  lea    -0x14(%ebp),%eax
086018ac +0x34:  mov    %eax,(%esp)
086018af +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086018b4 +0x3c:  lea    -0x14(%ebp),%eax
086018b7 +0x3f:  mov    %eax,(%esp)
086018ba +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086018bf +0x47:  movl   $0x16d,0x4(%esp)
086018c7 +0x4f:  mov    %eax,(%esp)
086018ca +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086018cf +0x57:  lea    -0x14(%ebp),%eax
086018d2 +0x5a:  mov    %eax,(%esp)
086018d5 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086018da +0x62:  movl   $0xffffffff,0x4(%esp)
086018e2 +0x6a:  mov    %eax,(%esp)
086018e5 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086018ea +0x72:  lea    -0x14(%ebp),%eax
086018ed +0x75:  mov    %eax,(%esp)
086018f0 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086018f5 +0x7d:  mov    %eax,(%esp)
086018f8 +0x80:  call   08601ca6 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x2f2>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x2f2
086018fd +0x85:  mov    %eax,-0xc(%ebp)
08601900 +0x88:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08601905 +0x8d:  mov    0x378(%eax),%eax
0860190b +0x93:  mov    %eax,%edx
0860190d +0x95:  mov    -0xc(%ebp),%eax
08601910 +0x98:  mov    %dx,(%eax)
08601913 +0x9b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08601918 +0xa0:  mov    %eax,(%esp)
0860191b +0xa3:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08601920 +0xa8:  mov    %eax,%edx
08601922 +0xaa:  mov    -0xc(%ebp),%eax
08601925 +0xad:  mov    %dx,0x2(%eax)
08601929 +0xb1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0860192e +0xb6:  lea    -0x14(%ebp),%edx
08601931 +0xb9:  mov    %edx,0x8(%esp)
08601935 +0xbd:  movl   $0x2,0x4(%esp)
0860193d +0xc5:  mov    %eax,(%esp)
08601940 +0xc8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08601945 +0xcd:  jmp    08601962 <+0xea>
08601947 +0xcf:  mov    %edx,%ebx
08601949 +0xd1:  mov    %eax,%esi
0860194b +0xd3:  lea    -0x14(%ebp),%eax
0860194e +0xd6:  mov    %eax,(%esp)
08601951 +0xd9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08601956 +0xde:  mov    %esi,%eax
08601958 +0xe0:  mov    %ebx,%edx
0860195a +0xe2:  mov    %eax,(%esp)
0860195d +0xe5:  call   08ae3750 <_Unwind_Resume>
08601962 +0xea:  lea    -0x14(%ebp),%eax
08601965 +0xed:  mov    %eax,(%esp)
08601968 +0xf0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0860196d +0xf5:  add    $0x20,%esp
08601970 +0xf8:  pop    %ebx
08601971 +0xf9:  pop    %esi
08601972 +0xfa:  pop    %ebp
08601973 +0xfb:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::LoadServerMessageFromDB @ 0x8601878

/* CSharedServerMessageManager::LoadServerMessageFromDB() */

void CSharedServerMessageManager::LoadServerMessageFromDB(void)

{
  undefined2 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CEnvironment *this;
  CStreamGuard local_18 [8];
  SIG_SELECT_SERVER_MESSAGE *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"SharedServerMessageManager.cpp",0x21b);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086018ca to 08601944 has its CatchHandler @ 08601947 */
  CStreamGuard::operator<<(pCVar3,0x16d);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SELECT_SERVER_MESSAGE>(pCVar3);
  iVar4 = G_CEnvironment();
  *(short *)local_10 = (short)*(undefined4 *)(iVar4 + 0x378);
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_channel_no(this);
  *(undefined2 *)(local_10 + 2) = uVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
