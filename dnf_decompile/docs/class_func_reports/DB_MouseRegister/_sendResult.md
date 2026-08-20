# _sendResult

`_ZN16DB_MouseRegister11_sendResultEjiiiP18SIG_MOUSE_REGISTER`

`DB_MouseRegister::_sendResult(unsigned int, int, int, int, SIG_MOUSE_REGISTER*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08423abe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423abe  _ZN16DB_MouseRegister11_sendResultEjiiiP18SIG_MOUSE_REGISTER
#           DB_MouseRegister::_sendResult(unsigned int, int, int, int, SIG_MOUSE_REGISTER*)
# range [0x08423abe, 0x08423bc3]
08423abe +0x000:  push   %ebp
08423abf +0x001:  mov    %esp,%ebp
08423ac1 +0x003:  push   %esi
08423ac2 +0x004:  push   %ebx
08423ac3 +0x005:  sub    $0x20,%esp
08423ac6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08423acb +0x00d:  movl   $0x5e4e,0x8(%esp)
08423ad3 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08423adb +0x01d:  mov    %eax,(%esp)
08423ade +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08423ae3 +0x025:  movl   $0x1,0x8(%esp)
08423aeb +0x02d:  mov    %eax,0x4(%esp)
08423aef +0x031:  lea    -0x14(%ebp),%eax
08423af2 +0x034:  mov    %eax,(%esp)
08423af5 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08423afa +0x03c:  lea    -0x14(%ebp),%eax
08423afd +0x03f:  mov    %eax,(%esp)
08423b00 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08423b05 +0x047:  movl   $0xa3,0x4(%esp)
08423b0d +0x04f:  mov    %eax,(%esp)
08423b10 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08423b15 +0x057:  lea    -0x14(%ebp),%eax
08423b18 +0x05a:  mov    %eax,(%esp)
08423b1b +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08423b20 +0x062:  mov    0x18(%ebp),%edx
08423b23 +0x065:  mov    %edx,0x4(%esp)
08423b27 +0x069:  mov    %eax,(%esp)
08423b2a +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08423b2f +0x071:  lea    -0x14(%ebp),%eax
08423b32 +0x074:  mov    %eax,(%esp)
08423b35 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08423b3a +0x07c:  mov    %eax,(%esp)
08423b3d +0x07f:  call   082654c0 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x298>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x298
08423b42 +0x084:  mov    %eax,-0xc(%ebp)
08423b45 +0x087:  movl   $0x59,0x8(%esp)
08423b4d +0x08f:  mov    0x1c(%ebp),%eax
08423b50 +0x092:  mov    %eax,0x4(%esp)
08423b54 +0x096:  mov    -0xc(%ebp),%eax
08423b57 +0x099:  mov    %eax,(%esp)
08423b5a +0x09c:  call   0807d8a0 <_init+0x198>
08423b5f +0x0a1:  mov    -0xc(%ebp),%eax
08423b62 +0x0a4:  mov    0xc(%ebp),%edx
08423b65 +0x0a7:  mov    %edx,(%eax)
08423b67 +0x0a9:  mov    -0xc(%ebp),%eax
08423b6a +0x0ac:  mov    0x14(%ebp),%edx
08423b6d +0x0af:  mov    %edx,0x4(%eax)
08423b70 +0x0b2:  mov    -0xc(%ebp),%eax
08423b73 +0x0b5:  mov    0x10(%ebp),%edx
08423b76 +0x0b8:  mov    %edx,0x16(%eax)
08423b79 +0x0bb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08423b7e +0x0c0:  lea    -0x14(%ebp),%edx
08423b81 +0x0c3:  mov    %edx,0x8(%esp)
08423b85 +0x0c7:  movl   $0x1,0x4(%esp)
08423b8d +0x0cf:  mov    %eax,(%esp)
08423b90 +0x0d2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08423b95 +0x0d7:  jmp    08423bb2 <+0xf4>
08423b97 +0x0d9:  mov    %edx,%ebx
08423b99 +0x0db:  mov    %eax,%esi
08423b9b +0x0dd:  lea    -0x14(%ebp),%eax
08423b9e +0x0e0:  mov    %eax,(%esp)
08423ba1 +0x0e3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423ba6 +0x0e8:  mov    %esi,%eax
08423ba8 +0x0ea:  mov    %ebx,%edx
08423baa +0x0ec:  mov    %eax,(%esp)
08423bad +0x0ef:  call   08ae3750 <_Unwind_Resume>
08423bb2 +0x0f4:  lea    -0x14(%ebp),%eax
08423bb5 +0x0f7:  mov    %eax,(%esp)
08423bb8 +0x0fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423bbd +0x0ff:  add    $0x20,%esp
08423bc0 +0x102:  pop    %ebx
08423bc1 +0x103:  pop    %esi
08423bc2 +0x104:  pop    %ebp
08423bc3 +0x105:  ret
```

## 反编译 C

```c
// DB_MouseRegister::_sendResult @ 0x8423abe

/* DB_MouseRegister::_sendResult(unsigned int, int, int, int, SIG_MOUSE_REGISTER*) */

void __thiscall
DB_MouseRegister::_sendResult
          (DB_MouseRegister *this,uint param_1,int param_2,int param_3,int param_4,
          SIG_MOUSE_REGISTER *param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MOUSE_REGISTER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5e4e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08423b10 to 08423b94 has its CatchHandler @ 08423b97 */
  CStreamGuard::operator<<(pCVar2,0xa3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar2);
  memcpy(local_10,param_5,0x59);
  *(uint *)local_10 = param_1;
  *(int *)(local_10 + 4) = param_3;
  *(int *)(local_10 + 0x16) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
