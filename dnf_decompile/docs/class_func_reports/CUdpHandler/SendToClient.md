# SendToClient

`_ZNK11CUdpHandler12SendToClientEPcitPKcj`

`CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483846` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483846  _ZNK11CUdpHandler12SendToClientEPcitPKcj
#           CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const
# range [0x08483846, 0x08483a51]
08483846 +0x000:  push   %ebp
08483847 +0x001:  mov    %esp,%ebp
08483849 +0x003:  sub    $0x68,%esp
0848384c +0x006:  mov    0x14(%ebp),%eax
0848384f +0x009:  mov    %ax,-0x3c(%ebp)
08483853 +0x00d:  mov    0x8(%ebp),%eax
08483856 +0x010:  mov    0x4(%eax),%eax
08483859 +0x013:  cmp    $0xffffffff,%eax
0848385c +0x016:  jne    084838ae <+0x68>
0848385e +0x018:  movl   $0x5,0xc(%esp)
08483866 +0x020:  movl   $0xe1,0x8(%esp)
0848386e +0x028:  movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
08483876 +0x030:  lea    -0x20(%ebp),%eax
08483879 +0x033:  mov    %eax,(%esp)
0848387c +0x036:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483881 +0x03b:  movl   $0xe1,0xc(%esp)
08483889 +0x043:  movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x8(%esp)
08483891 +0x04b:  movl   $"[%s][%d]",0x4(%esp)
08483899 +0x053:  lea    -0x20(%ebp),%eax
0848389c +0x056:  mov    %eax,(%esp)
0848389f +0x059:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084838a4 +0x05e:  mov    $0x0,%eax
084838a9 +0x063:  jmp    08483a4f <+0x209>
084838ae +0x068:  cmpl   $0x0,0x18(%ebp)
084838b2 +0x06c:  jne    084838c4 <+0x7e>
084838b4 +0x06e:  cmpl   $0x0,0x1c(%ebp)
084838b8 +0x072:  jne    084838c4 <+0x7e>
084838ba +0x074:  mov    $0x0,%eax
084838bf +0x079:  jmp    08483a4f <+0x209>
084838c4 +0x07e:  cmpl   $0x0,0x18(%ebp)
084838c8 +0x082:  je     084838d8 <+0x92>
084838ca +0x084:  mov    0x18(%ebp),%eax
084838cd +0x087:  mov    %eax,(%esp)
084838d0 +0x08a:  call   0807e530 <_init+0xe28>
084838d5 +0x08f:  mov    %eax,0x1c(%ebp)
084838d8 +0x092:  mov    0x8(%ebp),%eax
084838db +0x095:  mov    (%eax),%eax
084838dd +0x097:  cmp    $0xffffffff,%eax
084838e0 +0x09a:  jne    084838ec <+0xa6>
084838e2 +0x09c:  mov    $0x0,%eax
084838e7 +0x0a1:  jmp    08483a4f <+0x209>
084838ec +0x0a6:  cmpw   $0x0,-0x3c(%ebp)
084838f1 +0x0ab:  jne    08483925 <+0xdf>
084838f3 +0x0ad:  cmpl   $0x0,0x1c(%ebp)
084838f7 +0x0b1:  jne    08483999 <+0x153>
084838fd +0x0b7:  mov    0x10(%ebp),%edx
08483900 +0x0ba:  mov    0x8(%ebp),%eax
08483903 +0x0bd:  mov    (%eax),%eax
08483905 +0x0bf:  movl   $0x0,0xc(%esp)
0848390d +0x0c7:  mov    %edx,0x8(%esp)
08483911 +0x0cb:  mov    0xc(%ebp),%edx
08483914 +0x0ce:  mov    %edx,0x4(%esp)
08483918 +0x0d2:  mov    %eax,(%esp)
0848391b +0x0d5:  call   0807db40 <_init+0x438>
08483920 +0x0da:  mov    %eax,-0x10(%ebp)
08483923 +0x0dd:  jmp    08483999 <+0x153>
08483925 +0x0df:  movl   $0x10,0x8(%esp)
0848392d +0x0e7:  movl   $0x0,0x4(%esp)
08483935 +0x0ef:  lea    -0x30(%ebp),%eax
08483938 +0x0f2:  mov    %eax,(%esp)
0848393b +0x0f5:  call   0807dcc0 <_init+0x5b8>
08483940 +0x0fa:  movw   $0x2,-0x30(%ebp)
08483946 +0x100:  movzwl -0x3c(%ebp),%eax
0848394a +0x104:  mov    %eax,(%esp)
0848394d +0x107:  call   0807e680 <_init+0xf78>
08483952 +0x10c:  mov    %ax,-0x2e(%ebp)
08483956 +0x110:  mov    0x1c(%ebp),%eax
08483959 +0x113:  mov    %eax,(%esp)
0848395c +0x116:  call   0807db80 <_init+0x478>
08483961 +0x11b:  mov    %eax,-0x2c(%ebp)
08483964 +0x11e:  lea    -0x30(%ebp),%ecx
08483967 +0x121:  mov    0x10(%ebp),%edx
0848396a +0x124:  mov    0x8(%ebp),%eax
0848396d +0x127:  mov    (%eax),%eax
0848396f +0x129:  movl   $0x10,0x14(%esp)
08483977 +0x131:  mov    %ecx,0x10(%esp)
0848397b +0x135:  movl   $0x0,0xc(%esp)
08483983 +0x13d:  mov    %edx,0x8(%esp)
08483987 +0x141:  mov    0xc(%ebp),%edx
0848398a +0x144:  mov    %edx,0x4(%esp)
0848398e +0x148:  mov    %eax,(%esp)
08483991 +0x14b:  call   0807e1e0 <_init+0xad8>
08483996 +0x150:  mov    %eax,-0x10(%ebp)
08483999 +0x153:  cmpl   $0xffffffff,-0x10(%ebp)
0848399d +0x157:  jne    08483a08 <+0x1c2>
0848399f +0x159:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
084839a4 +0x15e:  mov    %eax,-0xc(%ebp)
084839a7 +0x161:  mov    -0xc(%ebp),%eax
084839aa +0x164:  cmp    $0x61,%eax
084839ad +0x167:  je     084839d1 <+0x18b>
084839af +0x169:  cmp    $0x61,%eax
084839b2 +0x16c:  jl     084839df <+0x199>
084839b4 +0x16e:  sub    $0x6f,%eax
084839b7 +0x171:  cmp    $0x2,%eax
084839ba +0x174:  ja     084839df <+0x199>
084839bc +0x176:  mov    -0xc(%ebp),%eax
084839bf +0x179:  mov    %eax,0x4(%esp)
084839c3 +0x17d:  movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
084839ca +0x184:  call   0807db60 <_init+0x458>
084839cf +0x189:  jmp    08483a01 <+0x1bb>
084839d1 +0x18b:  movl   $"err EAFNOSUPPORT in send",(%esp)
084839d8 +0x192:  call   0807e570 <_init+0xe68>
084839dd +0x197:  jmp    08483a01 <+0x1bb>
084839df +0x199:  mov    -0xc(%ebp),%eax
084839e2 +0x19c:  mov    %eax,(%esp)
084839e5 +0x19f:  call   0807d730 <_init+0x28>
084839ea +0x1a4:  mov    %eax,0x8(%esp)
084839ee +0x1a8:  mov    -0xc(%ebp),%eax
084839f1 +0x1ab:  mov    %eax,0x4(%esp)
084839f5 +0x1af:  movl   $"err = %d , strerror = %s in send\n",(%esp)
084839fc +0x1b6:  call   0807db60 <_init+0x458>
08483a01 +0x1bb:  mov    $0x0,%eax
08483a06 +0x1c0:  jmp    08483a4f <+0x209>
08483a08 +0x1c2:  cmpl   $0x0,-0x10(%ebp)
08483a0c +0x1c6:  jne    08483a21 <+0x1db>
08483a0e +0x1c8:  movl   $"no data sent in send",(%esp)
08483a15 +0x1cf:  call   0807e570 <_init+0xe68>
08483a1a +0x1d4:  mov    $0x0,%eax
08483a1f +0x1d9:  jmp    08483a4f <+0x209>
08483a21 +0x1db:  mov    0x10(%ebp),%eax
08483a24 +0x1de:  cmp    -0x10(%ebp),%eax
08483a27 +0x1e1:  je     08483a4a <+0x204>
08483a29 +0x1e3:  mov    0x10(%ebp),%eax
08483a2c +0x1e6:  mov    %eax,0x8(%esp)
08483a30 +0x1ea:  mov    -0x10(%ebp),%eax
08483a33 +0x1ed:  mov    %eax,0x4(%esp)
08483a37 +0x1f1:  movl   $"Only %s out of %d bytes sent\n",(%esp)
08483a3e +0x1f8:  call   0807db60 <_init+0x458>
08483a43 +0x1fd:  mov    $0x0,%eax
08483a48 +0x202:  jmp    08483a4f <+0x209>
08483a4a +0x204:  mov    $0x1,%eax
08483a4f +0x209:  leave
08483a50 +0x20a:  ret
08483a51 +0x20b:  nop
```

## 反编译 C

```c
// CUdpHandler::SendToClient @ 0x8483846

/* CUdpHandler::SendToClient(char*, int, unsigned short, char const*, unsigned int) const */

undefined4 __thiscall
CUdpHandler::SendToClient
          (CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  sockaddr local_34;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    cMyTrace::cMyTrace(local_24,"SendToClient",0xe1,5);
    cMyTrace::operator()(local_24,"[%s][%d]","SendToClient",0xe1);
    uVar1 = 0;
  }
  else if ((param_4 == (char *)0x0) && (param_5 == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_4 != (char *)0x0) {
      param_5 = inet_addr(param_4);
    }
    if (*(int *)this == -1) {
      uVar1 = 0;
    }
    else {
      if (param_3 == 0) {
        if (param_5 == 0) {
          local_14 = ::send(*(int *)this,param_1,param_2,0);
        }
      }
      else {
        memset(&local_34,0,0x10);
        local_34.sa_family = 2;
        local_34.sa_data._0_2_ = htons(param_3);
        local_34.sa_data._2_4_ = ntohl(param_5);
        local_14 = sendto(*(int *)this,param_1,param_2,0,&local_34,0x10);
      }
      if (local_14 == -1) {
        local_10 = getErrno();
        if (local_10 == 0x61) {
          puts("err EAFNOSUPPORT in send");
        }
        else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
          pcVar2 = strerror(local_10);
          printf("err = %d , strerror = %s in send\n",local_10,pcVar2);
        }
        else {
          printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",local_10);
        }
        uVar1 = 0;
      }
      else if (local_14 == 0) {
        puts("no data sent in send");
        uVar1 = 0;
      }
      else if (param_2 == local_14) {
        uVar1 = 1;
      }
      else {
        printf("Only %s out of %d bytes sent\n",local_14,param_2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
