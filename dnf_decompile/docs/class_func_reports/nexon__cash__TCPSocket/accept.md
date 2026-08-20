# accept

`_ZN5nexon4cash9TCPSocket6acceptERS1_`

`nexon::cash::TCPSocket::accept(nexon::cash::TCPSocket&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081aff2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aff2c  _ZN5nexon4cash9TCPSocket6acceptERS1_
#           nexon::cash::TCPSocket::accept(nexon::cash::TCPSocket&)
# range [0x081aff2c, 0x081affb7]
081aff2c +0x00:  push   %ebp
081aff2d +0x01:  mov    %esp,%ebp
081aff2f +0x03:  sub    $0x28,%esp
081aff32 +0x06:  movl   $0x10,-0xc(%ebp)
081aff39 +0x0d:  mov    0xc(%ebp),%eax
081aff3c +0x10:  add    $0x4,%eax
081aff3f +0x13:  mov    %eax,%edx
081aff41 +0x15:  mov    0x8(%ebp),%eax
081aff44 +0x18:  mov    (%eax),%eax
081aff46 +0x1a:  lea    -0xc(%ebp),%ecx
081aff49 +0x1d:  mov    %ecx,0x8(%esp)
081aff4d +0x21:  mov    %edx,0x4(%esp)
081aff51 +0x25:  mov    %eax,(%esp)
081aff54 +0x28:  call   0807deb0 <_init+0x7a8>
081aff59 +0x2d:  mov    0xc(%ebp),%edx
081aff5c +0x30:  mov    %eax,(%edx)
081aff5e +0x32:  mov    0xc(%ebp),%eax
081aff61 +0x35:  mov    (%eax),%eax
081aff63 +0x37:  test   %eax,%eax
081aff65 +0x39:  js     081aff71 <+0x45>
081aff67 +0x3b:  mov    0xc(%ebp),%eax
081aff6a +0x3e:  mov    (%eax),%eax
081aff6c +0x40:  cmp    $0xffffffff,%eax
081aff6f +0x43:  jne    081aff78 <+0x4c>
081aff71 +0x45:  mov    $0x0,%eax
081aff76 +0x4a:  jmp    081affb6 <+0x8a>
081aff78 +0x4c:  mov    0xc(%ebp),%eax
081aff7b +0x4f:  lea    0x8(%eax),%edx
081aff7e +0x52:  mov    0xc(%ebp),%eax
081aff81 +0x55:  add    $0x14,%eax
081aff84 +0x58:  movl   $0x4,0x8(%esp)
081aff8c +0x60:  mov    %edx,0x4(%esp)
081aff90 +0x64:  mov    %eax,(%esp)
081aff93 +0x67:  call   0807d8a0 <_init+0x198>
081aff98 +0x6c:  mov    0xc(%ebp),%eax
081aff9b +0x6f:  movzwl 0x6(%eax),%edx
081aff9f +0x73:  mov    0xc(%ebp),%eax
081affa2 +0x76:  mov    %dx,0x18(%eax)
081affa6 +0x7a:  mov    0xc(%ebp),%eax
081affa9 +0x7d:  mov    %eax,(%esp)
081affac +0x80:  call   081af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>  ; nexon::cash::TCPSocket::setOptNonBlock()
081affb1 +0x85:  mov    $0x1,%eax
081affb6 +0x8a:  leave
081affb7 +0x8b:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::accept @ 0x81aff2c

/* nexon::cash::TCPSocket::accept(nexon::cash::TCPSocket&) */

undefined4 __thiscall nexon::cash::TCPSocket::accept(TCPSocket *this,TCPSocket *param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_10 [3];
  
  local_10[0] = 0x10;
  iVar1 = ::accept(*(int *)this,(sockaddr *)(param_1 + 4),local_10);
  *(int *)param_1 = iVar1;
  if ((*(int *)param_1 < 0) || (*(int *)param_1 == -1)) {
    uVar2 = 0;
  }
  else {
    memcpy(param_1 + 0x14,param_1 + 8,4);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 6);
    setOptNonBlock(param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```
