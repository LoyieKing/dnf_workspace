# recv

`_ZN5nexon4cash9UDPSocket4recvEPci`

`nexon::cash::UDPSocket::recv(char*, int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af0de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af0de  _ZN5nexon4cash9UDPSocket4recvEPci
#           nexon::cash::UDPSocket::recv(char*, int)
# range [0x081af0de, 0x081af179]
081af0de +0x00:  push   %ebp
081af0df +0x01:  mov    %esp,%ebp
081af0e1 +0x03:  push   %ebx
081af0e2 +0x04:  sub    $0x34,%esp
081af0e5 +0x07:  cmpl   $0x0,0xc(%ebp)
081af0e9 +0x0b:  je     081af0f1 <+0x13>
081af0eb +0x0d:  cmpl   $0x0,0x10(%ebp)
081af0ef +0x11:  jg     081af0f8 <+0x1a>
081af0f1 +0x13:  mov    $0xffffffff,%eax
081af0f6 +0x18:  jmp    081af173 <+0x95>
081af0f8 +0x1a:  movl   $0x10,-0x10(%ebp)
081af0ff +0x21:  lea    -0x10(%ebp),%ebx
081af102 +0x24:  mov    0x8(%ebp),%eax
081af105 +0x27:  add    $0x18,%eax
081af108 +0x2a:  mov    %eax,%ecx
081af10a +0x2c:  mov    0x10(%ebp),%edx
081af10d +0x2f:  mov    0x8(%ebp),%eax
081af110 +0x32:  mov    (%eax),%eax
081af112 +0x34:  mov    %ebx,0x14(%esp)
081af116 +0x38:  mov    %ecx,0x10(%esp)
081af11a +0x3c:  movl   $0x0,0xc(%esp)
081af122 +0x44:  mov    %edx,0x8(%esp)
081af126 +0x48:  mov    0xc(%ebp),%edx
081af129 +0x4b:  mov    %edx,0x4(%esp)
081af12d +0x4f:  mov    %eax,(%esp)
081af130 +0x52:  call   0807d910 <_init+0x208>
081af135 +0x57:  mov    %eax,-0xc(%ebp)
081af138 +0x5a:  cmpl   $0x0,-0xc(%ebp)
081af13c +0x5e:  jns    081af170 <+0x92>
081af13e +0x60:  call   0807dd70 <_init+0x668>
081af143 +0x65:  mov    (%eax),%eax
081af145 +0x67:  cmp    $0xb,%eax
081af148 +0x6a:  je     081af162 <+0x84>
081af14a +0x6c:  call   0807dd70 <_init+0x668>
081af14f +0x71:  mov    (%eax),%eax
081af151 +0x73:  cmp    $0x4,%eax
081af154 +0x76:  je     081af162 <+0x84>
081af156 +0x78:  call   0807dd70 <_init+0x668>
081af15b +0x7d:  mov    (%eax),%eax
081af15d +0x7f:  cmp    $0xb,%eax
081af160 +0x82:  jne    081af169 <+0x8b>
081af162 +0x84:  mov    $0x0,%eax
081af167 +0x89:  jmp    081af173 <+0x95>
081af169 +0x8b:  mov    $0xffffffff,%eax
081af16e +0x90:  jmp    081af173 <+0x95>
081af170 +0x92:  mov    -0xc(%ebp),%eax
081af173 +0x95:  add    $0x34,%esp
081af176 +0x98:  pop    %ebx
081af177 +0x99:  pop    %ebp
081af178 +0x9a:  ret
081af179 +0x9b:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::recv @ 0x81af0de

/* nexon::cash::UDPSocket::recv(char*, int) */

ssize_t __thiscall nexon::cash::UDPSocket::recv(UDPSocket *this,char *param_1,int param_2)

{
  int *piVar1;
  socklen_t local_14;
  ssize_t local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    local_10 = -1;
  }
  else {
    local_14 = 0x10;
    local_10 = recvfrom(*(int *)this,param_1,param_2,0,(sockaddr *)(this + 0x18),&local_14);
    if (local_10 < 0) {
      piVar1 = __errno_location();
      if (((*piVar1 == 0xb) || (piVar1 = __errno_location(), *piVar1 == 4)) ||
         (piVar1 = __errno_location(), *piVar1 == 0xb)) {
        local_10 = 0;
      }
      else {
        local_10 = -1;
      }
    }
  }
  return local_10;
}
```
