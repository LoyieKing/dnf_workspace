# dispatch_sig

`_ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf`

`advancealtar::Dispatcher_SummonUnit::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SummonUnit` | `0x08140498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140498  _ZN12advancealtar21Dispatcher_SummonUnit12dispatch_sigEP5CUserR9PacketBuf
#           advancealtar::Dispatcher_SummonUnit::dispatch_sig(CUser*, PacketBuf&)
# range [0x08140498, 0x0814057f]
08140498 +0x00:  push   %ebp
08140499 +0x01:  mov    %esp,%ebp
0814049b +0x03:  push   %esi
0814049c +0x04:  push   %ebx
0814049d +0x05:  sub    $0x40,%esp
081404a0 +0x08:  cmpl   $0x0,0xc(%ebp)
081404a4 +0x0c:  je     081404c5 <+0x2d>
081404a6 +0x0e:  mov    0xc(%ebp),%eax
081404a9 +0x11:  mov    %eax,(%esp)
081404ac +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081404b1 +0x19:  cmp    $0x2,%eax
081404b4 +0x1c:  jle    081404c5 <+0x2d>
081404b6 +0x1e:  mov    0xc(%ebp),%eax
081404b9 +0x21:  mov    %eax,(%esp)
081404bc +0x24:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081404c1 +0x29:  test   %eax,%eax
081404c3 +0x2b:  jne    081404cc <+0x34>
081404c5 +0x2d:  mov    $0x1,%eax
081404ca +0x32:  jmp    081404d1 <+0x39>
081404cc +0x34:  mov    $0x0,%eax
081404d1 +0x39:  test   %al,%al
081404d3 +0x3b:  je     081404df <+0x47>
081404d5 +0x3d:  mov    $0x496,%ebx
081404da +0x42:  jmp    08140577 <+0xdf>
081404df +0x47:  lea    -0x24(%ebp),%eax
081404e2 +0x4a:  mov    %eax,(%esp)
081404e5 +0x4d:  call   08141e60 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x1b4>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x1b4
081404ea +0x52:  lea    -0x38(%ebp),%eax
081404ed +0x55:  mov    %eax,(%esp)
081404f0 +0x58:  call   08141e8e <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x1e2>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x1e2
081404f5 +0x5d:  lea    -0x24(%ebp),%eax
081404f8 +0x60:  mov    %eax,0x8(%esp)
081404fc +0x64:  mov    0x10(%ebp),%eax
081404ff +0x67:  mov    %eax,0x4(%esp)
08140503 +0x6b:  mov    0x8(%ebp),%eax
08140506 +0x6e:  mov    %eax,(%esp)
08140509 +0x71:  call   08140580 <_ZNK12advancealtar21Dispatcher_SummonUnit11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_SummonUnit::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&) const
0814050e +0x76:  lea    -0x38(%ebp),%eax
08140511 +0x79:  mov    %eax,0xc(%esp)
08140515 +0x7d:  lea    -0x24(%ebp),%eax
08140518 +0x80:  mov    %eax,0x8(%esp)
0814051c +0x84:  mov    0xc(%ebp),%eax
0814051f +0x87:  mov    %eax,0x4(%esp)
08140523 +0x8b:  mov    0x8(%ebp),%eax
08140526 +0x8e:  mov    %eax,(%esp)
08140529 +0x91:  call   081405b8 <_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>  ; advancealtar::Dispatcher_SummonUnit::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
0814052e +0x96:  mov    %eax,-0xc(%ebp)
08140531 +0x99:  lea    -0x38(%ebp),%eax
08140534 +0x9c:  mov    %eax,0x8(%esp)
08140538 +0xa0:  mov    0xc(%ebp),%eax
0814053b +0xa3:  mov    %eax,0x4(%esp)
0814053f +0xa7:  mov    0x8(%ebp),%eax
08140542 +0xaa:  mov    %eax,(%esp)
08140545 +0xad:  call   081406b8 <_ZN12advancealtar21Dispatcher_SummonUnit11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>  ; advancealtar::Dispatcher_SummonUnit::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
0814054a +0xb2:  mov    $0x0,%ebx
0814054f +0xb7:  lea    -0x38(%ebp),%eax
08140552 +0xba:  mov    %eax,(%esp)
08140555 +0xbd:  call   08142606 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x95a>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x95a
0814055a +0xc2:  jmp    08140577 <+0xdf>
0814055c +0xc4:  mov    %edx,%ebx
0814055e +0xc6:  mov    %eax,%esi
08140560 +0xc8:  lea    -0x38(%ebp),%eax
08140563 +0xcb:  mov    %eax,(%esp)
08140566 +0xce:  call   08142606 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x95a>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x95a
0814056b +0xd3:  mov    %esi,%eax
0814056d +0xd5:  mov    %ebx,%edx
0814056f +0xd7:  mov    %eax,(%esp)
08140572 +0xda:  call   08ae3750 <_Unwind_Resume>
08140577 +0xdf:  mov    %ebx,%eax
08140579 +0xe1:  add    $0x40,%esp
0814057c +0xe4:  pop    %ebx
0814057d +0xe5:  pop    %esi
0814057e +0xe6:  pop    %ebp
0814057f +0xe7:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_SummonUnit::dispatch_sig @ 0x8140498

/* advancealtar::Dispatcher_SummonUnit::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::dispatch_sig
          (Dispatcher_SummonUnit *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ResAdvanceAltarSummonUnit local_3c [20];
  _ReqAdvanceAltarSummonUnit local_28 [24];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_081404d1;
      }
    }
  }
  bVar1 = true;
LAB_081404d1:
  if (bVar1) {
    uVar3 = 0x496;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarSummonUnit::_ReqAdvanceAltarSummonUnit(local_28);
    CMDPacketStruct::_ResAdvanceAltarSummonUnit::_ResAdvanceAltarSummonUnit(local_3c);
                    /* try { // try from 08140509 to 08140549 has its CatchHandler @ 0814055c */
    read_packet(this,param_2,(STBaseRequest *)local_28);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_28,(STBaseResponse *)local_3c);
    send_packet(this,param_1,(STBaseResponse *)local_3c);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarSummonUnit::~_ResAdvanceAltarSummonUnit(local_3c);
  }
  return uVar3;
}
```
