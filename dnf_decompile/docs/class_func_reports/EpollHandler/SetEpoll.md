# SetEpoll

`_ZN12EpollHandler8SetEpollEPvib`

`EpollHandler::SetEpoll(void*, int, bool)`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c1c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c1c6  _ZN12EpollHandler8SetEpollEPvib
#           EpollHandler::SetEpoll(void*, int, bool)
# range [0x0857c1c6, 0x0857c257]
0857c1c6 +0x00:  push   %ebp
0857c1c7 +0x01:  mov    %esp,%ebp
0857c1c9 +0x03:  push   %ebx
0857c1ca +0x04:  sub    $0x34,%esp
0857c1cd +0x07:  mov    0x14(%ebp),%eax
0857c1d0 +0x0a:  mov    %al,-0x1c(%ebp)
0857c1d3 +0x0d:  cmpb   $0x0,-0x1c(%ebp)
0857c1d7 +0x11:  je     0857c1e4 <+0x1e>
0857c1d9 +0x13:  mov    0x8(%ebp),%eax
0857c1dc +0x16:  movl   $0x8000001d,(%eax)
0857c1e2 +0x1c:  jmp    0857c1ed <+0x27>
0857c1e4 +0x1e:  mov    0x8(%ebp),%eax
0857c1e7 +0x21:  movl   $0x1d,(%eax)
0857c1ed +0x27:  mov    0x8(%ebp),%eax
0857c1f0 +0x2a:  mov    0xc(%ebp),%edx
0857c1f3 +0x2d:  mov    %edx,0x4(%eax)
0857c1f6 +0x30:  mov    0x8(%ebp),%eax
0857c1f9 +0x33:  add    $0x14,%eax
0857c1fc +0x36:  mov    %eax,0x4(%esp)
0857c200 +0x3a:  lea    -0xc(%ebp),%eax
0857c203 +0x3d:  mov    %eax,(%esp)
0857c206 +0x40:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0857c20b +0x45:  mov    0x8(%ebp),%edx
0857c20e +0x48:  mov    0x8(%ebp),%eax
0857c211 +0x4b:  mov    0x10(%eax),%eax
0857c214 +0x4e:  mov    %edx,0xc(%esp)
0857c218 +0x52:  mov    0x10(%ebp),%edx
0857c21b +0x55:  mov    %edx,0x8(%esp)
0857c21f +0x59:  movl   $0x1,0x4(%esp)
0857c227 +0x61:  mov    %eax,(%esp)
0857c22a +0x64:  call   0807d7a0 <_init+0x98>
0857c22f +0x69:  shr    $0x1f,%eax
0857c232 +0x6c:  test   %al,%al
0857c234 +0x6e:  je     0857c23f <+0x79>
0857c236 +0x70:  call   0807dd70 <_init+0x668>
0857c23b +0x75:  mov    (%eax),%ebx
0857c23d +0x77:  jmp    0857c244 <+0x7e>
0857c23f +0x79:  mov    $0x0,%ebx
0857c244 +0x7e:  lea    -0xc(%ebp),%eax
0857c247 +0x81:  mov    %eax,(%esp)
0857c24a +0x84:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0857c24f +0x89:  mov    %ebx,%eax
0857c251 +0x8b:  add    $0x34,%esp
0857c254 +0x8e:  pop    %ebx
0857c255 +0x8f:  pop    %ebp
0857c256 +0x90:  ret
0857c257 +0x91:  nop
```

## 反编译 C

```c
// EpollHandler::SetEpoll @ 0x857c1c6

/* EpollHandler::SetEpoll(void*, int, bool) */

int __thiscall EpollHandler::SetEpoll(EpollHandler *this,void *param_1,int param_2,bool param_3)

{
  int iVar1;
  int *piVar2;
  Guard<Mutex> local_10 [8];
  
  if (param_3) {
    *(undefined4 *)this = 0x8000001d;
  }
  else {
    *(undefined4 *)this = 0x1d;
  }
  *(void **)(this + 4) = param_1;
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x14));
  iVar1 = epoll_ctl(*(int *)(this + 0x10),1,param_2,(epoll_event *)this);
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
