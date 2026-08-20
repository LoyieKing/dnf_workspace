# ReceiveRegistAck

`_ZN10DbmwClient16ReceiveRegistAckEv`

`DbmwClient::ReceiveRegistAck()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120702` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120702  _ZN10DbmwClient16ReceiveRegistAckEv
#           DbmwClient::ReceiveRegistAck()
# range [0x08120702, 0x081209b9]
08120702 +0x000:  push   %ebp
08120703 +0x001:  mov    %esp,%ebp
08120705 +0x003:  push   %edi
08120706 +0x004:  push   %esi
08120707 +0x005:  push   %ebx
08120708 +0x006:  sub    $0x10c,%esp
0812070e +0x00c:  mov    0x8(%ebp),%eax
08120711 +0x00f:  movl   $0x2,0x14(%eax)
08120718 +0x016:  mov    0x8(%ebp),%eax
0812071b +0x019:  movl   $0x0,0x18(%eax)
08120722 +0x020:  lea    -0xf0(%ebp),%eax
08120728 +0x026:  mov    %eax,-0x1c(%ebp)
0812072b +0x029:  movl   $0x0,-0x20(%ebp)
08120732 +0x030:  jmp    08120745 <+0x43>
08120734 +0x032:  mov    -0x20(%ebp),%edx
08120737 +0x035:  mov    -0x1c(%ebp),%eax
0812073a +0x038:  movl   $0x0,(%eax,%edx,4)
08120741 +0x03f:  addl   $0x1,-0x20(%ebp)
08120745 +0x043:  cmpl   $0x1f,-0x20(%ebp)
08120749 +0x047:  setbe  %al
0812074c +0x04a:  test   %al,%al
0812074e +0x04c:  jne    08120734 <+0x32>
08120750 +0x04e:  mov    0x8(%ebp),%eax
08120753 +0x051:  mov    0x8(%eax),%eax
08120756 +0x054:  shr    $0x5,%eax
08120759 +0x057:  mov    %eax,%edx
0812075b +0x059:  mov    -0xf0(%ebp,%eax,4),%ebx
08120762 +0x060:  mov    0x8(%ebp),%eax
08120765 +0x063:  mov    0x8(%eax),%eax
08120768 +0x066:  and    $0x1f,%eax
0812076b +0x069:  mov    $0x1,%esi
08120770 +0x06e:  mov    %esi,%edi
08120772 +0x070:  mov    %eax,%ecx
08120774 +0x072:  shl    %cl,%edi
08120776 +0x074:  mov    %edi,%eax
08120778 +0x076:  or     %ebx,%eax
0812077a +0x078:  mov    %eax,-0xf0(%ebp,%edx,4)
08120781 +0x07f:  mov    0x8(%ebp),%eax
08120784 +0x082:  lea    0x14(%eax),%ecx
08120787 +0x085:  mov    0x8(%ebp),%eax
0812078a +0x088:  mov    0x8(%eax),%eax
0812078d +0x08b:  lea    0x1(%eax),%edx
08120790 +0x08e:  mov    %ecx,0x10(%esp)
08120794 +0x092:  movl   $0x0,0xc(%esp)
0812079c +0x09a:  movl   $0x0,0x8(%esp)
081207a4 +0x0a2:  lea    -0xf0(%ebp),%eax
081207aa +0x0a8:  mov    %eax,0x4(%esp)
081207ae +0x0ac:  mov    %edx,(%esp)
081207b1 +0x0af:  call   0807e840 <_init+0x1138>
081207b6 +0x0b4:  mov    %eax,-0x28(%ebp)
081207b9 +0x0b7:  cmpl   $0x0,-0x28(%ebp)
081207bd +0x0bb:  jg     0812082a <+0x128>
081207bf +0x0bd:  call   0807dd70 <_init+0x668>
081207c4 +0x0c2:  mov    (%eax),%eax
081207c6 +0x0c4:  mov    %eax,(%esp)
081207c9 +0x0c7:  call   0807d730 <_init+0x28>
081207ce +0x0cc:  mov    %eax,%ebx
081207d0 +0x0ce:  call   0807dd70 <_init+0x668>
081207d5 +0x0d3:  mov    (%eax),%esi
081207d7 +0x0d5:  movl   $0x0,0xc(%esp)
081207df +0x0dd:  movl   $0xfd,0x8(%esp)
081207e7 +0x0e5:  movl   $&_ZZN10DbmwClient16ReceiveRegistAckEvE12__FUNCTION__,0x4(%esp)
081207ef +0x0ed:  lea    -0x70(%ebp),%eax
081207f2 +0x0f0:  mov    %eax,(%esp)
081207f5 +0x0f3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081207fa +0x0f8:  mov    %ebx,0xc(%esp)
081207fe +0x0fc:  mov    %esi,0x8(%esp)
08120802 +0x100:  movl   $"AccountDBMW select error : %d(%s)",0x4(%esp)
0812080a +0x108:  lea    -0x70(%ebp),%eax
0812080d +0x10b:  mov    %eax,(%esp)
08120810 +0x10e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08120815 +0x113:  mov    0x8(%ebp),%eax
08120818 +0x116:  mov    %eax,(%esp)
0812081b +0x119:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
08120820 +0x11e:  mov    $0x0,%eax
08120825 +0x123:  jmp    081209ae <+0x2ac>
0812082a +0x128:  mov    0x8(%ebp),%eax
0812082d +0x12b:  mov    0x8(%eax),%eax
08120830 +0x12e:  shr    $0x5,%eax
08120833 +0x131:  mov    -0xf0(%ebp,%eax,4),%edx
0812083a +0x138:  mov    0x8(%ebp),%eax
0812083d +0x13b:  mov    0x8(%eax),%eax
08120840 +0x13e:  and    $0x1f,%eax
08120843 +0x141:  mov    %edx,%ebx
08120845 +0x143:  mov    %eax,%ecx
08120847 +0x145:  sar    %cl,%ebx
08120849 +0x147:  mov    %ebx,%eax
0812084b +0x149:  and    $0x1,%eax
0812084e +0x14c:  xor    $0x1,%eax
08120851 +0x14f:  test   %al,%al
08120853 +0x151:  jne    0812082a <+0x128>
08120855 +0x153:  movl   $0x12,-0x30(%ebp)
0812085c +0x15a:  mov    0x8(%ebp),%eax
0812085f +0x15d:  mov    0x2c(%eax),%eax
08120862 +0x160:  mov    -0x30(%ebp),%edx
08120865 +0x163:  mov    %edx,0x8(%esp)
08120869 +0x167:  mov    %eax,0x4(%esp)
0812086d +0x16b:  mov    0x8(%ebp),%eax
08120870 +0x16e:  mov    %eax,(%esp)
08120873 +0x171:  call   08120b32 <_ZN10DbmwClient8ReadDataEPci>  ; DbmwClient::ReadData(char*, int)
08120878 +0x176:  mov    %eax,-0x2c(%ebp)
0812087b +0x179:  mov    -0x30(%ebp),%eax
0812087e +0x17c:  cmp    -0x2c(%ebp),%eax
08120881 +0x17f:  je     081208e2 <+0x1e0>
08120883 +0x181:  cmpl   $0xffffffff,-0x2c(%ebp)
08120887 +0x185:  je     081208cd <+0x1cb>
08120889 +0x187:  movl   $0x0,0xc(%esp)
08120891 +0x18f:  movl   $0x110,0x8(%esp)
08120899 +0x197:  movl   $&_ZZN10DbmwClient16ReceiveRegistAckEvE12__FUNCTION__,0x4(%esp)
081208a1 +0x19f:  lea    -0x60(%ebp),%eax
081208a4 +0x1a2:  mov    %eax,(%esp)
081208a7 +0x1a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081208ac +0x1aa:  mov    -0x30(%ebp),%eax
081208af +0x1ad:  mov    %eax,0xc(%esp)
081208b3 +0x1b1:  mov    -0x2c(%ebp),%eax
081208b6 +0x1b4:  mov    %eax,0x8(%esp)
081208ba +0x1b8:  movl   $"ReceiveRegistAck read size error : %d, expected : %d",0x4(%esp)
081208c2 +0x1c0:  lea    -0x60(%ebp),%eax
081208c5 +0x1c3:  mov    %eax,(%esp)
081208c8 +0x1c6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081208cd +0x1cb:  mov    0x8(%ebp),%eax
081208d0 +0x1ce:  mov    %eax,(%esp)
081208d3 +0x1d1:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
081208d8 +0x1d6:  mov    $0x0,%eax
081208dd +0x1db:  jmp    081209ae <+0x2ac>
081208e2 +0x1e0:  mov    0x8(%ebp),%eax
081208e5 +0x1e3:  mov    0x2c(%eax),%eax
081208e8 +0x1e6:  movzbl 0x1(%eax),%eax
081208ec +0x1ea:  movsbl %al,%eax
081208ef +0x1ed:  mov    %eax,-0x24(%ebp)
081208f2 +0x1f0:  movl   $0x0,0xc(%esp)
081208fa +0x1f8:  movl   $0x117,0x8(%esp)
08120902 +0x200:  movl   $&_ZZN10DbmwClient16ReceiveRegistAckEvE12__FUNCTION__,0x4(%esp)
0812090a +0x208:  lea    -0x50(%ebp),%eax
0812090d +0x20b:  mov    %eax,(%esp)
08120910 +0x20e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120915 +0x213:  mov    -0x24(%ebp),%eax
08120918 +0x216:  mov    %eax,0x8(%esp)
0812091c +0x21a:  movl   $"AccountDBMW read msg_no : %d",0x4(%esp)
08120924 +0x222:  lea    -0x50(%ebp),%eax
08120927 +0x225:  mov    %eax,(%esp)
0812092a +0x228:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812092f +0x22d:  cmpl   $0x0,-0x24(%ebp)
08120933 +0x231:  jne    08120972 <+0x270>
08120935 +0x233:  movl   $0x0,0xc(%esp)
0812093d +0x23b:  movl   $0x11d,0x8(%esp)
08120945 +0x243:  movl   $&_ZZN10DbmwClient16ReceiveRegistAckEvE12__FUNCTION__,0x4(%esp)
0812094d +0x24b:  lea    -0x40(%ebp),%eax
08120950 +0x24e:  mov    %eax,(%esp)
08120953 +0x251:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08120958 +0x256:  movl   $"AccountDBMW regist Ok",0x4(%esp)
08120960 +0x25e:  lea    -0x40(%ebp),%eax
08120963 +0x261:  mov    %eax,(%esp)
08120966 +0x264:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812096b +0x269:  mov    $0x1,%eax
08120970 +0x26e:  jmp    081209ae <+0x2ac>
08120972 +0x270:  mov    0x8(%ebp),%eax
08120975 +0x273:  mov    %eax,(%esp)
08120978 +0x276:  call   08120ab0 <_ZN10DbmwClient5CloseEv>  ; DbmwClient::Close()
0812097d +0x27b:  movl   $"AccountDBMW regist fail",0x10(%esp)
08120985 +0x283:  movl   $0x123,0xc(%esp)
0812098d +0x28b:  movl   $&_ZZN10DbmwClient16ReceiveRegistAckEvE12__FUNCTION__,0x8(%esp)
08120995 +0x293:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
0812099d +0x29b:  movl   $0x1,(%esp)
081209a4 +0x2a2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081209a9 +0x2a7:  mov    $0x0,%eax
081209ae +0x2ac:  add    $0x10c,%esp
081209b4 +0x2b2:  pop    %ebx
081209b5 +0x2b3:  pop    %esi
081209b6 +0x2b4:  pop    %edi
081209b7 +0x2b5:  pop    %ebp
081209b8 +0x2b6:  ret
081209b9 +0x2b7:  nop
```

## 反编译 C

```c
// DbmwClient::ReceiveRegistAck @ 0x8120702

/* DbmwClient::ReceiveRegistAck() */

undefined4 __thiscall DbmwClient::ReceiveRegistAck(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  fd_set local_f4;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  fd_set *local_20;
  
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  local_20 = &local_f4;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_f4.fds_bits[local_24] = 0;
  }
  local_f4.fds_bits[*(uint *)(this + 8) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 8) & 0x1f) | local_f4.fds_bits[*(uint *)(this + 8) >> 5];
  local_2c = select(*(int *)(this + 8) + 1,&local_f4,(fd_set *)0x0,(fd_set *)0x0,
                    (timeval *)(this + 0x14));
  if (local_2c < 1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    cMyTrace::cMyTrace(local_74,"ReceiveRegistAck",0xfd,0);
    cMyTrace::operator()(local_74,"AccountDBMW select error : %d(%s)",iVar1,pcVar3);
    Close(this);
    uVar4 = 0;
  }
  else {
    do {
    } while (((byte)(local_f4.fds_bits[*(uint *)(this + 8) >> 5] >>
                    ((byte)*(undefined4 *)(this + 8) & 0x1f)) & 1) != 1);
    local_34 = 0x12;
    local_30 = ReadData(this,*(char **)(this + 0x2c),0x12);
    if (local_34 == local_30) {
      local_28 = (int)*(char *)(*(int *)(this + 0x2c) + 1);
      cMyTrace::cMyTrace(local_54,"ReceiveRegistAck",0x117,0);
      cMyTrace::operator()(local_54,"AccountDBMW read msg_no : %d",local_28);
      if (local_28 == 0) {
        cMyTrace::cMyTrace(local_44,"ReceiveRegistAck",0x11d,0);
        cMyTrace::operator()(local_44,"AccountDBMW regist Ok");
        uVar4 = 1;
      }
      else {
        Close(this);
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","ReceiveRegistAck",0x123,"AccountDBMW regist fail")
        ;
        uVar4 = 0;
      }
    }
    else {
      if (local_30 != -1) {
        cMyTrace::cMyTrace(local_64,"ReceiveRegistAck",0x110,0);
        cMyTrace::operator()
                  (local_64,"ReceiveRegistAck read size error : %d, expected : %d",local_30,local_34
                  );
      }
      Close(this);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
