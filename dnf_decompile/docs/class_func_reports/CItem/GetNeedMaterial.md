# GetNeedMaterial

`_ZNK5CItem15GetNeedMaterialEv`

`CItem::GetNeedMaterial() const`

| 类 | 地址 |
|---|---|
| `CItem` | `0x0850d6f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850d6f4  _ZNK5CItem15GetNeedMaterialEv
#           CItem::GetNeedMaterial() const
# range [0x0850d6f4, 0x0850d727]
0850d6f4 +0x00:  push   %ebp
0850d6f5 +0x01:  mov    %esp,%ebp
0850d6f7 +0x03:  sub    $0x28,%esp
0850d6fa +0x06:  call   081b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>  ; NeedMaterialDataManager::getInstance()
0850d6ff +0x0b:  mov    0x8(%ebp),%edx
0850d702 +0x0e:  mov    %edx,0x4(%esp)
0850d706 +0x12:  mov    %eax,(%esp)
0850d709 +0x15:  call   081b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>  ; NeedMaterialDataManager::getNeedMaterial(CItem const*) const
0850d70e +0x1a:  mov    %eax,-0xc(%ebp)
0850d711 +0x1d:  mov    -0xc(%ebp),%eax
0850d714 +0x20:  mov    (%eax),%eax
0850d716 +0x22:  cmp    $0xffffffff,%eax
0850d719 +0x25:  je     0850d720 <+0x2c>
0850d71b +0x27:  mov    -0xc(%ebp),%eax
0850d71e +0x2a:  jmp    0850d726 <+0x32>
0850d720 +0x2c:  mov    0x8(%ebp),%eax
0850d723 +0x2f:  add    $0x24,%eax
0850d726 +0x32:  leave
0850d727 +0x33:  ret
```

## 反编译 C

```c
// CItem::GetNeedMaterial @ 0x850d6f4

/* CItem::GetNeedMaterial() const */

CItem * __thiscall CItem::GetNeedMaterial(CItem *this)

{
  NeedMaterialDataManager *this_00;
  CItem *pCVar1;
  
  this_00 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
  pCVar1 = (CItem *)NeedMaterialDataManager::getNeedMaterial(this_00,this);
  if (*(int *)pCVar1 == -1) {
    pCVar1 = this + 0x24;
  }
  return pCVar1;
}
```
