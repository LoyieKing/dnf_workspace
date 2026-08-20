# process_packet

`_ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_ResetStar::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ResetStar` | `0x081410aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081410aa  _ZNK12advancealtar20Dispatcher_ResetStar14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_ResetStar::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x081410aa, 0x081411fb]
081410aa +0x000:  push   %ebp
081410ab +0x001:  mov    %esp,%ebp
081410ad +0x003:  push   %esi
081410ae +0x004:  push   %ebx
081410af +0x005:  sub    $0x30,%esp
081410b2 +0x008:  mov    0x10(%ebp),%eax
081410b5 +0x00b:  mov    %eax,-0x14(%ebp)
081410b8 +0x00e:  mov    0x14(%ebp),%eax
081410bb +0x011:  mov    %eax,-0x10(%ebp)
081410be +0x014:  mov    0x10(%ebp),%eax
081410c1 +0x017:  mov    %eax,0x8(%esp)
081410c5 +0x01b:  mov    0xc(%ebp),%eax
081410c8 +0x01e:  mov    %eax,0x4(%esp)
081410cc +0x022:  mov    0x8(%ebp),%eax
081410cf +0x025:  mov    %eax,(%esp)
081410d2 +0x028:  call   0814108a <_ZNK12advancealtar20Dispatcher_ResetStar11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>  ; advancealtar::Dispatcher_ResetStar::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
081410d7 +0x02d:  mov    %eax,%edx
081410d9 +0x02f:  mov    -0x10(%ebp),%eax
081410dc +0x032:  mov    %edx,0x4(%eax)
081410df +0x035:  mov    -0x10(%ebp),%eax
081410e2 +0x038:  mov    0x4(%eax),%eax
081410e5 +0x03b:  test   %eax,%eax
081410e7 +0x03d:  je     081410f3 <+0x49>
081410e9 +0x03f:  mov    $0x0,%eax
081410ee +0x044:  jmp    081411f5 <+0x14b>
081410f3 +0x049:  mov    -0x14(%ebp),%eax
081410f6 +0x04c:  mov    0x10(%eax),%eax
081410f9 +0x04f:  mov    0xc(%ebp),%edx
081410fc +0x052:  add    $0x8df60,%edx
08141102 +0x058:  mov    %eax,0x8(%esp)
08141106 +0x05c:  mov    0xc(%ebp),%eax
08141109 +0x05f:  mov    %eax,0x4(%esp)
0814110d +0x063:  mov    %edx,(%esp)
08141110 +0x066:  call   081333b2 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE>  ; advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T)
08141115 +0x06b:  mov    -0x10(%ebp),%edx
08141118 +0x06e:  mov    %eax,0x4(%edx)
0814111b +0x071:  mov    -0x10(%ebp),%eax
0814111e +0x074:  mov    0x4(%eax),%eax
08141121 +0x077:  test   %eax,%eax
08141123 +0x079:  jne    081411f0 <+0x146>
08141129 +0x07f:  mov    0xc(%ebp),%eax
0814112c +0x082:  add    $0x8df60,%eax
08141131 +0x087:  mov    %eax,(%esp)
08141134 +0x08a:  call   081348c4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4cb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4cb
08141139 +0x08f:  mov    %eax,-0xc(%ebp)
0814113c +0x092:  cmpl   $0x0,-0xc(%ebp)
08141140 +0x096:  je     081411f0 <+0x146>
08141146 +0x09c:  lea    -0x15(%ebp),%eax
08141149 +0x09f:  mov    %eax,(%esp)
0814114c +0x0a2:  call   08141ff8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x34c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x34c
08141151 +0x0a7:  lea    -0x24(%ebp),%eax
08141154 +0x0aa:  mov    %eax,(%esp)
08141157 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814115c +0x0b2:  movl   $0x210,0x8(%esp)
08141164 +0x0ba:  movl   $0x0,0x4(%esp)
0814116c +0x0c2:  lea    -0x24(%ebp),%eax
0814116f +0x0c5:  mov    %eax,(%esp)
08141172 +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08141177 +0x0cd:  lea    -0x15(%ebp),%eax
0814117a +0x0d0:  movl   $0x1,0x8(%esp)
08141182 +0x0d8:  mov    %eax,0x4(%esp)
08141186 +0x0dc:  lea    -0x24(%ebp),%eax
08141189 +0x0df:  mov    %eax,(%esp)
0814118c +0x0e2:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08141191 +0x0e7:  mov    -0xc(%ebp),%eax
08141194 +0x0ea:  mov    %eax,0x4(%esp)
08141198 +0x0ee:  lea    -0x24(%ebp),%eax
0814119b +0x0f1:  mov    %eax,(%esp)
0814119e +0x0f4:  call   08141781 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE>  ; advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&)
081411a3 +0x0f9:  movl   $0x1,0x4(%esp)
081411ab +0x101:  lea    -0x24(%ebp),%eax
081411ae +0x104:  mov    %eax,(%esp)
081411b1 +0x107:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081411b6 +0x10c:  lea    -0x24(%ebp),%eax
081411b9 +0x10f:  mov    %eax,0x4(%esp)
081411bd +0x113:  mov    0xc(%ebp),%eax
081411c0 +0x116:  mov    %eax,(%esp)
081411c3 +0x119:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081411c8 +0x11e:  jmp    081411e5 <+0x13b>
081411ca +0x120:  mov    %edx,%ebx
081411cc +0x122:  mov    %eax,%esi
081411ce +0x124:  lea    -0x24(%ebp),%eax
081411d1 +0x127:  mov    %eax,(%esp)
081411d4 +0x12a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081411d9 +0x12f:  mov    %esi,%eax
081411db +0x131:  mov    %ebx,%edx
081411dd +0x133:  mov    %eax,(%esp)
081411e0 +0x136:  call   08ae3750 <_Unwind_Resume>
081411e5 +0x13b:  lea    -0x24(%ebp),%eax
081411e8 +0x13e:  mov    %eax,(%esp)
081411eb +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081411f0 +0x146:  mov    $0x0,%eax
081411f5 +0x14b:  add    $0x30,%esp
081411f8 +0x14e:  pop    %ebx
081411f9 +0x14f:  pop    %esi
081411fa +0x150:  pop    %ebp
081411fb +0x151:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_ResetStar::process_packet @ 0x81410aa

/* advancealtar::Dispatcher_ResetStar::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_ResetStar::process_packet
          (Dispatcher_ResetStar *this,CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  undefined4 uVar1;
  PacketGuard local_28 [15];
  _NotiAdvanceAltarUpdateRidable local_19;
  STBaseRequest *local_18;
  STBaseResponse *local_14;
  AdvanceAltarData *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) == 0) {
    uVar1 = CharacAdvanceAltarManager::resetStar
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_1,
                       *(undefined4 *)(local_18 + 0x10));
    *(undefined4 *)(local_14 + 4) = uVar1;
    if ((*(int *)(local_14 + 4) == 0) &&
       (local_10 = (AdvanceAltarData *)
                   CharacAdvanceAltarManager::getCurrentAdvanceAltarData
                             ((CharacAdvanceAltarManager *)(param_1 + 0x8df60)),
       local_10 != (AdvanceAltarData *)0x0)) {
      NOTIPacketStruct::_NotiAdvanceAltarUpdateRidable::_NotiAdvanceAltarUpdateRidable(&local_19);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08141172 to 081411c7 has its CatchHandler @ 081411ca */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x210);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)&local_19,1);
      putRidableInfoToPacket(local_28,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
  }
  return 0;
}
```
