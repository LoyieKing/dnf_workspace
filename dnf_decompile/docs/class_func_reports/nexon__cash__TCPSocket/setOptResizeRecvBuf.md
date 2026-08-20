# setOptResizeRecvBuf

`_ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi`

`nexon::cash::TCPSocket::setOptResizeRecvBuf(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081b0036` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0036  _ZN5nexon4cash9TCPSocket19setOptResizeRecvBufEi
#           nexon::cash::TCPSocket::setOptResizeRecvBuf(int)
# range [0x081b0036, 0x081b009b]
081b0036 +0x00:  push   %ebp
081b0037 +0x01:  mov    %esp,%ebp
081b0039 +0x03:  sub    $0x38,%esp
081b003c +0x06:  mov    0xc(%ebp),%eax
081b003f +0x09:  test   %eax,%eax
081b0041 +0x0b:  jg     081b004a <+0x14>
081b0043 +0x0d:  mov    $0x0,%eax
081b0048 +0x12:  jmp    081b0099 <+0x63>
081b004a +0x14:  movl   $0x0,-0x10(%ebp)
081b0051 +0x1b:  movl   $0x4,-0x14(%ebp)
081b0058 +0x22:  mov    0x8(%ebp),%eax
081b005b +0x25:  mov    (%eax),%eax
081b005d +0x27:  movl   $0x4,0x10(%esp)
081b0065 +0x2f:  lea    0xc(%ebp),%edx
081b0068 +0x32:  mov    %edx,0xc(%esp)
081b006c +0x36:  movl   $0x8,0x8(%esp)
081b0074 +0x3e:  movl   $0x1,0x4(%esp)
081b007c +0x46:  mov    %eax,(%esp)
081b007f +0x49:  call   0807e2a0 <_init+0xb98>
081b0084 +0x4e:  mov    %eax,-0xc(%ebp)
081b0087 +0x51:  cmpl   $0x0,-0xc(%ebp)
081b008b +0x55:  jns    081b0094 <+0x5e>
081b008d +0x57:  mov    $0x0,%eax
081b0092 +0x5c:  jmp    081b0099 <+0x63>
081b0094 +0x5e:  mov    $0x1,%eax
081b0099 +0x63:  leave
081b009a +0x64:  ret
081b009b +0x65:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptResizeRecvBuf @ 0x81b0036

/* nexon::cash::TCPSocket::setOptResizeRecvBuf(int) */

undefined4 __thiscall nexon::cash::TCPSocket::setOptResizeRecvBuf(TCPSocket *this,int param_1)

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
