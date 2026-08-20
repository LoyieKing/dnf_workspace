# OnDestroyVillageMonster

`_ZN16village_attacked19CVillageMonsterArea23OnDestroyVillageMonsterEv`

`village_attacked::CVillageMonsterArea::OnDestroyVillageMonster()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3ee0  _ZN16village_attacked19CVillageMonsterArea23OnDestroyVillageMonsterEv
#           village_attacked::CVillageMonsterArea::OnDestroyVillageMonster()
# range [0x086b3ee0, 0x086b3f05]
086b3ee0 +0x00:  push   %ebp
086b3ee1 +0x01:  mov    %esp,%ebp
086b3ee3 +0x03:  sub    $0x18,%esp
086b3ee6 +0x06:  mov    0x8(%ebp),%eax
086b3ee9 +0x09:  mov    %eax,(%esp)
086b3eec +0x0c:  call   086b5252 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x77c>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x77c
086b3ef1 +0x11:  movl   $0x0,0x4(%esp)
086b3ef9 +0x19:  mov    0x8(%ebp),%eax
086b3efc +0x1c:  mov    %eax,(%esp)
086b3eff +0x1f:  call   086b37fa <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser>  ; village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*)
086b3f04 +0x24:  leave
086b3f05 +0x25:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::OnDestroyVillageMonster @ 0x86b3ee0

/* village_attacked::CVillageMonsterArea::OnDestroyVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterArea::OnDestroyVillageMonster(CVillageMonsterArea *this)

{
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::clear((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
           *)this);
  SendVillageMonsterList(this,(CUser *)0x0);
  return;
}
```
