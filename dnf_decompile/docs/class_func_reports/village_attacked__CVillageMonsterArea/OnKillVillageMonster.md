# OnKillVillageMonster

`_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb`

`village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b4070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4070  _ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb
#           village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool)
# range [0x086b4070, 0x086b4143]
086b4070 +0x00:  push   %ebp
086b4071 +0x01:  mov    %esp,%ebp
086b4073 +0x03:  push   %ebx
086b4074 +0x04:  sub    $0x44,%esp
086b4077 +0x07:  mov    0x10(%ebp),%edx
086b407a +0x0a:  mov    0x14(%ebp),%eax
086b407d +0x0d:  mov    %dx,-0x1c(%ebp)
086b4081 +0x11:  mov    %al,-0x20(%ebp)
086b4084 +0x14:  mov    0x8(%ebp),%edx
086b4087 +0x17:  lea    -0x18(%ebp),%eax
086b408a +0x1a:  lea    -0x1c(%ebp),%ecx
086b408d +0x1d:  mov    %ecx,0x8(%esp)
086b4091 +0x21:  mov    %edx,0x4(%esp)
086b4095 +0x25:  mov    %eax,(%esp)
086b4098 +0x28:  call   086b5266 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x790>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x790
086b409d +0x2d:  sub    $0x4,%esp
086b40a0 +0x30:  mov    0x8(%ebp),%edx
086b40a3 +0x33:  lea    -0x14(%ebp),%eax
086b40a6 +0x36:  mov    %edx,0x4(%esp)
086b40aa +0x3a:  mov    %eax,(%esp)
086b40ad +0x3d:  call   086b4ff2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x51c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x51c
086b40b2 +0x42:  sub    $0x4,%esp
086b40b5 +0x45:  lea    -0x14(%ebp),%eax
086b40b8 +0x48:  mov    %eax,0x4(%esp)
086b40bc +0x4c:  lea    -0x18(%ebp),%eax
086b40bf +0x4f:  mov    %eax,(%esp)
086b40c2 +0x52:  call   086b5018 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x542>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x542
086b40c7 +0x57:  test   %al,%al
086b40c9 +0x59:  je     086b413a <+0xca>
086b40cb +0x5b:  lea    -0x18(%ebp),%eax
086b40ce +0x5e:  mov    %eax,(%esp)
086b40d1 +0x61:  call   086b504a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x574>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x574
086b40d6 +0x66:  add    $0x4,%eax
086b40d9 +0x69:  mov    %eax,-0x10(%ebp)
086b40dc +0x6c:  movzbl -0x20(%ebp),%ebx
086b40e0 +0x70:  mov    0x8(%ebp),%eax
086b40e3 +0x73:  mov    0x38(%eax),%ecx
086b40e6 +0x76:  mov    0x8(%ebp),%eax
086b40e9 +0x79:  mov    0x2c(%eax),%edx
086b40ec +0x7c:  mov    0x8(%ebp),%eax
086b40ef +0x7f:  mov    0x28(%eax),%eax
086b40f2 +0x82:  mov    %ebx,0x14(%esp)
086b40f6 +0x86:  mov    %ecx,0x10(%esp)
086b40fa +0x8a:  mov    %edx,0xc(%esp)
086b40fe +0x8e:  mov    %eax,0x8(%esp)
086b4102 +0x92:  mov    0xc(%ebp),%eax
086b4105 +0x95:  mov    %eax,0x4(%esp)
086b4109 +0x99:  mov    -0x10(%ebp),%eax
086b410c +0x9c:  mov    %eax,(%esp)
086b410f +0x9f:  call   086b34a0 <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib>  ; village_attacked::CVillageMonster::OnKillVillageMonster(CUser*, int, int, int, bool)
086b4114 +0xa4:  mov    %eax,-0xc(%ebp)
086b4117 +0xa7:  cmpb   $0x0,-0x20(%ebp)
086b411b +0xab:  je     086b4135 <+0xc5>
086b411d +0xad:  cmpl   $0x0,-0xc(%ebp)
086b4121 +0xb1:  jne    086b4135 <+0xc5>
086b4123 +0xb3:  mov    0x8(%ebp),%eax
086b4126 +0xb6:  mov    -0x18(%ebp),%edx
086b4129 +0xb9:  mov    %edx,0x4(%esp)
086b412d +0xbd:  mov    %eax,(%esp)
086b4130 +0xc0:  call   086b5292 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x7bc>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x7bc
086b4135 +0xc5:  mov    -0xc(%ebp),%eax
086b4138 +0xc8:  jmp    086b413f <+0xcf>
086b413a +0xca:  mov    $0x0,%eax
086b413f +0xcf:  mov    -0x4(%ebp),%ebx
086b4142 +0xd2:  leave
086b4143 +0xd3:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnKillVillageMonster @ 0x86b4070

/* village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool) */

int __thiscall
village_attacked::CVillageMonsterArea::OnKillVillageMonster
          (CVillageMonsterArea *this,CUser *param_1,ushort param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_1c;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  CVillageMonster *local_14;
  int local_10;
  
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::find((ushort *)&local_1c);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
          ::operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)&local_1c,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)&local_1c);
    local_14 = (CVillageMonster *)(iVar2 + 4);
    local_10 = CVillageMonster::OnKillVillageMonster
                         (local_14,param_1,*(int *)(this + 0x28),*(int *)(this + 0x2c),
                          *(int *)(this + 0x38),param_3);
    if ((param_3) && (local_10 == 0)) {
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::erase((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
               *)this,local_1c);
    }
  }
  return local_10;
}
```
