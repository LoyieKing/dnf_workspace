# send

`_ZN5nexon4cash9UDPSocket4sendEPcitPKc`

`nexon::cash::UDPSocket::send(char*, int, unsigned short, char const*)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af000  _ZN5nexon4cash9UDPSocket4sendEPcitPKc
#           nexon::cash::UDPSocket::send(char*, int, unsigned short, char const*)
# range [0x081af000, 0x081af0dd]
081af000 +0x00:  push   %ebp
081af001 +0x01:  mov    %esp,%ebp
081af003 +0x03:  sub    $0x58,%esp
081af006 +0x06:  mov    0x14(%ebp),%eax
081af009 +0x09:  mov    %ax,-0x2c(%ebp)
081af00d +0x0d:  cmpl   $0x0,0xc(%ebp)
081af011 +0x11:  je     081af019 <+0x19>
081af013 +0x13:  cmpl   $0x0,0x10(%ebp)
081af017 +0x17:  jg     081af023 <+0x23>
081af019 +0x19:  mov    $0xffffffff,%eax
081af01e +0x1e:  jmp    081af0db <+0xdb>
081af023 +0x23:  cmpl   $0x0,0x18(%ebp)
081af027 +0x27:  jne    081af033 <+0x33>
081af029 +0x29:  mov    $0x0,%eax
081af02e +0x2e:  jmp    081af0db <+0xdb>
081af033 +0x33:  movl   $0x10,0x8(%esp)
081af03b +0x3b:  movl   $0x0,0x4(%esp)
081af043 +0x43:  lea    -0x1c(%ebp),%eax
081af046 +0x46:  mov    %eax,(%esp)
081af049 +0x49:  call   0807dcc0 <_init+0x5b8>
081af04e +0x4e:  movw   $0x2,-0x1c(%ebp)
081af054 +0x54:  movzwl -0x2c(%ebp),%eax
081af058 +0x58:  mov    %eax,(%esp)
081af05b +0x5b:  call   0807e680 <_init+0xf78>
081af060 +0x60:  mov    %ax,-0x1a(%ebp)
081af064 +0x64:  mov    0x18(%ebp),%eax
081af067 +0x67:  mov    %eax,(%esp)
081af06a +0x6a:  call   0807e530 <_init+0xe28>
081af06f +0x6f:  mov    %eax,-0x18(%ebp)
081af072 +0x72:  lea    -0x1c(%ebp),%ecx
081af075 +0x75:  mov    0x10(%ebp),%edx
081af078 +0x78:  mov    0x8(%ebp),%eax
081af07b +0x7b:  mov    (%eax),%eax
081af07d +0x7d:  movl   $0x10,0x14(%esp)
081af085 +0x85:  mov    %ecx,0x10(%esp)
081af089 +0x89:  movl   $0x0,0xc(%esp)
081af091 +0x91:  mov    %edx,0x8(%esp)
081af095 +0x95:  mov    0xc(%ebp),%edx
081af098 +0x98:  mov    %edx,0x4(%esp)
081af09c +0x9c:  mov    %eax,(%esp)
081af09f +0x9f:  call   0807e1e0 <_init+0xad8>
081af0a4 +0xa4:  mov    %eax,-0xc(%ebp)
081af0a7 +0xa7:  cmpl   $0x0,-0xc(%ebp)
081af0ab +0xab:  jns    081af0d8 <+0xd8>
081af0ad +0xad:  call   0807dd70 <_init+0x668>
081af0b2 +0xb2:  mov    (%eax),%eax
081af0b4 +0xb4:  cmp    $0xb,%eax
081af0b7 +0xb7:  je     081af0d1 <+0xd1>
081af0b9 +0xb9:  call   0807dd70 <_init+0x668>
081af0be +0xbe:  mov    (%eax),%eax
081af0c0 +0xc0:  cmp    $0xb,%eax
081af0c3 +0xc3:  je     081af0d1 <+0xd1>
081af0c5 +0xc5:  call   0807dd70 <_init+0x668>
081af0ca +0xca:  mov    (%eax),%eax
081af0cc +0xcc:  cmp    $0x4,%eax
081af0cf +0xcf:  jne    081af0d8 <+0xd8>
081af0d1 +0xd1:  mov    $0x0,%eax
081af0d6 +0xd6:  jmp    081af0db <+0xdb>
081af0d8 +0xd8:  mov    -0xc(%ebp),%eax
081af0db +0xdb:  leave
081af0dc +0xdc:  ret
081af0dd +0xdd:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::send @ 0x81af000

/* nexon::cash::UDPSocket::send(char*, int, unsigned short, char const*) */

ssize_t __thiscall
nexon::cash::UDPSocket::send(UDPSocket *this,char *param_1,int param_2,ushort param_3,char *param_4)

{
  int *piVar1;
  sockaddr local_20;
  ssize_t local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    local_10 = -1;
  }
  else if (param_4 == (char *)0x0) {
    local_10 = 0;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._0_2_ = htons(param_3);
    local_20.sa_data._2_4_ = inet_addr(param_4);
    local_10 = sendto(*(int *)this,param_1,param_2,0,&local_20,0x10);
    if ((local_10 < 0) &&
       (((piVar1 = __errno_location(), *piVar1 == 0xb ||
         (piVar1 = __errno_location(), *piVar1 == 0xb)) ||
        (piVar1 = __errno_location(), *piVar1 == 4)))) {
      local_10 = 0;
    }
  }
  return local_10;
}
```
