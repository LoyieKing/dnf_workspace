# connect

`_ZN5nexon4cash9TCPSocket7connectEPKct`

`nexon::cash::TCPSocket::connect(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af9ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af9ea  _ZN5nexon4cash9TCPSocket7connectEPKct
#           nexon::cash::TCPSocket::connect(char const*, unsigned short)
# range [0x081af9ea, 0x081afa97]
081af9ea +0x00:  push   %ebp
081af9eb +0x01:  mov    %esp,%ebp
081af9ed +0x03:  sub    $0x48,%esp
081af9f0 +0x06:  mov    0x10(%ebp),%eax
081af9f3 +0x09:  mov    %ax,-0x2c(%ebp)
081af9f7 +0x0d:  movl   $0x10,0x8(%esp)
081af9ff +0x15:  movl   $0x0,0x4(%esp)
081afa07 +0x1d:  lea    -0x1c(%ebp),%eax
081afa0a +0x20:  mov    %eax,(%esp)
081afa0d +0x23:  call   0807dcc0 <_init+0x5b8>
081afa12 +0x28:  movw   $0x2,-0x1c(%ebp)
081afa18 +0x2e:  mov    0xc(%ebp),%eax
081afa1b +0x31:  mov    %eax,(%esp)
081afa1e +0x34:  call   0807e530 <_init+0xe28>
081afa23 +0x39:  mov    %eax,-0x18(%ebp)
081afa26 +0x3c:  movzwl -0x2c(%ebp),%eax
081afa2a +0x40:  mov    %eax,(%esp)
081afa2d +0x43:  call   0807e680 <_init+0xf78>
081afa32 +0x48:  mov    %ax,-0x1a(%ebp)
081afa36 +0x4c:  movl   $0x10,-0xc(%ebp)
081afa3d +0x53:  mov    -0xc(%ebp),%ecx
081afa40 +0x56:  lea    -0x1c(%ebp),%edx
081afa43 +0x59:  mov    0x8(%ebp),%eax
081afa46 +0x5c:  mov    (%eax),%eax
081afa48 +0x5e:  mov    %ecx,0x8(%esp)
081afa4c +0x62:  mov    %edx,0x4(%esp)
081afa50 +0x66:  mov    %eax,(%esp)
081afa53 +0x69:  call   0807e230 <_init+0xb28>
081afa58 +0x6e:  shr    $0x1f,%eax
081afa5b +0x71:  test   %al,%al
081afa5d +0x73:  je     081afa66 <+0x7c>
081afa5f +0x75:  mov    $0x0,%eax
081afa64 +0x7a:  jmp    081afa96 <+0xac>
081afa66 +0x7c:  mov    0x8(%ebp),%eax
081afa69 +0x7f:  add    $0x14,%eax
081afa6c +0x82:  movl   $0x4,0x8(%esp)
081afa74 +0x8a:  lea    -0x1c(%ebp),%edx
081afa77 +0x8d:  add    $0x4,%edx
081afa7a +0x90:  mov    %edx,0x4(%esp)
081afa7e +0x94:  mov    %eax,(%esp)
081afa81 +0x97:  call   0807d8a0 <_init+0x198>
081afa86 +0x9c:  movzwl -0x1a(%ebp),%edx
081afa8a +0xa0:  mov    0x8(%ebp),%eax
081afa8d +0xa3:  mov    %dx,0x18(%eax)
081afa91 +0xa7:  mov    $0x1,%eax
081afa96 +0xac:  leave
081afa97 +0xad:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::connect @ 0x81af9ea

/* nexon::cash::TCPSocket::connect(char const*, unsigned short) */

bool __thiscall nexon::cash::TCPSocket::connect(TCPSocket *this,char *param_1,ushort param_2)

{
  int iVar1;
  sockaddr local_20;
  undefined4 local_10;
  
  memset(&local_20,0,0x10);
  local_20.sa_family = 2;
  local_20.sa_data._2_4_ = inet_addr(param_1);
  local_20.sa_data._0_2_ = htons(param_2);
  local_10 = 0x10;
  iVar1 = ::connect(*(int *)this,&local_20,0x10);
  if (-1 < iVar1) {
    memcpy(this + 0x14,local_20.sa_data + 2,4);
    *(undefined2 *)(this + 0x18) = local_20.sa_data._0_2_;
  }
  return -1 < iVar1;
}
```
