# GetExpertJobSelfDisjointResultVariation

`_ZNK10CInventory39GetExpertJobSelfDisjointResultVariationE20ENUM_EXPERT_JOB_TYPEi`

`CInventory::GetExpertJobSelfDisjointResultVariation(ENUM_EXPERT_JOB_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cb94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cb94  _ZNK10CInventory39GetExpertJobSelfDisjointResultVariationE20ENUM_EXPERT_JOB_TYPEi
#           CInventory::GetExpertJobSelfDisjointResultVariation(ENUM_EXPERT_JOB_TYPE, int) const
# range [0x0850cb94, 0x0850cc45]
0850cb94 +0x00:  push   %ebp
0850cb95 +0x01:  mov    %esp,%ebp
0850cb97 +0x03:  push   %ebx
0850cb98 +0x04:  sub    $0x34,%esp
0850cb9b +0x07:  mov    $0x0,%eax
0850cba0 +0x0c:  mov    %eax,-0x14(%ebp)
0850cba3 +0x0f:  cmpl   $0x0,0xc(%ebp)
0850cba7 +0x13:  jne    0850cbb1 <+0x1d>
0850cba9 +0x15:  mov    -0x14(%ebp),%eax
0850cbac +0x18:  jmp    0850cc3a <+0xa6>
0850cbb1 +0x1d:  movl   $0xa,-0x10(%ebp)
0850cbb8 +0x24:  jmp    0850cc2c <+0x98>
0850cbba +0x26:  mov    -0x10(%ebp),%eax
0850cbbd +0x29:  mov    0x8(%ebp),%edx
0850cbc0 +0x2c:  imul   $0x3d,%eax,%eax
0850cbc3 +0x2f:  lea    (%edx,%eax,1),%eax
0850cbc6 +0x32:  add    $0x10,%eax
0850cbc9 +0x35:  mov    0xe(%eax),%eax
0850cbcc +0x38:  test   %eax,%eax
0850cbce +0x3a:  je     0850cc28 <+0x94>
0850cbd0 +0x3c:  mov    -0x10(%ebp),%eax
0850cbd3 +0x3f:  mov    0x8(%ebp),%edx
0850cbd6 +0x42:  imul   $0x3d,%eax,%eax
0850cbd9 +0x45:  lea    (%edx,%eax,1),%eax
0850cbdc +0x48:  add    $0x10,%eax
0850cbdf +0x4b:  mov    0xe(%eax),%eax
0850cbe2 +0x4e:  mov    %eax,%ebx
0850cbe4 +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850cbe9 +0x55:  mov    %ebx,0x4(%esp)
0850cbed +0x59:  mov    %eax,(%esp)
0850cbf0 +0x5c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850cbf5 +0x61:  mov    %eax,-0xc(%ebp)
0850cbf8 +0x64:  mov    0x10(%ebp),%eax
0850cbfb +0x67:  mov    %eax,0x8(%esp)
0850cbff +0x6b:  mov    0xc(%ebp),%eax
0850cc02 +0x6e:  mov    %eax,0x4(%esp)
0850cc06 +0x72:  mov    -0xc(%ebp),%eax
0850cc09 +0x75:  mov    %eax,(%esp)
0850cc0c +0x78:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850cc11 +0x7d:  test   %al,%al
0850cc13 +0x7f:  je     0850cc28 <+0x94>
0850cc15 +0x81:  mov    -0xc(%ebp),%eax
0850cc18 +0x84:  mov    %eax,(%esp)
0850cc1b +0x87:  call   0850d2f6 <_GLOBAL__I_g_emptySlot+0x22b>  ; global constructors keyed to g_emptySlot+0x22b
0850cc20 +0x8c:  flds   -0x14(%ebp)
0850cc23 +0x8f:  faddp  %st,%st(1)
0850cc25 +0x91:  fstps  -0x14(%ebp)
0850cc28 +0x94:  addl   $0x1,-0x10(%ebp)
0850cc2c +0x98:  cmpl   $0x15,-0x10(%ebp)
0850cc30 +0x9c:  setle  %al
0850cc33 +0x9f:  test   %al,%al
0850cc35 +0xa1:  jne    0850cbba <+0x26>
0850cc37 +0xa3:  mov    -0x14(%ebp),%eax
0850cc3a +0xa6:  mov    %eax,-0x1c(%ebp)
0850cc3d +0xa9:  flds   -0x1c(%ebp)
0850cc40 +0xac:  add    $0x34,%esp
0850cc43 +0xaf:  pop    %ebx
0850cc44 +0xb0:  pop    %ebp
0850cc45 +0xb1:  ret
```

## 反编译 C

```c
// CInventory::GetExpertJobSelfDisjointResultVariation @ 0x850cb94

/* CInventory::GetExpertJobSelfDisjointResultVariation(ENUM_EXPERT_JOB_TYPE, int) const */

longdouble __thiscall
CInventory::GetExpertJobSelfDisjointResultVariation(CInventory *this,int param_2,undefined4 param_3)

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
          lVar3 = (longdouble)CItem::GetExpertJobSelfDisjointResultVariation(this_01);
          local_18 = (float)((longdouble)local_18 + lVar3);
        }
      }
    }
  }
  return (longdouble)local_18;
}
```
