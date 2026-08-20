# open

`_ZN5nexon4cash9TCPSocket4openEv`

`nexon::cash::TCPSocket::open()`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af532` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af532  _ZN5nexon4cash9TCPSocket4openEv
#           nexon::cash::TCPSocket::open()
# range [0x081af532, 0x081af5b3]
081af532 +0x00:  push   %ebp
081af533 +0x01:  mov    %esp,%ebp
081af535 +0x03:  sub    $0x28,%esp
081af538 +0x06:  movl   $0x6,0x8(%esp)
081af540 +0x0e:  movl   $0x1,0x4(%esp)
081af548 +0x16:  movl   $0x2,(%esp)
081af54f +0x1d:  call   0807dab0 <_init+0x3a8>
081af554 +0x22:  mov    0x8(%ebp),%edx
081af557 +0x25:  mov    %eax,(%edx)
081af559 +0x27:  mov    0x8(%ebp),%eax
081af55c +0x2a:  mov    (%eax),%eax
081af55e +0x2c:  cmp    $0xffffffff,%eax
081af561 +0x2f:  jne    081af587 <+0x55>
081af563 +0x31:  call   0807dd70 <_init+0x668>
081af568 +0x36:  mov    (%eax),%eax
081af56a +0x38:  mov    %eax,-0xc(%ebp)
081af56d +0x3b:  mov    -0xc(%ebp),%eax
081af570 +0x3e:  mov    %eax,0x4(%esp)
081af574 +0x42:  movl   $"Could not create a TDP socket : %d\n",(%esp)
081af57b +0x49:  call   0807db60 <_init+0x458>
081af580 +0x4e:  mov    $0x0,%eax
081af585 +0x53:  jmp    081af5b2 <+0x80>
081af587 +0x55:  movl   $0x0,0x4(%esp)
081af58f +0x5d:  mov    0x8(%ebp),%eax
081af592 +0x60:  mov    %eax,(%esp)
081af595 +0x63:  call   081af926 <_ZN5nexon4cash9TCPSocket12setOptLingerEb>  ; nexon::cash::TCPSocket::setOptLinger(bool)
081af59a +0x68:  movl   $0x0,0x4(%esp)
081af5a2 +0x70:  mov    0x8(%ebp),%eax
081af5a5 +0x73:  mov    %eax,(%esp)
081af5a8 +0x76:  call   081af990 <_ZN5nexon4cash9TCPSocket11setOptNagleEb>  ; nexon::cash::TCPSocket::setOptNagle(bool)
081af5ad +0x7b:  mov    $0x1,%eax
081af5b2 +0x80:  leave
081af5b3 +0x81:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::open @ 0x81af532

/* nexon::cash::TCPSocket::open() */

bool __thiscall nexon::cash::TCPSocket::open(TCPSocket *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = socket(2,1,6);
  *(int *)this = iVar1;
  iVar1 = *(int *)this;
  if (iVar1 != -1) {
    setOptLinger(this,false);
    setOptNagle(this,false);
  }
  else {
    piVar2 = __errno_location();
    printf("Could not create a TDP socket : %d\n",*piVar2);
  }
  return iVar1 != -1;
}
```
