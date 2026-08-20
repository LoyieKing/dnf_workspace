# dispatch_sig

`_ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_SetSlot::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SetSlot` | `0x0813ff38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813ff38  _ZN12advancealtar18Dispatcher_SetSlot12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_SetSlot::dispatch_sig(CUser*, PacketBuf&)
# range [0x0813ff38, 0x0814001f]
0813ff38 +0x00:  push   %ebp
0813ff39 +0x01:  mov    %esp,%ebp
0813ff3b +0x03:  push   %esi
0813ff3c +0x04:  push   %ebx
0813ff3d +0x05:  sub    $0x60,%esp
0813ff40 +0x08:  cmpl   $0x0,0xc(%ebp)
0813ff44 +0x0c:  je     0813ff65 <+0x2d>
0813ff46 +0x0e:  mov    0xc(%ebp),%eax
0813ff49 +0x11:  mov    %eax,(%esp)
0813ff4c +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0813ff51 +0x19:  cmp    $0x2,%eax
0813ff54 +0x1c:  jle    0813ff65 <+0x2d>
0813ff56 +0x1e:  mov    0xc(%ebp),%eax
0813ff59 +0x21:  mov    %eax,(%esp)
0813ff5c +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0813ff61 +0x29:  test   %eax,%eax
0813ff63 +0x2b:  jne    0813ff6c <+0x34>
0813ff65 +0x2d:  mov    $0x1,%eax
0813ff6a +0x32:  jmp    0813ff71 <+0x39>
0813ff6c +0x34:  mov    $0x0,%eax
0813ff71 +0x39:  test   %al,%al
0813ff73 +0x3b:  je     0813ff7f <+0x47>
0813ff75 +0x3d:  mov    $0x3fc,%ebx
0813ff7a +0x42:  jmp    08140017 <+0xdf>
0813ff7f +0x47:  lea    -0x4c(%ebp),%eax
0813ff82 +0x4a:  mov    %eax,(%esp)
0813ff85 +0x4d:  call   08141d2e <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x82>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x82
0813ff8a +0x52:  lea    -0x28(%ebp),%eax
0813ff8d +0x55:  mov    %eax,(%esp)
0813ff90 +0x58:  call   08141d5c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xb0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xb0
0813ff95 +0x5d:  lea    -0x4c(%ebp),%eax
0813ff98 +0x60:  mov    %eax,0x8(%esp)
0813ff9c +0x64:  mov    0x10(%ebp),%eax
0813ff9f +0x67:  mov    %eax,0x4(%esp)
0813ffa3 +0x6b:  mov    0x8(%ebp),%eax
0813ffa6 +0x6e:  mov    %eax,(%esp)
0813ffa9 +0x71:  call   08140020 <_ZNK12advancealtar18Dispatcher_SetSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_SetSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
0813ffae +0x76:  lea    -0x28(%ebp),%eax
0813ffb1 +0x79:  mov    %eax,0xc(%esp)
0813ffb5 +0x7d:  lea    -0x4c(%ebp),%eax
0813ffb8 +0x80:  mov    %eax,0x8(%esp)
0813ffbc +0x84:  mov    0xc(%ebp),%eax
0813ffbf +0x87:  mov    %eax,0x4(%esp)
0813ffc3 +0x8b:  mov    0x8(%ebp),%eax
0813ffc6 +0x8e:  mov    %eax,(%esp)
0813ffc9 +0x91:  call   0814006e <_ZNK12advancealtar18Dispatcher_SetSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_SetSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
0813ffce +0x96:  mov    %eax,-0xc(%ebp)
0813ffd1 +0x99:  lea    -0x28(%ebp),%eax
0813ffd4 +0x9c:  mov    %eax,0x8(%esp)
0813ffd8 +0xa0:  mov    0xc(%ebp),%eax
0813ffdb +0xa3:  mov    %eax,0x4(%esp)
0813ffdf +0xa7:  mov    0x8(%ebp),%eax
0813ffe2 +0xaa:  mov    %eax,(%esp)
0813ffe5 +0xad:  call   08140148 <_ZN12advancealtar18Dispatcher_SetSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_SetSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
0813ffea +0xb2:  mov    $0x0,%ebx
0813ffef +0xb7:  lea    -0x28(%ebp),%eax
0813fff2 +0xba:  mov    %eax,(%esp)
0813fff5 +0xbd:  call   0814256a <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x8be>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x8be
0813fffa +0xc2:  jmp    08140017 <+0xdf>
0813fffc +0xc4:  mov    %edx,%ebx
0813fffe +0xc6:  mov    %eax,%esi
08140000 +0xc8:  lea    -0x28(%ebp),%eax
08140003 +0xcb:  mov    %eax,(%esp)
08140006 +0xce:  call   0814256a <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x8be>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x8be
0814000b +0xd3:  mov    %esi,%eax
0814000d +0xd5:  mov    %ebx,%edx
0814000f +0xd7:  mov    %eax,(%esp)
08140012 +0xda:  call   08ae3750 <_Unwind_Resume>
08140017 +0xdf:  mov    %ebx,%eax
08140019 +0xe1:  add    $0x60,%esp
0814001c +0xe4:  pop    %ebx
0814001d +0xe5:  pop    %esi
0814001e +0xe6:  pop    %ebp
0814001f +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_SetSlot::dispatch_sig @ 0x813ff38

/* advancealtar::Dispatcher_SetSlot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_SetSlot::dispatch_sig
          (Dispatcher_SetSlot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarSetSlot local_50 [36];
  _ResAdvanceAltarSetSlot local_2c [28];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_0813ff71;
      }
    }
  }
  bVar1 = true;
LAB_0813ff71:
  if (bVar1) {
    uVar3 = 0x3fc;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarSetSlot::_ReqAdvanceAltarSetSlot(local_50);
    CMDPacketStruct::_ResAdvanceAltarSetSlot::_ResAdvanceAltarSetSlot(local_2c);
                    /* try { // try from 0813ffa9 to 0813ffe9 has its CatchHandler @ 0813fffc */
    read_packet(this,param_2,(STBaseRequest *)local_50);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_50,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarSetSlot::~_ResAdvanceAltarSetSlot(local_2c);
  }
  return uVar3;
}
```
