# OnMoveArea

`_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser`

`village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b45bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b45bc  _ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser
#           village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*)
# range [0x086b45bc, 0x086b4671]
086b45bc +0x00:  push   %ebp
086b45bd +0x01:  mov    %esp,%ebp
086b45bf +0x03:  push   %ebx
086b45c0 +0x04:  sub    $0x24,%esp
086b45c3 +0x07:  movl   $0x0,0x4(%esp)
086b45cb +0x0f:  mov    0xc(%ebp),%eax
086b45ce +0x12:  mov    %eax,(%esp)
086b45d1 +0x15:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086b45d6 +0x1a:  movzbl %al,%ebx
086b45d9 +0x1d:  mov    0xc(%ebp),%eax
086b45dc +0x20:  mov    %eax,(%esp)
086b45df +0x23:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086b45e4 +0x28:  movzbl %al,%eax
086b45e7 +0x2b:  mov    %ebx,0x8(%esp)
086b45eb +0x2f:  mov    %eax,0x4(%esp)
086b45ef +0x33:  lea    -0x12(%ebp),%eax
086b45f2 +0x36:  mov    %eax,(%esp)
086b45f5 +0x39:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b45fa +0x3e:  mov    0x8(%ebp),%eax
086b45fd +0x41:  lea    0x8(%eax),%ecx
086b4600 +0x44:  lea    -0x18(%ebp),%eax
086b4603 +0x47:  lea    -0x12(%ebp),%edx
086b4606 +0x4a:  mov    %edx,0x8(%esp)
086b460a +0x4e:  mov    %ecx,0x4(%esp)
086b460e +0x52:  mov    %eax,(%esp)
086b4611 +0x55:  call   086b5486 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9b0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9b0
086b4616 +0x5a:  sub    $0x4,%esp
086b4619 +0x5d:  mov    0x8(%ebp),%eax
086b461c +0x60:  lea    0x8(%eax),%edx
086b461f +0x63:  lea    -0x10(%ebp),%eax
086b4622 +0x66:  mov    %edx,0x4(%esp)
086b4626 +0x6a:  mov    %eax,(%esp)
086b4629 +0x6d:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b462e +0x72:  sub    $0x4,%esp
086b4631 +0x75:  lea    -0x10(%ebp),%eax
086b4634 +0x78:  mov    %eax,0x4(%esp)
086b4638 +0x7c:  lea    -0x18(%ebp),%eax
086b463b +0x7f:  mov    %eax,(%esp)
086b463e +0x82:  call   086b54b2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9dc>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9dc
086b4643 +0x87:  test   %al,%al
086b4645 +0x89:  jne    086b466c <+0xb0>
086b4647 +0x8b:  lea    -0x18(%ebp),%eax
086b464a +0x8e:  mov    %eax,(%esp)
086b464d +0x91:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b4652 +0x96:  add    $0x4,%eax
086b4655 +0x99:  mov    %eax,-0xc(%ebp)
086b4658 +0x9c:  mov    0xc(%ebp),%eax
086b465b +0x9f:  mov    %eax,0x4(%esp)
086b465f +0xa3:  mov    -0xc(%ebp),%eax
086b4662 +0xa6:  mov    %eax,(%esp)
086b4665 +0xa9:  call   086b3abe <_ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser>  ; village_attacked::CVillageMonsterArea::OnMoveArea(CUser*)
086b466a +0xae:  jmp    086b466d <+0xb1>
086b466c +0xb0:  nop
086b466d +0xb1:  mov    -0x4(%ebp),%ebx
086b4670 +0xb4:  leave
086b4671 +0xb5:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnMoveArea @ 0x86b45bc

/* village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnMoveArea(CVillageMonsterMgr *this,CUser *param_1)

{
  uchar uVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  Zone local_1c [6];
  Zone local_16 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  CVillageMonsterArea *local_10;
  
  uVar1 = CUser::get_area(param_1,false);
  uVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  Zone::Zone(local_16,uVar2,uVar1);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_1c);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_14);
  cVar3 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar3 == '\0') {
    iVar4 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_1c);
    local_10 = (CVillageMonsterArea *)(iVar4 + 4);
    CVillageMonsterArea::OnMoveArea(local_10,param_1);
  }
  return;
}
```
