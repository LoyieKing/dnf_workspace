# SetEggItem

`_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item`

`user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureItemConverter` | `0x08336eae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336eae  _ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item
#           user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
# range [0x08336eae, 0x08336f5f]
08336eae +0x00:  push   %ebp
08336eaf +0x01:  mov    %esp,%ebp
08336eb1 +0x03:  push   %ebx
08336eb2 +0x04:  sub    $0x24,%esp
08336eb5 +0x07:  mov    0x8(%ebp),%eax
08336eb8 +0x0a:  mov    0x2(%eax),%eax
08336ebb +0x0d:  mov    %eax,%ebx
08336ebd +0x0f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08336ec2 +0x14:  mov    %ebx,0x4(%esp)
08336ec6 +0x18:  mov    %eax,(%esp)
08336ec9 +0x1b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08336ece +0x20:  mov    %eax,-0x14(%ebp)
08336ed1 +0x23:  cmpl   $0x0,-0x14(%ebp)
08336ed5 +0x27:  jne    08336ede <+0x30>
08336ed7 +0x29:  mov    $0x0,%eax
08336edc +0x2e:  jmp    08336f5a <+0xac>
08336ede +0x30:  mov    -0x14(%ebp),%eax
08336ee1 +0x33:  mov    %eax,(%esp)
08336ee4 +0x36:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08336ee9 +0x3b:  test   %al,%al
08336eeb +0x3d:  je     08336ef4 <+0x46>
08336eed +0x3f:  mov    $0x0,%eax
08336ef2 +0x44:  jmp    08336f5a <+0xac>
08336ef4 +0x46:  mov    -0x14(%ebp),%eax
08336ef7 +0x49:  mov    %eax,-0x10(%ebp)
08336efa +0x4c:  mov    -0x10(%ebp),%eax
08336efd +0x4f:  mov    %eax,(%esp)
08336f00 +0x52:  call   0833eecc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xf99>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xf99
08336f05 +0x57:  cmp    $0x1,%eax
08336f08 +0x5a:  je     08336f13 <+0x65>
08336f0a +0x5c:  cmp    $0x2,%eax
08336f0d +0x5f:  je     08336f1b <+0x6d>
08336f0f +0x61:  test   %eax,%eax
08336f11 +0x63:  jmp    08336f55 <+0xa7>
08336f13 +0x65:  mov    0x8(%ebp),%eax
08336f16 +0x68:  movb   $0x1,(%eax)
08336f19 +0x6b:  jmp    08336f55 <+0xa7>
08336f1b +0x6d:  mov    -0x10(%ebp),%eax
08336f1e +0x70:  mov    0x148(%eax),%eax
08336f24 +0x76:  mov    %eax,-0xc(%ebp)
08336f27 +0x79:  mov    -0xc(%ebp),%eax
08336f2a +0x7c:  mov    %eax,(%esp)
08336f2d +0x7f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08336f32 +0x84:  mov    -0x10(%ebp),%edx
08336f35 +0x87:  add    $0x148,%edx
08336f3b +0x8d:  mov    %eax,0x4(%esp)
08336f3f +0x91:  mov    %edx,(%esp)
08336f42 +0x94:  call   089bbb6c <_ZNK15RandomItemTable18GetRandomItemIndexEi>  ; RandomItemTable::GetRandomItemIndex(int) const
08336f47 +0x99:  mov    %eax,%edx
08336f49 +0x9b:  mov    0x8(%ebp),%eax
08336f4c +0x9e:  mov    %edx,0x2(%eax)
08336f4f +0xa1:  mov    0x8(%ebp),%eax
08336f52 +0xa4:  movb   $0x1,(%eax)
08336f55 +0xa7:  mov    $0x1,%eax
08336f5a +0xac:  add    $0x24,%esp
08336f5d +0xaf:  pop    %ebx
08336f5e +0xb0:  pop    %ebp
08336f5f +0xb1:  ret
```

## 反编译 C

```c
// user_creature::CCreatureItemConverter::SetEggItem @ 0x8336eae

/* user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*) */

undefined4 user_creature::CCreatureItemConverter::SetEggItem(Inven_Item *param_1)

{
  char cVar1;
  CDataManager *this;
  CItem *this_00;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 2);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CItem *)CDataManager::find_item(this,iVar3);
  if (this_00 == (CItem *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(this_00);
    if (cVar1 == '\0') {
      iVar3 = CEquipItem::get_sub_type((CEquipItem *)this_00);
      if (iVar3 == 1) {
        *param_1 = (Inven_Item)0x1;
      }
      else if (iVar3 == 2) {
        iVar3 = get_rand_int(*(int *)(this_00 + 0x148));
        uVar2 = RandomItemTable::GetRandomItemIndex((RandomItemTable *)(this_00 + 0x148),iVar3);
        *(undefined4 *)(param_1 + 2) = uVar2;
        *param_1 = (Inven_Item)0x1;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
