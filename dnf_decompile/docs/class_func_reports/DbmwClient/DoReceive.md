# DoReceive

`_ZN10DbmwClient9DoReceiveEv`

`DbmwClient::DoReceive()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120dbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120dbc  _ZN10DbmwClient9DoReceiveEv
#           DbmwClient::DoReceive()
# range [0x08120dbc, 0x08121155]
08120dbc +0x000:  push   %ebp
08120dbd +0x001:  mov    %esp,%ebp
08120dbf +0x003:  push   %edi
08120dc0 +0x004:  push   %esi
08120dc1 +0x005:  push   %ebx
08120dc2 +0x006:  sub    $0x12c,%esp
08120dc8 +0x00c:  mov    0x8(%ebp),%eax
08120dcb +0x00f:  movl   $0x2,0x14(%eax)
08120dd2 +0x016:  mov    0x8(%ebp),%eax
08120dd5 +0x019:  movl   $0x0,0x18(%eax)
08120ddc +0x020:  lea    -0x10c(%ebp),%eax
08120de2 +0x026:  mov    %eax,-0x1c(%ebp)
08120de5 +0x029:  movl   $0x0,-0x20(%ebp)
08120dec +0x030:  jmp    08120dff <+0x43>
08120dee +0x032:  mov    -0x20(%ebp),%edx
08120df1 +0x035:  mov    -0x1c(%ebp),%eax
08120df4 +0x038:  movl   $0x0,(%eax,%edx,4)
08120dfb +0x03f:  addl   $0x1,-0x20(%ebp)
08120dff +0x043:  cmpl   $0x1f,-0x20(%ebp)
08120e03 +0x047:  setbe  %al
08120e06 +0x04a:  test   %al,%al
08120e08 +0x04c:  jne    08120dee <+0x32>
08120e0a +0x04e:  mov    0x8(%ebp),%eax
08120e0d +0x051:  mov    0x8(%eax),%eax
08120e10 +0x054:  shr    $0x5,%eax
08120e13 +0x057:  mov    %eax,%edx
08120e15 +0x059:  mov    -0x10c(%ebp,%eax,4),%ebx
08120e1c +0x060:  mov    0x8(%ebp),%eax
08120e1f +0x063:  mov    0x8(%eax),%eax
08120e22 +0x066:  and    $0x1f,%eax
08120e25 +0x069:  mov    $0x1,%esi
08120e2a +0x06e:  mov    %esi,%edi
08120e2c +0x070:  mov    %eax,%ecx
08120e2e +0x072:  shl    %cl,%edi
08120e30 +0x074:  mov    %edi,%eax
08120e32 +0x076:  or     %ebx,%eax
08120e34 +0x078:  mov    %eax,-0x10c(%ebp,%edx,4)
08120e3b +0x07f:  mov    0x8(%ebp),%eax
08120e3e +0x082:  lea    0x14(%eax),%ecx
08120e41 +0x085:  mov    0x8(%ebp),%eax
08120e44 +0x088:  mov    0x8(%eax),%eax
08120e47 +0x08b:  lea    0x1(%eax),%edx
08120e4a +0x08e:  mov    %ecx,0x10(%esp)
08120e4e +0x092:  movl   $0x0,0xc(%esp)
08120e56 +0x09a:  movl   $0x0,0x8(%esp)
08120e5e +0x0a2:  lea    -0x10c(%ebp),%eax
08120e64 +0x0a8:  mov    %eax,0x4(%esp)
08120e68 +0x0ac:  mov    %edx,(%esp)
08120e6b +0x0af:  call   0807e840 <_init+0x1138>
08120e70 +0x0b4:  mov    %eax,-0x34(%ebp)
08120e73 +0x0b7:  cmpl   $0x0,-0x34(%ebp)
08120e77 +0x0bb:  jg     08120eea <+0x12e>
08120e79 +0x0bd:  call   0807dd70 <_init+0x668>
08120e7e +0x0c2:  mov    (%eax),%eax
08120e80 +0x0c4:  mov    %eax,(%esp)
08120e83 +0x0c7:  call   0807d730 <_init+0x28>
08120e88 +0x0cc:  mov    %eax,%ebx
08120e8a +0x0ce:  call   0807dd70 <_init+0x668>
08120e8f +0x0d3:  mov    (%eax),%esi
08120e91 +0x0d5:  movl   $0x0,0xc(%esp)
08120e99 +0x0dd:  movl   $0x25e,0x8(%esp)
08120ea1 +0x0e5:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x4(%esp)
08120ea9 +0x0ed:  lea    -0x8c(%ebp),%eax
08120eaf +0x0f3:  mov    %eax,(%esp)
08120eb2 +0x0f6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120eb7 +0x0fb:  mov    %ebx,0xc(%esp)
08120ebb +0x0ff:  mov    %esi,0x8(%esp)
08120ebf +0x103:  movl   $"AccountDBMW select error : %d(%s)",0x4(%esp)
08120ec7 +0x10b:  lea    -0x8c(%ebp),%eax
08120ecd +0x111:  mov    %eax,(%esp)
08120ed0 +0x114:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08120ed5 +0x119:  mov    0x8(%ebp),%eax
08120ed8 +0x11c:  mov    %eax,(%esp)
08120edb +0x11f:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08120ee0 +0x124:  mov    $0x0,%eax
08120ee5 +0x129:  jmp    0812114b <+0x38f>
08120eea +0x12e:  mov    0x8(%ebp),%eax
08120eed +0x131:  mov    0x8(%eax),%eax
08120ef0 +0x134:  shr    $0x5,%eax
08120ef3 +0x137:  mov    -0x10c(%ebp,%eax,4),%edx
08120efa +0x13e:  mov    0x8(%ebp),%eax
08120efd +0x141:  mov    0x8(%eax),%eax
08120f00 +0x144:  and    $0x1f,%eax
08120f03 +0x147:  mov    %edx,%ebx
08120f05 +0x149:  mov    %eax,%ecx
08120f07 +0x14b:  sar    %cl,%ebx
08120f09 +0x14d:  mov    %ebx,%eax
08120f0b +0x14f:  and    $0x1,%eax
08120f0e +0x152:  xor    $0x1,%eax
08120f11 +0x155:  test   %al,%al
08120f13 +0x157:  jne    08120eea <+0x12e>
08120f15 +0x159:  movl   $0x12,-0x3c(%ebp)
08120f1c +0x160:  mov    0x8(%ebp),%eax
08120f1f +0x163:  mov    0x2c(%eax),%eax
08120f22 +0x166:  mov    -0x3c(%ebp),%edx
08120f25 +0x169:  mov    %edx,0x8(%esp)
08120f29 +0x16d:  mov    %eax,0x4(%esp)
08120f2d +0x171:  mov    0x8(%ebp),%eax
08120f30 +0x174:  mov    %eax,(%esp)
08120f33 +0x177:  call   08120b32 <_ZN10DbmwClient8ReadDataEPci>  ; DbmwClient::ReadData(char*, int)
08120f38 +0x17c:  mov    %eax,-0x38(%ebp)
08120f3b +0x17f:  mov    -0x3c(%ebp),%eax
08120f3e +0x182:  cmp    -0x38(%ebp),%eax
08120f41 +0x185:  je     08120fa2 <+0x1e6>
08120f43 +0x187:  cmpl   $0xffffffff,-0x38(%ebp)
08120f47 +0x18b:  je     08120f8d <+0x1d1>
08120f49 +0x18d:  movl   $0x0,0xc(%esp)
08120f51 +0x195:  movl   $0x271,0x8(%esp)
08120f59 +0x19d:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x4(%esp)
08120f61 +0x1a5:  lea    -0x7c(%ebp),%eax
08120f64 +0x1a8:  mov    %eax,(%esp)
08120f67 +0x1ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120f6c +0x1b0:  mov    -0x3c(%ebp),%eax
08120f6f +0x1b3:  mov    %eax,0xc(%esp)
08120f73 +0x1b7:  mov    -0x38(%ebp),%eax
08120f76 +0x1ba:  mov    %eax,0x8(%esp)
08120f7a +0x1be:  movl   $"AccountDBMW header read size error : %d, expected : %d",0x4(%esp)
08120f82 +0x1c6:  lea    -0x7c(%ebp),%eax
08120f85 +0x1c9:  mov    %eax,(%esp)
08120f88 +0x1cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08120f8d +0x1d1:  mov    0x8(%ebp),%eax
08120f90 +0x1d4:  mov    %eax,(%esp)
08120f93 +0x1d7:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08120f98 +0x1dc:  mov    $0x0,%eax
08120f9d +0x1e1:  jmp    0812114b <+0x38f>
08120fa2 +0x1e6:  mov    0x8(%ebp),%eax
08120fa5 +0x1e9:  mov    0x2c(%eax),%eax
08120fa8 +0x1ec:  movzbl 0x1(%eax),%eax
08120fac +0x1f0:  movsbl %al,%eax
08120faf +0x1f3:  mov    %eax,-0x30(%ebp)
08120fb2 +0x1f6:  movl   $0x0,0xc(%esp)
08120fba +0x1fe:  movl   $0x278,0x8(%esp)
08120fc2 +0x206:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x4(%esp)
08120fca +0x20e:  lea    -0x6c(%ebp),%eax
08120fcd +0x211:  mov    %eax,(%esp)
08120fd0 +0x214:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120fd5 +0x219:  mov    -0x30(%ebp),%eax
08120fd8 +0x21c:  mov    %eax,0x8(%esp)
08120fdc +0x220:  movl   $"AccountDBMW read msg_no : %d",0x4(%esp)
08120fe4 +0x228:  lea    -0x6c(%ebp),%eax
08120fe7 +0x22b:  mov    %eax,(%esp)
08120fea +0x22e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08120fef +0x233:  cmpl   $0x1,-0x30(%ebp)
08120ff3 +0x237:  jne    0812100a <+0x24e>
08120ff5 +0x239:  mov    0x8(%ebp),%eax
08120ff8 +0x23c:  mov    %eax,(%esp)
08120ffb +0x23f:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08121000 +0x244:  mov    $0x1,%eax
08121005 +0x249:  jmp    0812114b <+0x38f>
0812100a +0x24e:  mov    0x8(%ebp),%eax
0812100d +0x251:  mov    0x2c(%eax),%eax
08121010 +0x254:  mov    0x2(%eax),%eax
08121013 +0x257:  cmp    $0x1a,%eax
08121016 +0x25a:  jbe    08121059 <+0x29d>
08121018 +0x25c:  mov    0x8(%ebp),%eax
0812101b +0x25f:  mov    %eax,(%esp)
0812101e +0x262:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08121023 +0x267:  movl   $"AccountDBMW header packet size invalid!!",0x10(%esp)
0812102b +0x26f:  movl   $0x284,0xc(%esp)
08121033 +0x277:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x8(%esp)
0812103b +0x27f:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
08121043 +0x287:  movl   $0x1,(%esp)
0812104a +0x28e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0812104f +0x293:  mov    $0x0,%eax
08121054 +0x298:  jmp    0812114b <+0x38f>
08121059 +0x29d:  mov    0x8(%ebp),%eax
0812105c +0x2a0:  mov    0x2c(%eax),%eax
0812105f +0x2a3:  mov    0x2(%eax),%eax
08121062 +0x2a6:  sub    $0x12,%eax
08121065 +0x2a9:  mov    %eax,-0x3c(%ebp)
08121068 +0x2ac:  mov    0x8(%ebp),%eax
0812106b +0x2af:  mov    0x2c(%eax),%eax
0812106e +0x2b2:  lea    0x12(%eax),%edx
08121071 +0x2b5:  mov    -0x3c(%ebp),%eax
08121074 +0x2b8:  mov    %eax,0x8(%esp)
08121078 +0x2bc:  mov    %edx,0x4(%esp)
0812107c +0x2c0:  mov    0x8(%ebp),%eax
0812107f +0x2c3:  mov    %eax,(%esp)
08121082 +0x2c6:  call   08120b32 <_ZN10DbmwClient8ReadDataEPci>  ; DbmwClient::ReadData(char*, int)
08121087 +0x2cb:  mov    %eax,-0x38(%ebp)
0812108a +0x2ce:  mov    -0x3c(%ebp),%eax
0812108d +0x2d1:  cmp    -0x38(%ebp),%eax
08121090 +0x2d4:  je     081210e7 <+0x32b>
08121092 +0x2d6:  cmpl   $0xffffffff,-0x38(%ebp)
08121096 +0x2da:  je     081210d5 <+0x319>
08121098 +0x2dc:  movl   $0x0,0xc(%esp)
081210a0 +0x2e4:  movl   $0x290,0x8(%esp)
081210a8 +0x2ec:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x4(%esp)
081210b0 +0x2f4:  lea    -0x5c(%ebp),%eax
081210b3 +0x2f7:  mov    %eax,(%esp)
081210b6 +0x2fa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081210bb +0x2ff:  mov    -0x38(%ebp),%eax
081210be +0x302:  mov    %eax,0x8(%esp)
081210c2 +0x306:  movl   $"AccountDBMW payload read size error:%d",0x4(%esp)
081210ca +0x30e:  lea    -0x5c(%ebp),%eax
081210cd +0x311:  mov    %eax,(%esp)
081210d0 +0x314:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081210d5 +0x319:  mov    0x8(%ebp),%eax
081210d8 +0x31c:  mov    %eax,(%esp)
081210db +0x31f:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
081210e0 +0x324:  mov    $0x0,%eax
081210e5 +0x329:  jmp    0812114b <+0x38f>
081210e7 +0x32b:  movl   $0x0,0xc(%esp)
081210ef +0x333:  movl   $0x296,0x8(%esp)
081210f7 +0x33b:  movl   $&_ZZN10DbmwClient9DoReceiveEvE12__FUNCTION__,0x4(%esp)
081210ff +0x343:  lea    -0x4c(%ebp),%eax
08121102 +0x346:  mov    %eax,(%esp)
08121105 +0x349:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0812110a +0x34e:  movl   $"AccountDBMW payload read ok",0x4(%esp)
08121112 +0x356:  lea    -0x4c(%ebp),%eax
08121115 +0x359:  mov    %eax,(%esp)
08121118 +0x35c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812111d +0x361:  mov    0x8(%ebp),%eax
08121120 +0x364:  mov    0x2c(%eax),%eax
08121123 +0x367:  add    $0x12,%eax
08121126 +0x36a:  mov    %eax,-0x28(%ebp)
08121129 +0x36d:  mov    -0x28(%ebp),%eax
0812112c +0x370:  mov    %eax,-0x24(%ebp)
0812112f +0x373:  mov    -0x24(%ebp),%eax
08121132 +0x376:  mov    (%eax),%eax
08121134 +0x378:  mov    %eax,-0x2c(%ebp)
08121137 +0x37b:  addl   $0x4,-0x24(%ebp)
0812113b +0x37f:  mov    -0x24(%ebp),%eax
0812113e +0x382:  mov    (%eax),%edx
08121140 +0x384:  mov    0x8(%ebp),%eax
08121143 +0x387:  mov    %edx,0x30(%eax)
08121146 +0x38a:  mov    $0x2,%eax
0812114b +0x38f:  add    $0x12c,%esp
08121151 +0x395:  pop    %ebx
08121152 +0x396:  pop    %esi
08121153 +0x397:  pop    %edi
08121154 +0x398:  pop    %ebp
08121155 +0x399:  ret
```

## 反编译 C

```c
// DbmwClient::DoReceive @ 0x8120dbc

/* DbmwClient::DoReceive() */

undefined4 __thiscall DbmwClient::DoReceive(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  fd_set local_110;
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_24;
  fd_set *local_20;
  
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  local_20 = &local_110;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_110.fds_bits[local_24] = 0;
  }
  local_110.fds_bits[*(uint *)(this + 8) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 8) & 0x1f) | local_110.fds_bits[*(uint *)(this + 8) >> 5];
  local_38 = select(*(int *)(this + 8) + 1,&local_110,(fd_set *)0x0,(fd_set *)0x0,
                    (timeval *)(this + 0x14));
  if (local_38 < 1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    cMyTrace::cMyTrace(local_90,"DoReceive",0x25e,0);
    cMyTrace::operator()(local_90,"AccountDBMW select error : %d(%s)",iVar1,pcVar3);
    Close(this);
    uVar4 = 0;
  }
  else {
    do {
    } while (((byte)(local_110.fds_bits[*(uint *)(this + 8) >> 5] >>
                    ((byte)*(undefined4 *)(this + 8) & 0x1f)) & 1) != 1);
    local_40 = 0x12;
    local_3c = ReadData(this,*(char **)(this + 0x2c),0x12);
    if (local_40 == local_3c) {
      local_34 = (int)*(char *)(*(int *)(this + 0x2c) + 1);
      cMyTrace::cMyTrace(local_70,"DoReceive",0x278,0);
      cMyTrace::operator()(local_70,"AccountDBMW read msg_no : %d",local_34);
      if (local_34 == 1) {
        Close(this);
        uVar4 = 1;
      }
      else if (*(uint *)(*(int *)(this + 0x2c) + 2) < 0x1b) {
        local_40 = *(int *)(*(int *)(this + 0x2c) + 2) + -0x12;
        local_3c = ReadData(this,(char *)(*(int *)(this + 0x2c) + 0x12),local_40);
        if (local_40 == local_3c) {
          cMyTrace::cMyTrace(local_50,"DoReceive",0x296,0);
          cMyTrace::operator()(local_50,"AccountDBMW payload read ok");
          *(undefined4 *)(this + 0x30) = *(undefined4 *)(*(int *)(this + 0x2c) + 0x16);
          uVar4 = 2;
        }
        else {
          if (local_3c != -1) {
            cMyTrace::cMyTrace(local_60,"DoReceive",0x290,0);
            cMyTrace::operator()(local_60,"AccountDBMW payload read size error:%d",local_3c);
          }
          Close(this);
          uVar4 = 0;
        }
      }
      else {
        Close(this);
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","DoReceive",0x284,
                   "AccountDBMW header packet size invalid!!");
        uVar4 = 0;
      }
    }
    else {
      if (local_3c != -1) {
        cMyTrace::cMyTrace(local_80,"DoReceive",0x271,0);
        cMyTrace::operator()
                  (local_80,"AccountDBMW header read size error : %d, expected : %d",local_3c,
                   local_40);
      }
      Close(this);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
