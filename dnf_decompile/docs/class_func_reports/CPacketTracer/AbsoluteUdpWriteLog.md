# AbsoluteUdpWriteLog

`_ZN13CPacketTracer19AbsoluteUdpWriteLogEv`

`CPacketTracer::AbsoluteUdpWriteLog()`

| 类 | 地址 |
|---|---|
| `CPacketTracer` | `0x0859940e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859940e  _ZN13CPacketTracer19AbsoluteUdpWriteLogEv
#           CPacketTracer::AbsoluteUdpWriteLog()
# range [0x0859940e, 0x0859950a]
0859940e +0x00:  push   %ebp
0859940f +0x01:  mov    %esp,%ebp
08599411 +0x03:  push   %edi
08599412 +0x04:  push   %ebx
08599413 +0x05:  sub    $0x840,%esp
08599419 +0x0b:  lea    -0x81c(%ebp),%ebx
0859941f +0x11:  mov    $0x0,%eax
08599424 +0x16:  mov    $0x200,%edx
08599429 +0x1b:  mov    %ebx,%edi
0859942b +0x1d:  mov    %edx,%ecx
0859942d +0x1f:  rep stos %eax,%es:(%edi)
0859942f +0x21:  movl   $0x0,-0xc(%ebp)
08599436 +0x28:  jmp    08599482 <+0x74>
08599438 +0x2a:  mov    -0xc(%ebp),%edx
0859943b +0x2d:  mov    0x8(%ebp),%eax
0859943e +0x30:  add    $0xa,%edx
08599441 +0x33:  mov    0xc(%eax,%edx,8),%edx
08599445 +0x37:  mov    -0xc(%ebp),%ecx
08599448 +0x3a:  mov    0x8(%ebp),%eax
0859944b +0x3d:  add    $0xa,%ecx
0859944e +0x40:  movzbl 0x8(%eax,%ecx,8),%eax
08599453 +0x45:  movzbl %al,%eax
08599456 +0x48:  mov    %edx,0x10(%esp)
0859945a +0x4c:  mov    %eax,0xc(%esp)
0859945e +0x50:  lea    -0x81c(%ebp),%eax
08599464 +0x56:  mov    %eax,0x8(%esp)
08599468 +0x5a:  movl   $"%s,%d/%d",0x4(%esp)
08599470 +0x62:  lea    -0x81c(%ebp),%eax
08599476 +0x68:  mov    %eax,(%esp)
08599479 +0x6b:  call   0807e440 <_init+0xd38>
0859947e +0x70:  addl   $0x1,-0xc(%ebp)
08599482 +0x74:  cmpl   $0x9,-0xc(%ebp)
08599486 +0x78:  setle  %al
08599489 +0x7b:  test   %al,%al
0859948b +0x7d:  jne    08599438 <+0x2a>
0859948d +0x7f:  mov    0x8(%ebp),%eax
08599490 +0x82:  mov    0x4(%eax),%eax
08599493 +0x85:  lea    -0x1(%eax),%edx
08599496 +0x88:  mov    0x8(%ebp),%eax
08599499 +0x8b:  mov    %edx,0x4(%eax)
0859949c +0x8e:  mov    0x8(%ebp),%eax
0859949f +0x91:  mov    0x4(%eax),%ecx
085994a2 +0x94:  mov    $0xcccccccd,%edx
085994a7 +0x99:  mov    %ecx,%eax
085994a9 +0x9b:  mul    %edx
085994ab +0x9d:  mov    %edx,%ebx
085994ad +0x9f:  shr    $0x3,%ebx
085994b0 +0xa2:  mov    %ebx,%eax
085994b2 +0xa4:  shl    $0x2,%eax
085994b5 +0xa7:  add    %ebx,%eax
085994b7 +0xa9:  add    %eax,%eax
085994b9 +0xab:  mov    %ecx,%ebx
085994bb +0xad:  sub    %eax,%ebx
085994bd +0xaf:  movl   $0x0,0xc(%esp)
085994c5 +0xb7:  movl   $0x5a,0x8(%esp)
085994cd +0xbf:  movl   $&_ZZN13CPacketTracer19AbsoluteUdpWriteLogEvE12__FUNCTION__,0x4(%esp)
085994d5 +0xc7:  lea    -0x1c(%ebp),%eax
085994d8 +0xca:  mov    %eax,(%esp)
085994db +0xcd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085994e0 +0xd2:  lea    -0x81c(%ebp),%eax
085994e6 +0xd8:  mov    %eax,0xc(%esp)
085994ea +0xdc:  mov    %ebx,0x8(%esp)
085994ee +0xe0:  movl   $"[TRACE_UDP_PACKET] (idx:%d)%s",0x4(%esp)
085994f6 +0xe8:  lea    -0x1c(%ebp),%eax
085994f9 +0xeb:  mov    %eax,(%esp)
085994fc +0xee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08599501 +0xf3:  add    $0x840,%esp
08599507 +0xf9:  pop    %ebx
08599508 +0xfa:  pop    %edi
08599509 +0xfb:  pop    %ebp
0859950a +0xfc:  ret
```

## 反编译 C

```c
// CPacketTracer::AbsoluteUdpWriteLog @ 0x859940e

/* CPacketTracer::AbsoluteUdpWriteLog() */

void __thiscall CPacketTracer::AbsoluteUdpWriteLog(CPacketTracer *this)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char local_820 [2048];
  cMyTrace local_20 [16];
  int local_10;
  
  pcVar3 = local_820;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    sprintf(local_820,"%s,%d/%d",local_820,(uint)(byte)this[(local_10 + 10) * 8 + 8],
            *(undefined4 *)(this + (local_10 + 10) * 8 + 0xc));
  }
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  uVar1 = *(uint *)(this + 4);
  cMyTrace::cMyTrace(local_20,"AbsoluteUdpWriteLog",0x5a,0);
  cMyTrace::operator()(local_20,"[TRACE_UDP_PACKET] (idx:%d)%s",uVar1 % 10,local_820);
  return;
}
```
