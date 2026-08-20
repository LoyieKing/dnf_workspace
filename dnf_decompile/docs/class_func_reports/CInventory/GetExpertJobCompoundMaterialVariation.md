# GetExpertJobCompoundMaterialVariation

`_ZNK10CInventory37GetExpertJobCompoundMaterialVariationE20ENUM_EXPERT_JOB_TYPEi`

`CInventory::GetExpertJobCompoundMaterialVariation(ENUM_EXPERT_JOB_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850c8a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c8a8  _ZNK10CInventory37GetExpertJobCompoundMaterialVariationE20ENUM_EXPERT_JOB_TYPEi
#           CInventory::GetExpertJobCompoundMaterialVariation(ENUM_EXPERT_JOB_TYPE, int) const
# range [0x0850c8a8, 0x0850c959]
0850c8a8 +0x00:  push   %ebp
0850c8a9 +0x01:  mov    %esp,%ebp
0850c8ab +0x03:  push   %ebx
0850c8ac +0x04:  sub    $0x34,%esp
0850c8af +0x07:  mov    $0x0,%eax
0850c8b4 +0x0c:  mov    %eax,-0x14(%ebp)
0850c8b7 +0x0f:  cmpl   $0x0,0xc(%ebp)
0850c8bb +0x13:  jne    0850c8c5 <+0x1d>
0850c8bd +0x15:  mov    -0x14(%ebp),%eax
0850c8c0 +0x18:  jmp    0850c94e <+0xa6>
0850c8c5 +0x1d:  movl   $0xa,-0x10(%ebp)
0850c8cc +0x24:  jmp    0850c940 <+0x98>
0850c8ce +0x26:  mov    -0x10(%ebp),%eax
0850c8d1 +0x29:  mov    0x8(%ebp),%edx
0850c8d4 +0x2c:  imul   $0x3d,%eax,%eax
0850c8d7 +0x2f:  lea    (%edx,%eax,1),%eax
0850c8da +0x32:  add    $0x10,%eax
0850c8dd +0x35:  mov    0xe(%eax),%eax
0850c8e0 +0x38:  test   %eax,%eax
0850c8e2 +0x3a:  je     0850c93c <+0x94>
0850c8e4 +0x3c:  mov    -0x10(%ebp),%eax
0850c8e7 +0x3f:  mov    0x8(%ebp),%edx
0850c8ea +0x42:  imul   $0x3d,%eax,%eax
0850c8ed +0x45:  lea    (%edx,%eax,1),%eax
0850c8f0 +0x48:  add    $0x10,%eax
0850c8f3 +0x4b:  mov    0xe(%eax),%eax
0850c8f6 +0x4e:  mov    %eax,%ebx
0850c8f8 +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850c8fd +0x55:  mov    %ebx,0x4(%esp)
0850c901 +0x59:  mov    %eax,(%esp)
0850c904 +0x5c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850c909 +0x61:  mov    %eax,-0xc(%ebp)
0850c90c +0x64:  mov    0x10(%ebp),%eax
0850c90f +0x67:  mov    %eax,0x8(%esp)
0850c913 +0x6b:  mov    0xc(%ebp),%eax
0850c916 +0x6e:  mov    %eax,0x4(%esp)
0850c91a +0x72:  mov    -0xc(%ebp),%eax
0850c91d +0x75:  mov    %eax,(%esp)
0850c920 +0x78:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850c925 +0x7d:  test   %al,%al
0850c927 +0x7f:  je     0850c93c <+0x94>
0850c929 +0x81:  mov    -0xc(%ebp),%eax
0850c92c +0x84:  mov    %eax,(%esp)
0850c92f +0x87:  call   0850d292 <_GLOBAL__I_g_emptySlot+0x1c7>  ; global constructors keyed to g_emptySlot+0x1c7
0850c934 +0x8c:  flds   -0x14(%ebp)
0850c937 +0x8f:  faddp  %st,%st(1)
0850c939 +0x91:  fstps  -0x14(%ebp)
0850c93c +0x94:  addl   $0x1,-0x10(%ebp)
0850c940 +0x98:  cmpl   $0x15,-0x10(%ebp)
0850c944 +0x9c:  setle  %al
0850c947 +0x9f:  test   %al,%al
0850c949 +0xa1:  jne    0850c8ce <+0x26>
0850c94b +0xa3:  mov    -0x14(%ebp),%eax
0850c94e +0xa6:  mov    %eax,-0x1c(%ebp)
0850c951 +0xa9:  flds   -0x1c(%ebp)
0850c954 +0xac:  add    $0x34,%esp
0850c957 +0xaf:  pop    %ebx
0850c958 +0xb0:  pop    %ebp
0850c959 +0xb1:  ret
```

## 反编译 C

```c
// CInventory::GetExpertJobCompoundMaterialVariation @ 0x850c8a8

/* CInventory::GetExpertJobCompoundMaterialVariation(ENUM_EXPERT_JOB_TYPE, int) const */

longdouble __thiscall
CInventory::GetExpertJobCompoundMaterialVariation(CInventory *this,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  longdouble lVar3;
  float local_18;
  int local_14;
  
  local_18 = 0.0;
  if (param_2 == 0) {
    local_18 = 0.0;
  }
  else {
    for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
      if (*(int *)(this + local_14 * 0x3d + 0x1e) != 0) {
        iVar1 = *(int *)(this + local_14 * 0x3d + 0x1e);
        this_00 = (CDataManager *)G_CDataManager();
        this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
        cVar2 = CItem::isExpertJobUsable(this_01,param_2,param_3);
        if (cVar2 != '\0') {
          lVar3 = (longdouble)CItem::GetExpertJobCompoundMaterialVariation(this_01);
          local_18 = (float)((longdouble)local_18 + lVar3);
        }
      }
    }
  }
  return (longdouble)local_18;
}
```
