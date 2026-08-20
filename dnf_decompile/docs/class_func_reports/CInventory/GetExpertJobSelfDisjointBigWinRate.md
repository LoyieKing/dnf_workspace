# GetExpertJobSelfDisjointBigWinRate

`_ZNK10CInventory34GetExpertJobSelfDisjointBigWinRateE20ENUM_EXPERT_JOB_TYPEi`

`CInventory::GetExpertJobSelfDisjointBigWinRate(ENUM_EXPERT_JOB_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cae2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cae2  _ZNK10CInventory34GetExpertJobSelfDisjointBigWinRateE20ENUM_EXPERT_JOB_TYPEi
#           CInventory::GetExpertJobSelfDisjointBigWinRate(ENUM_EXPERT_JOB_TYPE, int) const
# range [0x0850cae2, 0x0850cb93]
0850cae2 +0x00:  push   %ebp
0850cae3 +0x01:  mov    %esp,%ebp
0850cae5 +0x03:  push   %ebx
0850cae6 +0x04:  sub    $0x34,%esp
0850cae9 +0x07:  mov    $0x0,%eax
0850caee +0x0c:  mov    %eax,-0x14(%ebp)
0850caf1 +0x0f:  cmpl   $0x0,0xc(%ebp)
0850caf5 +0x13:  jne    0850caff <+0x1d>
0850caf7 +0x15:  mov    -0x14(%ebp),%eax
0850cafa +0x18:  jmp    0850cb88 <+0xa6>
0850caff +0x1d:  movl   $0xa,-0x10(%ebp)
0850cb06 +0x24:  jmp    0850cb7a <+0x98>
0850cb08 +0x26:  mov    -0x10(%ebp),%eax
0850cb0b +0x29:  mov    0x8(%ebp),%edx
0850cb0e +0x2c:  imul   $0x3d,%eax,%eax
0850cb11 +0x2f:  lea    (%edx,%eax,1),%eax
0850cb14 +0x32:  add    $0x10,%eax
0850cb17 +0x35:  mov    0xe(%eax),%eax
0850cb1a +0x38:  test   %eax,%eax
0850cb1c +0x3a:  je     0850cb76 <+0x94>
0850cb1e +0x3c:  mov    -0x10(%ebp),%eax
0850cb21 +0x3f:  mov    0x8(%ebp),%edx
0850cb24 +0x42:  imul   $0x3d,%eax,%eax
0850cb27 +0x45:  lea    (%edx,%eax,1),%eax
0850cb2a +0x48:  add    $0x10,%eax
0850cb2d +0x4b:  mov    0xe(%eax),%eax
0850cb30 +0x4e:  mov    %eax,%ebx
0850cb32 +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850cb37 +0x55:  mov    %ebx,0x4(%esp)
0850cb3b +0x59:  mov    %eax,(%esp)
0850cb3e +0x5c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850cb43 +0x61:  mov    %eax,-0xc(%ebp)
0850cb46 +0x64:  mov    0x10(%ebp),%eax
0850cb49 +0x67:  mov    %eax,0x8(%esp)
0850cb4d +0x6b:  mov    0xc(%ebp),%eax
0850cb50 +0x6e:  mov    %eax,0x4(%esp)
0850cb54 +0x72:  mov    -0xc(%ebp),%eax
0850cb57 +0x75:  mov    %eax,(%esp)
0850cb5a +0x78:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850cb5f +0x7d:  test   %al,%al
0850cb61 +0x7f:  je     0850cb76 <+0x94>
0850cb63 +0x81:  mov    -0xc(%ebp),%eax
0850cb66 +0x84:  mov    %eax,(%esp)
0850cb69 +0x87:  call   0850d2de <_GLOBAL__I_g_emptySlot+0x213>  ; global constructors keyed to g_emptySlot+0x213
0850cb6e +0x8c:  flds   -0x14(%ebp)
0850cb71 +0x8f:  faddp  %st,%st(1)
0850cb73 +0x91:  fstps  -0x14(%ebp)
0850cb76 +0x94:  addl   $0x1,-0x10(%ebp)
0850cb7a +0x98:  cmpl   $0x15,-0x10(%ebp)
0850cb7e +0x9c:  setle  %al
0850cb81 +0x9f:  test   %al,%al
0850cb83 +0xa1:  jne    0850cb08 <+0x26>
0850cb85 +0xa3:  mov    -0x14(%ebp),%eax
0850cb88 +0xa6:  mov    %eax,-0x1c(%ebp)
0850cb8b +0xa9:  flds   -0x1c(%ebp)
0850cb8e +0xac:  add    $0x34,%esp
0850cb91 +0xaf:  pop    %ebx
0850cb92 +0xb0:  pop    %ebp
0850cb93 +0xb1:  ret
```

## 反编译 C

```c
// CInventory::GetExpertJobSelfDisjointBigWinRate @ 0x850cae2

/* CInventory::GetExpertJobSelfDisjointBigWinRate(ENUM_EXPERT_JOB_TYPE, int) const */

longdouble __thiscall
CInventory::GetExpertJobSelfDisjointBigWinRate(CInventory *this,int param_2,undefined4 param_3)

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
          lVar3 = (longdouble)CItem::GetExpertJobSelfDisjointBigWinRate(this_01);
          local_18 = (float)((longdouble)local_18 + lVar3);
        }
      }
    }
  }
  return (longdouble)local_18;
}
```
