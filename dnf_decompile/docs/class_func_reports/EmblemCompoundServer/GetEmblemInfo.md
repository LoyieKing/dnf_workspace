# GetEmblemInfo

`_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi`

`EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int)`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x08191818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191818  _ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi
#           EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int)
# range [0x08191818, 0x081919e7]
08191818 +0x000:  push   %ebp
08191819 +0x001:  mov    %esp,%ebp
0819181b +0x003:  push   %ebx
0819181c +0x004:  sub    $0x24,%esp
0819181f +0x007:  mov    0x14(%ebp),%edx
08191822 +0x00a:  mov    0x10(%ebp),%eax
08191825 +0x00d:  movzwl (%eax,%edx,8),%eax
08191829 +0x011:  movzwl %ax,%ebx
0819182c +0x014:  mov    0xc(%ebp),%eax
0819182f +0x017:  mov    %eax,(%esp)
08191832 +0x01a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08191837 +0x01f:  mov    %ebx,0x8(%esp)
0819183b +0x023:  movl   $0x1,0x4(%esp)
08191843 +0x02b:  mov    %eax,(%esp)
08191846 +0x02e:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0819184b +0x033:  mov    %eax,-0x10(%ebp)
0819184e +0x036:  cmpl   $0x0,-0x10(%ebp)
08191852 +0x03a:  je     08191863 <+0x4b>
08191854 +0x03c:  mov    -0x10(%ebp),%eax
08191857 +0x03f:  mov    %eax,(%esp)
0819185a +0x042:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0819185f +0x047:  test   %al,%al
08191861 +0x049:  je     0819186a <+0x52>
08191863 +0x04b:  mov    $0x1,%eax
08191868 +0x050:  jmp    0819186f <+0x57>
0819186a +0x052:  mov    $0x0,%eax
0819186f +0x057:  test   %al,%al
08191871 +0x059:  je     081918bc <+0xa4>
08191873 +0x05b:  movl   $0x16,0x8(%esp)
0819187b +0x063:  movl   $0x24e,0x4(%esp)
08191883 +0x06b:  mov    0xc(%ebp),%eax
08191886 +0x06e:  mov    %eax,(%esp)
08191889 +0x071:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819188e +0x076:  mov    0x14(%ebp),%edx
08191891 +0x079:  mov    0x10(%ebp),%eax
08191894 +0x07c:  movzwl (%eax,%edx,8),%eax
08191898 +0x080:  movzwl %ax,%eax
0819189b +0x083:  mov    %eax,0x8(%esp)
0819189f +0x087:  mov    0xc(%ebp),%eax
081918a2 +0x08a:  mov    %eax,0x4(%esp)
081918a6 +0x08e:  movl   $"EMBLEM COMPOUND",(%esp)
081918ad +0x095:  call   08197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>  ; ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
081918b2 +0x09a:  mov    $0x0,%eax
081918b7 +0x09f:  jmp    081919e2 <+0x1ca>
081918bc +0x0a4:  mov    0x14(%ebp),%edx
081918bf +0x0a7:  mov    0x10(%ebp),%eax
081918c2 +0x0aa:  movzwl (%eax,%edx,8),%eax
081918c6 +0x0ae:  movzwl %ax,%eax
081918c9 +0x0b1:  mov    %eax,0x8(%esp)
081918cd +0x0b5:  movl   $0x1,0x4(%esp)
081918d5 +0x0bd:  mov    0xc(%ebp),%eax
081918d8 +0x0c0:  mov    %eax,(%esp)
081918db +0x0c3:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081918e0 +0x0c8:  test   %al,%al
081918e2 +0x0ca:  je     0819192d <+0x115>
081918e4 +0x0cc:  movl   $0xd5,0x8(%esp)
081918ec +0x0d4:  movl   $0x24e,0x4(%esp)
081918f4 +0x0dc:  mov    0xc(%ebp),%eax
081918f7 +0x0df:  mov    %eax,(%esp)
081918fa +0x0e2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081918ff +0x0e7:  mov    0x14(%ebp),%edx
08191902 +0x0ea:  mov    0x10(%ebp),%eax
08191905 +0x0ed:  movzwl (%eax,%edx,8),%eax
08191909 +0x0f1:  movzwl %ax,%eax
0819190c +0x0f4:  mov    %eax,0x8(%esp)
08191910 +0x0f8:  mov    0xc(%ebp),%eax
08191913 +0x0fb:  mov    %eax,0x4(%esp)
08191917 +0x0ff:  movl   $"EMBLEM COMPOUND",(%esp)
0819191e +0x106:  call   08197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>  ; ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short)
08191923 +0x10b:  mov    $0x0,%eax
08191928 +0x110:  jmp    081919e2 <+0x1ca>
0819192d +0x115:  mov    -0x10(%ebp),%eax
08191930 +0x118:  mov    0x2(%eax),%eax
08191933 +0x11b:  mov    %eax,%ebx
08191935 +0x11d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819193a +0x122:  mov    %ebx,0x4(%esp)
0819193e +0x126:  mov    %eax,(%esp)
08191941 +0x129:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08191946 +0x12e:  mov    %eax,-0xc(%ebp)
08191949 +0x131:  cmpl   $0x0,-0xc(%ebp)
0819194d +0x135:  je     08191966 <+0x14e>
0819194f +0x137:  mov    -0xc(%ebp),%eax
08191952 +0x13a:  mov    (%eax),%eax
08191954 +0x13c:  add    $0xc,%eax
08191957 +0x13f:  mov    (%eax),%edx
08191959 +0x141:  mov    -0xc(%ebp),%eax
0819195c +0x144:  mov    %eax,(%esp)
0819195f +0x147:  call   *%edx
08191961 +0x149:  cmp    $0x14,%eax
08191964 +0x14c:  je     0819196d <+0x155>
08191966 +0x14e:  mov    $0x1,%eax
0819196b +0x153:  jmp    08191972 <+0x15a>
0819196d +0x155:  mov    $0x0,%eax
08191972 +0x15a:  test   %al,%al
08191974 +0x15c:  je     081919b5 <+0x19d>
08191976 +0x15e:  movl   $0x11,0x8(%esp)
0819197e +0x166:  movl   $0x24e,0x4(%esp)
08191986 +0x16e:  mov    0xc(%ebp),%eax
08191989 +0x171:  mov    %eax,(%esp)
0819198c +0x174:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191991 +0x179:  mov    -0x10(%ebp),%eax
08191994 +0x17c:  mov    0x2(%eax),%eax
08191997 +0x17f:  mov    %eax,0x8(%esp)
0819199b +0x183:  mov    0xc(%ebp),%eax
0819199e +0x186:  mov    %eax,0x4(%esp)
081919a2 +0x18a:  movl   $"EMBLEM COMPOUND",(%esp)
081919a9 +0x191:  call   08197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>  ; ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
081919ae +0x196:  mov    $0x0,%eax
081919b3 +0x19b:  jmp    081919e2 <+0x1ca>
081919b5 +0x19d:  mov    0x14(%ebp),%ebx
081919b8 +0x1a0:  mov    -0xc(%ebp),%eax
081919bb +0x1a3:  mov    %eax,(%esp)
081919be +0x1a6:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
081919c3 +0x1ab:  mov    %eax,%edx
081919c5 +0x1ad:  mov    0x10(%ebp),%eax
081919c8 +0x1b0:  mov    %dx,0x2(%eax,%ebx,8)
081919cd +0x1b5:  mov    0x14(%ebp),%edx
081919d0 +0x1b8:  mov    -0x10(%ebp),%eax
081919d3 +0x1bb:  mov    0x2(%eax),%ecx
081919d6 +0x1be:  mov    0x10(%ebp),%eax
081919d9 +0x1c1:  mov    %ecx,0x4(%eax,%edx,8)
081919dd +0x1c5:  mov    $0x1,%eax
081919e2 +0x1ca:  add    $0x24,%esp
081919e5 +0x1cd:  pop    %ebx
081919e6 +0x1ce:  pop    %ebp
081919e7 +0x1cf:  ret
```

## 反编译 C

```c
// EmblemCompoundServer::GetEmblemInfo @ 0x8191818

/* EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int) */

bool __thiscall
EmblemCompoundServer::GetEmblemInfo
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  CInventory *this_00;
  Inven_Item *this_01;
  CDataManager *this_02;
  CItem *this_03;
  int iVar5;
  
  uVar1 = *(ushort *)(param_2 + param_3 * 8);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,1,(uint)uVar1);
  if ((this_01 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(this_01), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + param_3 * 8));
    if (cVar3 == '\0') {
      iVar5 = *(int *)(this_01 + 2);
      this_02 = (CDataManager *)G_CDataManager();
      this_03 = (CItem *)CDataManager::find_item(this_02,iVar5);
      if ((this_03 == (CItem *)0x0) ||
         (iVar5 = (**(code **)(*(int *)this_03 + 0xc))(this_03), iVar5 != 0x14)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        uVar4 = CItem::get_grade(this_03);
        *(undefined2 *)(param_2 + param_3 * 8 + 2) = uVar4;
        *(undefined4 *)(param_2 + param_3 * 8 + 4) = *(undefined4 *)(this_01 + 2);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,0x11);
        ARAD::PRINT_ERROR::find_item("EMBLEM COMPOUND",param_1,*(int *)(this_01 + 2));
      }
      return !bVar2;
    }
    CUser::SendCmdErrorPacket(param_1,0x24e,0xd5);
    ARAD::PRINT_ERROR::CheckItemLock("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + param_3 * 8));
    return false;
  }
  CUser::SendCmdErrorPacket(param_1,0x24e,0x16);
  ARAD::PRINT_ERROR::isEmpty("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + param_3 * 8));
  return false;
}
```
