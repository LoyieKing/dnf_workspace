# GetExpertJobCompoundResultVariation

`_ZNK10CInventory35GetExpertJobCompoundResultVariationE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB31stExpertCompoundResultVariationE`

`CInventory::GetExpertJobCompoundResultVariation(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertCompoundResultVariation&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850ca0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850ca0c  _ZNK10CInventory35GetExpertJobCompoundResultVariationE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB31stExpertCompoundResultVariationE
#           CInventory::GetExpertJobCompoundResultVariation(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertCompoundResultVariation&) const
# range [0x0850ca0c, 0x0850cae1]
0850ca0c +0x00:  push   %ebp
0850ca0d +0x01:  mov    %esp,%ebp
0850ca0f +0x03:  push   %ebx
0850ca10 +0x04:  sub    $0x24,%esp
0850ca13 +0x07:  cmpl   $0x0,0xc(%ebp)
0850ca17 +0x0b:  je     0850cada <+0xce>
0850ca1d +0x11:  movl   $0xa,-0x10(%ebp)
0850ca24 +0x18:  jmp    0850cac9 <+0xbd>
0850ca29 +0x1d:  mov    -0x10(%ebp),%eax
0850ca2c +0x20:  mov    0x8(%ebp),%edx
0850ca2f +0x23:  imul   $0x3d,%eax,%eax
0850ca32 +0x26:  lea    (%edx,%eax,1),%eax
0850ca35 +0x29:  add    $0x10,%eax
0850ca38 +0x2c:  mov    0xe(%eax),%eax
0850ca3b +0x2f:  test   %eax,%eax
0850ca3d +0x31:  je     0850cac5 <+0xb9>
0850ca43 +0x37:  mov    -0x10(%ebp),%eax
0850ca46 +0x3a:  mov    0x8(%ebp),%edx
0850ca49 +0x3d:  imul   $0x3d,%eax,%eax
0850ca4c +0x40:  lea    (%edx,%eax,1),%eax
0850ca4f +0x43:  add    $0x10,%eax
0850ca52 +0x46:  mov    0xe(%eax),%eax
0850ca55 +0x49:  mov    %eax,%ebx
0850ca57 +0x4b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850ca5c +0x50:  mov    %ebx,0x4(%esp)
0850ca60 +0x54:  mov    %eax,(%esp)
0850ca63 +0x57:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850ca68 +0x5c:  mov    %eax,-0xc(%ebp)
0850ca6b +0x5f:  mov    0x10(%ebp),%eax
0850ca6e +0x62:  mov    %eax,0x8(%esp)
0850ca72 +0x66:  mov    0xc(%ebp),%eax
0850ca75 +0x69:  mov    %eax,0x4(%esp)
0850ca79 +0x6d:  mov    -0xc(%ebp),%eax
0850ca7c +0x70:  mov    %eax,(%esp)
0850ca7f +0x73:  call   084e95ce <_GLOBAL__I__Z7getUserj+0x580>  ; global constructors keyed to getUser(unsigned int)+0x580
0850ca84 +0x78:  test   %al,%al
0850ca86 +0x7a:  je     0850cac5 <+0xb9>
0850ca88 +0x7c:  lea    -0x18(%ebp),%eax
0850ca8b +0x7f:  mov    %eax,(%esp)
0850ca8e +0x82:  call   0850d0e8 <_GLOBAL__I_g_emptySlot+0x1d>  ; global constructors keyed to g_emptySlot+0x1d
0850ca93 +0x87:  lea    -0x18(%ebp),%eax
0850ca96 +0x8a:  mov    %eax,0x4(%esp)
0850ca9a +0x8e:  mov    -0xc(%ebp),%eax
0850ca9d +0x91:  mov    %eax,(%esp)
0850caa0 +0x94:  call   0850d2c2 <_GLOBAL__I_g_emptySlot+0x1f7>  ; global constructors keyed to g_emptySlot+0x1f7
0850caa5 +0x99:  mov    0x14(%ebp),%eax
0850caa8 +0x9c:  flds   (%eax)
0850caaa +0x9e:  flds   -0x18(%ebp)
0850caad +0xa1:  faddp  %st,%st(1)
0850caaf +0xa3:  mov    0x14(%ebp),%eax
0850cab2 +0xa6:  fstps  (%eax)
0850cab4 +0xa8:  mov    0x14(%ebp),%eax
0850cab7 +0xab:  flds   0x4(%eax)
0850caba +0xae:  flds   -0x14(%ebp)
0850cabd +0xb1:  faddp  %st,%st(1)
0850cabf +0xb3:  mov    0x14(%ebp),%eax
0850cac2 +0xb6:  fstps  0x4(%eax)
0850cac5 +0xb9:  addl   $0x1,-0x10(%ebp)
0850cac9 +0xbd:  cmpl   $0x15,-0x10(%ebp)
0850cacd +0xc1:  setle  %al
0850cad0 +0xc4:  test   %al,%al
0850cad2 +0xc6:  jne    0850ca29 <+0x1d>
0850cad8 +0xcc:  jmp    0850cadb <+0xcf>
0850cada +0xce:  nop
0850cadb +0xcf:  add    $0x24,%esp
0850cade +0xd2:  pop    %ebx
0850cadf +0xd3:  pop    %ebp
0850cae0 +0xd4:  ret
0850cae1 +0xd5:  nop
```

## 反编译 C

```c
// CInventory::GetExpertJobCompoundResultVariation @ 0x850ca0c

/* CInventory::GetExpertJobCompoundResultVariation(ENUM_EXPERT_JOB_TYPE, int,
   STItemScript::SEXPERTJOB::stExpertCompoundResultVariation&) const */

void __thiscall
CInventory::GetExpertJobCompoundResultVariation
          (CInventory *this,int param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  float local_1c;
  float local_18;
  int local_14;
  CItem *local_10;
  
  if (param_2 != 0) {
    for (local_14 = 10; local_14 < 0x16; local_14 = local_14 + 1) {
      if (*(int *)(this + local_14 * 0x3d + 0x1e) != 0) {
        iVar1 = *(int *)(this + local_14 * 0x3d + 0x1e);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
        cVar2 = CItem::isExpertJobUsable(local_10,param_2,param_3);
        if (cVar2 != '\0') {
          STItemScript::SEXPERTJOB::stExpertCompoundResultVariation::stExpertCompoundResultVariation
                    ((stExpertCompoundResultVariation *)&local_1c);
          CItem::GetExpertJobCompoundResultVariation
                    (local_10,(stExpertCompoundResultVariation *)&local_1c);
          *param_4 = local_1c + *param_4;
          param_4[1] = local_18 + param_4[1];
        }
      }
    }
  }
  return;
}
```
