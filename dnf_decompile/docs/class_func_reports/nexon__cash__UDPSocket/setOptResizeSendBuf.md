# setOptResizeSendBuf

`_ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi`

`nexon::cash::UDPSocket::setOptResizeSendBuf(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af1b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af1b8  _ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi
#           nexon::cash::UDPSocket::setOptResizeSendBuf(int)
# range [0x081af1b8, 0x081af20f]
081af1b8 +0x00:  push   %ebp
081af1b9 +0x01:  mov    %esp,%ebp
081af1bb +0x03:  sub    $0x38,%esp
081af1be +0x06:  mov    0xc(%ebp),%eax
081af1c1 +0x09:  test   %eax,%eax
081af1c3 +0x0b:  jg     081af1cc <+0x14>
081af1c5 +0x0d:  mov    $0x0,%eax
081af1ca +0x12:  jmp    081af20d <+0x55>
081af1cc +0x14:  mov    0x8(%ebp),%eax
081af1cf +0x17:  mov    (%eax),%eax
081af1d1 +0x19:  movl   $0x4,0x10(%esp)
081af1d9 +0x21:  lea    0xc(%ebp),%edx
081af1dc +0x24:  mov    %edx,0xc(%esp)
081af1e0 +0x28:  movl   $0x7,0x8(%esp)
081af1e8 +0x30:  movl   $0x1,0x4(%esp)
081af1f0 +0x38:  mov    %eax,(%esp)
081af1f3 +0x3b:  call   0807e2a0 <_init+0xb98>
081af1f8 +0x40:  mov    %eax,-0xc(%ebp)
081af1fb +0x43:  cmpl   $0x0,-0xc(%ebp)
081af1ff +0x47:  jns    081af208 <+0x50>
081af201 +0x49:  mov    $0x0,%eax
081af206 +0x4e:  jmp    081af20d <+0x55>
081af208 +0x50:  mov    $0x1,%eax
081af20d +0x55:  leave
081af20e +0x56:  ret
081af20f +0x57:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::setOptResizeSendBuf @ 0x81af1b8

/* nexon::cash::UDPSocket::setOptResizeSendBuf(int) */

undefined4 __thiscall nexon::cash::UDPSocket::setOptResizeSendBuf(UDPSocket *this,int param_1)

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
