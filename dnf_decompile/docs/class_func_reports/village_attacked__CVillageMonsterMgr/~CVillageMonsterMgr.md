# ~CVillageMonsterMgr

`_ZN16village_attacked18CVillageMonsterMgrD1Ev`

`village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4a80  _ZN16village_attacked18CVillageMonsterMgrD1Ev
#           village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr()
# range [0x086b4a80, 0x086b4a95]
086b4a80 +0x00:  push   %ebp
086b4a81 +0x01:  mov    %esp,%ebp
086b4a83 +0x03:  sub    $0x18,%esp
086b4a86 +0x06:  mov    0x8(%ebp),%eax
086b4a89 +0x09:  add    $0x8,%eax
086b4a8c +0x0c:  mov    %eax,(%esp)
086b4a8f +0x0f:  call   086b4cb6 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1e0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1e0
086b4a94 +0x14:  leave
086b4a95 +0x15:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr @ 0x86b4a80

/* village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr() */

void __thiscall village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr(CVillageMonsterMgr *this)

{
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::~map((map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
          *)(this + 8));
  return;
}
```
