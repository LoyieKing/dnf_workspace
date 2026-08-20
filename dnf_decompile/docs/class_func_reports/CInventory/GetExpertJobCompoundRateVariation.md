# GetExpertJobCompoundRateVariation

`_ZNK10CInventory33GetExpertJobCompoundRateVariationE20ENUM_EXPERT_JOB_TYPEi`

`CInventory::GetExpertJobCompoundRateVariation(ENUM_EXPERT_JOB_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850c95a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c95a  _ZNK10CInventory33GetExpertJobCompoundRateVariationE20ENUM_EXPERT_JOB_TYPEi
#           CInventory::GetExpertJobCompoundRateVariation(ENUM_EXPERT_JOB_TYPE, int) const
# range [0x0850c95a, 0x0850ca0b]
0850c95a +0x00:  push   %ebp
0850c95b +0x01:  mov    %esp,%ebp
0850c95d +0x03:  push   %ebx
0850c95e +0x04:  sub    $0x34,%esp
0850c961 +0x07:  mov    $0x0,%eax
0850c966 +0x0c:  mov    %eax,-0x14(%ebp)
0850c969 +0x0f:  cmpl   $0x0,0xc(%ebp)
0850c96d +0x13:  jne    0850c977 <+0x1d>
0850c96f +0x15:  mov    -0x14(%ebp),%eax
0850c972 +0x18:  jmp    0850ca00 <+0xa6>
0850c977 +0x1d:  movl   $0xa,-0x10(%ebp)
0850c97e +0x24:  jmp    0850c9f2 <+0x98>
0850c980 +0x26:  mov    -0x10(%ebp),%eax
0850c983 +0x29:  mov    0x8(%ebp),%edx
0850c986 +0x2c:  imul   $0x3d,%eax,%eax
0850c989 +0x2f:  lea    (%edx,%eax,1),%eax
0850c98c +0x32:  add    $0x10,%eax
0850c98f +0x35:  mov    0xe(%eax),%eax
0850c992 +0x38:  test   %eax,%eax
0850c994 +0x3a:  je     0850c9ee <+0x94>
0850c996 +0x3c:  mov    -0x10(%ebp),%eax
0850c999 +0x3f:  mov    0x8(%ebp),%edx
0850c99c +0x42:  imul   $0x3d,%eax,%eax
0850c99f +0x45:  lea    (%edx,%eax,1),%eax
0850c9a2 +0x48:  add    $0x10,%eax
0850c9a5 +0x4b:  mov    0xe(%eax),%eax
0850c9a8 +0x4e:  mov    %eax,%ebx
0850c9aa +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850c9af +0x55:  mov    %ebx,0x4(%esp)
0850c9b3 +0x59:  mov    %eax,(%esp)
0850c9b6 +0x5c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850c9bb +0x61:  mov    %eax,-0xc(%ebp)
0850c9be +0x64:  mov    0x10(%ebp),%eax
0850c9c1 +0x67:  mov    %eax,0x8(%esp)
0850c9c5 +0x6b:  mov    0xc(%ebp),%eax
0850c9c8 +0x6e:  mov    %eax,0x4(%esp)
0850c9cc +0x72:  mov    -0xc(%ebp),%eax
0850c9cf +0x75:  mov    %eax,(%esp)
0850c9d2 +0x78:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850c9d7 +0x7d:  test   %al,%al
0850c9d9 +0x7f:  je     0850c9ee <+0x94>
0850c9db +0x81:  mov    -0xc(%ebp),%eax
0850c9de +0x84:  mov    %eax,(%esp)
0850c9e1 +0x87:  call   0850d2aa <_GLOBAL__I_g_emptySlot+0x1df>  ; global constructors keyed to g_emptySlot+0x1df
0850c9e6 +0x8c:  flds   -0x14(%ebp)
0850c9e9 +0x8f:  faddp  %st,%st(1)
0850c9eb +0x91:  fstps  -0x14(%ebp)
0850c9ee +0x94:  addl   $0x1,-0x10(%ebp)
0850c9f2 +0x98:  cmpl   $0x15,-0x10(%ebp)
0850c9f6 +0x9c:  setle  %al
0850c9f9 +0x9f:  test   %al,%al
0850c9fb +0xa1:  jne    0850c980 <+0x26>
0850c9fd +0xa3:  mov    -0x14(%ebp),%eax
0850ca00 +0xa6:  mov    %eax,-0x1c(%ebp)
0850ca03 +0xa9:  flds   -0x1c(%ebp)
0850ca06 +0xac:  add    $0x34,%esp
0850ca09 +0xaf:  pop    %ebx
0850ca0a +0xb0:  pop    %ebp
0850ca0b +0xb1:  ret
```

## 反编译 C

```c
// CInventory::GetExpertJobCompoundRateVariation @ 0x850c95a

/* CInventory::GetExpertJobCompoundRateVariation(ENUM_EXPERT_JOB_TYPE, int) const */

longdouble __thiscall
CInventory::GetExpertJobCompoundRateVariation(CInventory *this,int param_2,undefined4 param_3)

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
          lVar3 = (longdouble)CItem::GetExpertJobCompoundRateVariation(this_01);
          local_18 = (float)((longdouble)local_18 + lVar3);
        }
      }
    }
  }
  return (longdouble)local_18;
}
```
