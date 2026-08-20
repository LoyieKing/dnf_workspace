# OnKillVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEiitb`

`village_attacked::CVillageMonsterMgr::OnKillVillageMonster(int, int, unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4964  _ZN16village_attacked18CVillageMonsterMgr20OnKillVillageMonsterEiitb
#           village_attacked::CVillageMonsterMgr::OnKillVillageMonster(int, int, unsigned short, bool)
# range [0x086b4964, 0x086b4a1f]
086b4964 +0x00:  push   %ebp
086b4965 +0x01:  mov    %esp,%ebp
086b4967 +0x03:  sub    $0x38,%esp
086b496a +0x06:  mov    0x14(%ebp),%edx
086b496d +0x09:  mov    0x18(%ebp),%eax
086b4970 +0x0c:  mov    %dx,-0x1c(%ebp)
086b4974 +0x10:  mov    %al,-0x20(%ebp)
086b4977 +0x13:  mov    0x10(%ebp),%eax
086b497a +0x16:  movzbl %al,%edx
086b497d +0x19:  mov    0xc(%ebp),%eax
086b4980 +0x1c:  movzbl %al,%eax
086b4983 +0x1f:  mov    %edx,0x8(%esp)
086b4987 +0x23:  mov    %eax,0x4(%esp)
086b498b +0x27:  lea    -0x12(%ebp),%eax
086b498e +0x2a:  mov    %eax,(%esp)
086b4991 +0x2d:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b4996 +0x32:  mov    0x8(%ebp),%eax
086b4999 +0x35:  lea    0x8(%eax),%ecx
086b499c +0x38:  lea    -0x18(%ebp),%eax
086b499f +0x3b:  lea    -0x12(%ebp),%edx
086b49a2 +0x3e:  mov    %edx,0x8(%esp)
086b49a6 +0x42:  mov    %ecx,0x4(%esp)
086b49aa +0x46:  mov    %eax,(%esp)
086b49ad +0x49:  call   086b5486 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9b0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9b0
086b49b2 +0x4e:  sub    $0x4,%esp
086b49b5 +0x51:  mov    0x8(%ebp),%eax
086b49b8 +0x54:  lea    0x8(%eax),%edx
086b49bb +0x57:  lea    -0x10(%ebp),%eax
086b49be +0x5a:  mov    %edx,0x4(%esp)
086b49c2 +0x5e:  mov    %eax,(%esp)
086b49c5 +0x61:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b49ca +0x66:  sub    $0x4,%esp
086b49cd +0x69:  lea    -0x10(%ebp),%eax
086b49d0 +0x6c:  mov    %eax,0x4(%esp)
086b49d4 +0x70:  lea    -0x18(%ebp),%eax
086b49d7 +0x73:  mov    %eax,(%esp)
086b49da +0x76:  call   086b54b2 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9dc>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9dc
086b49df +0x7b:  test   %al,%al
086b49e1 +0x7d:  je     086b49ea <+0x86>
086b49e3 +0x7f:  mov    $0x15,%eax
086b49e8 +0x84:  jmp    086b4a1e <+0xba>
086b49ea +0x86:  lea    -0x18(%ebp),%eax
086b49ed +0x89:  mov    %eax,(%esp)
086b49f0 +0x8c:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b49f5 +0x91:  add    $0x4,%eax
086b49f8 +0x94:  mov    %eax,-0xc(%ebp)
086b49fb +0x97:  movzbl -0x20(%ebp),%edx
086b49ff +0x9b:  movzwl -0x1c(%ebp),%eax
086b4a03 +0x9f:  mov    %edx,0xc(%esp)
086b4a07 +0xa3:  mov    %eax,0x8(%esp)
086b4a0b +0xa7:  movl   $0x0,0x4(%esp)
086b4a13 +0xaf:  mov    -0xc(%ebp),%eax
086b4a16 +0xb2:  mov    %eax,(%esp)
086b4a19 +0xb5:  call   086b4070 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb>  ; village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool)
086b4a1e +0xba:  leave
086b4a1f +0xbb:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnKillVillageMonster @ 0x86b4964

/* village_attacked::CVillageMonsterMgr::OnKillVillageMonster(int, int, unsigned short, bool) */

undefined4 __thiscall
village_attacked::CVillageMonsterMgr::OnKillVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2,ushort param_3,bool param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Zone local_1c [6];
  Zone local_16 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_14 [4];
  CVillageMonsterArea *local_10;
  
  Zone::Zone(local_16,(uchar)param_1,(uchar)param_2);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::find(local_1c);
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
          ::operator==((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                        *)local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_1c);
    local_10 = (CVillageMonsterArea *)(iVar3 + 4);
    uVar2 = CVillageMonsterArea::OnKillVillageMonster(local_10,(CUser *)0x0,param_3,param_4);
  }
  else {
    uVar2 = 0x15;
  }
  return uVar2;
}
```
