# ResetEpoll

`_ZN12EpollHandler10ResetEpollEi`

`EpollHandler::ResetEpoll(int)`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c258  _ZN12EpollHandler10ResetEpollEi
#           EpollHandler::ResetEpoll(int)
# range [0x0857c258, 0x0857c2e3]
0857c258 +0x00:  push   %ebp
0857c259 +0x01:  mov    %esp,%ebp
0857c25b +0x03:  push   %ebx
0857c25c +0x04:  sub    $0x24,%esp
0857c25f +0x07:  mov    0x8(%ebp),%eax
0857c262 +0x0a:  movl   $0xc,0x8(%esp)
0857c26a +0x12:  movl   $0x0,0x4(%esp)
0857c272 +0x1a:  mov    %eax,(%esp)
0857c275 +0x1d:  call   0807dcc0 <_init+0x5b8>
0857c27a +0x22:  mov    0x8(%ebp),%eax
0857c27d +0x25:  movl   $0x1,(%eax)
0857c283 +0x2b:  mov    0x8(%ebp),%eax
0857c286 +0x2e:  add    $0x14,%eax
0857c289 +0x31:  mov    %eax,0x4(%esp)
0857c28d +0x35:  lea    -0xc(%ebp),%eax
0857c290 +0x38:  mov    %eax,(%esp)
0857c293 +0x3b:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0857c298 +0x40:  mov    0x8(%ebp),%edx
0857c29b +0x43:  mov    0x8(%ebp),%eax
0857c29e +0x46:  mov    0x10(%eax),%eax
0857c2a1 +0x49:  mov    %edx,0xc(%esp)
0857c2a5 +0x4d:  mov    0xc(%ebp),%edx
0857c2a8 +0x50:  mov    %edx,0x8(%esp)
0857c2ac +0x54:  movl   $0x2,0x4(%esp)
0857c2b4 +0x5c:  mov    %eax,(%esp)
0857c2b7 +0x5f:  call   0807d7a0 <_init+0x98>
0857c2bc +0x64:  shr    $0x1f,%eax
0857c2bf +0x67:  test   %al,%al
0857c2c1 +0x69:  je     0857c2cc <+0x74>
0857c2c3 +0x6b:  call   0807dd70 <_init+0x668>
0857c2c8 +0x70:  mov    (%eax),%ebx
0857c2ca +0x72:  jmp    0857c2d1 <+0x79>
0857c2cc +0x74:  mov    $0x0,%ebx
0857c2d1 +0x79:  lea    -0xc(%ebp),%eax
0857c2d4 +0x7c:  mov    %eax,(%esp)
0857c2d7 +0x7f:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0857c2dc +0x84:  mov    %ebx,%eax
0857c2de +0x86:  add    $0x24,%esp
0857c2e1 +0x89:  pop    %ebx
0857c2e2 +0x8a:  pop    %ebp
0857c2e3 +0x8b:  ret
```

## 反编译 C

```c
// EpollHandler::ResetEpoll @ 0x857c258

/* EpollHandler::ResetEpoll(int) */

int __thiscall EpollHandler::ResetEpoll(EpollHandler *this,int param_1)

{
  int iVar1;
  int *piVar2;
  Guard<Mutex> local_10 [8];
  
  memset(this,0,0xc);
  *(undefined4 *)this = 1;
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x14));
  iVar1 = epoll_ctl(*(int *)(this + 0x10),2,param_1,(epoll_event *)this);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar1 = 0;
  }
  Guard<Mutex>::~Guard(local_10);
  return iVar1;
}
```
