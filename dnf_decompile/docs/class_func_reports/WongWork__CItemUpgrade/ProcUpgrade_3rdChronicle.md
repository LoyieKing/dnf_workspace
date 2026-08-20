# ProcUpgrade_3rdChronicle

`_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem`

`WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle(CUser*, ENUM_EQUIPMENTTYPE, unsigned char, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854a006` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854a006  _ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem
#           WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle(CUser*, ENUM_EQUIPMENTTYPE, unsigned char, Inven_Item&, CItem const*)
# range [0x0854a006, 0x0854a1b9]
0854a006 +0x000:  push   %ebp
0854a007 +0x001:  mov    %esp,%ebp
0854a009 +0x003:  push   %esi
0854a00a +0x004:  push   %ebx
0854a00b +0x005:  sub    $0x50,%esp
0854a00e +0x008:  mov    0x14(%ebp),%eax
0854a011 +0x00b:  mov    %al,-0x3c(%ebp)
0854a014 +0x00e:  lea    -0x1c(%ebp),%eax
0854a017 +0x011:  mov    %eax,(%esp)
0854a01a +0x014:  call   0854b268 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0xf0>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0xf0
0854a01f +0x019:  mov    0xc(%ebp),%eax
0854a022 +0x01c:  mov    %eax,(%esp)
0854a025 +0x01f:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0854a02a +0x024:  mov    %eax,-0x1c(%ebp)
0854a02d +0x027:  mov    0xc(%ebp),%eax
0854a030 +0x02a:  mov    %eax,(%esp)
0854a033 +0x02d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0854a038 +0x032:  mov    %al,-0x18(%ebp)
0854a03b +0x035:  mov    0x10(%ebp),%eax
0854a03e +0x038:  mov    %eax,-0x14(%ebp)
0854a041 +0x03b:  movzbl -0x3c(%ebp),%eax
0854a045 +0x03f:  mov    %al,-0x10(%ebp)
0854a048 +0x042:  mov    0x1c(%ebp),%eax
0854a04b +0x045:  lea    0x2f4(%eax),%ecx
0854a051 +0x04b:  lea    -0x20(%ebp),%eax
0854a054 +0x04e:  lea    -0x1c(%ebp),%edx
0854a057 +0x051:  mov    %edx,0x8(%esp)
0854a05b +0x055:  mov    %ecx,0x4(%esp)
0854a05f +0x059:  mov    %eax,(%esp)
0854a062 +0x05c:  call   0854b990 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x818>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x818
0854a067 +0x061:  sub    $0x4,%esp
0854a06a +0x064:  mov    0x1c(%ebp),%eax
0854a06d +0x067:  lea    0x2f4(%eax),%edx
0854a073 +0x06d:  lea    -0xc(%ebp),%eax
0854a076 +0x070:  mov    %edx,0x4(%esp)
0854a07a +0x074:  mov    %eax,(%esp)
0854a07d +0x077:  call   0854b9bc <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x844>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x844
0854a082 +0x07c:  sub    $0x4,%esp
0854a085 +0x07f:  lea    -0xc(%ebp),%eax
0854a088 +0x082:  mov    %eax,0x4(%esp)
0854a08c +0x086:  lea    -0x20(%ebp),%eax
0854a08f +0x089:  mov    %eax,(%esp)
0854a092 +0x08c:  call   0854b9e2 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x86a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x86a
0854a097 +0x091:  test   %al,%al
0854a099 +0x093:  je     0854a179 <+0x173>
0854a09f +0x099:  lea    -0x20(%ebp),%eax
0854a0a2 +0x09c:  mov    %eax,(%esp)
0854a0a5 +0x09f:  call   0854b9f6 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x87e>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x87e
0854a0aa +0x0a4:  add    $0x10,%eax
0854a0ad +0x0a7:  mov    %eax,0x4(%esp)
0854a0b1 +0x0ab:  lea    -0x2c(%ebp),%eax
0854a0b4 +0x0ae:  mov    %eax,(%esp)
0854a0b7 +0x0b1:  call   083db7dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x757a8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x757a8
0854a0bc +0x0b6:  mov    0x18(%ebp),%eax
0854a0bf +0x0b9:  movzbl 0x1f(%eax),%eax
0854a0c3 +0x0bd:  and    $0x1,%eax
0854a0c6 +0x0c0:  test   %al,%al
0854a0c8 +0x0c2:  jne    0854a11c <+0x116>
0854a0ca +0x0c4:  mov    0x18(%ebp),%eax
0854a0cd +0x0c7:  movzbl 0x1f(%eax),%edx
0854a0d1 +0x0cb:  or     $0x1,%edx
0854a0d4 +0x0ce:  mov    %dl,0x1f(%eax)
0854a0d7 +0x0d1:  mov    0x1c(%ebp),%eax
0854a0da +0x0d4:  movzbl 0x30c(%eax),%eax
0854a0e1 +0x0db:  mov    %eax,%edx
0854a0e3 +0x0dd:  and    $0x3,%edx
0854a0e6 +0x0e0:  mov    0x18(%ebp),%eax
0854a0e9 +0x0e3:  and    $0x3,%edx
0854a0ec +0x0e6:  lea    (%edx,%edx,1),%ecx
0854a0ef +0x0e9:  movzbl 0x1f(%eax),%edx
0854a0f3 +0x0ed:  and    $0xfffffff9,%edx
0854a0f6 +0x0f0:  or     %ecx,%edx
0854a0f8 +0x0f2:  mov    %dl,0x1f(%eax)
0854a0fb +0x0f5:  movzbl -0x3c(%ebp),%eax
0854a0ff +0x0f9:  mov    %eax,%edx
0854a101 +0x0fb:  and    $0x1f,%edx
0854a104 +0x0fe:  mov    0x18(%ebp),%eax
0854a107 +0x101:  lea    0x0(,%edx,8),%ecx
0854a10e +0x108:  movzbl 0x1f(%eax),%edx
0854a112 +0x10c:  and    $0x7,%edx
0854a115 +0x10f:  or     %ecx,%edx
0854a117 +0x111:  mov    %dl,0x1f(%eax)
0854a11a +0x114:  jmp    0854a16c <+0x166>
0854a11c +0x116:  mov    0x18(%ebp),%eax
0854a11f +0x119:  movzbl 0x20(%eax),%edx
0854a123 +0x11d:  or     $0x1,%edx
0854a126 +0x120:  mov    %dl,0x20(%eax)
0854a129 +0x123:  mov    0x1c(%ebp),%eax
0854a12c +0x126:  movzbl 0x30c(%eax),%eax
0854a133 +0x12d:  mov    %eax,%edx
0854a135 +0x12f:  and    $0x3,%edx
0854a138 +0x132:  mov    0x18(%ebp),%eax
0854a13b +0x135:  and    $0x3,%edx
0854a13e +0x138:  lea    (%edx,%edx,1),%ecx
0854a141 +0x13b:  movzbl 0x20(%eax),%edx
0854a145 +0x13f:  and    $0xfffffff9,%edx
0854a148 +0x142:  or     %ecx,%edx
0854a14a +0x144:  mov    %dl,0x20(%eax)
0854a14d +0x147:  movzbl -0x3c(%ebp),%eax
0854a151 +0x14b:  mov    %eax,%edx
0854a153 +0x14d:  and    $0x1f,%edx
0854a156 +0x150:  mov    0x18(%ebp),%eax
0854a159 +0x153:  lea    0x0(,%edx,8),%ecx
0854a160 +0x15a:  movzbl 0x20(%eax),%edx
0854a164 +0x15e:  and    $0x7,%edx
0854a167 +0x161:  or     %ecx,%edx
0854a169 +0x163:  mov    %dl,0x20(%eax)
0854a16c +0x166:  lea    -0x2c(%ebp),%eax
0854a16f +0x169:  mov    %eax,(%esp)
0854a172 +0x16c:  call   0837f8a0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf340>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf340
0854a177 +0x171:  jmp    0854a180 <+0x17a>
0854a179 +0x173:  mov    $0x0,%ebx
0854a17e +0x178:  jmp    0854a1a2 <+0x19c>
0854a180 +0x17a:  mov    $0x1,%ebx
0854a185 +0x17f:  jmp    0854a1a2 <+0x19c>
0854a187 +0x181:  mov    %edx,%ebx
0854a189 +0x183:  mov    %eax,%esi
0854a18b +0x185:  lea    -0x1c(%ebp),%eax
0854a18e +0x188:  mov    %eax,(%esp)
0854a191 +0x18b:  call   08513b2e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x163>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x163
0854a196 +0x190:  mov    %esi,%eax
0854a198 +0x192:  mov    %ebx,%edx
0854a19a +0x194:  mov    %eax,(%esp)
0854a19d +0x197:  call   08ae3750 <_Unwind_Resume>
0854a1a2 +0x19c:  lea    -0x1c(%ebp),%eax
0854a1a5 +0x19f:  mov    %eax,(%esp)
0854a1a8 +0x1a2:  call   08513b2e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x163>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x163
0854a1ad +0x1a7:  mov    %ebx,%eax
0854a1af +0x1a9:  lea    -0x8(%ebp),%esp
0854a1b2 +0x1ac:  add    $0x0,%esp
0854a1b5 +0x1af:  pop    %ebx
0854a1b6 +0x1b0:  pop    %esi
0854a1b7 +0x1b1:  pop    %ebp
0854a1b8 +0x1b2:  ret
0854a1b9 +0x1b3:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle @ 0x854a006

/* WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle(CUser*, ENUM_EQUIPMENTTYPE, unsigned char,
   Inven_Item&, CItem const*) */

undefined4 __thiscall
WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle
          (undefined4 this,CUserCharacInfo *param_1,undefined4 param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> local_30 [12];
  STEnchantSystemMapKey local_24 [4];
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  char local_14;
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  local_10 [4];
  
  STEnchantSystemMapKey::STEnchantSystemMapKey((STEnchantSystemMapKey *)&local_20);
  local_20 = CUserCharacInfo::get_charac_job(param_1);
  local_1c = CUserCharacInfo::getCurCharFirstGrowType(param_1);
  local_18 = param_3;
  local_14 = param_4;
                    /* try { // try from 0854a062 to 0854a176 has its CatchHandler @ 0854a187 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::find(local_24);
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
          operator!=((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                      *)local_24,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
            operator->((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                        *)local_24);
    std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::vector
              (local_30,(vector *)(iVar2 + 0x10));
    if ((*(byte *)(param_5 + 0x1f) & 1) == 0) {
      *(byte *)(param_5 + 0x1f) = *(byte *)(param_5 + 0x1f) | 1;
      *(byte *)(param_5 + 0x1f) =
           *(byte *)(param_5 + 0x1f) & 0xf9 | (*(byte *)(param_6 + 0x30c) & 3) * '\x02';
      *(byte *)(param_5 + 0x1f) = *(byte *)(param_5 + 0x1f) & 7 | param_4 * '\b';
    }
    else {
      *(byte *)(param_5 + 0x20) = *(byte *)(param_5 + 0x20) | 1;
      *(byte *)(param_5 + 0x20) =
           *(byte *)(param_5 + 0x20) & 0xf9 | (*(byte *)(param_6 + 0x30c) & 3) * '\x02';
      *(byte *)(param_5 + 0x20) = *(byte *)(param_5 + 0x20) & 7 | param_4 * '\b';
    }
    std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::~vector(local_30);
    uVar3 = 1;
  }
  STEnchantSystemMapKey::~STEnchantSystemMapKey((STEnchantSystemMapKey *)&local_20);
  return uVar3;
}
```
