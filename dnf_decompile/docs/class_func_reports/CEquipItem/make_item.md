# make_item

`_ZNK10CEquipItem9make_itemER10Inven_Item`

`CEquipItem::make_item(Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0851098a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851098a  _ZNK10CEquipItem9make_itemER10Inven_Item
#           CEquipItem::make_item(Inven_Item&) const
# range [0x0851098a, 0x08510bdb]
0851098a +0x000:  push   %ebp
0851098b +0x001:  mov    %esp,%ebp
0851098d +0x003:  push   %ebx
0851098e +0x004:  sub    $0x24,%esp
08510991 +0x007:  mov    0x8(%ebp),%eax
08510994 +0x00a:  mov    (%eax),%eax
08510996 +0x00c:  add    $0x10,%eax
08510999 +0x00f:  mov    (%eax),%edx
0851099b +0x011:  mov    0x8(%ebp),%eax
0851099e +0x014:  mov    %eax,(%esp)
085109a1 +0x017:  call   *%edx
085109a3 +0x019:  test   %al,%al
085109a5 +0x01b:  je     085109b0 <+0x26>
085109a7 +0x01d:  mov    0xc(%ebp),%eax
085109aa +0x020:  movb   $0x8,0x1(%eax)
085109ae +0x024:  jmp    085109b7 <+0x2d>
085109b0 +0x026:  mov    0xc(%ebp),%eax
085109b3 +0x029:  movb   $0x1,0x1(%eax)
085109b7 +0x02d:  mov    0x8(%ebp),%eax
085109ba +0x030:  mov    0x234(%eax),%eax
085109c0 +0x036:  cmp    $0x16,%eax
085109c3 +0x039:  jne    085109ce <+0x44>
085109c5 +0x03b:  mov    0xc(%ebp),%eax
085109c8 +0x03e:  movb   $0x5,0x1(%eax)
085109cc +0x042:  jmp    085109ff <+0x75>
085109ce +0x044:  mov    0x8(%ebp),%eax
085109d1 +0x047:  mov    0x234(%eax),%eax
085109d7 +0x04d:  cmp    $0x17,%eax
085109da +0x050:  je     085109f8 <+0x6e>
085109dc +0x052:  mov    0x8(%ebp),%eax
085109df +0x055:  mov    0x234(%eax),%eax
085109e5 +0x05b:  cmp    $0x18,%eax
085109e8 +0x05e:  je     085109f8 <+0x6e>
085109ea +0x060:  mov    0x8(%ebp),%eax
085109ed +0x063:  mov    0x234(%eax),%eax
085109f3 +0x069:  cmp    $0x19,%eax
085109f6 +0x06c:  jne    085109ff <+0x75>
085109f8 +0x06e:  mov    0xc(%ebp),%eax
085109fb +0x071:  movb   $0x6,0x1(%eax)
085109ff +0x075:  movl   $0x0,(%esp)
08510a06 +0x07c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08510a0b +0x081:  mov    %eax,0x4(%esp)
08510a0f +0x085:  mov    0xc(%ebp),%eax
08510a12 +0x088:  mov    %eax,(%esp)
08510a15 +0x08b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08510a1a +0x090:  mov    0xc(%ebp),%eax
08510a1d +0x093:  mov    %eax,(%esp)
08510a20 +0x096:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08510a25 +0x09b:  mov    0x8(%ebp),%eax
08510a28 +0x09e:  mov    0x170(%eax),%eax
08510a2e +0x0a4:  mov    %eax,%edx
08510a30 +0x0a6:  mov    0xc(%ebp),%eax
08510a33 +0x0a9:  mov    %dx,0xb(%eax)
08510a37 +0x0ad:  mov    0xc(%ebp),%eax
08510a3a +0x0b0:  movzbl 0x1(%eax),%eax
08510a3e +0x0b4:  cmp    $0x8,%al
08510a40 +0x0b6:  jne    08510a91 <+0x107>
08510a42 +0x0b8:  mov    0x8(%ebp),%eax
08510a45 +0x0bb:  mov    0x238(%eax),%eax
08510a4b +0x0c1:  test   %eax,%eax
08510a4d +0x0c3:  jle    08510a76 <+0xec>
08510a4f +0x0c5:  mov    0x8(%ebp),%eax
08510a52 +0x0c8:  mov    0x238(%eax),%ebx
08510a58 +0x0ce:  mov    0x8(%ebp),%eax
08510a5b +0x0d1:  mov    %eax,(%esp)
08510a5e +0x0d4:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
08510a63 +0x0d9:  mov    %eax,(%esp)
08510a66 +0x0dc:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
08510a6b +0x0e1:  cmp    %eax,%ebx
08510a6d +0x0e3:  jge    08510a76 <+0xec>
08510a6f +0x0e5:  mov    $0x1,%eax
08510a74 +0x0ea:  jmp    08510a7b <+0xf1>
08510a76 +0x0ec:  mov    $0x0,%eax
08510a7b +0x0f1:  test   %al,%al
08510a7d +0x0f3:  je     08510a91 <+0x107>
08510a7f +0x0f5:  mov    0x8(%ebp),%eax
08510a82 +0x0f8:  mov    0x238(%eax),%eax
08510a88 +0x0fe:  mov    %eax,%edx
08510a8a +0x100:  mov    0xc(%ebp),%eax
08510a8d +0x103:  mov    %dx,0xb(%eax)
08510a91 +0x107:  mov    0x8(%ebp),%eax
08510a94 +0x10a:  mov    0x34(%eax),%eax
08510a97 +0x10d:  cmp    $0x3,%eax
08510a9a +0x110:  jne    08510aa2 <+0x118>
08510a9c +0x112:  mov    0xc(%ebp),%eax
08510a9f +0x115:  movb   $0x1,(%eax)
08510aa2 +0x118:  mov    0x8(%ebp),%eax
08510aa5 +0x11b:  mov    (%eax),%eax
08510aa7 +0x11d:  add    $0x48,%eax
08510aaa +0x120:  mov    (%eax),%edx
08510aac +0x122:  mov    0x8(%ebp),%eax
08510aaf +0x125:  mov    %eax,(%esp)
08510ab2 +0x128:  call   *%edx
08510ab4 +0x12a:  test   %eax,%eax
08510ab6 +0x12c:  sete   %al
08510ab9 +0x12f:  test   %al,%al
08510abb +0x131:  je     08510b67 <+0x1dd>
08510ac1 +0x137:  movl   $0x0,-0xc(%ebp)
08510ac8 +0x13e:  mov    0x8(%ebp),%eax
08510acb +0x141:  mov    %eax,(%esp)
08510ace +0x144:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08510ad3 +0x149:  test   %eax,%eax
08510ad5 +0x14b:  setne  %al
08510ad8 +0x14e:  test   %al,%al
08510ada +0x150:  je     08510b03 <+0x179>
08510adc +0x152:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08510ae3 +0x159:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08510ae8 +0x15e:  mov    %eax,%ebx
08510aea +0x160:  mov    0x8(%ebp),%eax
08510aed +0x163:  mov    %eax,(%esp)
08510af0 +0x166:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08510af5 +0x16b:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08510afb +0x171:  lea    (%ebx,%eax,1),%eax
08510afe +0x174:  mov    %eax,-0xc(%ebp)
08510b01 +0x177:  jmp    08510b25 <+0x19b>
08510b03 +0x179:  mov    0x8(%ebp),%eax
08510b06 +0x17c:  mov    %eax,(%esp)
08510b09 +0x17f:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08510b0e +0x184:  test   %eax,%eax
08510b10 +0x186:  setne  %al
08510b13 +0x189:  test   %al,%al
08510b15 +0x18b:  je     08510b25 <+0x19b>
08510b17 +0x18d:  mov    0x8(%ebp),%eax
08510b1a +0x190:  mov    %eax,(%esp)
08510b1d +0x193:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
08510b22 +0x198:  mov    %eax,-0xc(%ebp)
08510b25 +0x19b:  cmpl   $0x0,-0xc(%ebp)
08510b29 +0x19f:  je     08510b67 <+0x1dd>
08510b2b +0x1a1:  mov    0x8(%ebp),%eax
08510b2e +0x1a4:  mov    0x234(%eax),%eax
08510b34 +0x1aa:  cmp    $0xa,%eax
08510b37 +0x1ad:  je     08510b67 <+0x1dd>
08510b39 +0x1af:  mov    -0xc(%ebp),%eax
08510b3c +0x1b2:  lea    -0x44a54a80(%eax),%ecx
08510b42 +0x1b8:  mov    $0xc22e4507,%edx
08510b47 +0x1bd:  mov    %ecx,%eax
08510b49 +0x1bf:  imul   %edx
08510b4b +0x1c1:  lea    (%edx,%ecx,1),%eax
08510b4e +0x1c4:  mov    %eax,%edx
08510b50 +0x1c6:  sar    $0x10,%edx
08510b53 +0x1c9:  mov    %ecx,%eax
08510b55 +0x1cb:  sar    $0x1f,%eax
08510b58 +0x1ce:  mov    %edx,%ecx
08510b5a +0x1d0:  sub    %eax,%ecx
08510b5c +0x1d2:  mov    %ecx,%eax
08510b5e +0x1d4:  mov    %eax,%edx
08510b60 +0x1d6:  mov    0xc(%ebp),%eax
08510b63 +0x1d9:  mov    %dx,0xb(%eax)
08510b67 +0x1dd:  mov    0xc(%ebp),%eax
08510b6a +0x1e0:  movl   $0x0,0xd(%eax)
08510b71 +0x1e7:  mov    0xc(%ebp),%eax
08510b74 +0x1ea:  add    $0x15,%eax
08510b77 +0x1ed:  mov    %eax,(%esp)
08510b7a +0x1f0:  call   085139e8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d
08510b7f +0x1f5:  mov    0x8(%ebp),%eax
08510b82 +0x1f8:  mov    0x234(%eax),%eax
08510b88 +0x1fe:  cmp    $0x19,%eax
08510b8b +0x201:  ja     08510bc8 <+0x23e>
08510b8d +0x203:  mov    $0x1,%edx
08510b92 +0x208:  mov    %edx,%ebx
08510b94 +0x20a:  mov    %eax,%ecx
08510b96 +0x20c:  shl    %cl,%ebx
08510b98 +0x20e:  mov    %ebx,%eax
08510b9a +0x210:  and    $0x3bffc00,%eax
08510b9f +0x215:  test   %eax,%eax
08510ba1 +0x217:  je     08510bc8 <+0x23e>
08510ba3 +0x219:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08510ba8 +0x21e:  mov    0x198(%eax),%eax
08510bae +0x224:  mov    0xc(%ebp),%edx
08510bb1 +0x227:  add    $0x15,%edx
08510bb4 +0x22a:  mov    %eax,0x8(%esp)
08510bb8 +0x22e:  mov    %edx,0x4(%esp)
08510bbc +0x232:  movl   $&g_ItemGloballyUniqueIdentifierGenerator,(%esp)
08510bc3 +0x239:  call   0889246c <_ZN38CItemGloballyUniqueIdentifierGenerator8generateEP30itemGloballyUniqueIdentifier_ti>  ; CItemGloballyUniqueIdentifierGenerator::generate(itemGloballyUniqueIdentifier_t*, int)
08510bc8 +0x23e:  mov    0xc(%ebp),%eax
08510bcb +0x241:  add    $0x11,%eax
08510bce +0x244:  mov    %eax,(%esp)
08510bd1 +0x247:  call   080cb75c <_GLOBAL__I__ZN10BingoEventC2Ev+0x5a9>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5a9
08510bd6 +0x24c:  add    $0x24,%esp
08510bd9 +0x24f:  pop    %ebx
08510bda +0x250:  pop    %ebp
08510bdb +0x251:  ret
```

## 反编译 C

```c
// CEquipItem::make_item @ 0x851098a

/* CEquipItem::make_item(Inven_Item&) const */

void __thiscall CEquipItem::make_item(CEquipItem *this,Inven_Item *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *this_00;
  int iVar4;
  int local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x10))(this);
  if (cVar2 == '\0') {
    param_1[1] = (Inven_Item)0x1;
  }
  else {
    param_1[1] = (Inven_Item)0x8;
  }
  if (*(int *)(this + 0x234) == 0x16) {
    param_1[1] = (Inven_Item)0x5;
  }
  else if (((*(int *)(this + 0x234) == 0x17) || (*(int *)(this + 0x234) == 0x18)) ||
          (*(int *)(this + 0x234) == 0x19)) {
    param_1[1] = (Inven_Item)0x6;
  }
  iVar3 = get_rand_int(0);
  Inven_Item::set_add_info(param_1,iVar3);
  Inven_Item::ResetItemAttr(param_1);
  *(short *)(param_1 + 0xb) = (short)*(undefined4 *)(this + 0x170);
  if (param_1[1] != (Inven_Item)0x8) goto LAB_08510a91;
  if (*(int *)(this + 0x238) < 1) {
LAB_08510a76:
    bVar1 = false;
  }
  else {
    iVar3 = *(int *)(this + 0x238);
    this_00 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
              getAvatarTypeSelect(this);
    iVar4 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size(this_00);
    if (iVar4 <= iVar3) goto LAB_08510a76;
    bVar1 = true;
  }
  if (bVar1) {
    *(short *)(param_1 + 0xb) = (short)*(undefined4 *)(this + 0x238);
  }
LAB_08510a91:
  if (*(int *)(this + 0x34) == 3) {
    *param_1 = (Inven_Item)0x1;
  }
  iVar3 = (**(code **)(*(int *)this + 0x48))(this);
  if (iVar3 == 0) {
    local_10 = 0;
    iVar3 = CItem::getUsablePeriod((CItem *)this);
    if (iVar3 == 0) {
      iVar3 = CItem::getExpirationDate((CItem *)this);
      if (iVar3 != 0) {
        local_10 = CItem::getExpirationDate((CItem *)this);
      }
    }
    else {
      local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar3 = CItem::getUsablePeriod((CItem *)this);
      local_10 = local_10 + iVar3 * 0x15180;
    }
    if ((local_10 != 0) && (*(int *)(this + 0x234) != 10)) {
      *(short *)(param_1 + 0xb) = (short)((local_10 + -0x44a54a80) / 0x15180);
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  itemGloballyUniqueIdentifier_t::reset((itemGloballyUniqueIdentifier_t *)(param_1 + 0x15));
  if ((*(uint *)(this + 0x234) < 0x1a) &&
     ((1 << ((byte)*(uint *)(this + 0x234) & 0x1f) & 0x3bffc00U) != 0)) {
    iVar3 = G_CEnvironment();
    CItemGloballyUniqueIdentifierGenerator::generate
              ((CItemGloballyUniqueIdentifierGenerator *)&g_ItemGloballyUniqueIdentifierGenerator,
               (itemGloballyUniqueIdentifier_t *)(param_1 + 0x15),*(int *)(iVar3 + 0x198));
  }
  stAmplifyOption_t::reset((stAmplifyOption_t *)(param_1 + 0x11));
  return;
}
```
