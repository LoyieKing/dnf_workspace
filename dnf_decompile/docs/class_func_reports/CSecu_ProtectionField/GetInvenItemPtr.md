# GetInvenItemPtr

`_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs`

`CSecu_ProtectionField::GetInvenItemPtr(CUser*, char, short)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x082886ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082886ae  _ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs
#           CSecu_ProtectionField::GetInvenItemPtr(CUser*, char, short)
# range [0x082886ae, 0x08288739]
082886ae +0x00:  push   %ebp
082886af +0x01:  mov    %esp,%ebp
082886b1 +0x03:  push   %esi
082886b2 +0x04:  push   %ebx
082886b3 +0x05:  sub    $0x20,%esp
082886b6 +0x08:  mov    0x10(%ebp),%edx
082886b9 +0x0b:  mov    0x14(%ebp),%eax
082886bc +0x0e:  mov    %dl,-0xc(%ebp)
082886bf +0x11:  mov    %ax,-0x10(%ebp)
082886c3 +0x15:  movsbl -0xc(%ebp),%eax
082886c7 +0x19:  cmp    $0x2,%eax
082886ca +0x1c:  je     08288710 <+0x62>
082886cc +0x1e:  cmp    $0x2,%eax
082886cf +0x21:  jg     082886d7 <+0x29>
082886d1 +0x23:  test   %eax,%eax
082886d3 +0x25:  je     082886e1 <+0x33>
082886d5 +0x27:  jmp    0828872d <+0x7f>
082886d7 +0x29:  cmp    $0x3,%eax
082886da +0x2c:  je     082886e1 <+0x33>
082886dc +0x2e:  cmp    $0x7,%eax
082886df +0x31:  jne    0828872d <+0x7f>
082886e1 +0x33:  movswl -0x10(%ebp),%esi
082886e5 +0x37:  movsbl -0xc(%ebp),%eax
082886e9 +0x3b:  mov    %eax,(%esp)
082886ec +0x3e:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
082886f1 +0x43:  mov    %eax,%ebx
082886f3 +0x45:  mov    0xc(%ebp),%eax
082886f6 +0x48:  mov    %eax,(%esp)
082886f9 +0x4b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082886fe +0x50:  mov    %esi,0x8(%esp)
08288702 +0x54:  mov    %ebx,0x4(%esp)
08288706 +0x58:  mov    %eax,(%esp)
08288709 +0x5b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0828870e +0x60:  jmp    08288732 <+0x84>
08288710 +0x62:  movswl -0x10(%ebp),%ebx
08288714 +0x66:  mov    0xc(%ebp),%eax
08288717 +0x69:  mov    %eax,(%esp)
0828871a +0x6c:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0828871f +0x71:  mov    %ebx,0x4(%esp)
08288723 +0x75:  mov    %eax,(%esp)
08288726 +0x78:  call   0850b390 <_ZNK6CCargo11GetCargoRefEi>  ; CCargo::GetCargoRef(int) const
0828872b +0x7d:  jmp    08288732 <+0x84>
0828872d +0x7f:  mov    $0x0,%eax
08288732 +0x84:  add    $0x20,%esp
08288735 +0x87:  pop    %ebx
08288736 +0x88:  pop    %esi
08288737 +0x89:  pop    %ebp
08288738 +0x8a:  ret
08288739 +0x8b:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::GetInvenItemPtr @ 0x82886ae

/* CSecu_ProtectionField::GetInvenItemPtr(CUser*, char, short) */

undefined4 __thiscall
CSecu_ProtectionField::GetInvenItemPtr
          (CSecu_ProtectionField *this,CUser *param_1,char param_2,short param_3)

{
  int iVar1;
  CInventory *this_00;
  undefined4 uVar2;
  CCargo *this_01;
  
  if (param_2 == '\x02') {
    this_01 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    uVar2 = CCargo::GetCargoRef(this_01,(int)param_3);
    return uVar2;
  }
  if (param_2 < '\x03') {
    if (param_2 == '\0') {
LAB_082886e1:
      iVar1 = GetInvenTypeFromItemSpace((int)param_2);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      uVar2 = CInventory::GetInvenRef(this_00,iVar1,(int)param_3);
      return uVar2;
    }
  }
  else if ((param_2 == '\x03') || (param_2 == '\a')) goto LAB_082886e1;
  return 0;
}
```
