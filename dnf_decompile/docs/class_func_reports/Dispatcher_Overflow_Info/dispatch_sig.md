# dispatch_sig

`_ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Overflow_Info` | `0x0821e4b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e4b6  _ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821e4b6, 0x0821e58b]
0821e4b6 +0x00:  push   %ebp
0821e4b7 +0x01:  mov    %esp,%ebp
0821e4b9 +0x03:  push   %ebx
0821e4ba +0x04:  sub    $0x24,%esp
0821e4bd +0x07:  lea    -0x15(%ebp),%eax
0821e4c0 +0x0a:  mov    %eax,(%esp)
0821e4c3 +0x0d:  call   0822bdf0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x149a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x149a
0821e4c8 +0x12:  lea    -0x15(%ebp),%eax
0821e4cb +0x15:  add    $0xa,%eax
0821e4ce +0x18:  mov    %eax,0x4(%esp)
0821e4d2 +0x1c:  mov    0x10(%ebp),%eax
0821e4d5 +0x1f:  mov    %eax,(%esp)
0821e4d8 +0x22:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0821e4dd +0x27:  xor    $0x1,%eax
0821e4e0 +0x2a:  test   %al,%al
0821e4e2 +0x2c:  je     0821e50a <+0x54>
0821e4e4 +0x2e:  movl   $0x0,0xc(%esp)
0821e4ec +0x36:  movl   $0x0,0x8(%esp)
0821e4f4 +0x3e:  movl   $&_ZZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e4fc +0x46:  movl   $0xd52f,(%esp)
0821e503 +0x4d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e508 +0x52:  jmp    0821e585 <+0xcf>
0821e50a +0x54:  lea    -0x15(%ebp),%eax
0821e50d +0x57:  add    $0xb,%eax
0821e510 +0x5a:  mov    %eax,0x4(%esp)
0821e514 +0x5e:  mov    0x10(%ebp),%eax
0821e517 +0x61:  mov    %eax,(%esp)
0821e51a +0x64:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821e51f +0x69:  xor    $0x1,%eax
0821e522 +0x6c:  test   %al,%al
0821e524 +0x6e:  je     0821e54c <+0x96>
0821e526 +0x70:  movl   $0x0,0xc(%esp)
0821e52e +0x78:  movl   $0x0,0x8(%esp)
0821e536 +0x80:  movl   $&_ZZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e53e +0x88:  movl   $0xd530,(%esp)
0821e545 +0x8f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e54a +0x94:  jmp    0821e585 <+0xcf>
0821e54c +0x96:  lea    -0x15(%ebp),%ebx
0821e54f +0x99:  mov    0xc(%ebp),%eax
0821e552 +0x9c:  mov    %eax,(%esp)
0821e555 +0x9f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821e55a +0xa4:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821e560 +0xaa:  mov    %eax,0x4(%esp)
0821e564 +0xae:  mov    %edx,(%esp)
0821e567 +0xb1:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821e56c +0xb6:  movl   $0xd,0x8(%esp)
0821e574 +0xbe:  mov    %ebx,0x4(%esp)
0821e578 +0xc2:  mov    %eax,(%esp)
0821e57b +0xc5:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821e580 +0xca:  mov    $0x0,%eax
0821e585 +0xcf:  add    $0x24,%esp
0821e588 +0xd2:  pop    %ebx
0821e589 +0xd3:  pop    %ebp
0821e58a +0xd4:  ret
0821e58b +0xd5:  nop
```

## 反编译 C

```c
// Dispatcher_Overflow_Info::dispatch_sig @ 0x821e4b6

/* Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Overflow_Info::dispatch_sig
          (Dispatcher_Overflow_Info *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Overflow_Statistic_Add local_19 [10];
  uchar uStack_f;
  ushort auStack_e [3];
  
  Packet_Overflow_Statistic_Add::Packet_Overflow_Statistic_Add(local_19);
  cVar1 = PacketBuf::get_byte(param_2,&uStack_f);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_2,auStack_e);
    if (cVar1 == '\x01') {
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_19,0xd);
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xd530,
                       "virtual int Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xd52f,"virtual int Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}
```
