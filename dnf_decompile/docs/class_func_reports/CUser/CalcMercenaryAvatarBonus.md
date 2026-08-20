# CalcMercenaryAvatarBonus

`_ZNK5CUser24CalcMercenaryAvatarBonusEv`

`CUser::CalcMercenaryAvatarBonus() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ea68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ea68  _ZNK5CUser24CalcMercenaryAvatarBonusEv
#           CUser::CalcMercenaryAvatarBonus() const
# range [0x0868ea68, 0x0868eba9]
0868ea68 +0x000:  push   %ebp
0868ea69 +0x001:  mov    %esp,%ebp
0868ea6b +0x003:  push   %ebx
0868ea6c +0x004:  sub    $0x34,%esp
0868ea6f +0x007:  movl   $0xa,-0x1c(%ebp)
0868ea76 +0x00e:  mov    0x8(%ebp),%eax
0868ea79 +0x011:  mov    %eax,(%esp)
0868ea7c +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868ea81 +0x019:  test   %eax,%eax
0868ea83 +0x01b:  sete   %al
0868ea86 +0x01e:  test   %al,%al
0868ea88 +0x020:  je     0868ea94 <+0x2c>
0868ea8a +0x022:  mov    $0x0,%eax
0868ea8f +0x027:  jmp    0868eba4 <+0x13c>
0868ea94 +0x02c:  mov    0x8(%ebp),%eax
0868ea97 +0x02f:  mov    %eax,(%esp)
0868ea9a +0x032:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868ea9f +0x037:  mov    %eax,-0x18(%ebp)
0868eaa2 +0x03a:  cmpl   $0x0,-0x18(%ebp)
0868eaa6 +0x03e:  jne    0868eab2 <+0x4a>
0868eaa8 +0x040:  mov    $0x0,%eax
0868eaad +0x045:  jmp    0868eba4 <+0x13c>
0868eab2 +0x04a:  movl   $0x0,-0x14(%ebp)
0868eab9 +0x051:  jmp    0868eb85 <+0x11d>
0868eabe +0x056:  mov    -0x14(%ebp),%eax
0868eac1 +0x059:  mov    %eax,0x8(%esp)
0868eac5 +0x05d:  movl   $0x0,0x4(%esp)
0868eacd +0x065:  mov    -0x18(%ebp),%eax
0868ead0 +0x068:  mov    %eax,(%esp)
0868ead3 +0x06b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0868ead8 +0x070:  mov    %eax,-0x10(%ebp)
0868eadb +0x073:  cmpl   $0x0,-0x10(%ebp)
0868eadf +0x077:  jne    0868eaeb <+0x83>
0868eae1 +0x079:  mov    $0x0,%eax
0868eae6 +0x07e:  jmp    0868eba4 <+0x13c>
0868eaeb +0x083:  mov    -0x10(%ebp),%eax
0868eaee +0x086:  mov    0x2(%eax),%eax
0868eaf1 +0x089:  mov    %eax,%ebx
0868eaf3 +0x08b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868eaf8 +0x090:  mov    %ebx,0x4(%esp)
0868eafc +0x094:  mov    %eax,(%esp)
0868eaff +0x097:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868eb04 +0x09c:  test   %eax,%eax
0868eb06 +0x09e:  jne    0868eb0f <+0xa7>
0868eb08 +0x0a0:  mov    $0x0,%eax
0868eb0d +0x0a5:  jmp    0868eb2f <+0xc7>
0868eb0f +0x0a7:  movl   $0x0,0xc(%esp)
0868eb17 +0x0af:  movl   $&_ZTI10CEquipItem,0x8(%esp)
0868eb1f +0x0b7:  movl   $&_ZTI5CItem,0x4(%esp)
0868eb27 +0x0bf:  mov    %eax,(%esp)
0868eb2a +0x0c2:  call   08725d90 <__dynamic_cast>
0868eb2f +0x0c7:  mov    %eax,-0xc(%ebp)
0868eb32 +0x0ca:  cmpl   $0x0,-0xc(%ebp)
0868eb36 +0x0ce:  je     0868eb7a <+0x112>
0868eb38 +0x0d0:  mov    -0xc(%ebp),%eax
0868eb3b +0x0d3:  mov    (%eax),%eax
0868eb3d +0x0d5:  add    $0x10,%eax
0868eb40 +0x0d8:  mov    (%eax),%edx
0868eb42 +0x0da:  mov    -0xc(%ebp),%eax
0868eb45 +0x0dd:  mov    %eax,(%esp)
0868eb48 +0x0e0:  call   *%edx
0868eb4a +0x0e2:  test   %al,%al
0868eb4c +0x0e4:  je     0868eb73 <+0x10b>
0868eb4e +0x0e6:  mov    -0xc(%ebp),%eax
0868eb51 +0x0e9:  mov    %eax,(%esp)
0868eb54 +0x0ec:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0868eb59 +0x0f1:  cmp    -0x1c(%ebp),%eax
0868eb5c +0x0f4:  setl   %al
0868eb5f +0x0f7:  test   %al,%al
0868eb61 +0x0f9:  je     0868eb81 <+0x119>
0868eb63 +0x0fb:  mov    -0xc(%ebp),%eax
0868eb66 +0x0fe:  mov    %eax,(%esp)
0868eb69 +0x101:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0868eb6e +0x106:  mov    %eax,-0x1c(%ebp)
0868eb71 +0x109:  jmp    0868eb81 <+0x119>
0868eb73 +0x10b:  mov    $0x0,%eax
0868eb78 +0x110:  jmp    0868eba4 <+0x13c>
0868eb7a +0x112:  mov    $0x0,%eax
0868eb7f +0x117:  jmp    0868eba4 <+0x13c>
0868eb81 +0x119:  addl   $0x1,-0x14(%ebp)
0868eb85 +0x11d:  cmpl   $0x7,-0x14(%ebp)
0868eb89 +0x121:  setle  %al
0868eb8c +0x124:  test   %al,%al
0868eb8e +0x126:  jne    0868eabe <+0x56>
0868eb94 +0x12c:  cmpl   $0x3,-0x1c(%ebp)
0868eb98 +0x130:  jle    0868eba1 <+0x139>
0868eb9a +0x132:  mov    $0x0,%eax
0868eb9f +0x137:  jmp    0868eba4 <+0x13c>
0868eba1 +0x139:  mov    -0x1c(%ebp),%eax
0868eba4 +0x13c:  add    $0x34,%esp
0868eba7 +0x13f:  pop    %ebx
0868eba8 +0x140:  pop    %ebp
0868eba9 +0x141:  ret
```

## 反编译 C

```c
// CUser::CalcMercenaryAvatarBonus @ 0x868ea68

/* CUser::CalcMercenaryAvatarBonus() const */

int __thiscall CUser::CalcMercenaryAvatarBonus(CUser *this)

{
  char cVar1;
  int iVar2;
  CInventory *this_00;
  CDataManager *this_01;
  CItem *this_02;
  int local_20;
  int local_18;
  
  local_20 = 10;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    if (this_00 == (CInventory *)0x0) {
      local_20 = 0;
    }
    else {
      for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
        iVar2 = CInventory::GetInvenRef(this_00,0,local_18);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = *(int *)(iVar2 + 2);
        this_01 = (CDataManager *)G_CDataManager();
        iVar2 = CDataManager::find_item(this_01,iVar2);
        if (iVar2 == 0) {
          this_02 = (CItem *)0x0;
        }
        else {
          this_02 = (CItem *)__dynamic_cast(iVar2,&CItem::typeinfo,&CEquipItem::typeinfo,0);
        }
        if (this_02 == (CItem *)0x0) {
          return 0;
        }
        cVar1 = (**(code **)(*(int *)this_02 + 0x10))(this_02);
        if (cVar1 == '\0') {
          return 0;
        }
        iVar2 = CItem::get_grade(this_02);
        if (iVar2 < local_20) {
          local_20 = CItem::get_grade(this_02);
        }
      }
      if (3 < local_20) {
        local_20 = 0;
      }
    }
  }
  return local_20;
}
```
