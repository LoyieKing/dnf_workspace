# ReadData

`_ZN10DbmwClient8ReadDataEPci`

`DbmwClient::ReadData(char*, int)`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120b32  _ZN10DbmwClient8ReadDataEPci
#           DbmwClient::ReadData(char*, int)
# range [0x08120b32, 0x08120c17]
08120b32 +0x00:  push   %ebp
08120b33 +0x01:  mov    %esp,%ebp
08120b35 +0x03:  push   %ebx
08120b36 +0x04:  sub    $0x34,%esp
08120b39 +0x07:  mov    0x10(%ebp),%eax
08120b3c +0x0a:  mov    %eax,-0x10(%ebp)
08120b3f +0x0d:  mov    0xc(%ebp),%eax
08120b42 +0x10:  mov    %eax,-0xc(%ebp)
08120b45 +0x13:  jmp    08120c00 <+0xce>
08120b4a +0x18:  mov    -0x10(%ebp),%edx
08120b4d +0x1b:  mov    0x8(%ebp),%eax
08120b50 +0x1e:  mov    0x8(%eax),%eax
08120b53 +0x21:  movl   $0x0,0xc(%esp)
08120b5b +0x29:  mov    %edx,0x8(%esp)
08120b5f +0x2d:  mov    -0xc(%ebp),%edx
08120b62 +0x30:  mov    %edx,0x4(%esp)
08120b66 +0x34:  mov    %eax,(%esp)
08120b69 +0x37:  call   0807e240 <_init+0xb38>
08120b6e +0x3c:  mov    %eax,-0x14(%ebp)
08120b71 +0x3f:  cmpl   $0x0,-0x14(%ebp)
08120b75 +0x43:  jns    08120bdd <+0xab>
08120b77 +0x45:  call   0807dd70 <_init+0x668>
08120b7c +0x4a:  mov    (%eax),%eax
08120b7e +0x4c:  cmp    $0x4,%eax
08120b81 +0x4f:  je     08120bff <+0xcd>
08120b83 +0x51:  call   0807dd70 <_init+0x668>
08120b88 +0x56:  mov    (%eax),%eax
08120b8a +0x58:  mov    %eax,(%esp)
08120b8d +0x5b:  call   0807d730 <_init+0x28>
08120b92 +0x60:  mov    %eax,%ebx
08120b94 +0x62:  call   0807dd70 <_init+0x668>
08120b99 +0x67:  mov    (%eax),%eax
08120b9b +0x69:  mov    %ebx,0x1c(%esp)
08120b9f +0x6d:  mov    %eax,0x18(%esp)
08120ba3 +0x71:  mov    -0x14(%ebp),%eax
08120ba6 +0x74:  mov    %eax,0x14(%esp)
08120baa +0x78:  movl   $"AccountDBMW read error; recv result:%d, errno:%d:%s",0x10(%esp)
08120bb2 +0x80:  movl   $0x1dd,0xc(%esp)
08120bba +0x88:  movl   $&_ZZN10DbmwClient8ReadDataEPciE12__FUNCTION__,0x8(%esp)
08120bc2 +0x90:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
08120bca +0x98:  movl   $0x1,(%esp)
08120bd1 +0x9f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08120bd6 +0xa4:  mov    $0xffffffff,%eax
08120bdb +0xa9:  jmp    08120c12 <+0xe0>
08120bdd +0xab:  cmpl   $0x0,-0x14(%ebp)
08120be1 +0xaf:  jne    08120bf1 <+0xbf>
08120be3 +0xb1:  mov    -0x10(%ebp),%eax
08120be6 +0xb4:  mov    0x10(%ebp),%edx
08120be9 +0xb7:  mov    %edx,%ecx
08120beb +0xb9:  sub    %eax,%ecx
08120bed +0xbb:  mov    %ecx,%eax
08120bef +0xbd:  jmp    08120c12 <+0xe0>
08120bf1 +0xbf:  mov    -0x14(%ebp),%eax
08120bf4 +0xc2:  add    %eax,-0xc(%ebp)
08120bf7 +0xc5:  mov    -0x14(%ebp),%eax
08120bfa +0xc8:  sub    %eax,-0x10(%ebp)
08120bfd +0xcb:  jmp    08120c00 <+0xce>
08120bff +0xcd:  nop
08120c00 +0xce:  cmpl   $0x0,-0x10(%ebp)
08120c04 +0xd2:  setg   %al
08120c07 +0xd5:  test   %al,%al
08120c09 +0xd7:  jne    08120b4a <+0x18>
08120c0f +0xdd:  mov    0x10(%ebp),%eax
08120c12 +0xe0:  add    $0x34,%esp
08120c15 +0xe3:  pop    %ebx
08120c16 +0xe4:  pop    %ebp
08120c17 +0xe5:  ret
```

## 反编译 C

```c
// DbmwClient::ReadData @ 0x8120b32

/* DbmwClient::ReadData(char*, int) */

int __thiscall DbmwClient::ReadData(DbmwClient *this,char *param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  size_t local_14;
  char *local_10;
  
  local_14 = param_2;
  local_10 = param_1;
  while( true ) {
    while( true ) {
      if ((int)local_14 < 1) {
        return param_2;
      }
      sVar1 = recv(*(int *)(this + 8),local_10,local_14,0);
      if (-1 < sVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        piVar2 = __errno_location();
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","ReadData",0x1dd,
                   "AccountDBMW read error; recv result:%d, errno:%d:%s",sVar1,*piVar2,pcVar3);
        return -1;
      }
    }
    if (sVar1 == 0) break;
    local_10 = local_10 + sVar1;
    local_14 = local_14 - sVar1;
  }
  return param_2 - local_14;
}
```
