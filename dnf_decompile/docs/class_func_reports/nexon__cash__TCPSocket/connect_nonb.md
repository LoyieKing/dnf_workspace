# connect_nonb

`_ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval`

`nexon::cash::TCPSocket::connect_nonb(char const*, unsigned short, timeval)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081afa98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081afa98  _ZN5nexon4cash9TCPSocket12connect_nonbEPKct7timeval
#           nexon::cash::TCPSocket::connect_nonb(char const*, unsigned short, timeval)
# range [0x081afa98, 0x081afcc7]
081afa98 +0x000:  push   %ebp
081afa99 +0x001:  mov    %esp,%ebp
081afa9b +0x003:  push   %edi
081afa9c +0x004:  push   %esi
081afa9d +0x005:  push   %ebx
081afa9e +0x006:  sub    $0xec,%esp
081afaa4 +0x00c:  mov    0x10(%ebp),%eax
081afaa7 +0x00f:  mov    %ax,-0xcc(%ebp)
081afaae +0x016:  movl   $0x10,0x8(%esp)
081afab6 +0x01e:  movl   $0x0,0x4(%esp)
081afabe +0x026:  lea    -0x3c(%ebp),%eax
081afac1 +0x029:  mov    %eax,(%esp)
081afac4 +0x02c:  call   0807dcc0 <_init+0x5b8>
081afac9 +0x031:  movw   $0x2,-0x3c(%ebp)
081afacf +0x037:  mov    0xc(%ebp),%eax
081afad2 +0x03a:  mov    %eax,(%esp)
081afad5 +0x03d:  call   0807e530 <_init+0xe28>
081afada +0x042:  mov    %eax,-0x38(%ebp)
081afadd +0x045:  movzwl -0xcc(%ebp),%eax
081afae4 +0x04c:  mov    %eax,(%esp)
081afae7 +0x04f:  call   0807e680 <_init+0xf78>
081afaec +0x054:  mov    %ax,-0x3a(%ebp)
081afaf0 +0x058:  movl   $0x10,-0x2c(%ebp)
081afaf7 +0x05f:  mov    0x8(%ebp),%eax
081afafa +0x062:  mov    %eax,(%esp)
081afafd +0x065:  call   081af85e <_ZN5nexon4cash9TCPSocket14setOptNonBlockEv>  ; nexon::cash::TCPSocket::setOptNonBlock()
081afb02 +0x06a:  movl   $0x0,-0x24(%ebp)
081afb09 +0x071:  mov    -0x2c(%ebp),%ecx
081afb0c +0x074:  lea    -0x3c(%ebp),%edx
081afb0f +0x077:  mov    0x8(%ebp),%eax
081afb12 +0x07a:  mov    (%eax),%eax
081afb14 +0x07c:  mov    %ecx,0x8(%esp)
081afb18 +0x080:  mov    %edx,0x4(%esp)
081afb1c +0x084:  mov    %eax,(%esp)
081afb1f +0x087:  call   0807e230 <_init+0xb28>
081afb24 +0x08c:  mov    %eax,-0x28(%ebp)
081afb27 +0x08f:  mov    -0x28(%ebp),%eax
081afb2a +0x092:  shr    $0x1f,%eax
081afb2d +0x095:  test   %al,%al
081afb2f +0x097:  je     081afb6b <+0xd3>
081afb31 +0x099:  call   0807dd70 <_init+0x668>
081afb36 +0x09e:  mov    (%eax),%eax
081afb38 +0x0a0:  cmp    $0x73,%eax
081afb3b +0x0a3:  je     081afb6b <+0xd3>
081afb3d +0x0a5:  call   0807dd70 <_init+0x668>
081afb42 +0x0aa:  mov    (%eax),%eax
081afb44 +0x0ac:  cmp    $0x4,%eax
081afb47 +0x0af:  je     081afb6b <+0xd3>
081afb49 +0x0b1:  call   0807dd70 <_init+0x668>
081afb4e +0x0b6:  mov    (%eax),%eax
081afb50 +0x0b8:  cmp    $0xb,%eax
081afb53 +0x0bb:  je     081afb6b <+0xd3>
081afb55 +0x0bd:  call   0807dd70 <_init+0x668>
081afb5a +0x0c2:  mov    (%eax),%eax
081afb5c +0x0c4:  cmp    $0xb,%eax
081afb5f +0x0c7:  je     081afb6b <+0xd3>
081afb61 +0x0c9:  mov    $0x0,%eax
081afb66 +0x0ce:  jmp    081afcbd <+0x225>
081afb6b +0x0d3:  cmpl   $0x0,-0x28(%ebp)
081afb6f +0x0d7:  je     081afc8d <+0x1f5>
081afb75 +0x0dd:  lea    -0xc4(%ebp),%eax
081afb7b +0x0e3:  mov    %eax,-0x1c(%ebp)
081afb7e +0x0e6:  movl   $0x0,-0x20(%ebp)
081afb85 +0x0ed:  jmp    081afb98 <+0x100>
081afb87 +0x0ef:  mov    -0x20(%ebp),%edx
081afb8a +0x0f2:  mov    -0x1c(%ebp),%eax
081afb8d +0x0f5:  movl   $0x0,(%eax,%edx,4)
081afb94 +0x0fc:  addl   $0x1,-0x20(%ebp)
081afb98 +0x100:  cmpl   $0x1f,-0x20(%ebp)
081afb9c +0x104:  setbe  %al
081afb9f +0x107:  test   %al,%al
081afba1 +0x109:  jne    081afb87 <+0xef>
081afba3 +0x10b:  mov    0x8(%ebp),%eax
081afba6 +0x10e:  mov    (%eax),%eax
081afba8 +0x110:  shr    $0x5,%eax
081afbab +0x113:  mov    %eax,%edx
081afbad +0x115:  mov    -0xc4(%ebp,%eax,4),%ebx
081afbb4 +0x11c:  mov    0x8(%ebp),%eax
081afbb7 +0x11f:  mov    (%eax),%eax
081afbb9 +0x121:  and    $0x1f,%eax
081afbbc +0x124:  mov    $0x1,%esi
081afbc1 +0x129:  mov    %esi,%edi
081afbc3 +0x12b:  mov    %eax,%ecx
081afbc5 +0x12d:  shl    %cl,%edi
081afbc7 +0x12f:  mov    %edi,%eax
081afbc9 +0x131:  or     %ebx,%eax
081afbcb +0x133:  mov    %eax,-0xc4(%ebp,%edx,4)
081afbd2 +0x13a:  mov    0x8(%ebp),%eax
081afbd5 +0x13d:  mov    (%eax),%eax
081afbd7 +0x13f:  lea    0x1(%eax),%edx
081afbda +0x142:  lea    0x14(%ebp),%eax
081afbdd +0x145:  mov    %eax,0x10(%esp)
081afbe1 +0x149:  movl   $0x0,0xc(%esp)
081afbe9 +0x151:  lea    -0xc4(%ebp),%eax
081afbef +0x157:  mov    %eax,0x8(%esp)
081afbf3 +0x15b:  movl   $0x0,0x4(%esp)
081afbfb +0x163:  mov    %edx,(%esp)
081afbfe +0x166:  call   0807e840 <_init+0x1138>
081afc03 +0x16b:  mov    %eax,-0x28(%ebp)
081afc06 +0x16e:  cmpl   $0x0,-0x28(%ebp)
081afc0a +0x172:  jns    081afc1f <+0x187>
081afc0c +0x174:  call   0807dd70 <_init+0x668>
081afc11 +0x179:  mov    (%eax),%eax
081afc13 +0x17b:  cmp    $0x4,%eax
081afc16 +0x17e:  je     081afc1f <+0x187>
081afc18 +0x180:  mov    $0x1,%eax
081afc1d +0x185:  jmp    081afc24 <+0x18c>
081afc1f +0x187:  mov    $0x0,%eax
081afc24 +0x18c:  test   %al,%al
081afc26 +0x18e:  je     081afc32 <+0x19a>
081afc28 +0x190:  mov    $0x0,%eax
081afc2d +0x195:  jmp    081afcbd <+0x225>
081afc32 +0x19a:  cmpl   $0x0,-0x28(%ebp)
081afc36 +0x19e:  jle    081afc86 <+0x1ee>
081afc38 +0x1a0:  movl   $0x4,-0x40(%ebp)
081afc3f +0x1a7:  lea    -0x44(%ebp),%edx
081afc42 +0x1aa:  mov    0x8(%ebp),%eax
081afc45 +0x1ad:  mov    (%eax),%eax
081afc47 +0x1af:  lea    -0x40(%ebp),%ecx
081afc4a +0x1b2:  mov    %ecx,0x10(%esp)
081afc4e +0x1b6:  mov    %edx,0xc(%esp)
081afc52 +0x1ba:  movl   $0x4,0x8(%esp)
081afc5a +0x1c2:  movl   $0x1,0x4(%esp)
081afc62 +0x1ca:  mov    %eax,(%esp)
081afc65 +0x1cd:  call   0807e6e0 <_init+0xfd8>
081afc6a +0x1d2:  shr    $0x1f,%eax
081afc6d +0x1d5:  test   %al,%al
081afc6f +0x1d7:  je     081afc78 <+0x1e0>
081afc71 +0x1d9:  mov    $0x0,%eax
081afc76 +0x1de:  jmp    081afcbd <+0x225>
081afc78 +0x1e0:  mov    -0x44(%ebp),%eax
081afc7b +0x1e3:  test   %eax,%eax
081afc7d +0x1e5:  je     081afc8d <+0x1f5>
081afc7f +0x1e7:  mov    $0x0,%eax
081afc84 +0x1ec:  jmp    081afcbd <+0x225>
081afc86 +0x1ee:  mov    $0x0,%eax
081afc8b +0x1f3:  jmp    081afcbd <+0x225>
081afc8d +0x1f5:  mov    0x8(%ebp),%eax
081afc90 +0x1f8:  add    $0x14,%eax
081afc93 +0x1fb:  movl   $0x4,0x8(%esp)
081afc9b +0x203:  lea    -0x3c(%ebp),%edx
081afc9e +0x206:  add    $0x4,%edx
081afca1 +0x209:  mov    %edx,0x4(%esp)
081afca5 +0x20d:  mov    %eax,(%esp)
081afca8 +0x210:  call   0807d8a0 <_init+0x198>
081afcad +0x215:  movzwl -0x3a(%ebp),%edx
081afcb1 +0x219:  mov    0x8(%ebp),%eax
081afcb4 +0x21c:  mov    %dx,0x18(%eax)
081afcb8 +0x220:  mov    $0x1,%eax
081afcbd +0x225:  add    $0xec,%esp
081afcc3 +0x22b:  pop    %ebx
081afcc4 +0x22c:  pop    %esi
081afcc5 +0x22d:  pop    %edi
081afcc6 +0x22e:  pop    %ebp
081afcc7 +0x22f:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::connect_nonb @ 0x81afa98

/* nexon::cash::TCPSocket::connect_nonb(char const*, unsigned short, timeval) */

undefined4 nexon::cash::TCPSocket::connect_nonb(char *param_1,ushort param_2,timeval param_3)

{
  bool bVar1;
  uint16_t __hostshort;
  int *piVar2;
  int iVar3;
  undefined2 in_stack_0000000a;
  fd_set local_c8;
  int local_48 [2];
  sockaddr local_40;
  socklen_t local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  fd_set *local_20;
  
  __hostshort = (uint16_t)param_3.tv_sec;
  memset(&local_40,0,0x10);
  local_40.sa_family = 2;
  local_40.sa_data._2_4_ = inet_addr(_param_2);
  local_40.sa_data._0_2_ = htons(__hostshort);
  local_30 = 0x10;
  setOptNonBlock((TCPSocket *)param_1);
  local_28 = 0;
  local_2c = ::connect(*(int *)param_1,&local_40,local_30);
  if ((((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 0x73)) &&
      (piVar2 = __errno_location(), *piVar2 != 4)) &&
     ((piVar2 = __errno_location(), *piVar2 != 0xb && (piVar2 = __errno_location(), *piVar2 != 0xb))
     )) {
    return 0;
  }
  if (local_2c != 0) {
    local_20 = &local_c8;
    for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
      local_c8.fds_bits[local_24] = 0;
    }
    local_c8.fds_bits[*(uint *)param_1 >> 5] =
         1 << ((byte)*(undefined4 *)param_1 & 0x1f) | local_c8.fds_bits[*(uint *)param_1 >> 5];
    local_2c = select(*(int *)param_1 + 1,(fd_set *)0x0,&local_c8,(fd_set *)0x0,
                      (timeval *)&param_3.tv_usec);
    if ((local_2c < 0) && (piVar2 = __errno_location(), *piVar2 != 4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if (local_2c < 1) {
      return 0;
    }
    local_48[1] = 4;
    iVar3 = getsockopt(*(int *)param_1,1,4,local_48,(socklen_t *)(local_48 + 1));
    if (iVar3 < 0) {
      return 0;
    }
    if (local_48[0] != 0) {
      return 0;
    }
  }
  memcpy(param_1 + 0x14,local_40.sa_data + 2,4);
  *(undefined2 *)(param_1 + 0x18) = local_40.sa_data._0_2_;
  return 1;
}
```
