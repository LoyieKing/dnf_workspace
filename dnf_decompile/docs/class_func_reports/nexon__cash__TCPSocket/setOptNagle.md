# setOptNagle

`_ZN5nexon4cash9TCPSocket11setOptNagleEb`

`nexon::cash::TCPSocket::setOptNagle(bool)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af990  _ZN5nexon4cash9TCPSocket11setOptNagleEb
#           nexon::cash::TCPSocket::setOptNagle(bool)
# range [0x081af990, 0x081af9e9]
081af990 +0x00:  push   %ebp
081af991 +0x01:  mov    %esp,%ebp
081af993 +0x03:  sub    $0x48,%esp
081af996 +0x06:  mov    0xc(%ebp),%eax
081af999 +0x09:  mov    %al,-0x1c(%ebp)
081af99c +0x0c:  cmpb   $0x0,-0x1c(%ebp)
081af9a0 +0x10:  je     081af9a9 <+0x19>
081af9a2 +0x12:  mov    $0x1,%eax
081af9a7 +0x17:  jmp    081af9ae <+0x1e>
081af9a9 +0x19:  mov    $0x0,%eax
081af9ae +0x1e:  mov    %eax,-0x10(%ebp)
081af9b1 +0x21:  mov    0x8(%ebp),%eax
081af9b4 +0x24:  mov    (%eax),%eax
081af9b6 +0x26:  movl   $0x4,0x10(%esp)
081af9be +0x2e:  lea    -0x10(%ebp),%edx
081af9c1 +0x31:  mov    %edx,0xc(%esp)
081af9c5 +0x35:  movl   $0x1,0x8(%esp)
081af9cd +0x3d:  movl   $0x6,0x4(%esp)
081af9d5 +0x45:  mov    %eax,(%esp)
081af9d8 +0x48:  call   0807e2a0 <_init+0xb98>
081af9dd +0x4d:  mov    %eax,-0xc(%ebp)
081af9e0 +0x50:  cmpl   $0x0,-0xc(%ebp)
081af9e4 +0x54:  sete   %al
081af9e7 +0x57:  leave
081af9e8 +0x58:  ret
081af9e9 +0x59:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptNagle @ 0x81af990

/* nexon::cash::TCPSocket::setOptNagle(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptNagle(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_14 [4];
  
  local_14[0] = (uint)param_1;
  iVar1 = setsockopt(*(int *)this,6,1,local_14,4);
  return iVar1 == 0;
}
```
