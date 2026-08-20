# GetProperBonusItem

`_ZN9CItemList18GetProperBonusItemEj`

`CItemList::GetProperBonusItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08512e06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512e06  _ZN9CItemList18GetProperBonusItemEj
#           CItemList::GetProperBonusItem(unsigned int)
# range [0x08512e06, 0x08512e97]
08512e06 +0x00:  push   %ebp
08512e07 +0x01:  mov    %esp,%ebp
08512e09 +0x03:  sub    $0x28,%esp
08512e0c +0x06:  movl   $0x0,-0xc(%ebp)
08512e13 +0x0d:  jmp    08512e79 <+0x73>
08512e15 +0x0f:  mov    0x8(%ebp),%eax
08512e18 +0x12:  lea    0x50(%eax),%edx
08512e1b +0x15:  mov    -0xc(%ebp),%eax
08512e1e +0x18:  mov    %eax,0x4(%esp)
08512e22 +0x1c:  mov    %edx,(%esp)
08512e25 +0x1f:  call   08519064 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5699>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5699
08512e2a +0x24:  mov    (%eax),%eax
08512e2c +0x26:  cmp    0xc(%ebp),%eax
08512e2f +0x29:  ja     08512e55 <+0x4f>
08512e31 +0x2b:  mov    0x8(%ebp),%eax
08512e34 +0x2e:  lea    0x50(%eax),%edx
08512e37 +0x31:  mov    -0xc(%ebp),%eax
08512e3a +0x34:  mov    %eax,0x4(%esp)
08512e3e +0x38:  mov    %edx,(%esp)
08512e41 +0x3b:  call   08519064 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5699>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5699
08512e46 +0x40:  mov    0x4(%eax),%eax
08512e49 +0x43:  cmp    0xc(%ebp),%eax
08512e4c +0x46:  jbe    08512e55 <+0x4f>
08512e4e +0x48:  mov    $0x1,%eax
08512e53 +0x4d:  jmp    08512e5a <+0x54>
08512e55 +0x4f:  mov    $0x0,%eax
08512e5a +0x54:  test   %al,%al
08512e5c +0x56:  je     08512e75 <+0x6f>
08512e5e +0x58:  mov    0x8(%ebp),%eax
08512e61 +0x5b:  lea    0x50(%eax),%edx
08512e64 +0x5e:  mov    -0xc(%ebp),%eax
08512e67 +0x61:  mov    %eax,0x4(%esp)
08512e6b +0x65:  mov    %edx,(%esp)
08512e6e +0x68:  call   08519064 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5699>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5699
08512e73 +0x6d:  jmp    08512e96 <+0x90>
08512e75 +0x6f:  addl   $0x1,-0xc(%ebp)
08512e79 +0x73:  mov    0x8(%ebp),%eax
08512e7c +0x76:  add    $0x50,%eax
08512e7f +0x79:  mov    %eax,(%esp)
08512e82 +0x7c:  call   08519042 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5677>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5677
08512e87 +0x81:  cmp    -0xc(%ebp),%eax
08512e8a +0x84:  seta   %al
08512e8d +0x87:  test   %al,%al
08512e8f +0x89:  jne    08512e15 <+0xf>
08512e91 +0x8b:  mov    $0x0,%eax
08512e96 +0x90:  leave
08512e97 +0x91:  ret
```

## 反编译 C

```c
// CItemList::GetProperBonusItem @ 0x8512e06

/* CItemList::GetProperBonusItem(unsigned int) */

undefined4 __thiscall CItemList::GetProperBonusItem(CItemList *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar5 = std::vector<BonusItem,std::allocator<BonusItem>>::size
                      ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
    if (uVar5 <= local_10) {
      return 0;
    }
    puVar2 = (uint *)std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                               ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),
                                local_10);
    if ((param_1 < *puVar2) ||
       (iVar3 = std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                          ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),local_10),
       *(uint *)(iVar3 + 4) <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  uVar4 = std::vector<BonusItem,std::allocator<BonusItem>>::operator[]
                    ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50),local_10);
  return uVar4;
}
```
