# OnFightVillageMonster

`_ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_`

`village_attacked::CVillageMonsterArea::OnFightVillageMonster(CUser*, unsigned short, int&, int&)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3fe2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3fe2  _ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_
#           village_attacked::CVillageMonsterArea::OnFightVillageMonster(CUser*, unsigned short, int&, int&)
# range [0x086b3fe2, 0x086b406f]
086b3fe2 +0x00:  push   %ebp
086b3fe3 +0x01:  mov    %esp,%ebp
086b3fe5 +0x03:  sub    $0x38,%esp
086b3fe8 +0x06:  mov    0x10(%ebp),%eax
086b3feb +0x09:  mov    %ax,-0x1c(%ebp)
086b3fef +0x0d:  mov    0x8(%ebp),%edx
086b3ff2 +0x10:  lea    -0x14(%ebp),%eax
086b3ff5 +0x13:  lea    -0x1c(%ebp),%ecx
086b3ff8 +0x16:  mov    %ecx,0x8(%esp)
086b3ffc +0x1a:  mov    %edx,0x4(%esp)
086b4000 +0x1e:  mov    %eax,(%esp)
086b4003 +0x21:  call   086b5266 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x790>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x790
086b4008 +0x26:  sub    $0x4,%esp
086b400b +0x29:  mov    0x8(%ebp),%edx
086b400e +0x2c:  lea    -0x10(%ebp),%eax
086b4011 +0x2f:  mov    %edx,0x4(%esp)
086b4015 +0x33:  mov    %eax,(%esp)
086b4018 +0x36:  call   086b4ff2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x51c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x51c
086b401d +0x3b:  sub    $0x4,%esp
086b4020 +0x3e:  lea    -0x10(%ebp),%eax
086b4023 +0x41:  mov    %eax,0x4(%esp)
086b4027 +0x45:  lea    -0x14(%ebp),%eax
086b402a +0x48:  mov    %eax,(%esp)
086b402d +0x4b:  call   086b5018 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x542>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x542
086b4032 +0x50:  test   %al,%al
086b4034 +0x52:  je     086b4069 <+0x87>
086b4036 +0x54:  lea    -0x14(%ebp),%eax
086b4039 +0x57:  mov    %eax,(%esp)
086b403c +0x5a:  call   086b504a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x574>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x574
086b4041 +0x5f:  add    $0x4,%eax
086b4044 +0x62:  mov    %eax,-0xc(%ebp)
086b4047 +0x65:  mov    0x18(%ebp),%eax
086b404a +0x68:  mov    %eax,0xc(%esp)
086b404e +0x6c:  mov    0x14(%ebp),%eax
086b4051 +0x6f:  mov    %eax,0x8(%esp)
086b4055 +0x73:  mov    0xc(%ebp),%eax
086b4058 +0x76:  mov    %eax,0x4(%esp)
086b405c +0x7a:  mov    -0xc(%ebp),%eax
086b405f +0x7d:  mov    %eax,(%esp)
086b4062 +0x80:  call   086b3240 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_>  ; village_attacked::CVillageMonster::OnFightVillageMonster(CUser*, int&, int&)
086b4067 +0x85:  jmp    086b406e <+0x8c>
086b4069 +0x87:  mov    $0x15,%eax
086b406e +0x8c:  leave
086b406f +0x8d:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnFightVillageMonster @ 0x86b3fe2

/* village_attacked::CVillageMonsterArea::OnFightVillageMonster(CUser*, unsigned short, int&, int&)
    */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::OnFightVillageMonster
          (CVillageMonsterArea *this,CUser *param_1,ushort param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>> local_18 [4];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_14 [4];
  CVillageMonster *local_10;
  
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::find((ushort *)local_18);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0x15;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->(local_18);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    uVar3 = CVillageMonster::OnFightVillageMonster(local_10,param_1,param_3,param_4);
  }
  return uVar3;
}
```
