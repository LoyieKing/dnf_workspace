# SendToServer

`_ZNK11CUdpHandler12SendToServerEPcitPKc`

`CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const`

| 类 | 地址 |
|---|---|
| `CUdpHandler` | `0x08483b68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08483b68  _ZNK11CUdpHandler12SendToServerEPcitPKc
#           CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
# range [0x08483b68, 0x08483e05]
08483b68 +0x000:  push   %ebp
08483b69 +0x001:  mov    %esp,%ebp
08483b6b +0x003:  sub    $0xb8,%esp
08483b71 +0x009:  mov    0x14(%ebp),%eax
08483b74 +0x00c:  mov    %ax,-0x8c(%ebp)
08483b7b +0x013:  mov    0x8(%ebp),%eax
08483b7e +0x016:  mov    0x4(%eax),%eax
08483b81 +0x019:  cmp    $0xffffffff,%eax
08483b84 +0x01c:  jne    08483bd6 <+0x6e>
08483b86 +0x01e:  movl   $0x5,0xc(%esp)
08483b8e +0x026:  movl   $0x194,0x8(%esp)
08483b96 +0x02e:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483b9e +0x036:  lea    -0x70(%ebp),%eax
08483ba1 +0x039:  mov    %eax,(%esp)
08483ba4 +0x03c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483ba9 +0x041:  movl   $0x194,0xc(%esp)
08483bb1 +0x049:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x8(%esp)
08483bb9 +0x051:  movl   $"[%s][%d]",0x4(%esp)
08483bc1 +0x059:  lea    -0x70(%ebp),%eax
08483bc4 +0x05c:  mov    %eax,(%esp)
08483bc7 +0x05f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483bcc +0x064:  mov    $0x0,%eax
08483bd1 +0x069:  jmp    08483e04 <+0x29c>
08483bd6 +0x06e:  mov    0x8(%ebp),%eax
08483bd9 +0x071:  mov    0x4(%eax),%eax
08483bdc +0x074:  cmp    $0xffffffff,%eax
08483bdf +0x077:  jne    08483beb <+0x83>
08483be1 +0x079:  mov    $0x0,%eax
08483be6 +0x07e:  jmp    08483e04 <+0x29c>
08483beb +0x083:  cmpw   $0x0,-0x8c(%ebp)
08483bf3 +0x08b:  jne    08483c28 <+0xc0>
08483bf5 +0x08d:  cmpl   $0x0,0x18(%ebp)
08483bf9 +0x091:  jne    08483ca0 <+0x138>
08483bff +0x097:  mov    0x10(%ebp),%edx
08483c02 +0x09a:  mov    0x8(%ebp),%eax
08483c05 +0x09d:  mov    0x4(%eax),%eax
08483c08 +0x0a0:  movl   $0x0,0xc(%esp)
08483c10 +0x0a8:  mov    %edx,0x8(%esp)
08483c14 +0x0ac:  mov    0xc(%ebp),%edx
08483c17 +0x0af:  mov    %edx,0x4(%esp)
08483c1b +0x0b3:  mov    %eax,(%esp)
08483c1e +0x0b6:  call   0807db40 <_init+0x438>
08483c23 +0x0bb:  mov    %eax,-0x10(%ebp)
08483c26 +0x0be:  jmp    08483ca0 <+0x138>
08483c28 +0x0c0:  lea    -0x80(%ebp),%eax
08483c2b +0x0c3:  movl   $0x10,0x8(%esp)
08483c33 +0x0cb:  movl   $0x0,0x4(%esp)
08483c3b +0x0d3:  mov    %eax,(%esp)
08483c3e +0x0d6:  call   0807dcc0 <_init+0x5b8>
08483c43 +0x0db:  movw   $0x2,-0x80(%ebp)
08483c49 +0x0e1:  movzwl -0x8c(%ebp),%eax
08483c50 +0x0e8:  mov    %eax,(%esp)
08483c53 +0x0eb:  call   0807e680 <_init+0xf78>
08483c58 +0x0f0:  mov    %ax,-0x7e(%ebp)
08483c5c +0x0f4:  mov    0x18(%ebp),%eax
08483c5f +0x0f7:  mov    %eax,(%esp)
08483c62 +0x0fa:  call   0807e530 <_init+0xe28>
08483c67 +0x0ff:  mov    %eax,-0x7c(%ebp)
08483c6a +0x102:  lea    -0x80(%ebp),%ecx
08483c6d +0x105:  mov    0x10(%ebp),%edx
08483c70 +0x108:  mov    0x8(%ebp),%eax
08483c73 +0x10b:  mov    0x4(%eax),%eax
08483c76 +0x10e:  movl   $0x10,0x14(%esp)
08483c7e +0x116:  mov    %ecx,0x10(%esp)
08483c82 +0x11a:  movl   $0x0,0xc(%esp)
08483c8a +0x122:  mov    %edx,0x8(%esp)
08483c8e +0x126:  mov    0xc(%ebp),%edx
08483c91 +0x129:  mov    %edx,0x4(%esp)
08483c95 +0x12d:  mov    %eax,(%esp)
08483c98 +0x130:  call   0807e1e0 <_init+0xad8>
08483c9d +0x135:  mov    %eax,-0x10(%ebp)
08483ca0 +0x138:  cmpl   $0xffffffff,-0x10(%ebp)
08483ca4 +0x13c:  jne    08483d77 <+0x20f>
08483caa +0x142:  call   08483e75 <_GLOBAL__I__ZN11CUdpHandlerC2Ev+0x1c>  ; global constructors keyed to CUdpHandler::CUdpHandler()+0x1c
08483caf +0x147:  mov    %eax,-0xc(%ebp)
08483cb2 +0x14a:  mov    -0xc(%ebp),%eax
08483cb5 +0x14d:  cmp    $0x61,%eax
08483cb8 +0x150:  je     08483cff <+0x197>
08483cba +0x152:  cmp    $0x61,%eax
08483cbd +0x155:  jl     08483d37 <+0x1cf>
08483cbf +0x157:  sub    $0x6f,%eax
08483cc2 +0x15a:  cmp    $0x2,%eax
08483cc5 +0x15d:  ja     08483d37 <+0x1cf>
08483cc7 +0x15f:  movl   $0x5,0xc(%esp)
08483ccf +0x167:  movl   $0x1ca,0x8(%esp)
08483cd7 +0x16f:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483cdf +0x177:  lea    -0x60(%ebp),%eax
08483ce2 +0x17a:  mov    %eax,(%esp)
08483ce5 +0x17d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483cea +0x182:  movl   $"CUdpHandler::SendToServer Error: EHOSTUNREACH",0x4(%esp)
08483cf2 +0x18a:  lea    -0x60(%ebp),%eax
08483cf5 +0x18d:  mov    %eax,(%esp)
08483cf8 +0x190:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483cfd +0x195:  jmp    08483d6d <+0x205>
08483cff +0x197:  movl   $0x5,0xc(%esp)
08483d07 +0x19f:  movl   $0x1d1,0x8(%esp)
08483d0f +0x1a7:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483d17 +0x1af:  lea    -0x50(%ebp),%eax
08483d1a +0x1b2:  mov    %eax,(%esp)
08483d1d +0x1b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483d22 +0x1ba:  movl   $"CUdpHandler::SendToServer Error: EAFNOSUPPORT",0x4(%esp)
08483d2a +0x1c2:  lea    -0x50(%ebp),%eax
08483d2d +0x1c5:  mov    %eax,(%esp)
08483d30 +0x1c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483d35 +0x1cd:  jmp    08483d6d <+0x205>
08483d37 +0x1cf:  movl   $0x5,0xc(%esp)
08483d3f +0x1d7:  movl   $0x1d8,0x8(%esp)
08483d47 +0x1df:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483d4f +0x1e7:  lea    -0x40(%ebp),%eax
08483d52 +0x1ea:  mov    %eax,(%esp)
08483d55 +0x1ed:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483d5a +0x1f2:  movl   $"CUdpHandler::SendToServer Error : other err",0x4(%esp)
08483d62 +0x1fa:  lea    -0x40(%ebp),%eax
08483d65 +0x1fd:  mov    %eax,(%esp)
08483d68 +0x200:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483d6d +0x205:  mov    $0x0,%eax
08483d72 +0x20a:  jmp    08483e04 <+0x29c>
08483d77 +0x20f:  cmpl   $0x0,-0x10(%ebp)
08483d7b +0x213:  jne    08483dba <+0x252>
08483d7d +0x215:  movl   $0x5,0xc(%esp)
08483d85 +0x21d:  movl   $0x1e2,0x8(%esp)
08483d8d +0x225:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483d95 +0x22d:  lea    -0x30(%ebp),%eax
08483d98 +0x230:  mov    %eax,(%esp)
08483d9b +0x233:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483da0 +0x238:  movl   $"CUdpHandler::SendToServer Error: 0 == s",0x4(%esp)
08483da8 +0x240:  lea    -0x30(%ebp),%eax
08483dab +0x243:  mov    %eax,(%esp)
08483dae +0x246:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483db3 +0x24b:  mov    $0x0,%eax
08483db8 +0x250:  jmp    08483e04 <+0x29c>
08483dba +0x252:  mov    0x10(%ebp),%eax
08483dbd +0x255:  cmp    -0x10(%ebp),%eax
08483dc0 +0x258:  je     08483dff <+0x297>
08483dc2 +0x25a:  movl   $0x5,0xc(%esp)
08483dca +0x262:  movl   $0x1ea,0x8(%esp)
08483dd2 +0x26a:  movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
08483dda +0x272:  lea    -0x20(%ebp),%eax
08483ddd +0x275:  mov    %eax,(%esp)
08483de0 +0x278:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08483de5 +0x27d:  movl   $"CUdpHandler::SendToServer Error : len != s",0x4(%esp)
08483ded +0x285:  lea    -0x20(%ebp),%eax
08483df0 +0x288:  mov    %eax,(%esp)
08483df3 +0x28b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08483df8 +0x290:  mov    $0x0,%eax
08483dfd +0x295:  jmp    08483e04 <+0x29c>
08483dff +0x297:  mov    $0x1,%eax
08483e04 +0x29c:  leave
08483e05 +0x29d:  ret
```

## 反编译 C

```c
// CUdpHandler::SendToServer @ 0x8483b68

/* CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const */

undefined4 __thiscall
CUdpHandler::SendToServer(CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4)

{
  undefined4 uVar1;
  sockaddr local_84;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    cMyTrace::cMyTrace(local_74,"SendToServer",0x194,5);
    cMyTrace::operator()(local_74,"[%s][%d]","SendToServer",0x194);
    uVar1 = 0;
  }
  else if (*(int *)(this + 4) == -1) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      if (param_4 == (char *)0x0) {
        local_14 = ::send(*(int *)(this + 4),param_1,param_2,0);
      }
    }
    else {
      memset(&local_84,0,0x10);
      local_84.sa_family = 2;
      local_84.sa_data._0_2_ = htons(param_3);
      local_84.sa_data._2_4_ = inet_addr(param_4);
      local_14 = sendto(*(int *)(this + 4),param_1,param_2,0,&local_84,0x10);
    }
    if (local_14 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x61) {
        cMyTrace::cMyTrace(local_54,"SendToServer",0x1d1,5);
        cMyTrace::operator()(local_54,"CUdpHandler::SendToServer Error: EAFNOSUPPORT");
      }
      else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
        cMyTrace::cMyTrace(local_44,"SendToServer",0x1d8,5);
        cMyTrace::operator()(local_44,"CUdpHandler::SendToServer Error : other err");
      }
      else {
        cMyTrace::cMyTrace(local_64,"SendToServer",0x1ca,5);
        cMyTrace::operator()(local_64,"CUdpHandler::SendToServer Error: EHOSTUNREACH");
      }
      uVar1 = 0;
    }
    else if (local_14 == 0) {
      cMyTrace::cMyTrace(local_34,"SendToServer",0x1e2,5);
      cMyTrace::operator()(local_34,"CUdpHandler::SendToServer Error: 0 == s");
      uVar1 = 0;
    }
    else if (param_2 == local_14) {
      uVar1 = 1;
    }
    else {
      cMyTrace::cMyTrace(local_24,"SendToServer",0x1ea,5);
      cMyTrace::operator()(local_24,"CUdpHandler::SendToServer Error : len != s");
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
