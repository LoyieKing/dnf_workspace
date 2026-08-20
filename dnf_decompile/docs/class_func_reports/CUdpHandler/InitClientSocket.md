# InitClientSocket

`_ZN11CUdpHandler16InitClientSocketEv`

`CUdpHandler::InitClientSocket()`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x0848369a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848369a  _ZN11CUdpHandler16InitClientSocketEv
#           CUdpHandler::InitClientSocket()
# range [0x0848369a, 0x08483731]
0848369a +0x00:  push   %ebp
0848369b +0x01:  mov    %esp,%ebp
0848369d +0x03:  sub    $0x38,%esp
084836a0 +0x06:  movl   $0x11,0x8(%esp)
084836a8 +0x0e:  movl   $0x2,0x4(%esp)
084836b0 +0x16:  movl   $0x2,(%esp)
084836b7 +0x1d:  call   0807dab0 <_init+0x3a8>
084836bc +0x22:  mov    0x8(%ebp),%edx
084836bf +0x25:  mov    %eax,0x4(%edx)
084836c2 +0x28:  mov    0x8(%ebp),%eax
084836c5 +0x2b:  mov    0x4(%eax),%eax
084836c8 +0x2e:  cmp    $0xffffffff,%eax
084836cb +0x31:  jne    084836ef <+0x55>
084836cd +0x33:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
084836d2 +0x38:  mov    %eax,-0xc(%ebp)
084836d5 +0x3b:  mov    -0xc(%ebp),%eax
084836d8 +0x3e:  mov    %eax,0x4(%esp)
084836dc +0x42:  movl   $"Could not create a UDP socket : %d\n",(%esp)
084836e3 +0x49:  call   0807db60 <_init+0x458>
084836e8 +0x4e:  mov    $0xffffffff,%eax
084836ed +0x53:  jmp    08483730 <+0x96>
084836ef +0x55:  movl   $0xa,-0x14(%ebp)
084836f6 +0x5c:  movl   $0x0,-0x10(%ebp)
084836fd +0x63:  mov    0x8(%ebp),%eax
08483700 +0x66:  mov    0x4(%eax),%eax
08483703 +0x69:  movl   $0x8,0x10(%esp)
0848370b +0x71:  lea    -0x14(%ebp),%edx
0848370e +0x74:  mov    %edx,0xc(%esp)
08483712 +0x78:  movl   $0x14,0x8(%esp)
0848371a +0x80:  movl   $0x1,0x4(%esp)
08483722 +0x88:  mov    %eax,(%esp)
08483725 +0x8b:  call   0807e2a0 <_init+0xb98>
0848372a +0x90:  mov    0x8(%ebp),%eax
0848372d +0x93:  mov    0x4(%eax),%eax
08483730 +0x96:  leave
08483731 +0x97:  ret
```

## 反编译 C

```c
// CUdpHandler::InitClientSocket @ 0x848369a

/* CUdpHandler::InitClientSocket() */

undefined4 __thiscall CUdpHandler::InitClientSocket(CUdpHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = socket(2,2,0x11);
  *(int *)(this + 4) = iVar1;
  if (*(int *)(this + 4) == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = 10;
    local_14 = 0;
    setsockopt(*(int *)(this + 4),1,0x14,&local_18,8);
    uVar2 = *(undefined4 *)(this + 4);
  }
  return uVar2;
}
```
