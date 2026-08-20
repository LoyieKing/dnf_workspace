# _ProcPortableUpgradeItem

`_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t`

`WongWork::CItemUpgrade::_ProcPortableUpgradeItem(Inven_Item const&, Inven_Item const&, upgrade_info_t&) const`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08548d3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08548d3c  _ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t
#           WongWork::CItemUpgrade::_ProcPortableUpgradeItem(Inven_Item const&, Inven_Item const&, upgrade_info_t&) const
# range [0x08548d3c, 0x08548e67]
08548d3c +0x000:  push   %ebp
08548d3d +0x001:  mov    %esp,%ebp
08548d3f +0x003:  push   %ebx
08548d40 +0x004:  sub    $0x34,%esp
08548d43 +0x007:  mov    0xc(%ebp),%eax
08548d46 +0x00a:  mov    0x2(%eax),%eax
08548d49 +0x00d:  mov    %eax,%ebx
08548d4b +0x00f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08548d50 +0x014:  mov    %ebx,0x4(%esp)
08548d54 +0x018:  mov    %eax,(%esp)
08548d57 +0x01b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08548d5c +0x020:  mov    %eax,-0x1c(%ebp)
08548d5f +0x023:  cmpl   $0x0,-0x1c(%ebp)
08548d63 +0x027:  jne    08548d6f <+0x33>
08548d65 +0x029:  mov    $0x4,%eax
08548d6a +0x02e:  jmp    08548e61 <+0x125>
08548d6f +0x033:  mov    -0x1c(%ebp),%eax
08548d72 +0x036:  mov    %eax,(%esp)
08548d75 +0x039:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08548d7a +0x03e:  xor    $0x1,%eax
08548d7d +0x041:  test   %al,%al
08548d7f +0x043:  je     08548d8b <+0x4f>
08548d81 +0x045:  mov    $0x0,%eax
08548d86 +0x04a:  jmp    08548e61 <+0x125>
08548d8b +0x04f:  mov    -0x1c(%ebp),%eax
08548d8e +0x052:  mov    %eax,-0x18(%ebp)
08548d91 +0x055:  movl   $0x35,0x4(%esp)
08548d99 +0x05d:  mov    -0x18(%ebp),%eax
08548d9c +0x060:  mov    %eax,(%esp)
08548d9f +0x063:  call   0822ca58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2102>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2102
08548da4 +0x068:  xor    $0x1,%eax
08548da7 +0x06b:  test   %al,%al
08548da9 +0x06d:  je     08548db5 <+0x79>
08548dab +0x06f:  mov    $0x0,%eax
08548db0 +0x074:  jmp    08548e61 <+0x125>
08548db5 +0x079:  mov    -0x18(%ebp),%eax
08548db8 +0x07c:  add    $0x3a0,%eax
08548dbd +0x081:  mov    %eax,(%esp)
08548dc0 +0x084:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08548dc5 +0x089:  cmp    $0x2,%eax
08548dc8 +0x08c:  setne  %al
08548dcb +0x08f:  test   %al,%al
08548dcd +0x091:  je     08548dd9 <+0x9d>
08548dcf +0x093:  mov    $0x4,%eax
08548dd4 +0x098:  jmp    08548e61 <+0x125>
08548dd9 +0x09d:  mov    -0x18(%ebp),%eax
08548ddc +0x0a0:  add    $0x3a0,%eax
08548de1 +0x0a5:  movl   $0x0,0x4(%esp)
08548de9 +0x0ad:  mov    %eax,(%esp)
08548dec +0x0b0:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08548df1 +0x0b5:  mov    (%eax),%eax
08548df3 +0x0b7:  mov    %eax,-0x14(%ebp)
08548df6 +0x0ba:  mov    -0x18(%ebp),%eax
08548df9 +0x0bd:  add    $0x3a0,%eax
08548dfe +0x0c2:  movl   $0x1,0x4(%esp)
08548e06 +0x0ca:  mov    %eax,(%esp)
08548e09 +0x0cd:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08548e0e +0x0d2:  mov    (%eax),%eax
08548e10 +0x0d4:  mov    %eax,-0x10(%ebp)
08548e13 +0x0d7:  mov    0x10(%ebp),%eax
08548e16 +0x0da:  mov    %eax,(%esp)
08548e19 +0x0dd:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548e1e +0x0e2:  mov    %al,-0x9(%ebp)
08548e21 +0x0e5:  movzbl -0x9(%ebp),%eax
08548e25 +0x0e9:  cmp    -0x14(%ebp),%eax
08548e28 +0x0ec:  jl     08548e33 <+0xf7>
08548e2a +0x0ee:  movzbl -0x9(%ebp),%eax
08548e2e +0x0f2:  cmp    -0x10(%ebp),%eax
08548e31 +0x0f5:  jle    08548e3a <+0xfe>
08548e33 +0x0f7:  mov    $0x13,%eax
08548e38 +0x0fc:  jmp    08548e61 <+0x125>
08548e3a +0x0fe:  mov    0x14(%ebp),%eax
08548e3d +0x101:  movl   $0x0,0x34(%eax)
08548e44 +0x108:  mov    0x14(%ebp),%eax
08548e47 +0x10b:  movl   $0x1,0x30(%eax)
08548e4e +0x112:  mov    0xc(%ebp),%eax
08548e51 +0x115:  mov    0x2(%eax),%eax
08548e54 +0x118:  mov    %eax,%edx
08548e56 +0x11a:  mov    0x14(%ebp),%eax
08548e59 +0x11d:  mov    %edx,0x2c(%eax)
08548e5c +0x120:  mov    $0x0,%eax
08548e61 +0x125:  add    $0x34,%esp
08548e64 +0x128:  pop    %ebx
08548e65 +0x129:  pop    %ebp
08548e66 +0x12a:  ret
08548e67 +0x12b:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_ProcPortableUpgradeItem @ 0x8548d3c

/* WongWork::CItemUpgrade::_ProcPortableUpgradeItem(Inven_Item const&, Inven_Item const&,
   upgrade_info_t&) const */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPortableUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,upgrade_info_t *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  CDataManager *this_00;
  CStackableItem *this_01;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CStackableItem *)CDataManager::find_item(this_00,iVar5);
  if (this_01 == (CStackableItem *)0x0) {
    uVar4 = 4;
  }
  else {
    cVar2 = CItem::is_stackable((CItem *)this_01);
    if (cVar2 == '\x01') {
      cVar2 = CStackableItem::verifyStackableAction(this_01,0x35);
      if (cVar2 == '\x01') {
        iVar5 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0));
        if (iVar5 == 2) {
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0),0);
          iVar5 = *piVar6;
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0),1);
          iVar1 = *piVar6;
          bVar3 = Inven_Item::GetUpgrade(param_2);
          if (((int)(uint)bVar3 < iVar5) || (iVar1 < (int)(uint)bVar3)) {
            uVar4 = 0x13;
          }
          else {
            *(undefined4 *)(param_3 + 0x34) = 0;
            *(undefined4 *)(param_3 + 0x30) = 1;
            *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 2);
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 4;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
