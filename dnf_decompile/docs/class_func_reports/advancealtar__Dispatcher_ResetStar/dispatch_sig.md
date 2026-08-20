# dispatch_sig

`_ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_ResetStar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ResetStar` | `0x08140f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140f6e  _ZN12advancealtar20Dispatcher_ResetStar12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_ResetStar::dispatch_sig(CUser*, PacketBuf&)
# range [0x08140f6e, 0x0814105b]
08140f6e +0x00:  push   %ebp
08140f6f +0x01:  mov    %esp,%ebp
08140f71 +0x03:  push   %esi
08140f72 +0x04:  push   %ebx
08140f73 +0x05:  sub    $0x40,%esp
08140f76 +0x08:  cmpl   $0x0,0xc(%ebp)
08140f7a +0x0c:  je     08140f9b <+0x2d>
08140f7c +0x0e:  mov    0xc(%ebp),%eax
08140f7f +0x11:  mov    %eax,(%esp)
08140f82 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08140f87 +0x19:  cmp    $0x2,%eax
08140f8a +0x1c:  jle    08140f9b <+0x2d>
08140f8c +0x1e:  mov    0xc(%ebp),%eax
08140f8f +0x21:  mov    %eax,(%esp)
08140f92 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08140f97 +0x29:  test   %eax,%eax
08140f99 +0x2b:  jne    08140fa2 <+0x34>
08140f9b +0x2d:  mov    $0x1,%eax
08140fa0 +0x32:  jmp    08140fa7 <+0x39>
08140fa2 +0x34:  mov    $0x0,%eax
08140fa7 +0x39:  test   %al,%al
08140fa9 +0x3b:  je     08140fb5 <+0x47>
08140fab +0x3d:  mov    $0x5c0,%ebx
08140fb0 +0x42:  jmp    08141053 <+0xe5>
08140fb5 +0x47:  lea    -0x20(%ebp),%eax
08140fb8 +0x4a:  mov    %eax,(%esp)
08140fbb +0x4d:  call   08141f92 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x2e6>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x2e6
08140fc0 +0x52:  lea    -0x2c(%ebp),%eax
08140fc3 +0x55:  mov    %eax,(%esp)
08140fc6 +0x58:  call   08141fc0 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x314>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x314
08140fcb +0x5d:  lea    -0x20(%ebp),%eax
08140fce +0x60:  mov    %eax,0x8(%esp)
08140fd2 +0x64:  mov    0x10(%ebp),%eax
08140fd5 +0x67:  mov    %eax,0x4(%esp)
08140fd9 +0x6b:  mov    0x8(%ebp),%eax
08140fdc +0x6e:  mov    %eax,(%esp)
08140fdf +0x71:  call   0814105c <_ZNK12advancealtar20Dispatcher_ResetStar11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_ResetStar::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
08140fe4 +0x76:  mov    -0x10(%ebp),%eax
08140fe7 +0x79:  mov    %eax,-0x24(%ebp)
08140fea +0x7c:  lea    -0x2c(%ebp),%eax
08140fed +0x7f:  mov    %eax,0xc(%esp)
08140ff1 +0x83:  lea    -0x20(%ebp),%eax
08140ff4 +0x86:  mov    %eax,0x8(%esp)
08140ff8 +0x8a:  mov    0xc(%ebp),%eax
08140ffb +0x8d:  mov    %eax,0x4(%esp)
08140fff +0x91:  mov    0x8(%ebp),%eax
08141002 +0x94:  mov    %eax,(%esp)
08141005 +0x97:  call   081410aa <_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_ResetStar::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
0814100a +0x9c:  mov    %eax,-0xc(%ebp)
0814100d +0x9f:  lea    -0x2c(%ebp),%eax
08141010 +0xa2:  mov    %eax,0x8(%esp)
08141014 +0xa6:  mov    0xc(%ebp),%eax
08141017 +0xa9:  mov    %eax,0x4(%esp)
0814101b +0xad:  mov    0x8(%ebp),%eax
0814101e +0xb0:  mov    %eax,(%esp)
08141021 +0xb3:  call   081411fc <_ZN12advancealtar20Dispatcher_ResetStar11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_ResetStar::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
08141026 +0xb8:  mov    $0x0,%ebx
0814102b +0xbd:  lea    -0x2c(%ebp),%eax
0814102e +0xc0:  mov    %eax,(%esp)
08141031 +0xc3:  call   0814273e <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xa92>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xa92
08141036 +0xc8:  jmp    08141053 <+0xe5>
08141038 +0xca:  mov    %edx,%ebx
0814103a +0xcc:  mov    %eax,%esi
0814103c +0xce:  lea    -0x2c(%ebp),%eax
0814103f +0xd1:  mov    %eax,(%esp)
08141042 +0xd4:  call   0814273e <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xa92>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xa92
08141047 +0xd9:  mov    %esi,%eax
08141049 +0xdb:  mov    %ebx,%edx
0814104b +0xdd:  mov    %eax,(%esp)
0814104e +0xe0:  call   08ae3750 <_Unwind_Resume>
08141053 +0xe5:  mov    %ebx,%eax
08141055 +0xe7:  add    $0x40,%esp
08141058 +0xea:  pop    %ebx
08141059 +0xeb:  pop    %esi
0814105a +0xec:  pop    %ebp
0814105b +0xed:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_ResetStar::dispatch_sig @ 0x8140f6e

/* advancealtar::Dispatcher_ResetStar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::dispatch_sig
          (Dispatcher_ResetStar *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarResetStar local_30 [8];
  undefined4 local_28;
  _ReqAdvanceAltarResetStar local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140fa7;
      }
    }
  }
  bVar1 = true;
LAB_08140fa7:
  if (bVar1) {
    uVar3 = 0x5c0;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarResetStar::_ReqAdvanceAltarResetStar(local_24);
    CMDPacketStruct::_ResAdvanceAltarResetStar::_ResAdvanceAltarResetStar(local_30);
                    /* try { // try from 08140fdf to 08141025 has its CatchHandler @ 08141038 */
    read_packet(this,param_2,(STBaseRequest *)local_24);
    local_28 = local_14;
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_24,(STBaseResponse *)local_30);
    send_packet(this,param_1,(STBaseResponse *)local_30);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarResetStar::~_ResAdvanceAltarResetStar(local_30);
  }
  return uVar3;
}
```
