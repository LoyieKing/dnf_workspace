# setOptResizeSendBuf

`_ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi`

`nexon::cash::TCPSocket::setOptResizeSendBuf(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081affd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081affd0  _ZN5nexon4cash9TCPSocket19setOptResizeSendBufEi
#           nexon::cash::TCPSocket::setOptResizeSendBuf(int)
# range [0x081affd0, 0x081b0035]
081affd0 +0x00:  push   %ebp
081affd1 +0x01:  mov    %esp,%ebp
081affd3 +0x03:  sub    $0x38,%esp
081affd6 +0x06:  mov    0xc(%ebp),%eax
081affd9 +0x09:  test   %eax,%eax
081affdb +0x0b:  jg     081affe4 <+0x14>
081affdd +0x0d:  mov    $0x0,%eax
081affe2 +0x12:  jmp    081b0033 <+0x63>
081affe4 +0x14:  movl   $0x0,-0x10(%ebp)
081affeb +0x1b:  movl   $0x4,-0x14(%ebp)
081afff2 +0x22:  mov    0x8(%ebp),%eax
081afff5 +0x25:  mov    (%eax),%eax
081afff7 +0x27:  movl   $0x4,0x10(%esp)
081affff +0x2f:  lea    0xc(%ebp),%edx
081b0002 +0x32:  mov    %edx,0xc(%esp)
081b0006 +0x36:  movl   $0x7,0x8(%esp)
081b000e +0x3e:  movl   $0x1,0x4(%esp)
081b0016 +0x46:  mov    %eax,(%esp)
081b0019 +0x49:  call   0807e2a0 <_init+0xb98>
081b001e +0x4e:  mov    %eax,-0xc(%ebp)
081b0021 +0x51:  cmpl   $0x0,-0xc(%ebp)
081b0025 +0x55:  jns    081b002e <+0x5e>
081b0027 +0x57:  mov    $0x0,%eax
081b002c +0x5c:  jmp    081b0033 <+0x63>
081b002e +0x5e:  mov    $0x1,%eax
081b0033 +0x63:  leave
081b0034 +0x64:  ret
081b0035 +0x65:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::setOptResizeSendBuf @ 0x81affd0

/* nexon::cash::TCPSocket::setOptResizeSendBuf(int) */

undefined4 __thiscall nexon::cash::TCPSocket::setOptResizeSendBuf(TCPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,7,&param_1,4);
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
