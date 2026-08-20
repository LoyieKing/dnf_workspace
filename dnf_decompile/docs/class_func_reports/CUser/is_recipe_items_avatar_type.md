# is_recipe_items_avatar_type

`_ZN5CUser27is_recipe_items_avatar_typeERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::is_recipe_items_avatar_type(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868c45e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868c45e  _ZN5CUser27is_recipe_items_avatar_typeERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::is_recipe_items_avatar_type(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0868c45e, 0x0868c4f3]
0868c45e +0x00:  push   %ebp
0868c45f +0x01:  mov    %esp,%ebp
0868c461 +0x03:  push   %ebx
0868c462 +0x04:  sub    $0x24,%esp
0868c465 +0x07:  movl   $0x0,-0x10(%ebp)
0868c46c +0x0e:  movl   $0x0,-0xc(%ebp)
0868c473 +0x15:  jmp    0868c4d4 <+0x76>
0868c475 +0x17:  mov    -0xc(%ebp),%eax
0868c478 +0x1a:  mov    %eax,0x4(%esp)
0868c47c +0x1e:  mov    0xc(%ebp),%eax
0868c47f +0x21:  mov    %eax,(%esp)
0868c482 +0x24:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0868c487 +0x29:  mov    (%eax),%ebx
0868c489 +0x2b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868c48e +0x30:  mov    %ebx,0x4(%esp)
0868c492 +0x34:  mov    %eax,(%esp)
0868c495 +0x37:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868c49a +0x3c:  mov    %eax,-0x10(%ebp)
0868c49d +0x3f:  cmpl   $0x0,-0x10(%ebp)
0868c4a1 +0x43:  je     0868c4c0 <+0x62>
0868c4a3 +0x45:  mov    -0x10(%ebp),%eax
0868c4a6 +0x48:  mov    (%eax),%eax
0868c4a8 +0x4a:  add    $0x10,%eax
0868c4ab +0x4d:  mov    (%eax),%edx
0868c4ad +0x4f:  mov    -0x10(%ebp),%eax
0868c4b0 +0x52:  mov    %eax,(%esp)
0868c4b3 +0x55:  call   *%edx
0868c4b5 +0x57:  test   %al,%al
0868c4b7 +0x59:  je     0868c4c0 <+0x62>
0868c4b9 +0x5b:  mov    $0x1,%eax
0868c4be +0x60:  jmp    0868c4c5 <+0x67>
0868c4c0 +0x62:  mov    $0x0,%eax
0868c4c5 +0x67:  test   %al,%al
0868c4c7 +0x69:  je     0868c4d0 <+0x72>
0868c4c9 +0x6b:  mov    $0x1,%eax
0868c4ce +0x70:  jmp    0868c4ee <+0x90>
0868c4d0 +0x72:  addl   $0x1,-0xc(%ebp)
0868c4d4 +0x76:  mov    0xc(%ebp),%eax
0868c4d7 +0x79:  mov    %eax,(%esp)
0868c4da +0x7c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0868c4df +0x81:  cmp    -0xc(%ebp),%eax
0868c4e2 +0x84:  setg   %al
0868c4e5 +0x87:  test   %al,%al
0868c4e7 +0x89:  jne    0868c475 <+0x17>
0868c4e9 +0x8b:  mov    $0x0,%eax
0868c4ee +0x90:  add    $0x24,%esp
0868c4f1 +0x93:  pop    %ebx
0868c4f2 +0x94:  pop    %ebp
0868c4f3 +0x95:  ret
```

## 反编译 C

```c
// CUser::is_recipe_items_avatar_type @ 0x868c45e

/* CUser::is_recipe_items_avatar_type(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

undefined4 __thiscall CUser::is_recipe_items_avatar_type(CUser *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CDataManager *this_00;
  int iVar4;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar4 <= (int)local_10) {
      return 0;
    }
    piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               param_1,local_10);
    iVar4 = *piVar3;
    this_00 = (CDataManager *)G_CDataManager();
    piVar3 = (int *)CDataManager::find_item(this_00,iVar4);
    if ((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x10))(piVar3), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
