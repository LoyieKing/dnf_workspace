# setOptNonBlock

`_ZN5nexon4cash9TCPSocket14setOptNonBlockEv`

`nexon::cash::TCPSocket::setOptNonBlock()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af85e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af85e  _ZN5nexon4cash9TCPSocket14setOptNonBlockEv
#           nexon::cash::TCPSocket::setOptNonBlock()
# range [0x081af85e, 0x081af8bb]
081af85e +0x00:  push   %ebp
081af85f +0x01:  mov    %esp,%ebp
081af861 +0x03:  sub    $0x28,%esp
081af864 +0x06:  mov    0x8(%ebp),%eax
081af867 +0x09:  mov    (%eax),%eax
081af869 +0x0b:  movl   $0x0,0x8(%esp)
081af871 +0x13:  movl   $0x3,0x4(%esp)
081af879 +0x1b:  mov    %eax,(%esp)
081af87c +0x1e:  call   0807e470 <_init+0xd68>
081af881 +0x23:  mov    %eax,-0xc(%ebp)
081af884 +0x26:  orl    $0x800,-0xc(%ebp)
081af88b +0x2d:  mov    0x8(%ebp),%eax
081af88e +0x30:  mov    (%eax),%eax
081af890 +0x32:  mov    -0xc(%ebp),%edx
081af893 +0x35:  mov    %edx,0x8(%esp)
081af897 +0x39:  movl   $0x4,0x4(%esp)
081af89f +0x41:  mov    %eax,(%esp)
081af8a2 +0x44:  call   0807e470 <_init+0xd68>
081af8a7 +0x49:  shr    $0x1f,%eax
081af8aa +0x4c:  test   %al,%al
081af8ac +0x4e:  je     081af8b5 <+0x57>
081af8ae +0x50:  mov    $0x0,%eax
081af8b3 +0x55:  jmp    081af8ba <+0x5c>
081af8b5 +0x57:  mov    $0x1,%eax
081af8ba +0x5c:  leave
081af8bb +0x5d:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptNonBlock @ 0x81af85e

/* nexon::cash::TCPSocket::setOptNonBlock() */

bool __thiscall nexon::cash::TCPSocket::setOptNonBlock(TCPSocket *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*(int *)this,3,0);
  iVar2 = fcntl(*(int *)this,4,uVar1 | 0x800);
  return -1 < iVar2;
}
```
