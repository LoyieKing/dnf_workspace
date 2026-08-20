# dispatch_sig

`_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_ExchangeSlot::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ExchangeSlot` | `0x0814076e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814076e  _ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_ExchangeSlot::dispatch_sig(CUser*, PacketBuf&)
# range [0x0814076e, 0x08140855]
0814076e +0x00:  push   %ebp
0814076f +0x01:  mov    %esp,%ebp
08140771 +0x03:  push   %esi
08140772 +0x04:  push   %ebx
08140773 +0x05:  sub    $0x70,%esp
08140776 +0x08:  cmpl   $0x0,0xc(%ebp)
0814077a +0x0c:  je     0814079b <+0x2d>
0814077c +0x0e:  mov    0xc(%ebp),%eax
0814077f +0x11:  mov    %eax,(%esp)
08140782 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08140787 +0x19:  cmp    $0x2,%eax
0814078a +0x1c:  jle    0814079b <+0x2d>
0814078c +0x1e:  mov    0xc(%ebp),%eax
0814078f +0x21:  mov    %eax,(%esp)
08140792 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08140797 +0x29:  test   %eax,%eax
08140799 +0x2b:  jne    081407a2 <+0x34>
0814079b +0x2d:  mov    $0x1,%eax
081407a0 +0x32:  jmp    081407a7 <+0x39>
081407a2 +0x34:  mov    $0x0,%eax
081407a7 +0x39:  test   %al,%al
081407a9 +0x3b:  je     081407b5 <+0x47>
081407ab +0x3d:  mov    $0x4e8,%ebx
081407b0 +0x42:  jmp    0814084d <+0xdf>
081407b5 +0x47:  lea    -0x60(%ebp),%eax
081407b8 +0x4a:  mov    %eax,(%esp)
081407bb +0x4d:  call   08141d94 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xe8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xe8
081407c0 +0x52:  lea    -0x30(%ebp),%eax
081407c3 +0x55:  mov    %eax,(%esp)
081407c6 +0x58:  call   08141dc2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x116>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x116
081407cb +0x5d:  lea    -0x60(%ebp),%eax
081407ce +0x60:  mov    %eax,0x8(%esp)
081407d2 +0x64:  mov    0x10(%ebp),%eax
081407d5 +0x67:  mov    %eax,0x4(%esp)
081407d9 +0x6b:  mov    0x8(%ebp),%eax
081407dc +0x6e:  mov    %eax,(%esp)
081407df +0x71:  call   08140856 <_ZNK12advancealtar23Dispatcher_ExchangeSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_ExchangeSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
081407e4 +0x76:  lea    -0x30(%ebp),%eax
081407e7 +0x79:  mov    %eax,0xc(%esp)
081407eb +0x7d:  lea    -0x60(%ebp),%eax
081407ee +0x80:  mov    %eax,0x8(%esp)
081407f2 +0x84:  mov    0xc(%ebp),%eax
081407f5 +0x87:  mov    %eax,0x4(%esp)
081407f9 +0x8b:  mov    0x8(%ebp),%eax
081407fc +0x8e:  mov    %eax,(%esp)
081407ff +0x91:  call   081408a4 <_ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_ExchangeSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
08140804 +0x96:  mov    %eax,-0xc(%ebp)
08140807 +0x99:  lea    -0x30(%ebp),%eax
0814080a +0x9c:  mov    %eax,0x8(%esp)
0814080e +0xa0:  mov    0xc(%ebp),%eax
08140811 +0xa3:  mov    %eax,0x4(%esp)
08140815 +0xa7:  mov    0x8(%ebp),%eax
08140818 +0xaa:  mov    %eax,(%esp)
0814081b +0xad:  call   08140966 <_ZN12advancealtar23Dispatcher_ExchangeSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_ExchangeSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
08140820 +0xb2:  mov    $0x0,%ebx
08140825 +0xb7:  lea    -0x30(%ebp),%eax
08140828 +0xba:  mov    %eax,(%esp)
0814082b +0xbd:  call   08142654 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x9a8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x9a8
08140830 +0xc2:  jmp    0814084d <+0xdf>
08140832 +0xc4:  mov    %edx,%ebx
08140834 +0xc6:  mov    %eax,%esi
08140836 +0xc8:  lea    -0x30(%ebp),%eax
08140839 +0xcb:  mov    %eax,(%esp)
0814083c +0xce:  call   08142654 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x9a8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x9a8
08140841 +0xd3:  mov    %esi,%eax
08140843 +0xd5:  mov    %ebx,%edx
08140845 +0xd7:  mov    %eax,(%esp)
08140848 +0xda:  call   08ae3750 <_Unwind_Resume>
0814084d +0xdf:  mov    %ebx,%eax
0814084f +0xe1:  add    $0x70,%esp
08140852 +0xe4:  pop    %ebx
08140853 +0xe5:  pop    %esi
08140854 +0xe6:  pop    %ebp
08140855 +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_ExchangeSlot::dispatch_sig @ 0x814076e

/* advancealtar::Dispatcher_ExchangeSlot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::dispatch_sig
          (Dispatcher_ExchangeSlot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarExchangeSlot local_64 [48];
  _ResAdvanceAltarExchangeSlot local_34 [36];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_081407a7;
      }
    }
  }
  bVar1 = true;
LAB_081407a7:
  if (bVar1) {
    uVar3 = 0x4e8;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarExchangeSlot::_ReqAdvanceAltarExchangeSlot(local_64);
    CMDPacketStruct::_ResAdvanceAltarExchangeSlot::_ResAdvanceAltarExchangeSlot(local_34);
                    /* try { // try from 081407df to 0814081f has its CatchHandler @ 08140832 */
    read_packet(this,param_2,(STBaseRequest *)local_64);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_64,(STBaseResponse *)local_34);
    send_packet(this,param_1,(STBaseResponse *)local_34);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarExchangeSlot::~_ResAdvanceAltarExchangeSlot(local_34);
  }
  return uVar3;
}
```
