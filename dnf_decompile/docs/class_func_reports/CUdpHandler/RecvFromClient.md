# RecvFromClient

`_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt`

`CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483732` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483732  _ZNK11CUdpHandler14RecvFromClientEPcPiPjPt
#           CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const
# range [0x08483732, 0x08483845]
08483732 +0x000:  push   %ebp
08483733 +0x001:  mov    %esp,%ebp
08483735 +0x003:  push   %ebx
08483736 +0x004:  sub    $0x44,%esp
08483739 +0x007:  mov    0x8(%ebp),%eax
0848373c +0x00a:  mov    (%eax),%eax
0848373e +0x00c:  cmp    $0xffffffff,%eax
08483741 +0x00f:  jne    0848374d <+0x1b>
08483743 +0x011:  mov    $0x0,%eax
08483748 +0x016:  jmp    0848383f <+0x10d>
0848374d +0x01b:  movl   $0x10,-0x20(%ebp)
08483754 +0x022:  lea    -0x20(%ebp),%ebx
08483757 +0x025:  lea    -0x1c(%ebp),%ecx
0848375a +0x028:  mov    0x10(%ebp),%eax
0848375d +0x02b:  mov    (%eax),%eax
0848375f +0x02d:  mov    %eax,%edx
08483761 +0x02f:  mov    0x8(%ebp),%eax
08483764 +0x032:  mov    (%eax),%eax
08483766 +0x034:  mov    %ebx,0x14(%esp)
0848376a +0x038:  mov    %ecx,0x10(%esp)
0848376e +0x03c:  movl   $0x0,0xc(%esp)
08483776 +0x044:  mov    %edx,0x8(%esp)
0848377a +0x048:  mov    0xc(%ebp),%edx
0848377d +0x04b:  mov    %edx,0x4(%esp)
08483781 +0x04f:  mov    %eax,(%esp)
08483784 +0x052:  call   0807d910 <_init+0x208>
08483789 +0x057:  mov    0x10(%ebp),%edx
0848378c +0x05a:  mov    %eax,(%edx)
0848378e +0x05c:  mov    0x10(%ebp),%eax
08483791 +0x05f:  mov    (%eax),%eax
08483793 +0x061:  cmp    $0xffffffff,%eax
08483796 +0x064:  jne    084837e5 <+0xb3>
08483798 +0x066:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
0848379d +0x06b:  mov    %eax,-0xc(%ebp)
084837a0 +0x06e:  mov    -0xc(%ebp),%eax
084837a3 +0x071:  cmp    $0x58,%eax
084837a6 +0x074:  je     084837af <+0x7d>
084837a8 +0x076:  cmp    $0x68,%eax
084837ab +0x079:  je     084837bd <+0x8b>
084837ad +0x07b:  jmp    084837cb <+0x99>
084837af +0x07d:  movl   $"Error fd not a socket",(%esp)
084837b6 +0x084:  call   0807e570 <_init+0xe68>
084837bb +0x089:  jmp    084837de <+0xac>
084837bd +0x08b:  movl   $"Error connection reset - host not reachable",(%esp)
084837c4 +0x092:  call   0807e570 <_init+0xe68>
084837c9 +0x097:  jmp    084837de <+0xac>
084837cb +0x099:  mov    -0xc(%ebp),%eax
084837ce +0x09c:  mov    %eax,0x4(%esp)
084837d2 +0x0a0:  movl   $"Hm! Time out Or Socket Error = %d\n",(%esp)
084837d9 +0x0a7:  call   0807db60 <_init+0x458>
084837de +0x0ac:  mov    $0x0,%eax
084837e3 +0x0b1:  jmp    0848383f <+0x10d>
084837e5 +0x0b3:  mov    0x10(%ebp),%eax
084837e8 +0x0b6:  mov    (%eax),%eax
084837ea +0x0b8:  test   %eax,%eax
084837ec +0x0ba:  jg     0848380a <+0xd8>
084837ee +0x0bc:  mov    0x10(%ebp),%eax
084837f1 +0x0bf:  mov    (%eax),%eax
084837f3 +0x0c1:  mov    %eax,0x4(%esp)
084837f7 +0x0c5:  movl   $"Socket closed? Recv size = %d\n",(%esp)
084837fe +0x0cc:  call   0807db60 <_init+0x458>
08483803 +0x0d1:  mov    $0x0,%eax
08483808 +0x0d6:  jmp    0848383f <+0x10d>
0848380a +0x0d8:  movzwl -0x1a(%ebp),%eax
0848380e +0x0dc:  movzwl %ax,%eax
08483811 +0x0df:  mov    %eax,(%esp)
08483814 +0x0e2:  call   0807de90 <_init+0x788>
08483819 +0x0e7:  mov    0x18(%ebp),%edx
0848381c +0x0ea:  mov    %ax,(%edx)
0848381f +0x0ed:  mov    -0x18(%ebp),%eax
08483822 +0x0f0:  mov    %eax,(%esp)
08483825 +0x0f3:  call   0807db80 <_init+0x478>
0848382a +0x0f8:  mov    0x14(%ebp),%edx
0848382d +0x0fb:  mov    %eax,(%edx)
0848382f +0x0fd:  mov    0x10(%ebp),%eax
08483832 +0x100:  mov    (%eax),%eax
08483834 +0x102:  add    0xc(%ebp),%eax
08483837 +0x105:  movb   $0x0,(%eax)
0848383a +0x108:  mov    $0x1,%eax
0848383f +0x10d:  add    $0x44,%esp
08483842 +0x110:  pop    %ebx
08483843 +0x111:  pop    %ebp
08483844 +0x112:  ret
08483845 +0x113:  nop
```

## 反编译 C

```c
// CUdpHandler::RecvFromClient @ 0x8483732

/* CUdpHandler::RecvFromClient(char*, int*, unsigned int*, unsigned short*) const */

undefined4 __thiscall
CUdpHandler::RecvFromClient
          (CUdpHandler *this,char *param_1,int *param_2,uint *param_3,ushort *param_4)

{
  uint16_t uVar1;
  undefined4 uVar2;
  ssize_t sVar3;
  uint32_t uVar4;
  socklen_t local_24;
  sockaddr local_20;
  int local_10;
  
  if (*(int *)this == -1) {
    uVar2 = 0;
  }
  else {
    local_24 = 0x10;
    sVar3 = recvfrom(*(int *)this,param_1,*param_2,0,&local_20,&local_24);
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
