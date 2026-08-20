# process_packet

`_ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_UpgradeGage::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_UpgradeGage` | `0x0814031e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814031e  _ZNK12advancealtar22Dispatcher_UpgradeGage14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_UpgradeGage::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x0814031e, 0x081403e1]
0814031e +0x00:  push   %ebp
0814031f +0x01:  mov    %esp,%ebp
08140321 +0x03:  sub    $0x28,%esp
08140324 +0x06:  mov    0x10(%ebp),%eax
08140327 +0x09:  mov    %eax,-0x14(%ebp)
0814032a +0x0c:  mov    0x14(%ebp),%eax
0814032d +0x0f:  mov    %eax,-0x10(%ebp)
08140330 +0x12:  mov    0x10(%ebp),%eax
08140333 +0x15:  mov    %eax,0x8(%esp)
08140337 +0x19:  mov    0xc(%ebp),%eax
0814033a +0x1c:  mov    %eax,0x4(%esp)
0814033e +0x20:  mov    0x8(%ebp),%eax
08140341 +0x23:  mov    %eax,(%esp)
08140344 +0x26:  call   08140314 <_ZNK12advancealtar22Dispatcher_UpgradeGage11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_UpgradeGage::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
08140349 +0x2b:  mov    %eax,%edx
0814034b +0x2d:  mov    -0x10(%ebp),%eax
0814034e +0x30:  mov    %edx,0x4(%eax)
08140351 +0x33:  mov    -0x10(%ebp),%eax
08140354 +0x36:  mov    0x4(%eax),%eax
08140357 +0x39:  test   %eax,%eax
08140359 +0x3b:  je     08140362 <+0x44>
0814035b +0x3d:  mov    $0x0,%eax
08140360 +0x42:  jmp    081403df <+0xc1>
08140362 +0x44:  mov    0xc(%ebp),%eax
08140365 +0x47:  mov    %eax,(%esp)
08140368 +0x4a:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
0814036d +0x4f:  mov    %eax,-0xc(%ebp)
08140370 +0x52:  cmpl   $0x0,-0xc(%ebp)
08140374 +0x56:  je     081403da <+0xbc>
08140376 +0x58:  mov    -0xc(%ebp),%eax
08140379 +0x5b:  mov    %eax,(%esp)
0814037c +0x5e:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
08140381 +0x63:  mov    %eax,(%esp)
08140384 +0x66:  call   08142094 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3e8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x3e8
08140389 +0x6b:  mov    -0x10(%ebp),%edx
0814038c +0x6e:  mov    %eax,0x8(%edx)
0814038f +0x71:  mov    -0xc(%ebp),%eax
08140392 +0x74:  mov    %eax,(%esp)
08140395 +0x77:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
0814039a +0x7c:  mov    %eax,(%esp)
0814039d +0x7f:  call   0812d176 <_ZN12advancealtar10CharacData11upgreadGageEv>  ; advancealtar::CharacData::upgreadGage()
081403a2 +0x84:  mov    -0x10(%ebp),%edx
081403a5 +0x87:  mov    %eax,0x4(%edx)
081403a8 +0x8a:  mov    -0xc(%ebp),%eax
081403ab +0x8d:  mov    %eax,(%esp)
081403ae +0x90:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
081403b3 +0x95:  mov    %eax,(%esp)
081403b6 +0x98:  call   08142094 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3e8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x3e8
081403bb +0x9d:  mov    -0x10(%ebp),%edx
081403be +0xa0:  mov    %eax,0xc(%edx)
081403c1 +0xa3:  mov    -0xc(%ebp),%eax
081403c4 +0xa6:  mov    %eax,(%esp)
081403c7 +0xa9:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
081403cc +0xae:  mov    %eax,(%esp)
081403cf +0xb1:  call   08142088 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3dc>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x3dc
081403d4 +0xb6:  mov    -0x10(%ebp),%edx
081403d7 +0xb9:  mov    %eax,0x10(%edx)
081403da +0xbc:  mov    $0x0,%eax
081403df +0xc1:  leave
081403e0 +0xc2:  ret
081403e1 +0xc3:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_UpgradeGage::process_packet @ 0x814031e

/* advancealtar::Dispatcher_UpgradeGage::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_UpgradeGage::process_packet
          (Dispatcher_UpgradeGage *this,CUser *param_1,STBaseRequest *param_2,
          STBaseResponse *param_3)

{
  undefined4 uVar1;
  StageControl *this_00;
  CharacData *pCVar2;
  
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if ((*(int *)(param_3 + 4) == 0) &&
     (this_00 = (StageControl *)CUser::getAdvanceAltar(param_1), this_00 != (StageControl *)0x0)) {
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGageLevel(pCVar2);
    *(undefined4 *)(param_3 + 8) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::upgreadGage(pCVar2);
    *(undefined4 *)(param_3 + 4) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGageLevel(pCVar2);
    *(undefined4 *)(param_3 + 0xc) = uVar1;
    pCVar2 = (CharacData *)StageControl::getCharacData(this_00);
    uVar1 = CharacData::getGage(pCVar2);
    *(undefined4 *)(param_3 + 0x10) = uVar1;
  }
  return 0;
}
```
