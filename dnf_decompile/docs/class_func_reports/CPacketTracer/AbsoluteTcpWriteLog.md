# AbsoluteTcpWriteLog

`_ZN13CPacketTracer19AbsoluteTcpWriteLogEv`

`CPacketTracer::AbsoluteTcpWriteLog()`

| 类 | 地址 |
|---|---|
| `CPacketTracer` | `0x0859931a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859931a  _ZN13CPacketTracer19AbsoluteTcpWriteLogEv
#           CPacketTracer::AbsoluteTcpWriteLog()
# range [0x0859931a, 0x0859940d]
0859931a +0x00:  push   %ebp
0859931b +0x01:  mov    %esp,%ebp
0859931d +0x03:  push   %edi
0859931e +0x04:  push   %ebx
0859931f +0x05:  sub    $0x840,%esp
08599325 +0x0b:  lea    -0x81c(%ebp),%ebx
0859932b +0x11:  mov    $0x0,%eax
08599330 +0x16:  mov    $0x200,%edx
08599335 +0x1b:  mov    %ebx,%edi
08599337 +0x1d:  mov    %edx,%ecx
08599339 +0x1f:  rep stos %eax,%es:(%edi)
0859933b +0x21:  movl   $0x0,-0xc(%ebp)
08599342 +0x28:  jmp    08599388 <+0x6e>
08599344 +0x2a:  mov    -0xc(%ebp),%edx
08599347 +0x2d:  mov    0x8(%ebp),%eax
0859934a +0x30:  mov    0xc(%eax,%edx,8),%edx
0859934e +0x34:  mov    -0xc(%ebp),%ecx
08599351 +0x37:  mov    0x8(%ebp),%eax
08599354 +0x3a:  movzbl 0x8(%eax,%ecx,8),%eax
08599359 +0x3f:  movzbl %al,%eax
0859935c +0x42:  mov    %edx,0x10(%esp)
08599360 +0x46:  mov    %eax,0xc(%esp)
08599364 +0x4a:  lea    -0x81c(%ebp),%eax
0859936a +0x50:  mov    %eax,0x8(%esp)
0859936e +0x54:  movl   $"%s,%d/%d",0x4(%esp)
08599376 +0x5c:  lea    -0x81c(%ebp),%eax
0859937c +0x62:  mov    %eax,(%esp)
0859937f +0x65:  call   0807e440 <_init+0xd38>
08599384 +0x6a:  addl   $0x1,-0xc(%ebp)
08599388 +0x6e:  cmpl   $0x9,-0xc(%ebp)
0859938c +0x72:  setle  %al
0859938f +0x75:  test   %al,%al
08599391 +0x77:  jne    08599344 <+0x2a>
08599393 +0x79:  mov    0x8(%ebp),%eax
08599396 +0x7c:  mov    (%eax),%eax
08599398 +0x7e:  lea    -0x1(%eax),%edx
0859939b +0x81:  mov    0x8(%ebp),%eax
0859939e +0x84:  mov    %edx,(%eax)
085993a0 +0x86:  mov    0x8(%ebp),%eax
085993a3 +0x89:  mov    (%eax),%ecx
085993a5 +0x8b:  mov    $0xcccccccd,%edx
085993aa +0x90:  mov    %ecx,%eax
085993ac +0x92:  mul    %edx
085993ae +0x94:  mov    %edx,%ebx
085993b0 +0x96:  shr    $0x3,%ebx
085993b3 +0x99:  mov    %ebx,%eax
085993b5 +0x9b:  shl    $0x2,%eax
085993b8 +0x9e:  add    %ebx,%eax
085993ba +0xa0:  add    %eax,%eax
085993bc +0xa2:  mov    %ecx,%ebx
085993be +0xa4:  sub    %eax,%ebx
085993c0 +0xa6:  movl   $0x0,0xc(%esp)
085993c8 +0xae:  movl   $0x41,0x8(%esp)
085993d0 +0xb6:  movl   $&_ZZN13CPacketTracer19AbsoluteTcpWriteLogEvE12__FUNCTION__,0x4(%esp)
085993d8 +0xbe:  lea    -0x1c(%ebp),%eax
085993db +0xc1:  mov    %eax,(%esp)
085993de +0xc4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085993e3 +0xc9:  lea    -0x81c(%ebp),%eax
085993e9 +0xcf:  mov    %eax,0xc(%esp)
085993ed +0xd3:  mov    %ebx,0x8(%esp)
085993f1 +0xd7:  movl   $"[TRACE_TCP_PACKET] (idx:%d)%s",0x4(%esp)
085993f9 +0xdf:  lea    -0x1c(%ebp),%eax
085993fc +0xe2:  mov    %eax,(%esp)
085993ff +0xe5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08599404 +0xea:  add    $0x840,%esp
0859940a +0xf0:  pop    %ebx
0859940b +0xf1:  pop    %edi
0859940c +0xf2:  pop    %ebp
0859940d +0xf3:  ret
```

## 反编译 C

```c
// CPacketTracer::AbsoluteTcpWriteLog @ 0x859931a

/* CPacketTracer::AbsoluteTcpWriteLog() */

void __thiscall CPacketTracer::AbsoluteTcpWriteLog(CPacketTracer *this)

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
    sprintf(local_820,"%s,%d/%d",local_820,(uint)(byte)this[local_10 * 8 + 8],
            *(undefined4 *)(this + local_10 * 8 + 0xc));
  }
  *(int *)this = *(int *)this + -1;
  uVar1 = *(uint *)this;
  cMyTrace::cMyTrace(local_20,"AbsoluteTcpWriteLog",0x41,0);
  cMyTrace::operator()(local_20,"[TRACE_TCP_PACKET] (idx:%d)%s",uVar1 % 10,local_820);
  return;
}
```
