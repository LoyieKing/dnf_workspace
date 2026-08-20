# dispatch_sig

`_ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_BuyItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_BuyItem` | `0x0813fad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813fad0  _ZN12advancealtar18Dispatcher_BuyItem12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_BuyItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x0813fad0, 0x0813fbb7]
0813fad0 +0x00:  push   %ebp
0813fad1 +0x01:  mov    %esp,%ebp
0813fad3 +0x03:  push   %esi
0813fad4 +0x04:  push   %ebx
0813fad5 +0x05:  sub    $0x50,%esp
0813fad8 +0x08:  cmpl   $0x0,0xc(%ebp)
0813fadc +0x0c:  je     0813fafd <+0x2d>
0813fade +0x0e:  mov    0xc(%ebp),%eax
0813fae1 +0x11:  mov    %eax,(%esp)
0813fae4 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0813fae9 +0x19:  cmp    $0x2,%eax
0813faec +0x1c:  jle    0813fafd <+0x2d>
0813faee +0x1e:  mov    0xc(%ebp),%eax
0813faf1 +0x21:  mov    %eax,(%esp)
0813faf4 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0813faf9 +0x29:  test   %eax,%eax
0813fafb +0x2b:  jne    0813fb04 <+0x34>
0813fafd +0x2d:  mov    $0x1,%eax
0813fb02 +0x32:  jmp    0813fb09 <+0x39>
0813fb04 +0x34:  mov    $0x0,%eax
0813fb09 +0x39:  test   %al,%al
0813fb0b +0x3b:  je     0813fb17 <+0x47>
0813fb0d +0x3d:  mov    $0x380,%ebx
0813fb12 +0x42:  jmp    0813fbaf <+0xdf>
0813fb17 +0x47:  lea    -0x48(%ebp),%eax
0813fb1a +0x4a:  mov    %eax,(%esp)
0813fb1d +0x4d:  call   08141cc8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x1c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x1c
0813fb22 +0x52:  lea    -0x28(%ebp),%eax
0813fb25 +0x55:  mov    %eax,(%esp)
0813fb28 +0x58:  call   08141cf6 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x4a>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x4a
0813fb2d +0x5d:  lea    -0x48(%ebp),%eax
0813fb30 +0x60:  mov    %eax,0x8(%esp)
0813fb34 +0x64:  mov    0x10(%ebp),%eax
0813fb37 +0x67:  mov    %eax,0x4(%esp)
0813fb3b +0x6b:  mov    0x8(%ebp),%eax
0813fb3e +0x6e:  mov    %eax,(%esp)
0813fb41 +0x71:  call   0813fbb8 <_ZNK12advancealtar18Dispatcher_BuyItem11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_BuyItem::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
0813fb46 +0x76:  lea    -0x28(%ebp),%eax
0813fb49 +0x79:  mov    %eax,0xc(%esp)
0813fb4d +0x7d:  lea    -0x48(%ebp),%eax
0813fb50 +0x80:  mov    %eax,0x8(%esp)
0813fb54 +0x84:  mov    0xc(%ebp),%eax
0813fb57 +0x87:  mov    %eax,0x4(%esp)
0813fb5b +0x8b:  mov    0x8(%ebp),%eax
0813fb5e +0x8e:  mov    %eax,(%esp)
0813fb61 +0x91:  call   0813fc06 <_ZNK12advancealtar18Dispatcher_BuyItem14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_BuyItem::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
0813fb66 +0x96:  mov    %eax,-0xc(%ebp)
0813fb69 +0x99:  lea    -0x28(%ebp),%eax
0813fb6c +0x9c:  mov    %eax,0x8(%esp)
0813fb70 +0xa0:  mov    0xc(%ebp),%eax
0813fb73 +0xa3:  mov    %eax,0x4(%esp)
0813fb77 +0xa7:  mov    0x8(%ebp),%eax
0813fb7a +0xaa:  mov    %eax,(%esp)
0813fb7d +0xad:  call   0813fe82 <_ZN12advancealtar18Dispatcher_BuyItem11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_BuyItem::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
0813fb82 +0xb2:  mov    $0x0,%ebx
0813fb87 +0xb7:  lea    -0x28(%ebp),%eax
0813fb8a +0xba:  mov    %eax,(%esp)
0813fb8d +0xbd:  call   0814251c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x870>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x870
0813fb92 +0xc2:  jmp    0813fbaf <+0xdf>
0813fb94 +0xc4:  mov    %edx,%ebx
0813fb96 +0xc6:  mov    %eax,%esi
0813fb98 +0xc8:  lea    -0x28(%ebp),%eax
0813fb9b +0xcb:  mov    %eax,(%esp)
0813fb9e +0xce:  call   0814251c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x870>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x870
0813fba3 +0xd3:  mov    %esi,%eax
0813fba5 +0xd5:  mov    %ebx,%edx
0813fba7 +0xd7:  mov    %eax,(%esp)
0813fbaa +0xda:  call   08ae3750 <_Unwind_Resume>
0813fbaf +0xdf:  mov    %ebx,%eax
0813fbb1 +0xe1:  add    $0x50,%esp
0813fbb4 +0xe4:  pop    %ebx
0813fbb5 +0xe5:  pop    %esi
0813fbb6 +0xe6:  pop    %ebp
0813fbb7 +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_BuyItem::dispatch_sig @ 0x813fad0

/* advancealtar::Dispatcher_BuyItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_BuyItem::dispatch_sig
          (Dispatcher_BuyItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarBuyItem local_4c [32];
  _ResAdvanceAltarBuyItem local_2c [28];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_0813fb09;
      }
    }
  }
  bVar1 = true;
LAB_0813fb09:
  if (bVar1) {
    uVar3 = 0x380;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarBuyItem::_ReqAdvanceAltarBuyItem(local_4c);
    CMDPacketStruct::_ResAdvanceAltarBuyItem::_ResAdvanceAltarBuyItem(local_2c);
                    /* try { // try from 0813fb41 to 0813fb81 has its CatchHandler @ 0813fb94 */
    read_packet(this,param_2,(STBaseRequest *)local_4c);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_4c,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarBuyItem::~_ResAdvanceAltarBuyItem(local_2c);
  }
  return uVar3;
}
```
