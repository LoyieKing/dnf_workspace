# InitServerSocket

`_ZN11CUdpHandler16InitServerSocketEi`

`CUdpHandler::InitServerSocket(int)`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483530  _ZN11CUdpHandler16InitServerSocketEi
#           CUdpHandler::InitServerSocket(int)
# range [0x08483530, 0x08483699]
08483530 +0x000:  push   %ebp
08483531 +0x001:  mov    %esp,%ebp
08483533 +0x003:  sub    $0x48,%esp
08483536 +0x006:  movl   $0x11,0x8(%esp)
0848353e +0x00e:  movl   $0x2,0x4(%esp)
08483546 +0x016:  movl   $0x2,(%esp)
0848354d +0x01d:  call   0807dab0 <_init+0x3a8>
08483552 +0x022:  mov    0x8(%ebp),%edx
08483555 +0x025:  mov    %eax,(%edx)
08483557 +0x027:  mov    0x8(%ebp),%eax
0848355a +0x02a:  mov    (%eax),%eax
0848355c +0x02c:  cmp    $0xffffffff,%eax
0848355f +0x02f:  jne    08483586 <+0x56>
08483561 +0x031:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
08483566 +0x036:  mov    %eax,-0xc(%ebp)
08483569 +0x039:  mov    -0xc(%ebp),%eax
0848356c +0x03c:  mov    %eax,0x4(%esp)
08483570 +0x040:  movl   $"Could not create a UDP socket : %d\n",(%esp)
08483577 +0x047:  call   0807db60 <_init+0x458>
0848357c +0x04c:  mov    $0xffffffff,%eax
08483581 +0x051:  jmp    08483698 <+0x168>
08483586 +0x056:  lea    -0x1c(%ebp),%eax
08483589 +0x059:  movl   $0x10,0x8(%esp)
08483591 +0x061:  movl   $0x0,0x4(%esp)
08483599 +0x069:  mov    %eax,(%esp)
0848359c +0x06c:  call   0807dcc0 <_init+0x5b8>
084835a1 +0x071:  movw   $0x2,-0x1c(%ebp)
084835a7 +0x077:  movl   $0x0,(%esp)
084835ae +0x07e:  call   0807db10 <_init+0x408>
084835b3 +0x083:  mov    %eax,-0x18(%ebp)
084835b6 +0x086:  mov    0xc(%ebp),%eax
084835b9 +0x089:  movzwl %ax,%eax
084835bc +0x08c:  mov    %eax,(%esp)
084835bf +0x08f:  call   0807e680 <_init+0xf78>
084835c4 +0x094:  mov    %ax,-0x1a(%ebp)
084835c8 +0x098:  lea    -0x1c(%ebp),%edx
084835cb +0x09b:  mov    0x8(%ebp),%eax
084835ce +0x09e:  mov    (%eax),%eax
084835d0 +0x0a0:  movl   $0x10,0x8(%esp)
084835d8 +0x0a8:  mov    %edx,0x4(%esp)
084835dc +0x0ac:  mov    %eax,(%esp)
084835df +0x0af:  call   0807e750 <_init+0x1048>
084835e4 +0x0b4:  test   %eax,%eax
084835e6 +0x0b6:  setne  %al
084835e9 +0x0b9:  test   %al,%al
084835eb +0x0bb:  je     08483659 <+0x129>
084835ed +0x0bd:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
084835f2 +0x0c2:  mov    %eax,-0xc(%ebp)
084835f5 +0x0c5:  mov    -0xc(%ebp),%eax
084835f8 +0x0c8:  cmp    $0x62,%eax
084835fb +0x0cb:  je     08483608 <+0xd8>
084835fd +0x0cd:  cmp    $0x63,%eax
08483600 +0x0d0:  je     0848361d <+0xed>
08483602 +0x0d2:  test   %eax,%eax
08483604 +0x0d4:  je     0848364f <+0x11f>
08483606 +0x0d6:  jmp    0848362b <+0xfb>
08483608 +0x0d8:  mov    0xc(%ebp),%eax
0848360b +0x0db:  mov    %eax,0x4(%esp)
0848360f +0x0df:  movl   $"Port %d for receiving UDP is in use\n",(%esp)
08483616 +0x0e6:  call   0807db60 <_init+0x458>
0848361b +0x0eb:  jmp    08483650 <+0x120>
0848361d +0x0ed:  movl   $"Cannot assign requested address",(%esp)
08483624 +0x0f4:  call   0807e570 <_init+0xe68>
08483629 +0x0f9:  jmp    08483650 <+0x120>
0848362b +0x0fb:  mov    -0xc(%ebp),%eax
0848362e +0x0fe:  mov    %eax,(%esp)
08483631 +0x101:  call   0807d730 <_init+0x28>
08483636 +0x106:  mov    %eax,0x8(%esp)
0848363a +0x10a:  mov    -0xc(%ebp),%eax
0848363d +0x10d:  mov    %eax,0x4(%esp)
08483641 +0x111:  movl   $"Could not bind UDP receive port. Error= %d , strerror = %s\n",(%esp)
08483648 +0x118:  call   0807db60 <_init+0x458>
0848364d +0x11d:  jmp    08483650 <+0x120>
0848364f +0x11f:  nop
08483650 +0x120:  mov    0x8(%ebp),%eax
08483653 +0x123:  movl   $0xffffffff,(%eax)
08483659 +0x129:  movl   $0xa,-0x24(%ebp)
08483660 +0x130:  movl   $0x0,-0x20(%ebp)
08483667 +0x137:  mov    0x8(%ebp),%eax
0848366a +0x13a:  mov    (%eax),%eax
0848366c +0x13c:  movl   $0x8,0x10(%esp)
08483674 +0x144:  lea    -0x24(%ebp),%edx
08483677 +0x147:  mov    %edx,0xc(%esp)
0848367b +0x14b:  movl   $0x14,0x8(%esp)
08483683 +0x153:  movl   $0x1,0x4(%esp)
0848368b +0x15b:  mov    %eax,(%esp)
0848368e +0x15e:  call   0807e2a0 <_init+0xb98>
08483693 +0x163:  mov    0x8(%ebp),%eax
08483696 +0x166:  mov    (%eax),%eax
08483698 +0x168:  leave
08483699 +0x169:  ret
```

## 反编译 C

```c
// CUdpHandler::InitServerSocket @ 0x8483530

/* CUdpHandler::InitServerSocket(int) */

undefined4 __thiscall CUdpHandler::InitServerSocket(CUdpHandler *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  sockaddr local_20;
  int local_10;
  
  iVar1 = socket(2,2,0x11);
  *(int *)this = iVar1;
  if (*(int *)this == -1) {
    local_10 = getErrno();
    printf("Could not create a UDP socket : %d\n",local_10);
    uVar2 = 0xffffffff;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._2_4_ = htonl(0);
    local_20.sa_data._0_2_ = htons((uint16_t)param_1);
    iVar1 = bind(*(int *)this,&local_20,0x10);
    if (iVar1 != 0) {
      local_10 = getErrno();
      if (local_10 == 0x62) {
        printf("Port %d for receiving UDP is in use\n",param_1);
      }
      else if (local_10 == 99) {
        puts("Cannot assign requested address");
      }
      else if (local_10 != 0) {
        pcVar3 = strerror(local_10);
        printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",local_10,pcVar3);
      }
      *(undefined4 *)this = 0xffffffff;
    }
    local_28 = 10;
    local_24 = 0;
    setsockopt(*(int *)this,1,0x14,&local_28,8);
    uVar2 = *(undefined4 *)this;
  }
  return uVar2;
}
```
