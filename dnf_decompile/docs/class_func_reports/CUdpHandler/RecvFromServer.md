# RecvFromServer

`_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt`

`CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483a52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483a52  _ZNK11CUdpHandler14RecvFromServerEPcPiPjPt
#           CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const
# range [0x08483a52, 0x08483b67]
08483a52 +0x000:  push   %ebp
08483a53 +0x001:  mov    %esp,%ebp
08483a55 +0x003:  push   %ebx
08483a56 +0x004:  sub    $0x44,%esp
08483a59 +0x007:  mov    0x8(%ebp),%eax
08483a5c +0x00a:  mov    0x4(%eax),%eax
08483a5f +0x00d:  cmp    $0xffffffff,%eax
08483a62 +0x010:  jne    08483a6e <+0x1c>
08483a64 +0x012:  mov    $0x0,%eax
08483a69 +0x017:  jmp    08483b61 <+0x10f>
08483a6e +0x01c:  movl   $0x10,-0x20(%ebp)
08483a75 +0x023:  lea    -0x20(%ebp),%ebx
08483a78 +0x026:  lea    -0x1c(%ebp),%ecx
08483a7b +0x029:  mov    0x10(%ebp),%eax
08483a7e +0x02c:  mov    (%eax),%eax
08483a80 +0x02e:  mov    %eax,%edx
08483a82 +0x030:  mov    0x8(%ebp),%eax
08483a85 +0x033:  mov    0x4(%eax),%eax
08483a88 +0x036:  mov    %ebx,0x14(%esp)
08483a8c +0x03a:  mov    %ecx,0x10(%esp)
08483a90 +0x03e:  movl   $0x0,0xc(%esp)
08483a98 +0x046:  mov    %edx,0x8(%esp)
08483a9c +0x04a:  mov    0xc(%ebp),%edx
08483a9f +0x04d:  mov    %edx,0x4(%esp)
08483aa3 +0x051:  mov    %eax,(%esp)
08483aa6 +0x054:  call   0807d910 <_init+0x208>
08483aab +0x059:  mov    0x10(%ebp),%edx
08483aae +0x05c:  mov    %eax,(%edx)
08483ab0 +0x05e:  mov    0x10(%ebp),%eax
08483ab3 +0x061:  mov    (%eax),%eax
08483ab5 +0x063:  cmp    $0xffffffff,%eax
08483ab8 +0x066:  jne    08483b07 <+0xb5>
08483aba +0x068:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
08483abf +0x06d:  mov    %eax,-0xc(%ebp)
08483ac2 +0x070:  mov    -0xc(%ebp),%eax
08483ac5 +0x073:  cmp    $0x58,%eax
08483ac8 +0x076:  je     08483ad1 <+0x7f>
08483aca +0x078:  cmp    $0x68,%eax
08483acd +0x07b:  je     08483adf <+0x8d>
08483acf +0x07d:  jmp    08483aed <+0x9b>
08483ad1 +0x07f:  movl   $"Error fd not a socket",(%esp)
08483ad8 +0x086:  call   0807e570 <_init+0xe68>
08483add +0x08b:  jmp    08483b00 <+0xae>
08483adf +0x08d:  movl   $"Error connection reset - host not reachable",(%esp)
08483ae6 +0x094:  call   0807e570 <_init+0xe68>
08483aeb +0x099:  jmp    08483b00 <+0xae>
08483aed +0x09b:  mov    -0xc(%ebp),%eax
08483af0 +0x09e:  mov    %eax,0x4(%esp)
08483af4 +0x0a2:  movl   $"Hm! Time out Or Socket Error = %d\n",(%esp)
08483afb +0x0a9:  call   0807db60 <_init+0x458>
08483b00 +0x0ae:  mov    $0x0,%eax
08483b05 +0x0b3:  jmp    08483b61 <+0x10f>
08483b07 +0x0b5:  mov    0x10(%ebp),%eax
08483b0a +0x0b8:  mov    (%eax),%eax
08483b0c +0x0ba:  test   %eax,%eax
08483b0e +0x0bc:  jg     08483b2c <+0xda>
08483b10 +0x0be:  mov    0x10(%ebp),%eax
08483b13 +0x0c1:  mov    (%eax),%eax
08483b15 +0x0c3:  mov    %eax,0x4(%esp)
08483b19 +0x0c7:  movl   $"Socket closed? Recv size = %d\n",(%esp)
08483b20 +0x0ce:  call   0807db60 <_init+0x458>
08483b25 +0x0d3:  mov    $0x0,%eax
08483b2a +0x0d8:  jmp    08483b61 <+0x10f>
08483b2c +0x0da:  movzwl -0x1a(%ebp),%eax
08483b30 +0x0de:  movzwl %ax,%eax
08483b33 +0x0e1:  mov    %eax,(%esp)
08483b36 +0x0e4:  call   0807de90 <_init+0x788>
08483b3b +0x0e9:  mov    0x18(%ebp),%edx
08483b3e +0x0ec:  mov    %ax,(%edx)
08483b41 +0x0ef:  mov    -0x18(%ebp),%eax
08483b44 +0x0f2:  mov    %eax,(%esp)
08483b47 +0x0f5:  call   0807db80 <_init+0x478>
08483b4c +0x0fa:  mov    0x14(%ebp),%edx
08483b4f +0x0fd:  mov    %eax,(%edx)
08483b51 +0x0ff:  mov    0x10(%ebp),%eax
08483b54 +0x102:  mov    (%eax),%eax
08483b56 +0x104:  add    0xc(%ebp),%eax
08483b59 +0x107:  movb   $0x0,(%eax)
08483b5c +0x10a:  mov    $0x1,%eax
08483b61 +0x10f:  add    $0x44,%esp
08483b64 +0x112:  pop    %ebx
08483b65 +0x113:  pop    %ebp
08483b66 +0x114:  ret
08483b67 +0x115:  nop
```

## 反编译 C

```c
// CUdpHandler::RecvFromServer @ 0x8483a52

/* CUdpHandler::RecvFromServer(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::RecvFromServer
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  uint16_t uVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  uint32_t uVar4;
  socklen_t local_24;
  sockaddr local_20;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    uVar2 = 0;
  }
  else {
    local_24 = 0x10;
    sVar3 = recvfrom(*(int *)(this + 4),param_1,*param_2,0,&local_20,&local_24);
    *param_2 = sVar3;
    if (*param_2 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x58) {
        puts("Error fd not a socket");
      }
      else if (local_10 == 0x68) {
        puts("Error connection reset - host not reachable");
      }
      else {
        printf("Hm! Time out Or Socket Error = %d\n",local_10);
      }
      uVar2 = 0;
    }
    else if (*param_2 < 1) {
      printf("Socket closed? Recv size = %d\n",*param_2);
      uVar2 = 0;
    }
    else {
      uVar1 = ntohs(local_20.sa_data._0_2_);
      *param_4 = uVar1;
      uVar4 = ntohl(local_20.sa_data._2_4_);
      *param_3 = uVar4;
      param_1[*param_2] = '\0';
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
