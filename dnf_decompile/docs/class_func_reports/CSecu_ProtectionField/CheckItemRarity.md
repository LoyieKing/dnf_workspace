# CheckItemRarity

`_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item`

`CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x082887d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082887d0  _ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item
#           CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item const*)
# range [0x082887d0, 0x08288993]
082887d0 +0x000:  push   %ebp
082887d1 +0x001:  mov    %esp,%ebp
082887d3 +0x003:  sub    $0x28,%esp
082887d6 +0x006:  cmpl   $0x0,0x14(%ebp)
082887da +0x00a:  je     082887e2 <+0x12>
082887dc +0x00c:  cmpl   $0x0,0xc(%ebp)
082887e0 +0x010:  jne    082887ec <+0x1c>
082887e2 +0x012:  mov    $0x1,%eax
082887e7 +0x017:  jmp    08288991 <+0x1c1>
082887ec +0x01c:  movl   $0x0,-0x18(%ebp)
082887f3 +0x023:  cmpl   $0x0,0x14(%ebp)
082887f7 +0x027:  je     08288810 <+0x40>
082887f9 +0x029:  mov    0x14(%ebp),%eax
082887fc +0x02c:  mov    %eax,(%esp)
082887ff +0x02f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08288804 +0x034:  cmp    $0x1,%eax
08288807 +0x037:  jle    08288810 <+0x40>
08288809 +0x039:  mov    $0x1,%eax
0828880e +0x03e:  jmp    08288815 <+0x45>
08288810 +0x040:  mov    $0x0,%eax
08288815 +0x045:  test   %al,%al
08288817 +0x047:  je     08288827 <+0x57>
08288819 +0x049:  mov    0x14(%ebp),%eax
0828881c +0x04c:  mov    %eax,(%esp)
0828881f +0x04f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08288824 +0x054:  mov    %eax,-0x18(%ebp)
08288827 +0x057:  mov    0x10(%ebp),%eax
0828882a +0x05a:  mov    %eax,0x4(%esp)
0828882e +0x05e:  mov    0x8(%ebp),%eax
08288831 +0x061:  mov    %eax,(%esp)
08288834 +0x064:  call   082880dc <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION>  ; CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION)
08288839 +0x069:  mov    %eax,-0x14(%ebp)
0828883c +0x06c:  cmpl   $0x0,-0x14(%ebp)
08288840 +0x070:  jne    0828884c <+0x7c>
08288842 +0x072:  mov    $0x0,%eax
08288847 +0x077:  jmp    08288991 <+0x1c1>
0828884c +0x07c:  cmpl   $0x0,0x18(%ebp)
08288850 +0x080:  jne    0828885c <+0x8c>
08288852 +0x082:  mov    $0x1,%eax
08288857 +0x087:  jmp    08288991 <+0x1c1>
0828885c +0x08c:  mov    -0x18(%ebp),%eax
0828885f +0x08f:  cmp    $0x2,%eax
08288862 +0x092:  jg     0828889c <+0xcc>
08288864 +0x094:  mov    0x14(%ebp),%eax
08288867 +0x097:  mov    %eax,(%esp)
0828886a +0x09a:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0828886f +0x09f:  cmp    $0x2,%eax
08288872 +0x0a2:  jne    0828888d <+0xbd>
08288874 +0x0a4:  mov    0x14(%ebp),%eax
08288877 +0x0a7:  mov    (%eax),%eax
08288879 +0x0a9:  add    $0x4c,%eax
0828887c +0x0ac:  mov    (%eax),%edx
0828887e +0x0ae:  mov    0x14(%ebp),%eax
08288881 +0x0b1:  mov    %eax,(%esp)
08288884 +0x0b4:  call   *%edx
08288886 +0x0b6:  xor    $0x1,%eax
08288889 +0x0b9:  test   %al,%al
0828888b +0x0bb:  jne    0828889c <+0xcc>
0828888d +0x0bd:  mov    0x18(%ebp),%eax
08288890 +0x0c0:  mov    %eax,(%esp)
08288893 +0x0c3:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08288898 +0x0c8:  cmp    $0xa,%al
0828889a +0x0ca:  jbe    082888a3 <+0xd3>
0828889c +0x0cc:  mov    $0x1,%eax
082888a1 +0x0d1:  jmp    082888a8 <+0xd8>
082888a3 +0x0d3:  mov    $0x0,%eax
082888a8 +0x0d8:  test   %al,%al
082888aa +0x0da:  je     08288965 <+0x195>
082888b0 +0x0e0:  mov    -0x14(%ebp),%eax
082888b3 +0x0e3:  mov    %eax,0x8(%esp)
082888b7 +0x0e7:  mov    0xc(%ebp),%eax
082888ba +0x0ea:  mov    %eax,0x4(%esp)
082888be +0x0ee:  mov    0x8(%ebp),%eax
082888c1 +0x0f1:  mov    %eax,(%esp)
082888c4 +0x0f4:  call   08288ac8 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm>  ; CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long)
082888c9 +0x0f9:  mov    %eax,-0x10(%ebp)
082888cc +0x0fc:  cmpl   $0x0,-0x10(%ebp)
082888d0 +0x100:  je     082888da <+0x10a>
082888d2 +0x102:  mov    -0x10(%ebp),%eax
082888d5 +0x105:  jmp    08288991 <+0x1c1>
082888da +0x10a:  cmpl   $0x23,0x10(%ebp)
082888de +0x10e:  jne    08288938 <+0x168>
082888e0 +0x110:  mov    -0x14(%ebp),%eax
082888e3 +0x113:  mov    %eax,0x8(%esp)
082888e7 +0x117:  mov    0xc(%ebp),%eax
082888ea +0x11a:  mov    %eax,0x4(%esp)
082888ee +0x11e:  mov    0x8(%ebp),%eax
082888f1 +0x121:  mov    %eax,(%esp)
082888f4 +0x124:  call   08288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>  ; CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long)
082888f9 +0x129:  mov    %eax,-0x10(%ebp)
082888fc +0x12c:  cmpl   $0x0,-0x10(%ebp)
08288900 +0x130:  je     0828890a <+0x13a>
08288902 +0x132:  mov    -0x10(%ebp),%eax
08288905 +0x135:  jmp    08288991 <+0x1c1>
0828890a +0x13a:  mov    0x10(%ebp),%eax
0828890d +0x13d:  mov    %eax,0xc(%esp)
08288911 +0x141:  mov    -0x14(%ebp),%eax
08288914 +0x144:  mov    %eax,0x8(%esp)
08288918 +0x148:  mov    0xc(%ebp),%eax
0828891b +0x14b:  mov    %eax,0x4(%esp)
0828891f +0x14f:  mov    0x8(%ebp),%eax
08288922 +0x152:  mov    %eax,(%esp)
08288925 +0x155:  call   08288c46 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION>  ; CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION)
0828892a +0x15a:  mov    %eax,-0x10(%ebp)
0828892d +0x15d:  cmpl   $0x0,-0x10(%ebp)
08288931 +0x161:  je     08288938 <+0x168>
08288933 +0x163:  mov    -0x10(%ebp),%eax
08288936 +0x166:  jmp    08288991 <+0x1c1>
08288938 +0x168:  cmpl   $0x29,0x10(%ebp)
0828893c +0x16c:  jne    0828898c <+0x1bc>
0828893e +0x16e:  mov    -0x14(%ebp),%eax
08288941 +0x171:  mov    %eax,0x8(%esp)
08288945 +0x175:  mov    0xc(%ebp),%eax
08288948 +0x178:  mov    %eax,0x4(%esp)
0828894c +0x17c:  mov    0x8(%ebp),%eax
0828894f +0x17f:  mov    %eax,(%esp)
08288952 +0x182:  call   08288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>  ; CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long)
08288957 +0x187:  mov    %eax,-0x10(%ebp)
0828895a +0x18a:  cmpl   $0x0,-0x10(%ebp)
0828895e +0x18e:  je     0828898c <+0x1bc>
08288960 +0x190:  mov    -0x10(%ebp),%eax
08288963 +0x193:  jmp    08288991 <+0x1c1>
08288965 +0x195:  mov    -0x14(%ebp),%eax
08288968 +0x198:  mov    %eax,0x8(%esp)
0828896c +0x19c:  mov    0xc(%ebp),%eax
0828896f +0x19f:  mov    %eax,0x4(%esp)
08288973 +0x1a3:  mov    0x8(%ebp),%eax
08288976 +0x1a6:  mov    %eax,(%esp)
08288979 +0x1a9:  call   08288ac8 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm>  ; CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long)
0828897e +0x1ae:  mov    %eax,-0xc(%ebp)
08288981 +0x1b1:  cmpl   $0x0,-0xc(%ebp)
08288985 +0x1b5:  je     0828898c <+0x1bc>
08288987 +0x1b7:  mov    -0xc(%ebp),%eax
0828898a +0x1ba:  jmp    08288991 <+0x1c1>
0828898c +0x1bc:  mov    $0x0,%eax
08288991 +0x1c1:  leave
08288992 +0x1c2:  ret
08288993 +0x1c3:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckItemRarity @ 0x82887d0

/* CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item
   const*) */

int __thiscall
CSecu_ProtectionField::CheckItemRarity
          (CSecu_ProtectionField *this,CUser *param_1,int param_3,CItem *param_4,Inven_Item *param_5
          )

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int local_1c;
  
  if ((param_4 == (CItem *)0x0) || (param_1 == (CUser *)0x0)) {
    return 1;
  }
  local_1c = 0;
  if ((param_4 == (CItem *)0x0) || (iVar4 = CItem::get_rarity(param_4), iVar4 < 2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_1c = CItem::get_rarity(param_4);
  }
  uVar5 = GetProtectionType(this,param_3);
  if (uVar5 != 0) {
    if (param_5 == (Inven_Item *)0x0) {
      return 1;
    }
    if ((local_1c < 3) &&
       (((iVar4 = CItem::get_rarity(param_4), iVar4 != 2 ||
         (cVar2 = (**(code **)(*(int *)param_4 + 0x4c))(param_4), cVar2 == '\x01')) &&
        (bVar3 = Inven_Item::GetUpgrade(param_5), bVar3 < 0xb)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = CheckAccountType(this,param_1,uVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_3 == 0x23) {
        iVar4 = CheckRestoreType(this,param_1,uVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = CheckTradingType(this,param_1,uVar5,0x23);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      if (param_3 != 0x29) {
        return 0;
      }
      iVar4 = CheckRestoreType(this,param_1,uVar5);
    }
    else {
      iVar4 = CheckAccountType(this,param_1,uVar5);
    }
    if (iVar4 == 0) {
      return 0;
    }
    return iVar4;
  }
  return 0;
}
```
