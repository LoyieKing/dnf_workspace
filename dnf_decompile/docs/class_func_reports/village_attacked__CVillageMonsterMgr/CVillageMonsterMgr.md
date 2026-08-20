# CVillageMonsterMgr

`_ZN16village_attacked18CVillageMonsterMgrC1Ev`

`village_attacked::CVillageMonsterMgr::CVillageMonsterMgr()`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterMgr` | `0x086b4a4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b4a4c  _ZN16village_attacked18CVillageMonsterMgrC1Ev
#           village_attacked::CVillageMonsterMgr::CVillageMonsterMgr()
# range [0x086b4a4c, 0x086b4a7f]
086b4a4c +0x00:  push   %ebp
086b4a4d +0x01:  mov    %esp,%ebp
086b4a4f +0x03:  sub    $0x18,%esp
086b4a52 +0x06:  mov    0x8(%ebp),%eax
086b4a55 +0x09:  add    $0x8,%eax
086b4a58 +0x0c:  mov    %eax,(%esp)
086b4a5b +0x0f:  call   086b54c6 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9f0>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9f0
086b4a60 +0x14:  mov    0x8(%ebp),%eax
086b4a63 +0x17:  movl   $0x0,0x4(%eax)
086b4a6a +0x1e:  mov    0x8(%ebp),%eax
086b4a6d +0x21:  movl   $0x0,(%eax)
086b4a73 +0x27:  mov    0x8(%ebp),%eax
086b4a76 +0x2a:  movl   $0x0,0x20(%eax)
086b4a7d +0x31:  leave
086b4a7e +0x32:  ret
086b4a7f +0x33:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterMgr::CVillageMonsterMgr @ 0x86b4a4c

/* village_attacked::CVillageMonsterMgr::CVillageMonsterMgr() */

void __thiscall village_attacked::CVillageMonsterMgr::CVillageMonsterMgr(CVillageMonsterMgr *this)

{
  std::
  map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
  ::map((map<village_attacked::Zone,village_attacked::CVillageMonsterArea,std::less<village_attacked::Zone>,std::allocator<std::pair<village_attacked::Zone_const,village_attacked::CVillageMonsterArea>>>
         *)(this + 8));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```
