# open

`_ZN5nexon4cash9UDPSocket4openEv`

`nexon::cash::UDPSocket::open()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aed58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aed58  _ZN5nexon4cash9UDPSocket4openEv
#           nexon::cash::UDPSocket::open()
# range [0x081aed58, 0x081aedc5]
081aed58 +0x00:  push   %ebp
081aed59 +0x01:  mov    %esp,%ebp
081aed5b +0x03:  sub    $0x28,%esp
081aed5e +0x06:  mov    0x8(%ebp),%eax
081aed61 +0x09:  mov    (%eax),%eax
081aed63 +0x0b:  cmp    $0xffffffff,%eax
081aed66 +0x0e:  je     081aed6f <+0x17>
081aed68 +0x10:  mov    $0x0,%eax
081aed6d +0x15:  jmp    081aedc3 <+0x6b>
081aed6f +0x17:  movl   $0x0,0x8(%esp)
081aed77 +0x1f:  movl   $0x2,0x4(%esp)
081aed7f +0x27:  movl   $0x2,(%esp)
081aed86 +0x2e:  call   0807dab0 <_init+0x3a8>
081aed8b +0x33:  mov    0x8(%ebp),%edx
081aed8e +0x36:  mov    %eax,(%edx)
081aed90 +0x38:  mov    0x8(%ebp),%eax
081aed93 +0x3b:  mov    (%eax),%eax
081aed95 +0x3d:  cmp    $0xffffffff,%eax
081aed98 +0x40:  jne    081aedbe <+0x66>
081aed9a +0x42:  call   0807dd70 <_init+0x668>
081aed9f +0x47:  mov    (%eax),%eax
081aeda1 +0x49:  mov    %eax,-0xc(%ebp)
081aeda4 +0x4c:  mov    -0xc(%ebp),%eax
081aeda7 +0x4f:  mov    %eax,0x4(%esp)
081aedab +0x53:  movl   $"Could not create a UDP socket : %d\n",(%esp)
081aedb2 +0x5a:  call   0807db60 <_init+0x458>
081aedb7 +0x5f:  mov    $0x0,%eax
081aedbc +0x64:  jmp    081aedc3 <+0x6b>
081aedbe +0x66:  mov    $0x1,%eax
081aedc3 +0x6b:  leave
081aedc4 +0x6c:  ret
081aedc5 +0x6d:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::open @ 0x81aed58

/* nexon::cash::UDPSocket::open() */

undefined4 __thiscall nexon::cash::UDPSocket::open(UDPSocket *this)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)this == -1) {
    iVar2 = socket(2,2,0);
    *(int *)this = iVar2;
    if (*(int *)this == -1) {
      piVar3 = __errno_location();
      printf("Could not create a UDP socket : %d\n",*piVar3);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
