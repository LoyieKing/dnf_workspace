# SendGuildExpLimit

`_ZN17CGuildServerProxy17SendGuildExpLimitEv`

`CGuildServerProxy::SendGuildExpLimit()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ee44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ee44  _ZN17CGuildServerProxy17SendGuildExpLimitEv
#           CGuildServerProxy::SendGuildExpLimit()
# range [0x0846ee44, 0x0846eed9]
0846ee44 +0x00:  push   %ebp
0846ee45 +0x01:  mov    %esp,%ebp
0846ee47 +0x03:  push   %ebx
0846ee48 +0x04:  sub    $0x74,%esp
0846ee4b +0x07:  lea    -0x66(%ebp),%eax
0846ee4e +0x0a:  mov    %eax,(%esp)
0846ee51 +0x0d:  call   0846f6fe <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x4ce>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x4ce
0846ee56 +0x12:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0846ee5b +0x17:  mov    %eax,(%esp)
0846ee5e +0x1a:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0846ee63 +0x1f:  mov    %eax,-0x5c(%ebp)
0846ee66 +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846ee6b +0x27:  mov    0xa5ac(%eax),%eax
0846ee71 +0x2d:  mov    %eax,-0x58(%ebp)
0846ee74 +0x30:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846ee79 +0x35:  mov    0xa5ec(%eax),%eax
0846ee7f +0x3b:  mov    %eax,-0x54(%ebp)
0846ee82 +0x3e:  movl   $0x0,-0xc(%ebp)
0846ee89 +0x45:  jmp    0846eeab <+0x67>
0846ee8b +0x47:  mov    -0xc(%ebp),%ebx
0846ee8e +0x4a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846ee93 +0x4f:  mov    -0xc(%ebp),%edx
0846ee96 +0x52:  add    $0x14aa,%edx
0846ee9c +0x58:  mov    0x1c(%eax,%edx,8),%eax
0846eea0 +0x5c:  lea    0x4(%ebx),%edx
0846eea3 +0x5f:  mov    %eax,-0x60(%ebp,%edx,4)
0846eea7 +0x63:  addl   $0x1,-0xc(%ebp)
0846eeab +0x67:  cmpl   $0x10,-0xc(%ebp)
0846eeaf +0x6b:  setle  %al
0846eeb2 +0x6e:  test   %al,%al
0846eeb4 +0x70:  jne    0846ee8b <+0x47>
0846eeb6 +0x72:  movzwl -0x64(%ebp),%eax
0846eeba +0x76:  movzwl %ax,%edx
0846eebd +0x79:  lea    -0x66(%ebp),%eax
0846eec0 +0x7c:  mov    %edx,0x8(%esp)
0846eec4 +0x80:  mov    %eax,0x4(%esp)
0846eec8 +0x84:  mov    0x8(%ebp),%eax
0846eecb +0x87:  mov    %eax,(%esp)
0846eece +0x8a:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846eed3 +0x8f:  add    $0x74,%esp
0846eed6 +0x92:  pop    %ebx
0846eed7 +0x93:  pop    %ebp
0846eed8 +0x94:  ret
0846eed9 +0x95:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildExpLimit @ 0x846ee44

/* CGuildServerProxy::SendGuildExpLimit() */

void __thiscall CGuildServerProxy::SendGuildExpLimit(CGuildServerProxy *this)

{
  CEnvironment *this_00;
  int iVar1;
  int iVar2;
  Packet_Guild_Exp_Limit local_6a [2];
  ushort local_68;
  undefined4 auStack_64 [21];
  int local_10;
  
  Packet_Guild_Exp_Limit::Packet_Guild_Exp_Limit(local_6a);
  this_00 = (CEnvironment *)G_CEnvironment();
  auStack_64[1] = CEnvironment::get_channel_no(this_00);
  iVar1 = G_CDataManager();
  auStack_64[2] = *(undefined4 *)(iVar1 + 0xa5ac);
  iVar1 = G_CDataManager();
  auStack_64[3] = *(undefined4 *)(iVar1 + 0xa5ec);
  for (local_10 = 0; iVar1 = local_10, local_10 < 0x11; local_10 = local_10 + 1) {
    iVar2 = G_CDataManager();
    auStack_64[iVar1 + 4] = *(undefined4 *)(iVar2 + 0x1c + (local_10 + 0x14aa) * 8);
  }
  SendTcpPacket(this,(char *)local_6a,(uint)local_68);
  return;
}
```
