# process_packet

`_ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_SummonUnit::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_SummonUnit` | `0x081405b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081405b8  _ZNK12advancealtar21Dispatcher_SummonUnit14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_SummonUnit::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x081405b8, 0x081406b7]
081405b8 +0x00:  push   %ebp
081405b9 +0x01:  mov    %esp,%ebp
081405bb +0x03:  push   %esi
081405bc +0x04:  push   %ebx
081405bd +0x05:  sub    $0x20,%esp
081405c0 +0x08:  mov    0x10(%ebp),%eax
081405c3 +0x0b:  mov    %eax,-0x14(%ebp)
081405c6 +0x0e:  mov    0x14(%ebp),%eax
081405c9 +0x11:  mov    %eax,-0x10(%ebp)
081405cc +0x14:  mov    -0x14(%ebp),%eax
081405cf +0x17:  movzbl 0xd(%eax),%edx
081405d3 +0x1b:  mov    -0x10(%ebp),%eax
081405d6 +0x1e:  mov    %dl,0x8(%eax)
081405d9 +0x21:  mov    -0x14(%ebp),%eax
081405dc +0x24:  mov    0x10(%eax),%edx
081405df +0x27:  mov    -0x10(%ebp),%eax
081405e2 +0x2a:  mov    %edx,0xc(%eax)
081405e5 +0x2d:  mov    0x10(%ebp),%eax
081405e8 +0x30:  mov    %eax,0x8(%esp)
081405ec +0x34:  mov    0xc(%ebp),%eax
081405ef +0x37:  mov    %eax,0x4(%esp)
081405f3 +0x3b:  mov    0x8(%ebp),%eax
081405f6 +0x3e:  mov    %eax,(%esp)
081405f9 +0x41:  call   081405ae <_ZNK12advancealtar21Dispatcher_SummonUnit11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_SummonUnit::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
081405fe +0x46:  mov    %eax,%edx
08140600 +0x48:  mov    -0x10(%ebp),%eax
08140603 +0x4b:  mov    %edx,0x4(%eax)
08140606 +0x4e:  mov    -0x10(%ebp),%eax
08140609 +0x51:  mov    0x4(%eax),%eax
0814060c +0x54:  test   %eax,%eax
0814060e +0x56:  je     0814061a <+0x62>
08140610 +0x58:  mov    $0x0,%eax
08140615 +0x5d:  jmp    081406b0 <+0xf8>
0814061a +0x62:  mov    0xc(%ebp),%eax
0814061d +0x65:  mov    %eax,(%esp)
08140620 +0x68:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08140625 +0x6d:  mov    %eax,-0xc(%ebp)
08140628 +0x70:  cmpl   $0x0,-0xc(%ebp)
0814062c +0x74:  je     081406ab <+0xf3>
0814062e +0x76:  mov    -0x14(%ebp),%eax
08140631 +0x79:  mov    0x14(%eax),%ebx
08140634 +0x7c:  mov    -0xc(%ebp),%eax
08140637 +0x7f:  mov    %eax,(%esp)
0814063a +0x82:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
0814063f +0x87:  mov    %eax,(%esp)
08140642 +0x8a:  call   08142094 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3e8>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x3e8
08140647 +0x8f:  cmp    %eax,%ebx
08140649 +0x91:  setne  %al
0814064c +0x94:  test   %al,%al
0814064e +0x96:  je     08140661 <+0xa9>
08140650 +0x98:  mov    -0x10(%ebp),%eax
08140653 +0x9b:  movl   $0x3,0x4(%eax)
0814065a +0xa2:  mov    $0x0,%eax
0814065f +0xa7:  jmp    081406b0 <+0xf8>
08140661 +0xa9:  mov    -0x14(%ebp),%eax
08140664 +0xac:  mov    0x10(%eax),%esi
08140667 +0xaf:  mov    -0x14(%ebp),%eax
0814066a +0xb2:  movzbl 0xd(%eax),%eax
0814066e +0xb6:  movzbl %al,%ebx
08140671 +0xb9:  mov    -0xc(%ebp),%eax
08140674 +0xbc:  mov    %eax,(%esp)
08140677 +0xbf:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
0814067c +0xc4:  mov    %esi,0x8(%esp)
08140680 +0xc8:  mov    %ebx,0x4(%esp)
08140684 +0xcc:  mov    %eax,(%esp)
08140687 +0xcf:  call   0812d278 <_ZN12advancealtar10CharacData14summonSlotUnitEhi>  ; advancealtar::CharacData::summonSlotUnit(unsigned char, int)
0814068c +0xd4:  mov    -0x10(%ebp),%edx
0814068f +0xd7:  mov    %eax,0x4(%edx)
08140692 +0xda:  mov    -0xc(%ebp),%eax
08140695 +0xdd:  mov    %eax,(%esp)
08140698 +0xe0:  call   081348a0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4a7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4a7
0814069d +0xe5:  mov    %eax,(%esp)
081406a0 +0xe8:  call   08142088 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3dc>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x3dc
081406a5 +0xed:  mov    -0x10(%ebp),%edx
081406a8 +0xf0:  mov    %eax,0x10(%edx)
081406ab +0xf3:  mov    $0x0,%eax
081406b0 +0xf8:  add    $0x20,%esp
081406b3 +0xfb:  pop    %ebx
081406b4 +0xfc:  pop    %esi
081406b5 +0xfd:  pop    %ebp
081406b6 +0xfe:  ret
081406b7 +0xff:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_SummonUnit::process_packet @ 0x81405b8

/* advancealtar::Dispatcher_SummonUnit::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_SummonUnit::process_packet
          (Dispatcher_SummonUnit *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3
          )

{
  STBaseRequest SVar1;
  int iVar2;
  undefined4 uVar3;
  StageControl *this_00;
  CharacData *pCVar4;
  int iVar5;
  
  *(STBaseRequest *)(param_3 + 8) = param_2[0xd];
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if ((*(int *)(param_3 + 4) == 0) &&
     (this_00 = (StageControl *)CUser::getAdvanceAltar(param_1), this_00 != (StageControl *)0x0)) {
    iVar2 = *(int *)(param_2 + 0x14);
    pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
    iVar5 = CharacData::getGageLevel(pCVar4);
    if (iVar2 == iVar5) {
      iVar2 = *(int *)(param_2 + 0x10);
      SVar1 = param_2[0xd];
      pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
      uVar3 = CharacData::summonSlotUnit(pCVar4,(uchar)SVar1,iVar2);
      *(undefined4 *)(param_3 + 4) = uVar3;
      pCVar4 = (CharacData *)StageControl::getCharacData(this_00);
      uVar3 = CharacData::getGage(pCVar4);
      *(undefined4 *)(param_3 + 0x10) = uVar3;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 3;
    }
  }
  return 0;
}
```
