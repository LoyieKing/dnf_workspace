# listen

`_ZN5nexon4cash9TCPSocket6listenEi`

`nexon::cash::TCPSocket::listen(int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af674  _ZN5nexon4cash9TCPSocket6listenEi
#           nexon::cash::TCPSocket::listen(int)
# range [0x081af674, 0x081af6ad]
081af674 +0x00:  push   %ebp
081af675 +0x01:  mov    %esp,%ebp
081af677 +0x03:  sub    $0x18,%esp
081af67a +0x06:  mov    0x8(%ebp),%eax
081af67d +0x09:  mov    (%eax),%eax
081af67f +0x0b:  mov    0xc(%ebp),%edx
081af682 +0x0e:  mov    %edx,0x4(%esp)
081af686 +0x12:  mov    %eax,(%esp)
081af689 +0x15:  call   0807d770 <_init+0x68>
081af68e +0x1a:  shr    $0x1f,%eax
081af691 +0x1d:  test   %al,%al
081af693 +0x1f:  je     081af6a7 <+0x33>
081af695 +0x21:  mov    0x8(%ebp),%eax
081af698 +0x24:  mov    %eax,(%esp)
081af69b +0x27:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081af6a0 +0x2c:  mov    $0x0,%eax
081af6a5 +0x31:  jmp    081af6ac <+0x38>
081af6a7 +0x33:  mov    $0x1,%eax
081af6ac +0x38:  leave
081af6ad +0x39:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::listen @ 0x81af674

/* nexon::cash::TCPSocket::listen(int) */

bool __thiscall nexon::cash::TCPSocket::listen(TCPSocket *this,int param_1)

{
  int iVar1;
  
  iVar1 = ::listen(*(int *)this,param_1);
  if (-1 >= iVar1) {
    close(this);
  }
  return -1 < iVar1;
}
```
