# _bindUDPSocket

`_ZN9UdpThread14_bindUDPSocketEt`

`UdpThread::_bindUDPSocket(unsigned short)`

| 类 | 地址 |
|---|---|
| `UdpThread` | `0x0857c3be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c3be  _ZN9UdpThread14_bindUDPSocketEt
#           UdpThread::_bindUDPSocket(unsigned short)
# range [0x0857c3be, 0x0857c5a3]
0857c3be +0x000:  push   %ebp
0857c3bf +0x001:  mov    %esp,%ebp
0857c3c1 +0x003:  sub    $0x58,%esp
0857c3c4 +0x006:  mov    0xc(%ebp),%eax
0857c3c7 +0x009:  mov    %ax,-0x2c(%ebp)
0857c3cb +0x00d:  movl   $0x0,0x8(%esp)
0857c3d3 +0x015:  movl   $0x2,0x4(%esp)
0857c3db +0x01d:  movl   $0x2,(%esp)
0857c3e2 +0x024:  call   0807dab0 <_init+0x3a8>
0857c3e7 +0x029:  mov    %eax,-0x10(%ebp)
0857c3ea +0x02c:  movl   $0x10,0x8(%esp)
0857c3f2 +0x034:  movl   $0x0,0x4(%esp)
0857c3fa +0x03c:  lea    -0x20(%ebp),%eax
0857c3fd +0x03f:  mov    %eax,(%esp)
0857c400 +0x042:  call   0807dcc0 <_init+0x5b8>
0857c405 +0x047:  movw   $0x2,-0x20(%ebp)
0857c40b +0x04d:  movl   $0x0,(%esp)
0857c412 +0x054:  call   0807db10 <_init+0x408>
0857c417 +0x059:  mov    %eax,-0x1c(%ebp)
0857c41a +0x05c:  movzwl -0x2c(%ebp),%eax
0857c41e +0x060:  mov    %eax,(%esp)
0857c421 +0x063:  call   0807e680 <_init+0xf78>
0857c426 +0x068:  mov    %ax,-0x1e(%ebp)
0857c42a +0x06c:  lea    -0x20(%ebp),%eax
0857c42d +0x06f:  movl   $0x10,0x8(%esp)
0857c435 +0x077:  mov    %eax,0x4(%esp)
0857c439 +0x07b:  mov    -0x10(%ebp),%eax
0857c43c +0x07e:  mov    %eax,(%esp)
0857c43f +0x081:  call   0807e750 <_init+0x1048>
0857c444 +0x086:  shr    $0x1f,%eax
0857c447 +0x089:  test   %al,%al
0857c449 +0x08b:  je     0857c554 <+0x196>
0857c44f +0x091:  movl   $"[ERROR]UDP Thread Socket Binding ERROR",0x10(%esp)
0857c457 +0x099:  movl   $0x84,0xc(%esp)
0857c45f +0x0a1:  movl   $&_ZZN9UdpThread14_bindUDPSocketEtE19__PRETTY_FUNCTION__,0x8(%esp)
0857c467 +0x0a9:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c46f +0x0b1:  movl   $0x1,(%esp)
0857c476 +0x0b8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c47b +0x0bd:  call   0807dd70 <_init+0x668>
0857c480 +0x0c2:  mov    (%eax),%eax
0857c482 +0x0c4:  mov    %eax,-0xc(%ebp)
0857c485 +0x0c7:  mov    -0xc(%ebp),%eax
0857c488 +0x0ca:  cmp    $0x62,%eax
0857c48b +0x0cd:  je     0857c49c <+0xde>
0857c48d +0x0cf:  cmp    $0x63,%eax
0857c490 +0x0d2:  je     0857c4d5 <+0x117>
0857c492 +0x0d4:  test   %eax,%eax
0857c494 +0x0d6:  je     0857c547 <+0x189>
0857c49a +0x0dc:  jmp    0857c503 <+0x145>
0857c49c +0x0de:  movzwl -0x1e(%ebp),%eax
0857c4a0 +0x0e2:  movzwl %ax,%eax
0857c4a3 +0x0e5:  mov    %eax,0x14(%esp)
0857c4a7 +0x0e9:  movl   $"Port %d for receiving UDP is in use\n",0x10(%esp)
0857c4af +0x0f1:  movl   $0x9e,0xc(%esp)
0857c4b7 +0x0f9:  movl   $&_ZZN9UdpThread14_bindUDPSocketEtE19__PRETTY_FUNCTION__,0x8(%esp)
0857c4bf +0x101:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c4c7 +0x109:  movl   $0x1,(%esp)
0857c4ce +0x110:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c4d3 +0x115:  jmp    0857c548 <+0x18a>
0857c4d5 +0x117:  movl   $"Cannot assign requested address\n",0x10(%esp)
0857c4dd +0x11f:  movl   $0xa2,0xc(%esp)
0857c4e5 +0x127:  movl   $&_ZZN9UdpThread14_bindUDPSocketEtE19__PRETTY_FUNCTION__,0x8(%esp)
0857c4ed +0x12f:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c4f5 +0x137:  movl   $0x1,(%esp)
0857c4fc +0x13e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c501 +0x143:  jmp    0857c548 <+0x18a>
0857c503 +0x145:  mov    -0xc(%ebp),%eax
0857c506 +0x148:  mov    %eax,(%esp)
0857c509 +0x14b:  call   0807d730 <_init+0x28>
0857c50e +0x150:  mov    %eax,0x18(%esp)
0857c512 +0x154:  mov    -0xc(%ebp),%eax
0857c515 +0x157:  mov    %eax,0x14(%esp)
0857c519 +0x15b:  movl   $"Could not bind UDP receive port. Error= %d , strerror = %s\n",0x10(%esp)
0857c521 +0x163:  movl   $0xa6,0xc(%esp)
0857c529 +0x16b:  movl   $&_ZZN9UdpThread14_bindUDPSocketEtE19__PRETTY_FUNCTION__,0x8(%esp)
0857c531 +0x173:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c539 +0x17b:  movl   $0x1,(%esp)
0857c540 +0x182:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c545 +0x187:  jmp    0857c548 <+0x18a>
0857c547 +0x189:  nop
0857c548 +0x18a:  movl   $0xffffffff,(%esp)
0857c54f +0x191:  call   0807e1c0 <_init+0xab8>
0857c554 +0x196:  mov    -0x10(%ebp),%eax
0857c557 +0x199:  mov    %eax,(%esp)
0857c55a +0x19c:  call   0857f484 <_GLOBAL__I_g_bUdp_TH_start+0x9b>  ; global constructors keyed to g_bUdp_TH_start+0x9b
0857c55f +0x1a1:  xor    $0x1,%eax
0857c562 +0x1a4:  test   %al,%al
0857c564 +0x1a6:  je     0857c59e <+0x1e0>
0857c566 +0x1a8:  movl   $"Fail to SetNonBlock UdpThread.",0x10(%esp)
0857c56e +0x1b0:  movl   $0xb0,0xc(%esp)
0857c576 +0x1b8:  movl   $&_ZZN9UdpThread14_bindUDPSocketEtE19__PRETTY_FUNCTION__,0x8(%esp)
0857c57e +0x1c0:  movl   $"NetworkThread.cpp",0x4(%esp)
0857c586 +0x1c8:  movl   $0x1,(%esp)
0857c58d +0x1cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857c592 +0x1d4:  movl   $0xffffffff,(%esp)
0857c599 +0x1db:  call   0807e1c0 <_init+0xab8>
0857c59e +0x1e0:  mov    -0x10(%ebp),%eax
0857c5a1 +0x1e3:  leave
0857c5a2 +0x1e4:  ret
0857c5a3 +0x1e5:  nop
```

## 反编译 C

```c
// UdpThread::_bindUDPSocket @ 0x857c3be

/* UdpThread::_bindUDPSocket(unsigned short) */

int __thiscall UdpThread::_bindUDPSocket(UdpThread *this,ushort param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  sockaddr local_24;
  int local_14;
  int local_10;
  
  local_14 = socket(2,2,0);
  memset(&local_24,0,0x10);
  local_24.sa_family = 2;
  local_24.sa_data._2_4_ = htonl(0);
  local_24.sa_data._0_2_ = htons(param_1);
  iVar2 = bind(local_14,&local_24,0x10);
  if (iVar2 < 0) {
    LogManager::logFormat
              (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0x84,
               "[ERROR]UDP Thread Socket Binding ERROR");
    piVar3 = __errno_location();
    local_10 = *piVar3;
    if (local_10 == 0x62) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0x9e,
                 "Port %d for receiving UDP is in use\n",(uint)(ushort)local_24.sa_data._0_2_);
    }
    else if (local_10 == 99) {
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xa2,
                 "Cannot assign requested address\n");
    }
    else if (local_10 != 0) {
      pcVar4 = strerror(local_10);
      LogManager::logFormat
                (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xa6,
                 "Could not bind UDP receive port. Error= %d , strerror = %s\n",local_10,pcVar4);
    }
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = CNetwork<4096,450000>::SetNonBlock(local_14);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"NetworkThread.cpp","SOCKET UdpThread::_bindUDPSocket(short unsigned int)",0xb0,
               "Fail to SetNonBlock UdpThread.");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return local_14;
}
```
