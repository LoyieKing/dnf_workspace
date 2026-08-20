# dispatch_sig

`_ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_UpgradeGage::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_UpgradeGage` | `0x081401fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081401fe  _ZN12advancealtar22Dispatcher_UpgradeGage12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_UpgradeGage::dispatch_sig(CUser*, PacketBuf&)
# range [0x081401fe, 0x081402e5]
081401fe +0x00:  push   %ebp
081401ff +0x01:  mov    %esp,%ebp
08140201 +0x03:  push   %esi
08140202 +0x04:  push   %ebx
08140203 +0x05:  sub    $0x40,%esp
08140206 +0x08:  cmpl   $0x0,0xc(%ebp)
0814020a +0x0c:  je     0814022b <+0x2d>
0814020c +0x0e:  mov    0xc(%ebp),%eax
0814020f +0x11:  mov    %eax,(%esp)
08140212 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08140217 +0x19:  cmp    $0x2,%eax
0814021a +0x1c:  jle    0814022b <+0x2d>
0814021c +0x1e:  mov    0xc(%ebp),%eax
0814021f +0x21:  mov    %eax,(%esp)
08140222 +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08140227 +0x29:  test   %eax,%eax
08140229 +0x2b:  jne    08140232 <+0x34>
0814022b +0x2d:  mov    $0x1,%eax
08140230 +0x32:  jmp    08140237 <+0x39>
08140232 +0x34:  mov    $0x0,%eax
08140237 +0x39:  test   %al,%al
08140239 +0x3b:  je     08140245 <+0x47>
0814023b +0x3d:  mov    $0x446,%ebx
08140240 +0x42:  jmp    081402dd <+0xdf>
08140245 +0x47:  lea    -0x24(%ebp),%eax
08140248 +0x4a:  mov    %eax,(%esp)
0814024b +0x4d:  call   08141dfa <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x14e>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x14e
08140250 +0x52:  lea    -0x38(%ebp),%eax
08140253 +0x55:  mov    %eax,(%esp)
08140256 +0x58:  call   08141e28 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x17c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x17c
0814025b +0x5d:  lea    -0x24(%ebp),%eax
0814025e +0x60:  mov    %eax,0x8(%esp)
08140262 +0x64:  mov    0x10(%ebp),%eax
08140265 +0x67:  mov    %eax,0x4(%esp)
08140269 +0x6b:  mov    0x8(%ebp),%eax
0814026c +0x6e:  mov    %eax,(%esp)
0814026f +0x71:  call   081402e6 <_ZNK12advancealtar22Dispatcher_UpgradeGage11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_UpgradeGage::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
08140274 +0x76:  lea    -0x38(%ebp),%eax
08140277 +0x79:  mov    %eax,0xc(%esp)
0814027b +0x7d:  lea    -0x24(%ebp),%eax
0814027e +0x80:  mov    %eax,0x8(%esp)
08140282 +0x84:  mov    0xc(%ebp),%eax
08140285 +0x87:  mov    %eax,0x4(%esp)
08140289 +0x8b:  mov    0x8(%ebp),%eax
0814028c +0x8e:  mov    %eax,(%esp)
0814028f +0x91:  call   0814031e <_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_UpgradeGage::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
08140294 +0x96:  mov    %eax,-0xc(%ebp)
08140297 +0x99:  lea    -0x38(%ebp),%eax
0814029a +0x9c:  mov    %eax,0x8(%esp)
0814029e +0xa0:  mov    0xc(%ebp),%eax
081402a1 +0xa3:  mov    %eax,0x4(%esp)
081402a5 +0xa7:  mov    0x8(%ebp),%eax
081402a8 +0xaa:  mov    %eax,(%esp)
081402ab +0xad:  call   081403e2 <_ZN12advancealtar22Dispatcher_UpgradeGage11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_UpgradeGage::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
081402b0 +0xb2:  mov    $0x0,%ebx
081402b5 +0xb7:  lea    -0x38(%ebp),%eax
081402b8 +0xba:  mov    %eax,(%esp)
081402bb +0xbd:  call   081425b8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x90c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x90c
081402c0 +0xc2:  jmp    081402dd <+0xdf>
081402c2 +0xc4:  mov    %edx,%ebx
081402c4 +0xc6:  mov    %eax,%esi
081402c6 +0xc8:  lea    -0x38(%ebp),%eax
081402c9 +0xcb:  mov    %eax,(%esp)
081402cc +0xce:  call   081425b8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x90c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x90c
081402d1 +0xd3:  mov    %esi,%eax
081402d3 +0xd5:  mov    %ebx,%edx
081402d5 +0xd7:  mov    %eax,(%esp)
081402d8 +0xda:  call   08ae3750 <_Unwind_Resume>
081402dd +0xdf:  mov    %ebx,%eax
081402df +0xe1:  add    $0x40,%esp
081402e2 +0xe4:  pop    %ebx
081402e3 +0xe5:  pop    %esi
081402e4 +0xe6:  pop    %ebp
081402e5 +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_UpgradeGage::dispatch_sig @ 0x81401fe

/* advancealtar::Dispatcher_UpgradeGage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::dispatch_sig
          (Dispatcher_UpgradeGage *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarUpgradeGage local_3c [20];
  _ReqAdvanceAltarUpgradeGage local_28 [24];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08140237;
      }
    }
  }
  bVar1 = true;
LAB_08140237:
  if (bVar1) {
    uVar3 = 0x446;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarUpgradeGage::_ReqAdvanceAltarUpgradeGage(local_28);
    CMDPacketStruct::_ResAdvanceAltarUpgradeGage::_ResAdvanceAltarUpgradeGage(local_3c);
                    /* try { // try from 0814026f to 081402af has its CatchHandler @ 081402c2 */
    read_packet(this,param_2,(STBaseRequest *)local_28);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_28,(STBaseResponse *)local_3c);
    send_packet(this,param_1,(STBaseResponse *)local_3c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarUpgradeGage::~_ResAdvanceAltarUpgradeGage(local_3c);
  }
  return uVar3;
}
```
