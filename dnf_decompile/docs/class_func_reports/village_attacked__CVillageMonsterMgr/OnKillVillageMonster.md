# OnKillVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb`

`village_attacked::CVillageMonsterMgr::OnKillVillageMonster(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4866  _ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEP5CUserb
#           village_attacked::CVillageMonsterMgr::OnKillVillageMonster(CUser*, bool)
# range [0x086b4866, 0x086b4963]
086b4866 +0x00:  push   %ebp
086b4867 +0x01:  mov    %esp,%ebp
086b4869 +0x03:  sub    $0x48,%esp
086b486c +0x06:  mov    0x10(%ebp),%eax
086b486f +0x09:  mov    %al,-0x2c(%ebp)
086b4872 +0x0c:  mov    0xc(%ebp),%eax
086b4875 +0x0f:  mov    %eax,(%esp)
086b4878 +0x12:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086b487d +0x17:  mov    %eax,-0x14(%ebp)
086b4880 +0x1a:  cmpl   $0x0,-0x14(%ebp)
086b4884 +0x1e:  jne    086b4890 <+0x2a>
086b4886 +0x20:  mov    $0x15,%eax
086b488b +0x25:  jmp    086b4961 <+0xfb>
086b4890 +0x2a:  mov    -0x14(%ebp),%eax
086b4893 +0x2d:  movzwl 0xc4c(%eax),%eax
086b489a +0x34:  mov    %ax,-0xe(%ebp)
086b489e +0x38:  cmpw   $0x0,-0xe(%ebp)
086b48a3 +0x3d:  jne    086b48af <+0x49>
086b48a5 +0x3f:  mov    $0x15,%eax
086b48aa +0x44:  jmp    086b4961 <+0xfb>
086b48af +0x49:  mov    -0x14(%ebp),%eax
086b48b2 +0x4c:  mov    0xc54(%eax),%eax
086b48b8 +0x52:  movzbl %al,%edx
086b48bb +0x55:  mov    -0x14(%ebp),%eax
086b48be +0x58:  mov    0xc50(%eax),%eax
086b48c4 +0x5e:  movzbl %al,%eax
086b48c7 +0x61:  mov    %edx,0x8(%esp)
086b48cb +0x65:  mov    %eax,0x4(%esp)
086b48cf +0x69:  lea    -0x1a(%ebp),%eax
086b48d2 +0x6c:  mov    %eax,(%esp)
086b48d5 +0x6f:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b48da +0x74:  mov    0x8(%ebp),%eax
086b48dd +0x77:  lea    0x8(%eax),%ecx
086b48e0 +0x7a:  lea    -0x20(%ebp),%eax
086b48e3 +0x7d:  lea    -0x1a(%ebp),%edx
086b48e6 +0x80:  mov    %edx,0x8(%esp)
086b48ea +0x84:  mov    %ecx,0x4(%esp)
086b48ee +0x88:  mov    %eax,(%esp)
086b48f1 +0x8b:  call   086b5486 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9b0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9b0
086b48f6 +0x90:  sub    $0x4,%esp
086b48f9 +0x93:  mov    0x8(%ebp),%eax
086b48fc +0x96:  lea    0x8(%eax),%edx
086b48ff +0x99:  lea    -0x18(%ebp),%eax
086b4902 +0x9c:  mov    %edx,0x4(%esp)
086b4906 +0xa0:  mov    %eax,(%esp)
086b4909 +0xa3:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b490e +0xa8:  sub    $0x4,%esp
086b4911 +0xab:  lea    -0x18(%ebp),%eax
086b4914 +0xae:  mov    %eax,0x4(%esp)
086b4918 +0xb2:  lea    -0x20(%ebp),%eax
086b491b +0xb5:  mov    %eax,(%esp)
086b491e +0xb8:  call   086b54b2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9dc>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9dc
086b4923 +0xbd:  test   %al,%al
086b4925 +0xbf:  je     086b492e <+0xc8>
086b4927 +0xc1:  mov    $0x15,%eax
086b492c +0xc6:  jmp    086b4961 <+0xfb>
086b492e +0xc8:  lea    -0x20(%ebp),%eax
086b4931 +0xcb:  mov    %eax,(%esp)
086b4934 +0xce:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b4939 +0xd3:  add    $0x4,%eax
086b493c +0xd6:  mov    %eax,-0xc(%ebp)
086b493f +0xd9:  movzbl -0x2c(%ebp),%edx
086b4943 +0xdd:  movzwl -0xe(%ebp),%eax
086b4947 +0xe1:  mov    %edx,0xc(%esp)
086b494b +0xe5:  mov    %eax,0x8(%esp)
086b494f +0xe9:  mov    0xc(%ebp),%eax
086b4952 +0xec:  mov    %eax,0x4(%esp)
086b4956 +0xf0:  mov    -0xc(%ebp),%eax
086b4959 +0xf3:  mov    %eax,(%esp)
086b495c +0xf6:  call   086b4070 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb>  ; village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool)
086b4961 +0xfb:  leave
086b4962 +0xfc:  ret
086b4963 +0xfd:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnKillVillageMonster @ 0x86b4866

/* village_attacked::CVillageMonsterMgr::OnKillVillageMonster(CUser*, bool) */

undefined4 __thiscall
village_attacked::CVillageMonsterMgr::OnKillVillageMonster
          (CVillageMonsterMgr *this,CUser *param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zone local_24 [6];
  Zone local_1e [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_1c [4];
  int local_18;
  ushort local_12;
  CVillageMonsterArea *local_10;
  
  local_18 = CUser::GetParty(param_1);
  if (local_18 == 0) {
    uVar2 = 0x15;
  }
  else {
    local_12 = *(ushort *)(local_18 + 0xc4c);
    if (local_12 == 0) {
      uVar2 = 0x15;
    }
    else {
      Zone::Zone(local_1e,(uchar)*(undefined4 *)(local_18 + 0xc50),
                 (uchar)*(undefined4 *)(local_18 + 0xc54));
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::find(local_24);
      std::
      map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
      ::end(local_1c);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_24,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') {
        iVar3 = std::
                _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                              *)local_24);
        local_10 = (CVillageMonsterArea *)(iVar3 + 4);
        uVar2 = CVillageMonsterArea::OnKillVillageMonster(local_10,param_1,local_12,param_2);
      }
      else {
        uVar2 = 0x15;
      }
    }
  }
  return uVar2;
}
```
