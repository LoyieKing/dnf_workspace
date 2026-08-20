# RecvPacket

`_ZN15CmmChannelProxy10RecvPacketEv`

`CmmChannelProxy::RecvPacket()`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x0810645c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810645c  _ZN15CmmChannelProxy10RecvPacketEv
#           CmmChannelProxy::RecvPacket()
# range [0x0810645c, 0x081066e9]
0810645c +0x000:  push   %ebp
0810645d +0x001:  mov    %esp,%ebp
0810645f +0x003:  push   %edi
08106460 +0x004:  push   %esi
08106461 +0x005:  push   %ebx
08106462 +0x006:  sub    $0xfc,%esp
08106468 +0x00c:  movl   $0x0,-0x2c(%ebp)
0810646f +0x013:  movl   $0x12c,-0x54(%ebp)
08106476 +0x01a:  movl   $0x0,-0x50(%ebp)
0810647d +0x021:  movl   $0x0,-0x28(%ebp)
08106484 +0x028:  lea    -0xdc(%ebp),%eax
0810648a +0x02e:  mov    %eax,-0x1c(%ebp)
0810648d +0x031:  movl   $0x0,-0x20(%ebp)
08106494 +0x038:  jmp    081064a7 <+0x4b>
08106496 +0x03a:  mov    -0x20(%ebp),%edx
08106499 +0x03d:  mov    -0x1c(%ebp),%eax
0810649c +0x040:  movl   $0x0,(%eax,%edx,4)
081064a3 +0x047:  addl   $0x1,-0x20(%ebp)
081064a7 +0x04b:  cmpl   $0x1f,-0x20(%ebp)
081064ab +0x04f:  setbe  %al
081064ae +0x052:  test   %al,%al
081064b0 +0x054:  jne    08106496 <+0x3a>
081064b2 +0x056:  mov    0x8(%ebp),%eax
081064b5 +0x059:  mov    0x18(%eax),%eax
081064b8 +0x05c:  shr    $0x5,%eax
081064bb +0x05f:  mov    %eax,%edx
081064bd +0x061:  mov    -0xdc(%ebp,%eax,4),%ebx
081064c4 +0x068:  mov    0x8(%ebp),%eax
081064c7 +0x06b:  mov    0x18(%eax),%eax
081064ca +0x06e:  and    $0x1f,%eax
081064cd +0x071:  mov    $0x1,%esi
081064d2 +0x076:  mov    %esi,%edi
081064d4 +0x078:  mov    %eax,%ecx
081064d6 +0x07a:  shl    %cl,%edi
081064d8 +0x07c:  mov    %edi,%eax
081064da +0x07e:  or     %ebx,%eax
081064dc +0x080:  mov    %eax,-0xdc(%ebp,%edx,4)
081064e3 +0x087:  mov    0x8(%ebp),%eax
081064e6 +0x08a:  mov    0x18(%eax),%eax
081064e9 +0x08d:  lea    0x1(%eax),%edx
081064ec +0x090:  lea    -0x54(%ebp),%eax
081064ef +0x093:  mov    %eax,0x10(%esp)
081064f3 +0x097:  movl   $0x0,0xc(%esp)
081064fb +0x09f:  movl   $0x0,0x8(%esp)
08106503 +0x0a7:  lea    -0xdc(%ebp),%eax
08106509 +0x0ad:  mov    %eax,0x4(%esp)
0810650d +0x0b1:  mov    %edx,(%esp)
08106510 +0x0b4:  call   0807e840 <_init+0x1138>
08106515 +0x0b9:  mov    %eax,-0x2c(%ebp)
08106518 +0x0bc:  cmpl   $0x0,-0x2c(%ebp)
0810651c +0x0c0:  jg     08106528 <+0xcc>
0810651e +0x0c2:  mov    $0x0,%eax
08106523 +0x0c7:  jmp    081066df <+0x283>
08106528 +0x0cc:  movl   $0x0,-0x58(%ebp)
0810652f +0x0d3:  movl   $0x4,-0x5c(%ebp)
08106536 +0x0da:  lea    -0x58(%ebp),%edx
08106539 +0x0dd:  mov    0x8(%ebp),%eax
0810653c +0x0e0:  mov    0x18(%eax),%eax
0810653f +0x0e3:  lea    -0x5c(%ebp),%ecx
08106542 +0x0e6:  mov    %ecx,0x10(%esp)
08106546 +0x0ea:  mov    %edx,0xc(%esp)
0810654a +0x0ee:  movl   $0x8,0x8(%esp)
08106552 +0x0f6:  movl   $0x1,0x4(%esp)
0810655a +0x0fe:  mov    %eax,(%esp)
0810655d +0x101:  call   0807e6e0 <_init+0xfd8>
08106562 +0x106:  movl   $0x64,(%esp)
08106569 +0x10d:  call   0858c4e0 <_ZN6OS_API5SleepEi>  ; OS_API::Sleep(int)
0810656e +0x112:  mov    0x8(%ebp),%eax
08106571 +0x115:  mov    0x1c(%eax),%eax
08106574 +0x118:  mov    $0x80000,%edx
08106579 +0x11d:  mov    %edx,%ecx
0810657b +0x11f:  sub    %eax,%ecx
0810657d +0x121:  mov    %ecx,%eax
0810657f +0x123:  mov    %eax,%edx
08106581 +0x125:  mov    0x8(%ebp),%eax
08106584 +0x128:  lea    0x20(%eax),%ecx
08106587 +0x12b:  mov    0x8(%ebp),%eax
0810658a +0x12e:  mov    0x1c(%eax),%eax
0810658d +0x131:  add    %eax,%ecx
0810658f +0x133:  mov    0x8(%ebp),%eax
08106592 +0x136:  mov    0x18(%eax),%eax
08106595 +0x139:  mov    %edx,0x8(%esp)
08106599 +0x13d:  mov    %ecx,0x4(%esp)
0810659d +0x141:  mov    %eax,(%esp)
081065a0 +0x144:  call   0807de60 <_init+0x758>
081065a5 +0x149:  mov    %eax,-0x24(%ebp)
081065a8 +0x14c:  mov    -0x24(%ebp),%eax
081065ab +0x14f:  shr    $0x1f,%eax
081065ae +0x152:  test   %al,%al
081065b0 +0x154:  je     08106659 <+0x1fd>
081065b6 +0x15a:  call   0807dd70 <_init+0x668>
081065bb +0x15f:  mov    (%eax),%eax
081065bd +0x161:  cmp    $0xb,%eax
081065c0 +0x164:  je     081065e5 <+0x189>
081065c2 +0x166:  call   0807dd70 <_init+0x668>
081065c7 +0x16b:  mov    (%eax),%eax
081065c9 +0x16d:  cmp    $0x4,%eax
081065cc +0x170:  je     081065e5 <+0x189>
081065ce +0x172:  call   0807dd70 <_init+0x668>
081065d3 +0x177:  mov    (%eax),%eax
081065d5 +0x179:  cmp    $0xb,%eax
081065d8 +0x17c:  je     081065e5 <+0x189>
081065da +0x17e:  call   0807dd70 <_init+0x668>
081065df +0x183:  mov    (%eax),%eax
081065e1 +0x185:  test   %eax,%eax
081065e3 +0x187:  jne    081065ef <+0x193>
081065e5 +0x189:  mov    $0x0,%eax
081065ea +0x18e:  jmp    081066df <+0x283>
081065ef +0x193:  call   0807dd70 <_init+0x668>
081065f4 +0x198:  mov    (%eax),%eax
081065f6 +0x19a:  mov    %eax,(%esp)
081065f9 +0x19d:  call   0807d730 <_init+0x28>
081065fe +0x1a2:  mov    %eax,%ebx
08106600 +0x1a4:  call   0807dd70 <_init+0x668>
08106605 +0x1a9:  mov    (%eax),%edi
08106607 +0x1ab:  mov    0x8(%ebp),%eax
0810660a +0x1ae:  mov    0x18(%eax),%esi
0810660d +0x1b1:  movl   $0x0,0xc(%esp)
08106615 +0x1b9:  movl   $0x114,0x8(%esp)
0810661d +0x1c1:  movl   $&_ZZN15CmmChannelProxy10RecvPacketEvE19__PRETTY_FUNCTION__,0x4(%esp)
08106625 +0x1c9:  lea    -0x4c(%ebp),%eax
08106628 +0x1cc:  mov    %eax,(%esp)
0810662b +0x1cf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08106630 +0x1d4:  mov    %ebx,0x10(%esp)
08106634 +0x1d8:  mov    %edi,0xc(%esp)
08106638 +0x1dc:  mov    %esi,0x8(%esp)
0810663c +0x1e0:  movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
08106644 +0x1e8:  lea    -0x4c(%ebp),%eax
08106647 +0x1eb:  mov    %eax,(%esp)
0810664a +0x1ee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810664f +0x1f3:  mov    $0xffffffff,%eax
08106654 +0x1f8:  jmp    081066df <+0x283>
08106659 +0x1fd:  cmpl   $0x0,-0x24(%ebp)
0810665d +0x201:  jne    081066cb <+0x26f>
0810665f +0x203:  call   0807dd70 <_init+0x668>
08106664 +0x208:  mov    (%eax),%eax
08106666 +0x20a:  mov    %eax,(%esp)
08106669 +0x20d:  call   0807d730 <_init+0x28>
0810666e +0x212:  mov    %eax,%ebx
08106670 +0x214:  call   0807dd70 <_init+0x668>
08106675 +0x219:  mov    (%eax),%esi
08106677 +0x21b:  movl   $0x0,0xc(%esp)
0810667f +0x223:  movl   $0x11a,0x8(%esp)
08106687 +0x22b:  movl   $&_ZZN15CmmChannelProxy10RecvPacketEvE19__PRETTY_FUNCTION__,0x4(%esp)
0810668f +0x233:  lea    -0x3c(%ebp),%eax
08106692 +0x236:  mov    %eax,(%esp)
08106695 +0x239:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810669a +0x23e:  mov    -0x24(%ebp),%eax
0810669d +0x241:  mov    %eax,0x14(%esp)
081066a1 +0x245:  movl   $0x80000,0x10(%esp)
081066a9 +0x24d:  mov    %ebx,0xc(%esp)
081066ad +0x251:  mov    %esi,0x8(%esp)
081066b1 +0x255:  movl   $"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",0x4(%esp)
081066b9 +0x25d:  lea    -0x3c(%ebp),%eax
081066bc +0x260:  mov    %eax,(%esp)
081066bf +0x263:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081066c4 +0x268:  mov    $0xffffffff,%eax
081066c9 +0x26d:  jmp    081066df <+0x283>
081066cb +0x26f:  mov    0x8(%ebp),%eax
081066ce +0x272:  mov    0x1c(%eax),%eax
081066d1 +0x275:  mov    %eax,%edx
081066d3 +0x277:  add    -0x24(%ebp),%edx
081066d6 +0x27a:  mov    0x8(%ebp),%eax
081066d9 +0x27d:  mov    %edx,0x1c(%eax)
081066dc +0x280:  mov    -0x24(%ebp),%eax
081066df +0x283:  add    $0xfc,%esp
081066e5 +0x289:  pop    %ebx
081066e6 +0x28a:  pop    %esi
081066e7 +0x28b:  pop    %edi
081066e8 +0x28c:  pop    %ebp
081066e9 +0x28d:  ret
```

## 反编译 C

```c
// CmmChannelProxy::RecvPacket @ 0x810645c

/* WARNING: Type propagation algorithm not settling */
/* CmmChannelProxy::RecvPacket() */

ssize_t __thiscall CmmChannelProxy::RecvPacket(CmmChannelProxy *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  fd_set local_e0;
  socklen_t local_60 [2];
  timeval local_58;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  undefined4 local_2c;
  ssize_t local_28;
  uint local_24;
  fd_set *local_20;
  
  local_30 = 0;
  local_58.tv_sec = 300;
  local_58.tv_usec = 0;
  local_2c = 0;
  local_20 = &local_e0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_e0.fds_bits[local_24] = 0;
  }
  local_e0.fds_bits[*(uint *)(this + 0x18) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 0x18) & 0x1f) |
       local_e0.fds_bits[*(uint *)(this + 0x18) >> 5];
  local_30 = select(*(int *)(this + 0x18) + 1,&local_e0,(fd_set *)0x0,(fd_set *)0x0,&local_58);
  if (local_30 < 1) {
    local_28 = 0;
  }
  else {
    local_60[1] = 0;
    local_60[0] = 4;
    getsockopt(*(int *)(this + 0x18),1,8,local_60 + 1,local_60);
    OS_API::Sleep(100);
    local_28 = ::read(*(int *)(this + 0x18),this + *(int *)(this + 0x1c) + 0x20,
                      0x80000 - *(int *)(this + 0x1c));
    if (local_28 < 0) {
      piVar3 = __errno_location();
      if ((((*piVar3 != 0xb) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
          (piVar3 = __errno_location(), *piVar3 != 0xb)) &&
         (piVar3 = __errno_location(), *piVar3 != 0)) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        uVar2 = *(undefined4 *)(this + 0x18);
        cMyTrace::cMyTrace(local_50,"int CmmChannelProxy::RecvPacket()",0x114,0);
        cMyTrace::operator()
                  (local_50,"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar2,iVar1,pcVar4);
        return -1;
      }
      local_28 = 0;
    }
    else if (local_28 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      cMyTrace::cMyTrace(local_40,"int CmmChannelProxy::RecvPacket()",0x11a,0);
      cMyTrace::operator()
                (local_40,"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",iVar1,pcVar4,0x80000,
                 local_28);
      local_28 = -1;
    }
    else {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + local_28;
    }
  }
  return local_28;
}
```
