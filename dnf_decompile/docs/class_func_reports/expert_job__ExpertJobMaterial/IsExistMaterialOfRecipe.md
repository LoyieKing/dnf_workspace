# IsExistMaterialOfRecipe

`_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv`

`expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe()`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849c166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c166  _ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv
#           expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe()
# range [0x0849c166, 0x0849c203]
0849c166 +0x00:  push   %ebp
0849c167 +0x01:  mov    %esp,%ebp
0849c169 +0x03:  push   %ebx
0849c16a +0x04:  sub    $0x24,%esp
0849c16d +0x07:  mov    0x8(%ebp),%eax
0849c170 +0x0a:  mov    %eax,(%esp)
0849c173 +0x0d:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849c178 +0x12:  test   %al,%al
0849c17a +0x14:  je     0849c183 <+0x1d>
0849c17c +0x16:  mov    $0x11,%eax
0849c181 +0x1b:  jmp    0849c1fd <+0x97>
0849c183 +0x1d:  movl   $0x0,-0xc(%ebp)
0849c18a +0x24:  mov    0x8(%ebp),%eax
0849c18d +0x27:  mov    %eax,(%esp)
0849c190 +0x2a:  call   0849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>  ; expert_job::ExpertJobMaterial::IsRecipe()
0849c195 +0x2f:  mov    %eax,-0xc(%ebp)
0849c198 +0x32:  cmpl   $0x0,-0xc(%ebp)
0849c19c +0x36:  setne  %al
0849c19f +0x39:  test   %al,%al
0849c1a1 +0x3b:  je     0849c1a8 <+0x42>
0849c1a3 +0x3d:  mov    -0xc(%ebp),%eax
0849c1a6 +0x40:  jmp    0849c1fd <+0x97>
0849c1a8 +0x42:  mov    0x8(%ebp),%eax
0849c1ab +0x45:  mov    (%eax),%eax
0849c1ad +0x47:  mov    %eax,(%esp)
0849c1b0 +0x4a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849c1b5 +0x4f:  test   %eax,%eax
0849c1b7 +0x51:  sete   %al
0849c1ba +0x54:  test   %al,%al
0849c1bc +0x56:  je     0849c1c5 <+0x5f>
0849c1be +0x58:  mov    $0x3,%eax
0849c1c3 +0x5d:  jmp    0849c1fd <+0x97>
0849c1c5 +0x5f:  mov    0x8(%ebp),%eax
0849c1c8 +0x62:  mov    0x4(%eax),%eax
0849c1cb +0x65:  lea    0x174(%eax),%ebx
0849c1d1 +0x6b:  mov    0x8(%ebp),%eax
0849c1d4 +0x6e:  mov    (%eax),%eax
0849c1d6 +0x70:  mov    %eax,(%esp)
0849c1d9 +0x73:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849c1de +0x78:  mov    %ebx,0x4(%esp)
0849c1e2 +0x7c:  mov    %eax,(%esp)
0849c1e5 +0x7f:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
0849c1ea +0x84:  xor    $0x1,%eax
0849c1ed +0x87:  test   %al,%al
0849c1ef +0x89:  je     0849c1f8 <+0x92>
0849c1f1 +0x8b:  mov    $0x15,%eax
0849c1f6 +0x90:  jmp    0849c1fd <+0x97>
0849c1f8 +0x92:  mov    $0x0,%eax
0849c1fd +0x97:  add    $0x24,%esp
0849c200 +0x9a:  pop    %ebx
0849c201 +0x9b:  pop    %ebp
0849c202 +0x9c:  ret
0849c203 +0x9d:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe @ 0x849c166

/* expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe() */

int __thiscall expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe(ExpertJobMaterial *this)

{
  char cVar1;
  int iVar2;
  CInventory *this_00;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar2 = IsRecipe(this);
    if (iVar2 == 0) {
      iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else {
        iVar2 = *(int *)(this + 4);
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
        cVar1 = CInventory::CheckNeedItemList(this_00,(vector *)(iVar2 + 0x174));
        if (cVar1 == '\x01') {
          iVar2 = 0;
        }
        else {
          iVar2 = 0x15;
        }
      }
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}
```
