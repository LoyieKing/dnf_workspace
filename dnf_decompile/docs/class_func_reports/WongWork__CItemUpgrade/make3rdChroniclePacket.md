# make3rdChroniclePacket

`_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard`

`WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854a9aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854a9aa  _ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard
#           WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
# range [0x0854a9aa, 0x0854ac89]
0854a9aa +0x000:  push   %ebp
0854a9ab +0x001:  mov    %esp,%ebp
0854a9ad +0x003:  push   %edi
0854a9ae +0x004:  push   %esi
0854a9af +0x005:  push   %ebx
0854a9b0 +0x006:  sub    $0x4c,%esp
0854a9b3 +0x009:  cmpl   $0x0,0xc(%ebp)
0854a9b7 +0x00d:  jne    0854a9c3 <+0x19>
0854a9b9 +0x00f:  mov    $0x0,%ebx
0854a9be +0x014:  jmp    0854ac80 <+0x2d6>
0854a9c3 +0x019:  lea    -0x48(%ebp),%eax
0854a9c6 +0x01c:  mov    %eax,%ebx
0854a9c8 +0x01e:  mov    $0x1,%esi
0854a9cd +0x023:  jmp    0854a9dd <+0x33>
0854a9cf +0x025:  mov    %ebx,(%esp)
0854a9d2 +0x028:  call   0854b268 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0xf0>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0xf0
0854a9d7 +0x02d:  add    $0x10,%ebx
0854a9da +0x030:  sub    $0x1,%esi
0854a9dd +0x033:  cmp    $0xffffffff,%esi
0854a9e0 +0x036:  setne  %al
0854a9e3 +0x039:  test   %al,%al
0854a9e5 +0x03b:  jne    0854a9cf <+0x25>
0854a9e7 +0x03d:  movl   $0x0,-0x28(%ebp)
0854a9ee +0x044:  movb   $0x0,-0x21(%ebp)
0854a9f2 +0x048:  mov    0x10(%ebp),%eax
0854a9f5 +0x04b:  movzbl 0x1f(%eax),%eax
0854a9f9 +0x04f:  and    $0x1,%eax
0854a9fc +0x052:  test   %al,%al
0854a9fe +0x054:  je     0854aa18 <+0x6e>
0854aa00 +0x056:  addb   $0x1,-0x21(%ebp)
0854aa04 +0x05a:  mov    0x10(%ebp),%eax
0854aa07 +0x05d:  movzbl 0x20(%eax),%eax
0854aa0b +0x061:  and    $0x1,%eax
0854aa0e +0x064:  test   %al,%al
0854aa10 +0x066:  je     0854aa35 <+0x8b>
0854aa12 +0x068:  addb   $0x1,-0x21(%ebp)
0854aa16 +0x06c:  jmp    0854aa35 <+0x8b>
0854aa18 +0x06e:  movsbl -0x21(%ebp),%edx
0854aa1c +0x072:  mov    0x14(%ebp),%eax
0854aa1f +0x075:  mov    %edx,0x4(%esp)
0854aa23 +0x079:  mov    %eax,(%esp)
0854aa26 +0x07c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854aa2b +0x081:  mov    $0x0,%ebx
0854aa30 +0x086:  jmp    0854ac66 <+0x2bc>
0854aa35 +0x08b:  mov    0x10(%ebp),%eax
0854aa38 +0x08e:  mov    0x2(%eax),%eax
0854aa3b +0x091:  mov    %eax,%ebx
0854aa3d +0x093:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854aa42 +0x098:  mov    %ebx,0x4(%esp)
0854aa46 +0x09c:  mov    %eax,(%esp)
0854aa49 +0x09f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854aa4e +0x0a4:  mov    %eax,-0x20(%ebp)
0854aa51 +0x0a7:  cmpl   $0x0,-0x20(%ebp)
0854aa55 +0x0ab:  jne    0854aa61 <+0xb7>
0854aa57 +0x0ad:  mov    $0x0,%ebx
0854aa5c +0x0b2:  jmp    0854ac66 <+0x2bc>
0854aa61 +0x0b7:  movsbl -0x21(%ebp),%edx
0854aa65 +0x0bb:  mov    0x14(%ebp),%eax
0854aa68 +0x0be:  mov    %edx,0x4(%esp)
0854aa6c +0x0c2:  mov    %eax,(%esp)
0854aa6f +0x0c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854aa74 +0x0ca:  movl   $0x0,-0x1c(%ebp)
0854aa7b +0x0d1:  jmp    0854ac23 <+0x279>
0854aa80 +0x0d6:  mov    -0x1c(%ebp),%eax
0854aa83 +0x0d9:  mov    0x10(%ebp),%edx
0854aa86 +0x0dc:  movzbl 0x1f(%edx,%eax,1),%eax
0854aa8b +0x0e1:  shr    %al
0854aa8d +0x0e3:  and    $0x3,%eax
0854aa90 +0x0e6:  test   %al,%al
0854aa92 +0x0e8:  jne    0854aa9d <+0xf3>
0854aa94 +0x0ea:  movl   $0x4e6,-0x28(%ebp)
0854aa9b +0x0f1:  jmp    0854aafb <+0x151>
0854aa9d +0x0f3:  mov    -0x1c(%ebp),%eax
0854aaa0 +0x0f6:  mov    0x10(%ebp),%edx
0854aaa3 +0x0f9:  movzbl 0x1f(%edx,%eax,1),%eax
0854aaa8 +0x0fe:  shr    %al
0854aaaa +0x100:  and    $0x3,%eax
0854aaad +0x103:  cmp    $0x1,%al
0854aaaf +0x105:  jne    0854aaba <+0x110>
0854aab1 +0x107:  movl   $0x4e7,-0x28(%ebp)
0854aab8 +0x10e:  jmp    0854aafb <+0x151>
0854aaba +0x110:  mov    -0x1c(%ebp),%eax
0854aabd +0x113:  mov    0x10(%ebp),%edx
0854aac0 +0x116:  movzbl 0x1f(%edx,%eax,1),%eax
0854aac5 +0x11b:  shr    %al
0854aac7 +0x11d:  and    $0x3,%eax
0854aaca +0x120:  cmp    $0x2,%al
0854aacc +0x122:  jne    0854aad7 <+0x12d>
0854aace +0x124:  movl   $0x4e8,-0x28(%ebp)
0854aad5 +0x12b:  jmp    0854aafb <+0x151>
0854aad7 +0x12d:  mov    -0x1c(%ebp),%eax
0854aada +0x130:  mov    0x10(%ebp),%edx
0854aadd +0x133:  movzbl 0x1f(%edx,%eax,1),%eax
0854aae2 +0x138:  shr    %al
0854aae4 +0x13a:  and    $0x3,%eax
0854aae7 +0x13d:  cmp    $0x3,%al
0854aae9 +0x13f:  jne    0854aaf4 <+0x14a>
0854aaeb +0x141:  movl   $0x4e9,-0x28(%ebp)
0854aaf2 +0x148:  jmp    0854aafb <+0x151>
0854aaf4 +0x14a:  movl   $0xffffffff,-0x28(%ebp)
0854aafb +0x151:  mov    -0x1c(%ebp),%ebx
0854aafe +0x154:  mov    0xc(%ebp),%eax
0854ab01 +0x157:  mov    %eax,(%esp)
0854ab04 +0x15a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0854ab09 +0x15f:  mov    %ebx,%edx
0854ab0b +0x161:  shl    $0x4,%edx
0854ab0e +0x164:  lea    -0x18(%ebp),%ecx
0854ab11 +0x167:  lea    (%ecx,%edx,1),%edx
0854ab14 +0x16a:  sub    $0x30,%edx
0854ab17 +0x16d:  mov    %eax,(%edx)
0854ab19 +0x16f:  mov    -0x1c(%ebp),%ebx
0854ab1c +0x172:  mov    0xc(%ebp),%eax
0854ab1f +0x175:  mov    %eax,(%esp)
0854ab22 +0x178:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0854ab27 +0x17d:  mov    %ebx,%edx
0854ab29 +0x17f:  shl    $0x4,%edx
0854ab2c +0x182:  lea    -0x18(%ebp),%ecx
0854ab2f +0x185:  lea    (%ecx,%edx,1),%edx
0854ab32 +0x188:  sub    $0x30,%edx
0854ab35 +0x18b:  mov    %al,0x4(%edx)
0854ab38 +0x18e:  mov    -0x1c(%ebp),%ebx
0854ab3b +0x191:  mov    -0x20(%ebp),%eax
0854ab3e +0x194:  mov    (%eax),%eax
0854ab40 +0x196:  add    $0xc,%eax
0854ab43 +0x199:  mov    (%eax),%edx
0854ab45 +0x19b:  mov    -0x20(%ebp),%eax
0854ab48 +0x19e:  mov    %eax,(%esp)
0854ab4b +0x1a1:  call   *%edx
0854ab4d +0x1a3:  mov    %ebx,%edx
0854ab4f +0x1a5:  shl    $0x4,%edx
0854ab52 +0x1a8:  lea    -0x18(%ebp),%ecx
0854ab55 +0x1ab:  lea    (%ecx,%edx,1),%edx
0854ab58 +0x1ae:  sub    $0x28,%edx
0854ab5b +0x1b1:  mov    %eax,(%edx)
0854ab5d +0x1b3:  mov    -0x1c(%ebp),%ecx
0854ab60 +0x1b6:  mov    -0x1c(%ebp),%eax
0854ab63 +0x1b9:  mov    0x10(%ebp),%edx
0854ab66 +0x1bc:  movzbl 0x1f(%edx,%eax,1),%eax
0854ab6b +0x1c1:  shr    $0x3,%al
0854ab6e +0x1c4:  mov    %ecx,%edx
0854ab70 +0x1c6:  shl    $0x4,%edx
0854ab73 +0x1c9:  lea    -0x18(%ebp),%ecx
0854ab76 +0x1cc:  lea    (%ecx,%edx,1),%edx
0854ab79 +0x1cf:  sub    $0x30,%edx
0854ab7c +0x1d2:  mov    %al,0xc(%edx)
0854ab7f +0x1d5:  mov    0x14(%ebp),%eax
0854ab82 +0x1d8:  mov    -0x28(%ebp),%edx
0854ab85 +0x1db:  mov    %edx,0x4(%esp)
0854ab89 +0x1df:  mov    %eax,(%esp)
0854ab8c +0x1e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0854ab91 +0x1e7:  mov    -0x1c(%ebp),%eax
0854ab94 +0x1ea:  shl    $0x4,%eax
0854ab97 +0x1ed:  lea    -0x18(%ebp),%edx
0854ab9a +0x1f0:  lea    (%edx,%eax,1),%eax
0854ab9d +0x1f3:  sub    $0x30,%eax
0854aba0 +0x1f6:  mov    (%eax),%eax
0854aba2 +0x1f8:  mov    %eax,%edx
0854aba4 +0x1fa:  mov    0x14(%ebp),%eax
0854aba7 +0x1fd:  mov    %edx,0x4(%esp)
0854abab +0x201:  mov    %eax,(%esp)
0854abae +0x204:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854abb3 +0x209:  mov    -0x1c(%ebp),%eax
0854abb6 +0x20c:  shl    $0x4,%eax
0854abb9 +0x20f:  lea    -0x18(%ebp),%ecx
0854abbc +0x212:  lea    (%ecx,%eax,1),%eax
0854abbf +0x215:  sub    $0x30,%eax
0854abc2 +0x218:  movzbl 0x4(%eax),%eax
0854abc6 +0x21c:  movsbl %al,%edx
0854abc9 +0x21f:  mov    0x14(%ebp),%eax
0854abcc +0x222:  mov    %edx,0x4(%esp)
0854abd0 +0x226:  mov    %eax,(%esp)
0854abd3 +0x229:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854abd8 +0x22e:  mov    -0x1c(%ebp),%eax
0854abdb +0x231:  shl    $0x4,%eax
0854abde +0x234:  lea    -0x18(%ebp),%edx
0854abe1 +0x237:  lea    (%edx,%eax,1),%eax
0854abe4 +0x23a:  sub    $0x28,%eax
0854abe7 +0x23d:  mov    (%eax),%eax
0854abe9 +0x23f:  mov    %eax,%edx
0854abeb +0x241:  mov    0x14(%ebp),%eax
0854abee +0x244:  mov    %edx,0x4(%esp)
0854abf2 +0x248:  mov    %eax,(%esp)
0854abf5 +0x24b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854abfa +0x250:  mov    -0x1c(%ebp),%eax
0854abfd +0x253:  shl    $0x4,%eax
0854ac00 +0x256:  lea    -0x18(%ebp),%ecx
0854ac03 +0x259:  lea    (%ecx,%eax,1),%eax
0854ac06 +0x25c:  sub    $0x30,%eax
0854ac09 +0x25f:  movzbl 0xc(%eax),%eax
0854ac0d +0x263:  movzbl %al,%edx
0854ac10 +0x266:  mov    0x14(%ebp),%eax
0854ac13 +0x269:  mov    %edx,0x4(%esp)
0854ac17 +0x26d:  mov    %eax,(%esp)
0854ac1a +0x270:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854ac1f +0x275:  addl   $0x1,-0x1c(%ebp)
0854ac23 +0x279:  movsbl -0x21(%ebp),%eax
0854ac27 +0x27d:  cmp    -0x1c(%ebp),%eax
0854ac2a +0x280:  setg   %al
0854ac2d +0x283:  test   %al,%al
0854ac2f +0x285:  jne    0854aa80 <+0xd6>
0854ac35 +0x28b:  mov    $0x1,%ebx
0854ac3a +0x290:  jmp    0854ac66 <+0x2bc>
0854ac3c +0x292:  mov    %edx,%esi
0854ac3e +0x294:  mov    %eax,%edi
0854ac40 +0x296:  lea    -0x48(%ebp),%eax
0854ac43 +0x299:  lea    0x20(%eax),%ebx
0854ac46 +0x29c:  lea    -0x48(%ebp),%eax
0854ac49 +0x29f:  cmp    %eax,%ebx
0854ac4b +0x2a1:  je     0854ac5a <+0x2b0>
0854ac4d +0x2a3:  sub    $0x10,%ebx
0854ac50 +0x2a6:  mov    %ebx,(%esp)
0854ac53 +0x2a9:  call   08513b2e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x163>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x163
0854ac58 +0x2ae:  jmp    0854ac46 <+0x29c>
0854ac5a +0x2b0:  mov    %edi,%eax
0854ac5c +0x2b2:  mov    %esi,%edx
0854ac5e +0x2b4:  mov    %eax,(%esp)
0854ac61 +0x2b7:  call   08ae3750 <_Unwind_Resume>
0854ac66 +0x2bc:  lea    -0x48(%ebp),%eax
0854ac69 +0x2bf:  lea    0x20(%eax),%esi
0854ac6c +0x2c2:  lea    -0x48(%ebp),%eax
0854ac6f +0x2c5:  cmp    %eax,%esi
0854ac71 +0x2c7:  je     0854ac80 <+0x2d6>
0854ac73 +0x2c9:  sub    $0x10,%esi
0854ac76 +0x2cc:  mov    %esi,(%esp)
0854ac79 +0x2cf:  call   08513b2e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x163>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x163
0854ac7e +0x2d4:  jmp    0854ac6c <+0x2c2>
0854ac80 +0x2d6:  mov    %ebx,%eax
0854ac82 +0x2d8:  add    $0x4c,%esp
0854ac85 +0x2db:  pop    %ebx
0854ac86 +0x2dc:  pop    %esi
0854ac87 +0x2dd:  pop    %edi
0854ac88 +0x2de:  pop    %ebp
0854ac89 +0x2df:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::make3rdChroniclePacket @ 0x854a9aa

/* WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*) */

undefined4 __thiscall
WongWork::CItemUpgrade::make3rdChroniclePacket
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,PacketGuard *param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  STEnchantSystemMapKey *pSVar5;
  STEnchantSystemMapKey local_4c [4];
  char acStack_48 [4];
  int iStack_44;
  byte abStack_40 [20];
  int local_2c;
  char local_25;
  int *local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    pSVar5 = local_4c;
    for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
      STEnchantSystemMapKey::STEnchantSystemMapKey(pSVar5);
      pSVar5 = pSVar5 + 0x10;
    }
    local_2c = 0;
    local_25 = '\0';
    if (((byte)param_2[0x1f] & 1) == 0) {
                    /* try { // try from 0854aa26 to 0854ac1e has its CatchHandler @ 0854ac3c */
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
      uVar3 = 0;
    }
    else {
      local_25 = '\x01';
      if (((byte)param_2[0x20] & 1) != 0) {
        local_25 = '\x02';
      }
      iVar4 = *(int *)(param_2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_24 = (int *)CDataManager::find_item(this_00,iVar4);
      if (local_24 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)local_25);
        for (local_20 = 0; iVar4 = local_20, local_20 < local_25; local_20 = local_20 + 1) {
          if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 0) {
            local_2c = 0x4e6;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 1) {
            local_2c = 0x4e7;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 2) {
            local_2c = 0x4e8;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 3) {
            local_2c = 0x4e9;
          }
          else {
            local_2c = -1;
          }
          uVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          *(undefined4 *)(local_4c + iVar4 * 0x10) = uVar3;
          iVar4 = local_20;
          cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          acStack_48[iVar4 * 0x10] = cVar1;
          iVar4 = local_20;
          iVar2 = (**(code **)(*local_24 + 0xc))(local_24);
          (&iStack_44)[iVar4 * 4] = iVar2;
          abStack_40[local_20 * 0x10] = (byte)param_2[local_20 + 0x1f] >> 3;
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,local_2c);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,*(int *)(local_4c + local_20 * 0x10));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,(int)acStack_48[local_20 * 0x10]);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(&iStack_44)[local_20 * 4]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,(uint)abStack_40[local_20 * 0x10]);
        }
        uVar3 = 1;
      }
    }
    pSVar5 = (STEnchantSystemMapKey *)&local_2c;
    while (pSVar5 != local_4c) {
      pSVar5 = pSVar5 + -0x10;
      STEnchantSystemMapKey::~STEnchantSystemMapKey(pSVar5);
    }
  }
  return uVar3;
}
```
