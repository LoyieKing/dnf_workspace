# makeRequest

`_ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh`

`DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `DB_SavePcRoomPlayTimeEvent` | `0x08447bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447bd0  _ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh
#           DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char)
# range [0x08447bd0, 0x08447cc3]
08447bd0 +0x00:  push   %ebp
08447bd1 +0x01:  mov    %esp,%ebp
08447bd3 +0x03:  push   %esi
08447bd4 +0x04:  push   %ebx
08447bd5 +0x05:  sub    $0x30,%esp
08447bd8 +0x08:  mov    0x10(%ebp),%eax
08447bdb +0x0b:  mov    %al,-0x1c(%ebp)
08447bde +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08447be3 +0x13:  movl   $0xb270,0x8(%esp)
08447beb +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
08447bf3 +0x23:  mov    %eax,(%esp)
08447bf6 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08447bfb +0x2b:  movl   $0x1,0x8(%esp)
08447c03 +0x33:  mov    %eax,0x4(%esp)
08447c07 +0x37:  lea    -0x14(%ebp),%eax
08447c0a +0x3a:  mov    %eax,(%esp)
08447c0d +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08447c12 +0x42:  lea    -0x14(%ebp),%eax
08447c15 +0x45:  mov    %eax,(%esp)
08447c18 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08447c1d +0x4d:  movl   $0x2ff,0x4(%esp)
08447c25 +0x55:  mov    %eax,(%esp)
08447c28 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08447c2d +0x5d:  lea    -0x14(%ebp),%eax
08447c30 +0x60:  mov    %eax,(%esp)
08447c33 +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08447c38 +0x68:  movl   $0xffffffff,0x4(%esp)
08447c40 +0x70:  mov    %eax,(%esp)
08447c43 +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08447c48 +0x78:  lea    -0x14(%ebp),%eax
08447c4b +0x7b:  mov    %eax,(%esp)
08447c4e +0x7e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08447c53 +0x83:  mov    %eax,(%esp)
08447c56 +0x86:  call   084545bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x71d2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x71d2
08447c5b +0x8b:  mov    %eax,-0xc(%ebp)
08447c5e +0x8e:  mov    -0xc(%ebp),%eax
08447c61 +0x91:  mov    0x8(%ebp),%edx
08447c64 +0x94:  mov    %edx,(%eax)
08447c66 +0x96:  mov    -0xc(%ebp),%eax
08447c69 +0x99:  mov    0xc(%ebp),%edx
08447c6c +0x9c:  mov    %edx,0x4(%eax)
08447c6f +0x9f:  mov    -0xc(%ebp),%eax
08447c72 +0xa2:  movzbl -0x1c(%ebp),%edx
08447c76 +0xa6:  mov    %dl,0x8(%eax)
08447c79 +0xa9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08447c7e +0xae:  lea    -0x14(%ebp),%edx
08447c81 +0xb1:  mov    %edx,0x8(%esp)
08447c85 +0xb5:  movl   $0x2,0x4(%esp)
08447c8d +0xbd:  mov    %eax,(%esp)
08447c90 +0xc0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08447c95 +0xc5:  jmp    08447cb2 <+0xe2>
08447c97 +0xc7:  mov    %edx,%ebx
08447c99 +0xc9:  mov    %eax,%esi
08447c9b +0xcb:  lea    -0x14(%ebp),%eax
08447c9e +0xce:  mov    %eax,(%esp)
08447ca1 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08447ca6 +0xd6:  mov    %esi,%eax
08447ca8 +0xd8:  mov    %ebx,%edx
08447caa +0xda:  mov    %eax,(%esp)
08447cad +0xdd:  call   08ae3750 <_Unwind_Resume>
08447cb2 +0xe2:  lea    -0x14(%ebp),%eax
08447cb5 +0xe5:  mov    %eax,(%esp)
08447cb8 +0xe8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08447cbd +0xed:  add    $0x30,%esp
08447cc0 +0xf0:  pop    %ebx
08447cc1 +0xf1:  pop    %esi
08447cc2 +0xf2:  pop    %ebp
08447cc3 +0xf3:  ret
```

## 反编译 C

```c
// DB_SavePcRoomPlayTimeEvent::makeRequest @ 0x8447bd0

/* DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char) */

void DB_SavePcRoomPlayTimeEvent::makeRequest(uint param_1,uint param_2,uchar param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_PC_ROOM_PLAY_TIME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb270);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08447c28 to 08447c94 has its CatchHandler @ 08447c97 */
  CStreamGuard::operator<<(pCVar2,0x2ff);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_PC_ROOM_PLAY_TIME>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  local_10[8] = (SIG_SAVE_PC_ROOM_PLAY_TIME)param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
