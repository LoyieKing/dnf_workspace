# getDecoEventItemIdx

`_ZN12CDataManager19getDecoEventItemIdxEv`

`CDataManager::getDecoEventItemIdx()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365544  _ZN12CDataManager19getDecoEventItemIdxEv
#           CDataManager::getDecoEventItemIdx()
# range [0x08365544, 0x083655ab]
08365544 +0x00:  push   %ebp
08365545 +0x01:  mov    %esp,%ebp
08365547 +0x03:  sub    $0x28,%esp
0836554a +0x06:  mov    0x8(%ebp),%eax
0836554d +0x09:  lea    0x4b70(%eax),%edx
08365553 +0x0f:  lea    -0x10(%ebp),%eax
08365556 +0x12:  mov    %edx,0x4(%esp)
0836555a +0x16:  mov    %eax,(%esp)
0836555d +0x19:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08365562 +0x1e:  sub    $0x4,%esp
08365565 +0x21:  mov    0x8(%ebp),%eax
08365568 +0x24:  lea    0x4b70(%eax),%edx
0836556e +0x2a:  lea    -0xc(%ebp),%eax
08365571 +0x2d:  mov    %edx,0x4(%esp)
08365575 +0x31:  mov    %eax,(%esp)
08365578 +0x34:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0836557d +0x39:  sub    $0x4,%esp
08365580 +0x3c:  lea    -0xc(%ebp),%eax
08365583 +0x3f:  mov    %eax,0x4(%esp)
08365587 +0x43:  lea    -0x10(%ebp),%eax
0836558a +0x46:  mov    %eax,(%esp)
0836558d +0x49:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08365592 +0x4e:  test   %al,%al
08365594 +0x50:  je     083655a5 <+0x61>
08365596 +0x52:  lea    -0x10(%ebp),%eax
08365599 +0x55:  mov    %eax,(%esp)
0836559c +0x58:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
083655a1 +0x5d:  mov    (%eax),%eax
083655a3 +0x5f:  jmp    083655aa <+0x66>
083655a5 +0x61:  mov    $0xffffffff,%eax
083655aa +0x66:  leave
083655ab +0x67:  ret
```

## 反编译 C

```c
// CDataManager::getDecoEventItemIdx @ 0x8365544

/* CDataManager::getDecoEventItemIdx() */

undefined4 CDataManager::getDecoEventItemIdx(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=(local_14,local_10);
  if (bVar1) {
    puVar2 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                       (local_14);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
