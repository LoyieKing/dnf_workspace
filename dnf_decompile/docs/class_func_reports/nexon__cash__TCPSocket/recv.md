# recv

`_ZN5nexon4cash9TCPSocket4recvEPcj`

`nexon::cash::TCPSocket::recv(char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af76e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af76e  _ZN5nexon4cash9TCPSocket4recvEPcj
#           nexon::cash::TCPSocket::recv(char*, unsigned int)
# range [0x081af76e, 0x081af7f3]
081af76e +0x00:  push   %ebp
081af76f +0x01:  mov    %esp,%ebp
081af771 +0x03:  sub    $0x28,%esp
081af774 +0x06:  cmpl   $0x0,0xc(%ebp)
081af778 +0x0a:  je     081af780 <+0x12>
081af77a +0x0c:  cmpl   $0x0,0x10(%ebp)
081af77e +0x10:  jne    081af787 <+0x19>
081af780 +0x12:  mov    $0xffffffff,%eax
081af785 +0x17:  jmp    081af7f1 <+0x83>
081af787 +0x19:  mov    0x8(%ebp),%eax
081af78a +0x1c:  mov    (%eax),%eax
081af78c +0x1e:  mov    0x10(%ebp),%edx
081af78f +0x21:  mov    %edx,0x8(%esp)
081af793 +0x25:  mov    0xc(%ebp),%edx
081af796 +0x28:  mov    %edx,0x4(%esp)
081af79a +0x2c:  mov    %eax,(%esp)
081af79d +0x2f:  call   0807de60 <_init+0x758>
081af7a2 +0x34:  mov    %eax,-0xc(%ebp)
081af7a5 +0x37:  cmpl   $0x0,-0xc(%ebp)
081af7a9 +0x3b:  jns    081af7e1 <+0x73>
081af7ab +0x3d:  call   0807dd70 <_init+0x668>
081af7b0 +0x42:  mov    (%eax),%eax
081af7b2 +0x44:  cmp    $0xb,%eax
081af7b5 +0x47:  je     081af7da <+0x6c>
081af7b7 +0x49:  call   0807dd70 <_init+0x668>
081af7bc +0x4e:  mov    (%eax),%eax
081af7be +0x50:  cmp    $0x4,%eax
081af7c1 +0x53:  je     081af7da <+0x6c>
081af7c3 +0x55:  call   0807dd70 <_init+0x668>
081af7c8 +0x5a:  mov    (%eax),%eax
081af7ca +0x5c:  cmp    $0xb,%eax
081af7cd +0x5f:  je     081af7da <+0x6c>
081af7cf +0x61:  call   0807dd70 <_init+0x668>
081af7d4 +0x66:  mov    (%eax),%eax
081af7d6 +0x68:  test   %eax,%eax
081af7d8 +0x6a:  jne    081af7ee <+0x80>
081af7da +0x6c:  mov    $0x0,%eax
081af7df +0x71:  jmp    081af7f1 <+0x83>
081af7e1 +0x73:  cmpl   $0x0,-0xc(%ebp)
081af7e5 +0x77:  jne    081af7ee <+0x80>
081af7e7 +0x79:  mov    $0xffffffff,%eax
081af7ec +0x7e:  jmp    081af7f1 <+0x83>
081af7ee +0x80:  mov    -0xc(%ebp),%eax
081af7f1 +0x83:  leave
081af7f2 +0x84:  ret
081af7f3 +0x85:  nop
```

## 反编译 C

```c
// nexon::cash::TCPSocket::recv @ 0x81af76e

/* nexon::cash::TCPSocket::recv(char*, unsigned int) */

ssize_t __thiscall nexon::cash::TCPSocket::recv(TCPSocket *this,char *param_1,uint param_2)

{
  ssize_t sVar1;
  int *piVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    sVar1 = -1;
  }
  else {
    sVar1 = ::read(*(int *)this,param_1,param_2);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      if ((((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4)) ||
          (piVar2 = __errno_location(), *piVar2 == 0xb)) ||
         (piVar2 = __errno_location(), *piVar2 == 0)) {
        sVar1 = 0;
      }
    }
    else if (sVar1 == 0) {
      sVar1 = -1;
    }
  }
  return sVar1;
}
```
