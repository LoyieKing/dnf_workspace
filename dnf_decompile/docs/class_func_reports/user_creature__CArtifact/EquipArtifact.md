# EquipArtifact

`_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item`

`user_creature::CArtifact::EquipArtifact(Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `user_creature::CArtifact` | `0x08336f6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336f6e  _ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item
#           user_creature::CArtifact::EquipArtifact(Inven_Item const*)
# range [0x08336f6e, 0x08336fc7]
08336f6e +0x00:  push   %ebp
08336f6f +0x01:  mov    %esp,%ebp
08336f71 +0x03:  push   %ebx
08336f72 +0x04:  sub    $0x24,%esp
08336f75 +0x07:  mov    0xc(%ebp),%eax
08336f78 +0x0a:  mov    0x2(%eax),%eax
08336f7b +0x0d:  mov    %eax,%ebx
08336f7d +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08336f82 +0x14:  mov    %ebx,0x4(%esp)
08336f86 +0x18:  mov    %eax,(%esp)
08336f89 +0x1b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08336f8e +0x20:  mov    %eax,-0xc(%ebp)
08336f91 +0x23:  cmpl   $0x0,-0xc(%ebp)
08336f95 +0x27:  jne    08336f9e <+0x30>
08336f97 +0x29:  mov    $0x0,%eax
08336f9c +0x2e:  jmp    08336fc1 <+0x53>
08336f9e +0x30:  mov    -0xc(%ebp),%eax
08336fa1 +0x33:  mov    %eax,(%esp)
08336fa4 +0x36:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08336fa9 +0x3b:  test   %al,%al
08336fab +0x3d:  je     08336fb4 <+0x46>
08336fad +0x3f:  mov    $0x0,%eax
08336fb2 +0x44:  jmp    08336fc1 <+0x53>
08336fb4 +0x46:  mov    0x8(%ebp),%eax
08336fb7 +0x49:  mov    -0xc(%ebp),%edx
08336fba +0x4c:  mov    %edx,(%eax)
08336fbc +0x4e:  mov    $0x1,%eax
08336fc1 +0x53:  add    $0x24,%esp
08336fc4 +0x56:  pop    %ebx
08336fc5 +0x57:  pop    %ebp
08336fc6 +0x58:  ret
08336fc7 +0x59:  nop
```

## 反编译 C

```c
// user_creature::CArtifact::EquipArtifact @ 0x8336f6e

/* user_creature::CArtifact::EquipArtifact(Inven_Item const*) */

undefined4 __thiscall user_creature::CArtifact::EquipArtifact(CArtifact *this,Inven_Item *param_1)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
  if (this_01 == (CItem *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = CItem::is_stackable(this_01);
    if (cVar2 == '\0') {
      *(CItem **)this = this_01;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
