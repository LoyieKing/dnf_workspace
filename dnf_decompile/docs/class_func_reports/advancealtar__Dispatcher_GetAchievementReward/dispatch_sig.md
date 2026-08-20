# dispatch_sig

`_ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_GetAchievementReward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_GetAchievementReward` | `0x08140c64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140c64  _ZN12advancealtar31Dispatcher_GetAchievementReward12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_GetAchievementReward::dispatch_sig(CUser*, PacketBuf&)
# range [0x08140c64, 0x08140d51]
08140c64 +0x00:  push   %ebp
08140c65 +0x01:  mov    %esp,%ebp
08140c67 +0x03:  push   %esi
08140c68 +0x04:  push   %ebx
08140c69 +0x05:  sub    $0x40,%esp
08140c6c +0x08:  cmpl   $0x0,0xc(%ebp)
08140c70 +0x0c:  je     08140c91 <+0x2d>
08140c72 +0x0e:  mov    0xc(%ebp),%eax
08140c75 +0x11:  mov    %eax,(%esp)
08140c78 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08140c7d +0x19:  cmp    $0x2,%eax
08140c80 +0x1c:  jle    08140c91 <+0x2d>
08140c82 +0x1e:  mov    0xc(%ebp),%eax
08140c85 +0x21:  mov    %eax,(%esp)
08140c88 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08140c8d +0x29:  test   %eax,%eax
08140c8f +0x2b:  jne    08140c98 <+0x34>
08140c91 +0x2d:  mov    $0x1,%eax
08140c96 +0x32:  jmp    08140c9d <+0x39>
08140c98 +0x34:  mov    $0x0,%eax
08140c9d +0x39:  test   %al,%al
08140c9f +0x3b:  je     08140cab <+0x47>
08140ca1 +0x3d:  mov    $0x571,%ebx
08140ca6 +0x42:  jmp    08140d49 <+0xe5>
08140cab +0x47:  lea    -0x20(%ebp),%eax
08140cae +0x4a:  mov    %eax,(%esp)
08140cb1 +0x4d:  call   08141f2c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x280>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x280
08140cb6 +0x52:  lea    -0x2c(%ebp),%eax
08140cb9 +0x55:  mov    %eax,(%esp)
08140cbc +0x58:  call   08141f5a <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x2ae>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x2ae
08140cc1 +0x5d:  lea    -0x20(%ebp),%eax
08140cc4 +0x60:  mov    %eax,0x8(%esp)
08140cc8 +0x64:  mov    0x10(%ebp),%eax
08140ccb +0x67:  mov    %eax,0x4(%esp)
08140ccf +0x6b:  mov    0x8(%ebp),%eax
08140cd2 +0x6e:  mov    %eax,(%esp)
08140cd5 +0x71:  call   08140d52 <_ZNK12advancealtar31Dispatcher_GetAchievementReward11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_GetAchievementReward::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
08140cda +0x76:  mov    -0x10(%ebp),%eax
08140cdd +0x79:  mov    %eax,-0x24(%ebp)
08140ce0 +0x7c:  lea    -0x2c(%ebp),%eax
08140ce3 +0x7f:  mov    %eax,0xc(%esp)
08140ce7 +0x83:  lea    -0x20(%ebp),%eax
08140cea +0x86:  mov    %eax,0x8(%esp)
08140cee +0x8a:  mov    0xc(%ebp),%eax
08140cf1 +0x8d:  mov    %eax,0x4(%esp)
08140cf5 +0x91:  mov    0x8(%ebp),%eax
08140cf8 +0x94:  mov    %eax,(%esp)
08140cfb +0x97:  call   08140da0 <_ZNK12advancealtar31Dispatcher_GetAchievementReward14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_GetAchievementReward::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
08140d00 +0x9c:  mov    %eax,-0xc(%ebp)
08140d03 +0x9f:  lea    -0x2c(%ebp),%eax
08140d06 +0xa2:  mov    %eax,0x8(%esp)
08140d0a +0xa6:  mov    0xc(%ebp),%eax
08140d0d +0xa9:  mov    %eax,0x4(%esp)
08140d11 +0xad:  mov    0x8(%ebp),%eax
08140d14 +0xb0:  mov    %eax,(%esp)
08140d17 +0xb3:  call   08140daa <_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_GetAchievementReward::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
08140d1c +0xb8:  mov    $0x0,%ebx
08140d21 +0xbd:  lea    -0x2c(%ebp),%eax
08140d24 +0xc0:  mov    %eax,(%esp)
08140d27 +0xc3:  call   081426f0 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xa44>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xa44
08140d2c +0xc8:  jmp    08140d49 <+0xe5>
08140d2e +0xca:  mov    %edx,%ebx
08140d30 +0xcc:  mov    %eax,%esi
08140d32 +0xce:  lea    -0x2c(%ebp),%eax
08140d35 +0xd1:  mov    %eax,(%esp)
08140d38 +0xd4:  call   081426f0 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xa44>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xa44
08140d3d +0xd9:  mov    %esi,%eax
08140d3f +0xdb:  mov    %ebx,%edx
08140d41 +0xdd:  mov    %eax,(%esp)
08140d44 +0xe0:  call   08ae3750 <_Unwind_Resume>
08140d49 +0xe5:  mov    %ebx,%eax
08140d4b +0xe7:  add    $0x40,%esp
08140d4e +0xea:  pop    %ebx
08140d4f +0xeb:  pop    %esi
08140d50 +0xec:  pop    %ebp
08140d51 +0xed:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_GetAchievementReward::dispatch_sig @ 0x8140c64

/* advancealtar::Dispatcher_GetAchievementReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_GetAchievementReward::dispatch_sig
          (Dispatcher_GetAchievementReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarGetAchievementReward local_30 [8];
  undefined4 local_28;
  _ReqAdvanceAltarGetAchievementReward local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140c9d;
      }
    }
  }
  bVar1 = true;
LAB_08140c9d:
  if (bVar1) {
    uVar3 = 0x571;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarGetAchievementReward::_ReqAdvanceAltarGetAchievementReward
              (local_24);
    CMDPacketStruct::_ResAdvanceAltarGetAchievementReward::_ResAdvanceAltarGetAchievementReward
              (local_30);
                    /* try { // try from 08140cd5 to 08140d1b has its CatchHandler @ 08140d2e */
    read_packet(this,param_2,(STBaseRequest *)local_24);
    local_28 = local_14;
    local_10 = process_packet((CUser *)this,(STBaseRequest *)param_1,(STBaseResponse *)local_24);
    send_packet(this,param_1,(STBaseResponse *)local_30);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarGetAchievementReward::~_ResAdvanceAltarGetAchievementReward
              (local_30);
  }
  return uVar3;
}
```
