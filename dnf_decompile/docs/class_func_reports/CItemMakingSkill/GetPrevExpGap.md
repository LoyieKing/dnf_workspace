# GetPrevExpGap

`_ZN16CItemMakingSkill13GetPrevExpGapEi`

`CItemMakingSkill::GetPrevExpGap(int)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545b7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545b7e  _ZN16CItemMakingSkill13GetPrevExpGapEi
#           CItemMakingSkill::GetPrevExpGap(int)
# range [0x08545b7e, 0x08545c0b]
08545b7e +0x00:  push   %ebp
08545b7f +0x01:  mov    %esp,%ebp
08545b81 +0x03:  push   %ebx
08545b82 +0x04:  sub    $0x24,%esp
08545b85 +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08545b8a +0x0c:  mov    %eax,(%esp)
08545b8d +0x0f:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08545b92 +0x14:  mov    %eax,-0x10(%ebp)
08545b95 +0x17:  mov    0xc(%ebp),%eax
08545b98 +0x1a:  sub    $0x1,%eax
08545b9b +0x1d:  mov    %eax,-0xc(%ebp)
08545b9e +0x20:  mov    -0x10(%ebp),%eax
08545ba1 +0x23:  add    $0x18,%eax
08545ba4 +0x26:  mov    %eax,(%esp)
08545ba7 +0x29:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08545bac +0x2e:  cmp    -0xc(%ebp),%eax
08545baf +0x31:  jbe    08545bb7 <+0x39>
08545bb1 +0x33:  cmpl   $0x0,-0xc(%ebp)
08545bb5 +0x37:  jne    08545bbe <+0x40>
08545bb7 +0x39:  mov    $0x1,%eax
08545bbc +0x3e:  jmp    08545bc3 <+0x45>
08545bbe +0x40:  mov    $0x0,%eax
08545bc3 +0x45:  test   %al,%al
08545bc5 +0x47:  je     08545bce <+0x50>
08545bc7 +0x49:  mov    $0x0,%eax
08545bcc +0x4e:  jmp    08545c05 <+0x87>
08545bce +0x50:  mov    -0x10(%ebp),%eax
08545bd1 +0x53:  lea    0x18(%eax),%edx
08545bd4 +0x56:  mov    -0xc(%ebp),%eax
08545bd7 +0x59:  mov    %eax,0x4(%esp)
08545bdb +0x5d:  mov    %edx,(%esp)
08545bde +0x60:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545be3 +0x65:  mov    (%eax),%ebx
08545be5 +0x67:  mov    -0xc(%ebp),%eax
08545be8 +0x6a:  lea    -0x1(%eax),%edx
08545beb +0x6d:  mov    -0x10(%ebp),%eax
08545bee +0x70:  add    $0x18,%eax
08545bf1 +0x73:  mov    %edx,0x4(%esp)
08545bf5 +0x77:  mov    %eax,(%esp)
08545bf8 +0x7a:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545bfd +0x7f:  mov    (%eax),%eax
08545bff +0x81:  mov    %ebx,%edx
08545c01 +0x83:  sub    %eax,%edx
08545c03 +0x85:  mov    %edx,%eax
08545c05 +0x87:  add    $0x24,%esp
08545c08 +0x8a:  pop    %ebx
08545c09 +0x8b:  pop    %ebp
08545c0a +0x8c:  ret
08545c0b +0x8d:  nop
```

## 反编译 C

```c
// CItemMakingSkill::GetPrevExpGap @ 0x8545b7e

/* CItemMakingSkill::GetPrevExpGap(int) */

int __thiscall CItemMakingSkill::GetPrevExpGap(CItemMakingSkill *this,int param_1)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetItemMakingSkill(this_00);
  uVar3 = param_1 - 1;
  uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(iVar2 + 0x18)
                    );
  if ((uVar3 < uVar4) && (uVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = 0;
  }
  else {
    piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar2 + 0x18),uVar3);
    iVar5 = *piVar6;
    piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar2 + 0x18),param_1 - 2);
    iVar5 = iVar5 - *piVar6;
  }
  return iVar5;
}
```
