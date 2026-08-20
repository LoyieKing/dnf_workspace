# CheckEntrance

`_ZNK4CMap13CheckEntranceEi`

`CMap::CheckEntrance(int) const`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834ecaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ecaa  _ZNK4CMap13CheckEntranceEi
#           CMap::CheckEntrance(int) const
# range [0x0834ecaa, 0x0834ed1d]
0834ecaa +0x00:  push   %ebp
0834ecab +0x01:  mov    %esp,%ebp
0834ecad +0x03:  sub    $0x28,%esp
0834ecb0 +0x06:  lea    -0x14(%ebp),%eax
0834ecb3 +0x09:  mov    %eax,(%esp)
0834ecb6 +0x0c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0834ecbb +0x11:  movl   $0x0,-0xc(%ebp)
0834ecc2 +0x18:  jmp    0834ecfc <+0x52>
0834ecc4 +0x1a:  mov    0x8(%ebp),%eax
0834ecc7 +0x1d:  lea    0x84(%eax),%edx
0834eccd +0x23:  mov    -0xc(%ebp),%eax
0834ecd0 +0x26:  mov    %eax,0x4(%esp)
0834ecd4 +0x2a:  mov    %edx,(%esp)
0834ecd7 +0x2d:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0834ecdc +0x32:  mov    0x4(%eax),%edx
0834ecdf +0x35:  mov    (%eax),%eax
0834ece1 +0x37:  mov    %eax,-0x14(%ebp)
0834ece4 +0x3a:  mov    %edx,-0x10(%ebp)
0834ece7 +0x3d:  mov    -0x10(%ebp),%eax
0834ecea +0x40:  and    0xc(%ebp),%eax
0834eced +0x43:  test   %eax,%eax
0834ecef +0x45:  je     0834ecf8 <+0x4e>
0834ecf1 +0x47:  mov    $0x1,%eax
0834ecf6 +0x4c:  jmp    0834ed1b <+0x71>
0834ecf8 +0x4e:  addl   $0x1,-0xc(%ebp)
0834ecfc +0x52:  mov    0x8(%ebp),%eax
0834ecff +0x55:  add    $0x84,%eax
0834ed04 +0x5a:  mov    %eax,(%esp)
0834ed07 +0x5d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0834ed0c +0x62:  cmp    -0xc(%ebp),%eax
0834ed0f +0x65:  seta   %al
0834ed12 +0x68:  test   %al,%al
0834ed14 +0x6a:  jne    0834ecc4 <+0x1a>
0834ed16 +0x6c:  mov    $0x0,%eax
0834ed1b +0x71:  leave
0834ed1c +0x72:  ret
0834ed1d +0x73:  nop
```

## 反编译 C

```c
// CMap::CheckEntrance @ 0x834ecaa

/* CMap::CheckEntrance(int) const */

undefined4 __thiscall CMap::CheckEntrance(CMap *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_18);
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x84));
    if (uVar2 <= local_10) {
      return 0;
    }
    puVar1 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (this + 0x84),local_10);
    local_14 = puVar1[1];
    local_18 = *puVar1;
    if ((local_14 & param_1) != 0) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
