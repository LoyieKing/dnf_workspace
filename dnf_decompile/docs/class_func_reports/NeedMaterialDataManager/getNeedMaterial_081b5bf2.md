# getNeedMaterial

`_ZNK23NeedMaterialDataManager15getNeedMaterialEi`

`NeedMaterialDataManager::getNeedMaterial(int) const`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5bf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5bf2  _ZNK23NeedMaterialDataManager15getNeedMaterialEi
#           NeedMaterialDataManager::getNeedMaterial(int) const
# range [0x081b5bf2, 0x081b5c1c]
081b5bf2 +0x00:  push   %ebp
081b5bf3 +0x01:  mov    %esp,%ebp
081b5bf5 +0x03:  sub    $0x18,%esp
081b5bf8 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b5bfd +0x0b:  mov    0xc(%ebp),%edx
081b5c00 +0x0e:  mov    %edx,0x4(%esp)
081b5c04 +0x12:  mov    %eax,(%esp)
081b5c07 +0x15:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081b5c0c +0x1a:  mov    %eax,0x4(%esp)
081b5c10 +0x1e:  mov    0x8(%ebp),%eax
081b5c13 +0x21:  mov    %eax,(%esp)
081b5c16 +0x24:  call   081b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>  ; NeedMaterialDataManager::getNeedMaterial(CItem const*) const
081b5c1b +0x29:  leave
081b5c1c +0x2a:  ret
```

## 反编译 C

```c
// NeedMaterialDataManager::getNeedMaterial @ 0x81b5bf2

/* NeedMaterialDataManager::getNeedMaterial(int) const */

void __thiscall NeedMaterialDataManager::getNeedMaterial(NeedMaterialDataManager *this,int param_1)

{
  CDataManager *this_00;
  CItem *pCVar1;
  
  this_00 = (CDataManager *)G_CDataManager();
  pCVar1 = (CItem *)CDataManager::find_item(this_00,param_1);
  getNeedMaterial(this,pCVar1);
  return;
}
```
