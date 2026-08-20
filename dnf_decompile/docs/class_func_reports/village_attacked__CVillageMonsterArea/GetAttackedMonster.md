# GetAttackedMonster

`_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi`

`village_attacked::CVillageMonsterArea::GetAttackedMonster(int)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3aea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3aea  _ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi
#           village_attacked::CVillageMonsterArea::GetAttackedMonster(int)
# range [0x086b3aea, 0x086b3b9b]
086b3aea +0x00:  push   %ebp
086b3aeb +0x01:  mov    %esp,%ebp
086b3aed +0x03:  sub    $0x28,%esp
086b3af0 +0x06:  mov    0x8(%ebp),%eax
086b3af3 +0x09:  add    $0x1c,%eax
086b3af6 +0x0c:  mov    %eax,(%esp)
086b3af9 +0x0f:  call   086b506c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x596>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x596
086b3afe +0x14:  test   %al,%al
086b3b00 +0x16:  je     086b3b0c <+0x22>
086b3b02 +0x18:  mov    $0x0,%eax
086b3b07 +0x1d:  jmp    086b3b9a <+0xb0>
086b3b0c +0x22:  mov    0x8(%ebp),%eax
086b3b0f +0x25:  lea    0x1c(%eax),%edx
086b3b12 +0x28:  lea    -0xc(%ebp),%eax
086b3b15 +0x2b:  mov    %edx,0x4(%esp)
086b3b19 +0x2f:  mov    %eax,(%esp)
086b3b1c +0x32:  call   086b50b0 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x5da>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x5da
086b3b21 +0x37:  sub    $0x4,%esp
086b3b24 +0x3a:  mov    0x8(%ebp),%eax
086b3b27 +0x3d:  lea    0x1c(%eax),%edx
086b3b2a +0x40:  lea    -0x10(%ebp),%eax
086b3b2d +0x43:  mov    %edx,0x4(%esp)
086b3b31 +0x47:  mov    %eax,(%esp)
086b3b34 +0x4a:  call   086b50d4 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x5fe>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x5fe
086b3b39 +0x4f:  sub    $0x4,%esp
086b3b3c +0x52:  jmp    086b3b6e <+0x84>
086b3b3e +0x54:  lea    -0xc(%ebp),%eax
086b3b41 +0x57:  mov    %eax,(%esp)
086b3b44 +0x5a:  call   086b513c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x666>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x666
086b3b49 +0x5f:  mov    0x10(%eax),%eax
086b3b4c +0x62:  cmp    0xc(%ebp),%eax
086b3b4f +0x65:  setge  %al
086b3b52 +0x68:  test   %al,%al
086b3b54 +0x6a:  je     086b3b63 <+0x79>
086b3b56 +0x6c:  lea    -0xc(%ebp),%eax
086b3b59 +0x6f:  mov    %eax,(%esp)
086b3b5c +0x72:  call   086b513c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x666>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x666
086b3b61 +0x77:  jmp    086b3b9a <+0xb0>
086b3b63 +0x79:  lea    -0xc(%ebp),%eax
086b3b66 +0x7c:  mov    %eax,(%esp)
086b3b69 +0x7f:  call   086b5126 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x650>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x650
086b3b6e +0x84:  lea    -0x10(%ebp),%eax
086b3b71 +0x87:  mov    %eax,0x4(%esp)
086b3b75 +0x8b:  lea    -0xc(%ebp),%eax
086b3b78 +0x8e:  mov    %eax,(%esp)
086b3b7b +0x91:  call   086b50fa <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x624>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x624
086b3b80 +0x96:  test   %al,%al
086b3b82 +0x98:  jne    086b3b3e <+0x54>
086b3b84 +0x9a:  lea    -0xc(%ebp),%eax
086b3b87 +0x9d:  mov    %eax,(%esp)
086b3b8a +0xa0:  call   086b5146 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x670>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x670
086b3b8f +0xa5:  lea    -0xc(%ebp),%eax
086b3b92 +0xa8:  mov    %eax,(%esp)
086b3b95 +0xab:  call   086b513c <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x666>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x666
086b3b9a +0xb0:  leave
086b3b9b +0xb1:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::GetAttackedMonster @ 0x86b3aea

/* village_attacked::CVillageMonsterArea::GetAttackedMonster(int) */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::GetAttackedMonster(CVillageMonsterArea *this,int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator local_14 [4];
  __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
  local_10 [12];
  
  cVar1 = std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::empty();
  if (cVar1 == '\0') {
    std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::begin();
    std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_10,local_14), bVar2) {
      iVar4 = __gnu_cxx::
              __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
              ::operator*(local_10);
      if (param_1 <= *(int *)(iVar4 + 0x10)) {
        uVar3 = __gnu_cxx::
                __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
                ::operator*(local_10);
        return uVar3;
      }
      __gnu_cxx::
      __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
      ::operator++(local_10);
    }
    __gnu_cxx::
    __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
    ::operator--(local_10);
    uVar3 = __gnu_cxx::
            __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
            ::operator*(local_10);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
