# tryInsertItemIntoEquipment

`_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item`

`CInventory::tryInsertItemIntoEquipment(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501afa  _ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item
#           CInventory::tryInsertItemIntoEquipment(Inven_Item) const
# range [0x08501afa, 0x08501b6f]
08501afa +0x00:  push   %ebp
08501afb +0x01:  mov    %esp,%ebp
08501afd +0x03:  push   %ebx
08501afe +0x04:  sub    $0x24,%esp
08501b01 +0x07:  mov    0xe(%ebp),%eax
08501b04 +0x0a:  mov    %eax,%ebx
08501b06 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08501b0b +0x11:  mov    %ebx,0x4(%esp)
08501b0f +0x15:  mov    %eax,(%esp)
08501b12 +0x18:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08501b17 +0x1d:  mov    %eax,-0xc(%ebp)
08501b1a +0x20:  cmpl   $0x0,-0xc(%ebp)
08501b1e +0x24:  jne    08501b27 <+0x2d>
08501b20 +0x26:  mov    $0xffffffff,%eax
08501b25 +0x2b:  jmp    08501b6a <+0x70>
08501b27 +0x2d:  mov    -0xc(%ebp),%eax
08501b2a +0x30:  mov    (%eax),%eax
08501b2c +0x32:  add    $0xc,%eax
08501b2f +0x35:  mov    (%eax),%edx
08501b31 +0x37:  mov    -0xc(%ebp),%eax
08501b34 +0x3a:  mov    %eax,(%esp)
08501b37 +0x3d:  call   *%edx
08501b39 +0x3f:  mov    0x8(%ebp),%edx
08501b3c +0x42:  imul   $0x3d,%eax,%eax
08501b3f +0x45:  lea    (%edx,%eax,1),%eax
08501b42 +0x48:  add    $0x10,%eax
08501b45 +0x4b:  mov    0xe(%eax),%eax
08501b48 +0x4e:  test   %eax,%eax
08501b4a +0x50:  setne  %al
08501b4d +0x53:  test   %al,%al
08501b4f +0x55:  je     08501b58 <+0x5e>
08501b51 +0x57:  mov    $0xfffffffe,%eax
08501b56 +0x5c:  jmp    08501b6a <+0x70>
08501b58 +0x5e:  mov    -0xc(%ebp),%eax
08501b5b +0x61:  mov    (%eax),%eax
08501b5d +0x63:  add    $0xc,%eax
08501b60 +0x66:  mov    (%eax),%edx
08501b62 +0x68:  mov    -0xc(%ebp),%eax
08501b65 +0x6b:  mov    %eax,(%esp)
08501b68 +0x6e:  call   *%edx
08501b6a +0x70:  add    $0x24,%esp
08501b6d +0x73:  pop    %ebx
08501b6e +0x74:  pop    %ebp
08501b6f +0x75:  ret
```

## 反编译 C

```c
// CInventory::tryInsertItemIntoEquipment @ 0x8501afa

/* CInventory::tryInsertItemIntoEquipment(Inven_Item) const */

undefined4 __thiscall CInventory::tryInsertItemIntoEquipment(CInventory *this,undefined8 param_2)

{
  CDataManager *this_00;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  piVar1 = (int *)CDataManager::find_item(this_00,param_2._2_4_);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1);
    if (*(int *)(this + iVar3 * 0x3d + 0x1e) == 0) {
      uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}
```
