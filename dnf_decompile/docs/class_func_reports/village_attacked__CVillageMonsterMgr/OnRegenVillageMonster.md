# OnRegenVillageMonster

`_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii`

`village_attacked::CVillageMonsterMgr::OnRegenVillageMonster(int, int)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4338` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4338  _ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii
#           village_attacked::CVillageMonsterMgr::OnRegenVillageMonster(int, int)
# range [0x086b4338, 0x086b43d3]
086b4338 +0x00:  push   %ebp
086b4339 +0x01:  mov    %esp,%ebp
086b433b +0x03:  sub    $0x28,%esp
086b433e +0x06:  mov    0x8(%ebp),%eax
086b4341 +0x09:  mov    0x4(%eax),%eax
086b4344 +0x0c:  test   %eax,%eax
086b4346 +0x0e:  je     086b43d0 <+0x98>
086b434c +0x14:  mov    0x10(%ebp),%eax
086b434f +0x17:  movzbl %al,%edx
086b4352 +0x1a:  mov    0xc(%ebp),%eax
086b4355 +0x1d:  movzbl %al,%eax
086b4358 +0x20:  mov    %edx,0x8(%esp)
086b435c +0x24:  mov    %eax,0x4(%esp)
086b4360 +0x28:  lea    -0xe(%ebp),%eax
086b4363 +0x2b:  mov    %eax,(%esp)
086b4366 +0x2e:  call   086b4b3c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x66>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x66
086b436b +0x33:  mov    0x8(%ebp),%eax
086b436e +0x36:  lea    0x8(%eax),%ecx
086b4371 +0x39:  lea    -0x14(%ebp),%eax
086b4374 +0x3c:  lea    -0xe(%ebp),%edx
086b4377 +0x3f:  mov    %edx,0x8(%esp)
086b437b +0x43:  mov    %ecx,0x4(%esp)
086b437f +0x47:  mov    %eax,(%esp)
086b4382 +0x4a:  call   086b5486 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9b0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9b0
086b4387 +0x4f:  sub    $0x4,%esp
086b438a +0x52:  mov    0x8(%ebp),%eax
086b438d +0x55:  lea    0x8(%eax),%edx
086b4390 +0x58:  lea    -0xc(%ebp),%eax
086b4393 +0x5b:  mov    %edx,0x4(%esp)
086b4397 +0x5f:  mov    %eax,(%esp)
086b439a +0x62:  call   086b5420 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x94a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x94a
086b439f +0x67:  sub    $0x4,%esp
086b43a2 +0x6a:  lea    -0xc(%ebp),%eax
086b43a5 +0x6d:  mov    %eax,0x4(%esp)
086b43a9 +0x71:  lea    -0x14(%ebp),%eax
086b43ac +0x74:  mov    %eax,(%esp)
086b43af +0x77:  call   086b5446 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x970>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x970
086b43b4 +0x7c:  test   %al,%al
086b43b6 +0x7e:  je     086b43d1 <+0x99>
086b43b8 +0x80:  lea    -0x14(%ebp),%eax
086b43bb +0x83:  mov    %eax,(%esp)
086b43be +0x86:  call   086b5478 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a2>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a2
086b43c3 +0x8b:  add    $0x4,%eax
086b43c6 +0x8e:  mov    %eax,(%esp)
086b43c9 +0x91:  call   086b3bd4 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv>  ; village_attacked::CVillageMonsterArea::OnCreateVillageMonster()
086b43ce +0x96:  jmp    086b43d1 <+0x99>
086b43d0 +0x98:  nop
086b43d1 +0x99:  leave
086b43d2 +0x9a:  ret
086b43d3 +0x9b:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::OnRegenVillageMonster @ 0x86b4338

/* village_attacked::CVillageMonsterMgr::OnRegenVillageMonster(int, int) */

void __thiscall
village_attacked::CVillageMonsterMgr::OnRegenVillageMonster
          (CVillageMonsterMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  Zone local_18 [6];
  Zone local_12 [2];
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  local_10 [12];
  
  if (*(int *)(this + 4) != 0) {
    Zone::Zone(local_12,(uchar)param_1,(uchar)param_2);
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::find(local_18);
    std::
    map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
            ::operator!=((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                          *)local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
              ::operator->((_Rb_tree_iterator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>
                            *)local_18);
      CVillageMonsterArea::OnCreateVillageMonster((CVillageMonsterArea *)(iVar2 + 4));
    }
  }
  return;
}
```
