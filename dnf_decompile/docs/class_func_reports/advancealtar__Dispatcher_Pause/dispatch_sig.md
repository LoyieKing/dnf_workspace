# dispatch_sig

`_ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_Pause::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_Pause` | `0x08140a1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140a1c  _ZN12advancealtar16Dispatcher_Pause12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_Pause::dispatch_sig(CUser*, PacketBuf&)
# range [0x08140a1c, 0x08140b03]
08140a1c +0x00:  push   %ebp
08140a1d +0x01:  mov    %esp,%ebp
08140a1f +0x03:  push   %esi
08140a20 +0x04:  push   %ebx
08140a21 +0x05:  sub    $0x30,%esp
08140a24 +0x08:  cmpl   $0x0,0xc(%ebp)
08140a28 +0x0c:  je     08140a49 <+0x2d>
08140a2a +0x0e:  mov    0xc(%ebp),%eax
08140a2d +0x11:  mov    %eax,(%esp)
08140a30 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08140a35 +0x19:  cmp    $0x2,%eax
08140a38 +0x1c:  jle    08140a49 <+0x2d>
08140a3a +0x1e:  mov    0xc(%ebp),%eax
08140a3d +0x21:  mov    %eax,(%esp)
08140a40 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08140a45 +0x29:  test   %eax,%eax
08140a47 +0x2b:  jne    08140a50 <+0x34>
08140a49 +0x2d:  mov    $0x1,%eax
08140a4e +0x32:  jmp    08140a55 <+0x39>
08140a50 +0x34:  mov    $0x0,%eax
08140a55 +0x39:  test   %al,%al
08140a57 +0x3b:  je     08140a63 <+0x47>
08140a59 +0x3d:  mov    $0x52c,%ebx
08140a5e +0x42:  jmp    08140afb <+0xdf>
08140a63 +0x47:  lea    -0x1a(%ebp),%eax
08140a66 +0x4a:  mov    %eax,(%esp)
08140a69 +0x4d:  call   08141ec6 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x21a>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x21a
08140a6e +0x52:  lea    -0x28(%ebp),%eax
08140a71 +0x55:  mov    %eax,(%esp)
08140a74 +0x58:  call   08141ef4 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x248>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x248
08140a79 +0x5d:  lea    -0x1a(%ebp),%eax
08140a7c +0x60:  mov    %eax,0x8(%esp)
08140a80 +0x64:  mov    0x10(%ebp),%eax
08140a83 +0x67:  mov    %eax,0x4(%esp)
08140a87 +0x6b:  mov    0x8(%ebp),%eax
08140a8a +0x6e:  mov    %eax,(%esp)
08140a8d +0x71:  call   08140b04 <_ZNK12advancealtar16Dispatcher_Pause11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_Pause::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
08140a92 +0x76:  lea    -0x28(%ebp),%eax
08140a95 +0x79:  mov    %eax,0xc(%esp)
08140a99 +0x7d:  lea    -0x1a(%ebp),%eax
08140a9c +0x80:  mov    %eax,0x8(%esp)
08140aa0 +0x84:  mov    0xc(%ebp),%eax
08140aa3 +0x87:  mov    %eax,0x4(%esp)
08140aa7 +0x8b:  mov    0x8(%ebp),%eax
08140aaa +0x8e:  mov    %eax,(%esp)
08140aad +0x91:  call   08140b3c <_ZNK12advancealtar16Dispatcher_Pause14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_Pause::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
08140ab2 +0x96:  mov    %eax,-0xc(%ebp)
08140ab5 +0x99:  lea    -0x28(%ebp),%eax
08140ab8 +0x9c:  mov    %eax,0x8(%esp)
08140abc +0xa0:  mov    0xc(%ebp),%eax
08140abf +0xa3:  mov    %eax,0x4(%esp)
08140ac3 +0xa7:  mov    0x8(%ebp),%eax
08140ac6 +0xaa:  mov    %eax,(%esp)
08140ac9 +0xad:  call   08140bae <_ZN12advancealtar16Dispatcher_Pause11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_Pause::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
08140ace +0xb2:  mov    $0x0,%ebx
08140ad3 +0xb7:  lea    -0x28(%ebp),%eax
08140ad6 +0xba:  mov    %eax,(%esp)
08140ad9 +0xbd:  call   081426a2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x9f6>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x9f6
08140ade +0xc2:  jmp    08140afb <+0xdf>
08140ae0 +0xc4:  mov    %edx,%ebx
08140ae2 +0xc6:  mov    %eax,%esi
08140ae4 +0xc8:  lea    -0x28(%ebp),%eax
08140ae7 +0xcb:  mov    %eax,(%esp)
08140aea +0xce:  call   081426a2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x9f6>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x9f6
08140aef +0xd3:  mov    %esi,%eax
08140af1 +0xd5:  mov    %ebx,%edx
08140af3 +0xd7:  mov    %eax,(%esp)
08140af6 +0xda:  call   08ae3750 <_Unwind_Resume>
08140afb +0xdf:  mov    %ebx,%eax
08140afd +0xe1:  add    $0x30,%esp
08140b00 +0xe4:  pop    %ebx
08140b01 +0xe5:  pop    %esi
08140b02 +0xe6:  pop    %ebp
08140b03 +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_Pause::dispatch_sig @ 0x8140a1c

/* advancealtar::Dispatcher_Pause::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_Pause::dispatch_sig
          (Dispatcher_Pause *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarPause local_2c [14];
  _ReqAdvanceAltarPause local_1e [14];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140a55;
      }
    }
  }
  bVar1 = true;
LAB_08140a55:
  if (bVar1) {
    uVar3 = 0x52c;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarPause::_ReqAdvanceAltarPause(local_1e);
    CMDPacketStruct::_ResAdvanceAltarPause::_ResAdvanceAltarPause(local_2c);
                    /* try { // try from 08140a8d to 08140acd has its CatchHandler @ 08140ae0 */
    read_packet(this,param_2,(STBaseRequest *)local_1e);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_1e,(STBaseResponse *)local_2c);
    send_packet(this,param_1,(STBaseResponse *)local_2c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarPause::~_ResAdvanceAltarPause(local_2c);
  }
  return uVar3;
}
```
