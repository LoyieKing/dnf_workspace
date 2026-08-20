# bind

`_ZN5nexon4cash9UDPSocket4bindEPKct`

`nexon::cash::UDPSocket::bind(char const*, unsigned short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aedc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aedc6  _ZN5nexon4cash9UDPSocket4bindEPKct
#           nexon::cash::UDPSocket::bind(char const*, unsigned short)
# range [0x081aedc6, 0x081aee81]
081aedc6 +0x00:  push   %ebp
081aedc7 +0x01:  mov    %esp,%ebp
081aedc9 +0x03:  sub    $0x28,%esp
081aedcc +0x06:  mov    0x10(%ebp),%eax
081aedcf +0x09:  mov    %ax,-0xc(%ebp)
081aedd3 +0x0d:  mov    0x8(%ebp),%eax
081aedd6 +0x10:  movzwl -0xc(%ebp),%edx
081aedda +0x14:  mov    %dx,0x14(%eax)
081aedde +0x18:  mov    0x8(%ebp),%eax
081aede1 +0x1b:  add    $0x4,%eax
081aede4 +0x1e:  movl   $0x10,0x8(%esp)
081aedec +0x26:  movl   $0x0,0x4(%esp)
081aedf4 +0x2e:  mov    %eax,(%esp)
081aedf7 +0x31:  call   0807dcc0 <_init+0x5b8>
081aedfc +0x36:  mov    0x8(%ebp),%eax
081aedff +0x39:  movw   $0x2,0x4(%eax)
081aee05 +0x3f:  mov    0xc(%ebp),%eax
081aee08 +0x42:  mov    %eax,(%esp)
081aee0b +0x45:  call   0807e530 <_init+0xe28>
081aee10 +0x4a:  mov    0x8(%ebp),%edx
081aee13 +0x4d:  mov    %eax,0x8(%edx)
081aee16 +0x50:  mov    0x8(%ebp),%eax
081aee19 +0x53:  movzwl 0x14(%eax),%eax
081aee1d +0x57:  movzwl %ax,%eax
081aee20 +0x5a:  mov    %eax,(%esp)
081aee23 +0x5d:  call   0807e680 <_init+0xf78>
081aee28 +0x62:  mov    0x8(%ebp),%edx
081aee2b +0x65:  mov    %ax,0x6(%edx)
081aee2f +0x69:  mov    0x8(%ebp),%eax
081aee32 +0x6c:  add    $0x4,%eax
081aee35 +0x6f:  mov    %eax,%edx
081aee37 +0x71:  mov    0x8(%ebp),%eax
081aee3a +0x74:  mov    (%eax),%eax
081aee3c +0x76:  movl   $0x10,0x8(%esp)
081aee44 +0x7e:  mov    %edx,0x4(%esp)
081aee48 +0x82:  mov    %eax,(%esp)
081aee4b +0x85:  call   0807e750 <_init+0x1048>
081aee50 +0x8a:  test   %eax,%eax
081aee52 +0x8c:  setne  %al
081aee55 +0x8f:  test   %al,%al
081aee57 +0x91:  je     081aee7b <+0xb5>
081aee59 +0x93:  movzwl -0xc(%ebp),%eax
081aee5d +0x97:  mov    %eax,0x8(%esp)
081aee61 +0x9b:  mov    0xc(%ebp),%eax
081aee64 +0x9e:  mov    %eax,0x4(%esp)
081aee68 +0xa2:  movl   $"Udp Port binding fail, %s , %d\n",(%esp)
081aee6f +0xa9:  call   0807db60 <_init+0x458>
081aee74 +0xae:  mov    $0x0,%eax
081aee79 +0xb3:  jmp    081aee80 <+0xba>
081aee7b +0xb5:  mov    $0x1,%eax
081aee80 +0xba:  leave
081aee81 +0xbb:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::bind @ 0x81aedc6

/* nexon::cash::UDPSocket::bind(char const*, unsigned short) */

bool __thiscall nexon::cash::UDPSocket::bind(UDPSocket *this,char *param_1,ushort param_2)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  int iVar3;
  
  *(ushort *)(this + 0x14) = param_2;
  memset(this + 4,0,0x10);
  *(undefined2 *)(this + 4) = 2;
  iVar2 = inet_addr(param_1);
  *(in_addr_t *)(this + 8) = iVar2;
  uVar1 = htons(*(uint16_t *)(this + 0x14));
  *(uint16_t *)(this + 6) = uVar1;
  iVar3 = ::bind(*(int *)this,(sockaddr *)(this + 4),0x10);
  if (iVar3 != 0) {
    printf("Udp Port binding fail, %s , %d\n",param_1,(uint)param_2);
  }
  return iVar3 == 0;
}
```
