# OnRunVillageMonster

`_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv`

`village_attacked::CVillageMonsterArea::OnRunVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3f06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3f06  _ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv
#           village_attacked::CVillageMonsterArea::OnRunVillageMonster()
# range [0x086b3f06, 0x086b3fe1]
086b3f06 +0x00:  push   %ebp
086b3f07 +0x01:  mov    %esp,%ebp
086b3f09 +0x03:  push   %esi
086b3f0a +0x04:  push   %ebx
086b3f0b +0x05:  sub    $0x20,%esp
086b3f0e +0x08:  mov    0x8(%ebp),%eax
086b3f11 +0x0b:  mov    0x2c(%eax),%esi
086b3f14 +0x0e:  mov    0x8(%ebp),%eax
086b3f17 +0x11:  mov    0x28(%eax),%ebx
086b3f1a +0x14:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086b3f1f +0x19:  mov    %esi,0x8(%esp)
086b3f23 +0x1d:  mov    %ebx,0x4(%esp)
086b3f27 +0x21:  mov    %eax,(%esp)
086b3f2a +0x24:  call   086c49b2 <_ZNK9GameWorld12GetUserCountEii>  ; GameWorld::GetUserCount(int, int) const
086b3f2f +0x29:  test   %eax,%eax
086b3f31 +0x2b:  sete   %al
086b3f34 +0x2e:  test   %al,%al
086b3f36 +0x30:  jne    086b3fd7 <+0xd1>
086b3f3c +0x36:  mov    0x8(%ebp),%edx
086b3f3f +0x39:  lea    -0x14(%ebp),%eax
086b3f42 +0x3c:  mov    %edx,0x4(%esp)
086b3f46 +0x40:  mov    %eax,(%esp)
086b3f49 +0x43:  call   086b4fcc <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x4f6>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x4f6
086b3f4e +0x48:  sub    $0x4,%esp
086b3f51 +0x4b:  jmp    086b3f90 <+0x8a>
086b3f53 +0x4d:  lea    -0x14(%ebp),%eax
086b3f56 +0x50:  mov    %eax,(%esp)
086b3f59 +0x53:  call   086b504a <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x574>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x574
086b3f5e +0x58:  add    $0x4,%eax
086b3f61 +0x5b:  mov    %eax,-0xc(%ebp)
086b3f64 +0x5e:  mov    0x8(%ebp),%eax
086b3f67 +0x61:  mov    0x30(%eax),%eax
086b3f6a +0x64:  mov    %eax,%edx
086b3f6c +0x66:  mov    0x8(%ebp),%eax
086b3f6f +0x69:  mov    0x18(%eax),%eax
086b3f72 +0x6c:  mov    %edx,0x8(%esp)
086b3f76 +0x70:  mov    %eax,0x4(%esp)
086b3f7a +0x74:  mov    -0xc(%ebp),%eax
086b3f7d +0x77:  mov    %eax,(%esp)
086b3f80 +0x7a:  call   086b310c <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi>  ; village_attacked::CVillageMonster::OnRunVillageMonster(std::vector<MapArea, std::allocator<MapArea> >*, int)
086b3f85 +0x7f:  lea    -0x14(%ebp),%eax
086b3f88 +0x82:  mov    %eax,(%esp)
086b3f8b +0x85:  call   086b502c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x556>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x556
086b3f90 +0x8a:  mov    0x8(%ebp),%edx
086b3f93 +0x8d:  lea    -0x10(%ebp),%eax
086b3f96 +0x90:  mov    %edx,0x4(%esp)
086b3f9a +0x94:  mov    %eax,(%esp)
086b3f9d +0x97:  call   086b4ff2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x51c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x51c
086b3fa2 +0x9c:  sub    $0x4,%esp
086b3fa5 +0x9f:  lea    -0x10(%ebp),%eax
086b3fa8 +0xa2:  mov    %eax,0x4(%esp)
086b3fac +0xa6:  lea    -0x14(%ebp),%eax
086b3faf +0xa9:  mov    %eax,(%esp)
086b3fb2 +0xac:  call   086b5018 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x542>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x542
086b3fb7 +0xb1:  test   %al,%al
086b3fb9 +0xb3:  jne    086b3f53 <+0x4d>
086b3fbb +0xb5:  mov    0x8(%ebp),%eax
086b3fbe +0xb8:  mov    %eax,(%esp)
086b3fc1 +0xbb:  call   086b3962 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv>  ; village_attacked::CVillageMonsterArea::SendVillageMonsterPosition()
086b3fc6 +0xc0:  mov    0x8(%ebp),%eax
086b3fc9 +0xc3:  mov    0x30(%eax),%eax
086b3fcc +0xc6:  lea    0x1(%eax),%edx
086b3fcf +0xc9:  mov    0x8(%ebp),%eax
086b3fd2 +0xcc:  mov    %edx,0x30(%eax)
086b3fd5 +0xcf:  jmp    086b3fd8 <+0xd2>
086b3fd7 +0xd1:  nop
086b3fd8 +0xd2:  lea    -0x8(%ebp),%esp
086b3fdb +0xd5:  add    $0x0,%esp
086b3fde +0xd8:  pop    %ebx
086b3fdf +0xd9:  pop    %esi
086b3fe0 +0xda:  pop    %ebp
086b3fe1 +0xdb:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnRunVillageMonster @ 0x86b3f06

/* village_attacked::CVillageMonsterArea::OnRunVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterArea::OnRunVillageMonster(CVillageMonsterArea *this)

{
  int iVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_14 [4];
  CVillageMonster *local_10;
  
  iVar3 = *(int *)(this + 0x2c);
  iVar1 = *(int *)(this + 0x28);
  this_00 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetUserCount(this_00,iVar1,iVar3);
  if (iVar3 != 0) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::end(local_14);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                          *)local_18,(_Rb_tree_iterator *)local_14);
      if (cVar2 == '\0') break;
      iVar3 = std::
              _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                          *)local_18);
      local_10 = (CVillageMonster *)(iVar3 + 4);
      CVillageMonster::OnRunVillageMonster(local_10,*(vector **)(this + 0x18),*(int *)(this + 0x30))
      ;
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
      operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                  *)local_18);
    }
    SendVillageMonsterPosition(this);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  }
  return;
}
```
