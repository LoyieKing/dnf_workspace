# setOptResizeRecvBuf

`_ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi`

`nexon::cash::UDPSocket::setOptResizeRecvBuf(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af210  _ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi
#           nexon::cash::UDPSocket::setOptResizeRecvBuf(int)
# range [0x081af210, 0x081af267]
081af210 +0x00:  push   %ebp
081af211 +0x01:  mov    %esp,%ebp
081af213 +0x03:  sub    $0x38,%esp
081af216 +0x06:  mov    0xc(%ebp),%eax
081af219 +0x09:  test   %eax,%eax
081af21b +0x0b:  jg     081af224 <+0x14>
081af21d +0x0d:  mov    $0x0,%eax
081af222 +0x12:  jmp    081af265 <+0x55>
081af224 +0x14:  mov    0x8(%ebp),%eax
081af227 +0x17:  mov    (%eax),%eax
081af229 +0x19:  movl   $0x4,0x10(%esp)
081af231 +0x21:  lea    0xc(%ebp),%edx
081af234 +0x24:  mov    %edx,0xc(%esp)
081af238 +0x28:  movl   $0x8,0x8(%esp)
081af240 +0x30:  movl   $0x1,0x4(%esp)
081af248 +0x38:  mov    %eax,(%esp)
081af24b +0x3b:  call   0807e2a0 <_init+0xb98>
081af250 +0x40:  mov    %eax,-0xc(%ebp)
081af253 +0x43:  cmpl   $0x0,-0xc(%ebp)
081af257 +0x47:  jns    081af260 <+0x50>
081af259 +0x49:  mov    $0x0,%eax
081af25e +0x4e:  jmp    081af265 <+0x55>
081af260 +0x50:  mov    $0x1,%eax
081af265 +0x55:  leave
081af266 +0x56:  ret
081af267 +0x57:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::setOptResizeRecvBuf @ 0x81af210

/* nexon::cash::UDPSocket::setOptResizeRecvBuf(int) */

undefined4 __thiscall nexon::cash::UDPSocket::setOptResizeRecvBuf(UDPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,8,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
