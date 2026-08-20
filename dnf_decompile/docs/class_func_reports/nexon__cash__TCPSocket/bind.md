# bind

`_ZN5nexon4cash9TCPSocket4bindEtb`

`nexon::cash::TCPSocket::bind(unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af5b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af5b4  _ZN5nexon4cash9TCPSocket4bindEtb
#           nexon::cash::TCPSocket::bind(unsigned short, bool)
# range [0x081af5b4, 0x081af673]
081af5b4 +0x00:  push   %ebp
081af5b5 +0x01:  mov    %esp,%ebp
081af5b7 +0x03:  sub    $0x38,%esp
081af5ba +0x06:  mov    0xc(%ebp),%edx
081af5bd +0x09:  mov    0x10(%ebp),%eax
081af5c0 +0x0c:  mov    %dx,-0x1c(%ebp)
081af5c4 +0x10:  mov    %al,-0x20(%ebp)
081af5c7 +0x13:  movl   $0x1,0x4(%esp)
081af5cf +0x1b:  mov    0x8(%ebp),%eax
081af5d2 +0x1e:  mov    %eax,(%esp)
081af5d5 +0x21:  call   081af8bc <_ZN5nexon4cash9TCPSocket15setOptReuseAdrsEb>  ; nexon::cash::TCPSocket::setOptReuseAdrs(bool)
081af5da +0x26:  movl   $0x10,0x8(%esp)
081af5e2 +0x2e:  movl   $0x0,0x4(%esp)
081af5ea +0x36:  lea    -0x18(%ebp),%eax
081af5ed +0x39:  mov    %eax,(%esp)
081af5f0 +0x3c:  call   0807dcc0 <_init+0x5b8>
081af5f5 +0x41:  movw   $0x2,-0x18(%ebp)
081af5fb +0x47:  movzwl -0x1c(%ebp),%eax
081af5ff +0x4b:  mov    %eax,(%esp)
081af602 +0x4e:  call   0807e680 <_init+0xf78>
081af607 +0x53:  mov    %ax,-0x16(%ebp)
081af60b +0x57:  movl   $0x0,-0x14(%ebp)
081af612 +0x5e:  lea    -0x18(%ebp),%edx
081af615 +0x61:  mov    0x8(%ebp),%eax
081af618 +0x64:  mov    (%eax),%eax
081af61a +0x66:  movl   $0x10,0x8(%esp)
081af622 +0x6e:  mov    %edx,0x4(%esp)
081af626 +0x72:  mov    %eax,(%esp)
081af629 +0x75:  call   0807e750 <_init+0x1048>
081af62e +0x7a:  shr    $0x1f,%eax
081af631 +0x7d:  test   %al,%al
081af633 +0x7f:  je     081af647 <+0x93>
081af635 +0x81:  mov    0x8(%ebp),%eax
081af638 +0x84:  mov    %eax,(%esp)
081af63b +0x87:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081af640 +0x8c:  mov    $0x0,%eax
081af645 +0x91:  jmp    081af671 <+0xbd>
081af647 +0x93:  cmpb   $0x0,-0x20(%ebp)
081af64b +0x97:  je     081af658 <+0xa4>
081af64d +0x99:  mov    0x8(%ebp),%eax
081af650 +0x9c:  mov    %eax,(%esp)
081af653 +0x9f:  call   081af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>  ; nexon::cash::TCPSocket::setOptNonBlock()
081af658 +0xa4:  movzwl -0x1c(%ebp),%eax
081af65c +0xa8:  mov    %eax,0x4(%esp)
081af660 +0xac:  movl   $"succeeded in binding TCP socket port #%d\n",(%esp)
081af667 +0xb3:  call   0807db60 <_init+0x458>
081af66c +0xb8:  mov    $0x1,%eax
081af671 +0xbd:  leave
081af672 +0xbe:  ret
081af673 +0xbf:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::bind @ 0x81af5b4

/* nexon::cash::TCPSocket::bind(unsigned short, bool) */

undefined4 __thiscall nexon::cash::TCPSocket::bind(TCPSocket *this,ushort param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr local_1c;
  
  setOptReuseAdrs(this,true);
  memset(&local_1c,0,0x10);
  local_1c.sa_family = 2;
  local_1c.sa_data._0_2_ = htons(param_1);
  local_1c.sa_data[2] = '\0';
  local_1c.sa_data[3] = '\0';
  local_1c.sa_data[4] = '\0';
  local_1c.sa_data[5] = '\0';
  iVar1 = ::bind(*(int *)this,&local_1c,0x10);
  if (iVar1 < 0) {
    close(this);
    uVar2 = 0;
  }
  else {
    if (param_2) {
      setOptNonBlock(this);
    }
    printf("succeeded in binding TCP socket port #%d\n",(uint)param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```
