# setOptLinger

`_ZN5nexon4cash9TCPSocket12setOptLingerEb`

`nexon::cash::TCPSocket::setOptLinger(bool)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af926` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af926  _ZN5nexon4cash9TCPSocket12setOptLingerEb
#           nexon::cash::TCPSocket::setOptLinger(bool)
# range [0x081af926, 0x081af98f]
081af926 +0x00:  push   %ebp
081af927 +0x01:  mov    %esp,%ebp
081af929 +0x03:  sub    $0x48,%esp
081af92c +0x06:  mov    0xc(%ebp),%eax
081af92f +0x09:  mov    %al,-0x1c(%ebp)
081af932 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
081af936 +0x10:  je     081af93f <+0x19>
081af938 +0x12:  mov    $0x1,%eax
081af93d +0x17:  jmp    081af944 <+0x1e>
081af93f +0x19:  mov    $0x0,%eax
081af944 +0x1e:  mov    %eax,-0x10(%ebp)
081af947 +0x21:  movl   $0x0,-0xc(%ebp)
081af94e +0x28:  mov    0x8(%ebp),%eax
081af951 +0x2b:  mov    (%eax),%eax
081af953 +0x2d:  movl   $0x8,0x10(%esp)
081af95b +0x35:  lea    -0x10(%ebp),%edx
081af95e +0x38:  mov    %edx,0xc(%esp)
081af962 +0x3c:  movl   $0xd,0x8(%esp)
081af96a +0x44:  movl   $0x1,0x4(%esp)
081af972 +0x4c:  mov    %eax,(%esp)
081af975 +0x4f:  call   0807e2a0 <_init+0xb98>
081af97a +0x54:  shr    $0x1f,%eax
081af97d +0x57:  test   %al,%al
081af97f +0x59:  je     081af988 <+0x62>
081af981 +0x5b:  mov    $0x0,%eax
081af986 +0x60:  jmp    081af98d <+0x67>
081af988 +0x62:  mov    $0x1,%eax
081af98d +0x67:  leave
081af98e +0x68:  ret
081af98f +0x69:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptLinger @ 0x81af926

/* nexon::cash::TCPSocket::setOptLinger(bool) */

bool __thiscall nexon::cash::TCPSocket::setOptLinger(TCPSocket *this,bool param_1)

{
  int iVar1;
  uint local_14 [4];
  
  local_14[0] = (uint)param_1;
  local_14[1] = 0;
  iVar1 = setsockopt(*(int *)this,1,0xd,local_14,8);
  return -1 < iVar1;
}
```
