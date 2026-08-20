# getAddChampionMobCnt

`_ZN13CBattle_Field20getAddChampionMobCntEv`

`CBattle_Field::getAddChampionMobCnt()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083010ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083010ee  _ZN13CBattle_Field20getAddChampionMobCntEv
#           CBattle_Field::getAddChampionMobCnt()
# range [0x083010ee, 0x083012a3]
083010ee +0x000:  push   %ebp
083010ef +0x001:  mov    %esp,%ebp
083010f1 +0x003:  push   %ebx
083010f2 +0x004:  sub    $0x44,%esp
083010f5 +0x007:  mov    0x8(%ebp),%eax
083010f8 +0x00a:  mov    0x108(%eax),%eax
083010fe +0x010:  test   %eax,%eax
08301100 +0x012:  jne    0830110c <+0x1e>
08301102 +0x014:  mov    $0xffffffff,%eax
08301107 +0x019:  jmp    0830129d <+0x1af>
0830110c +0x01e:  mov    0x8(%ebp),%eax
0830110f +0x021:  mov    0x108(%eax),%eax
08301115 +0x027:  mov    0x80(%eax),%eax
0830111b +0x02d:  mov    %eax,-0x10(%ebp)
0830111e +0x030:  mov    0x8(%ebp),%eax
08301121 +0x033:  mov    0x18c(%eax),%eax
08301127 +0x039:  test   %eax,%eax
08301129 +0x03b:  jne    0830118b <+0x9d>
0830112b +0x03d:  mov    0x8(%ebp),%eax
0830112e +0x040:  mov    0x190(%eax),%eax
08301134 +0x046:  test   %eax,%eax
08301136 +0x048:  jne    0830118b <+0x9d>
08301138 +0x04a:  mov    0x8(%ebp),%eax
0830113b +0x04d:  mov    0x190(%eax),%ecx
08301141 +0x053:  mov    0x8(%ebp),%eax
08301144 +0x056:  mov    0x18c(%eax),%edx
0830114a +0x05c:  mov    0x8(%ebp),%eax
0830114d +0x05f:  mov    0x194(%eax),%eax
08301153 +0x065:  mov    %ecx,0x1c(%esp)
08301157 +0x069:  mov    %edx,0x18(%esp)
0830115b +0x06d:  mov    %eax,0x14(%esp)
0830115f +0x071:  movl   $"[FPE] [CBattle_Field::ConsistMap] Dungeon[%d] Width[%d] Height[%d]",0x10(%esp)
08301167 +0x079:  movl   $0x4ed,0xc(%esp)
0830116f +0x081:  movl   $&_ZZN13CBattle_Field20getAddChampionMobCntEvE19__PRETTY_FUNCTION__,0x8(%esp)
08301177 +0x089:  movl   $"battle_field.cpp",0x4(%esp)
0830117f +0x091:  movl   $0x1,(%esp)
08301186 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830118b +0x09d:  mov    0x8(%ebp),%eax
0830118e +0x0a0:  mov    0x70(%eax),%eax
08301191 +0x0a3:  mov    %eax,-0xc(%ebp)
08301194 +0x0a6:  mov    0x8(%ebp),%eax
08301197 +0x0a9:  mov    %eax,(%esp)
0830119a +0x0ac:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0830119f +0x0b1:  cmp    $0x4,%eax
083011a2 +0x0b4:  ja     08301240 <+0x152>
083011a8 +0x0ba:  mov    &data#bb97c942(.rodata)(,%eax,4),%eax
083011af +0x0c1:  jmp    *%eax
083011b1 +0x0c3:  mov    0x8(%ebp),%eax
083011b4 +0x0c6:  mov    0x70(%eax),%eax
083011b7 +0x0c9:  mov    %eax,-0xc(%ebp)
083011ba +0x0cc:  jmp    08301240 <+0x152>
083011bf +0x0d1:  mov    0x8(%ebp),%eax
083011c2 +0x0d4:  mov    0x70(%eax),%eax
083011c5 +0x0d7:  imul   $0x96,%eax,%ecx
083011cb +0x0dd:  mov    $0x51eb851f,%edx
083011d0 +0x0e2:  mov    %ecx,%eax
083011d2 +0x0e4:  imul   %edx
083011d4 +0x0e6:  sar    $0x5,%edx
083011d7 +0x0e9:  mov    %ecx,%eax
083011d9 +0x0eb:  sar    $0x1f,%eax
083011dc +0x0ee:  mov    %edx,%ecx
083011de +0x0f0:  sub    %eax,%ecx
083011e0 +0x0f2:  mov    %ecx,%eax
083011e2 +0x0f4:  mov    %eax,-0xc(%ebp)
083011e5 +0x0f7:  jmp    08301240 <+0x152>
083011e7 +0x0f9:  mov    0x8(%ebp),%eax
083011ea +0x0fc:  mov    0x70(%eax),%eax
083011ed +0x0ff:  imul   $0xfa,%eax,%ecx
083011f3 +0x105:  mov    $0x51eb851f,%edx
083011f8 +0x10a:  mov    %ecx,%eax
083011fa +0x10c:  imul   %edx
083011fc +0x10e:  sar    $0x5,%edx
083011ff +0x111:  mov    %ecx,%eax
08301201 +0x113:  sar    $0x1f,%eax
08301204 +0x116:  mov    %edx,%ecx
08301206 +0x118:  sub    %eax,%ecx
08301208 +0x11a:  mov    %ecx,%eax
0830120a +0x11c:  mov    %eax,-0xc(%ebp)
0830120d +0x11f:  jmp    08301240 <+0x152>
0830120f +0x121:  mov    0x8(%ebp),%eax
08301212 +0x124:  mov    0x70(%eax),%eax
08301215 +0x127:  imul   $0x1f4,%eax,%ecx
0830121b +0x12d:  mov    $0x51eb851f,%edx
08301220 +0x132:  mov    %ecx,%eax
08301222 +0x134:  imul   %edx
08301224 +0x136:  sar    $0x5,%edx
08301227 +0x139:  mov    %ecx,%eax
08301229 +0x13b:  sar    $0x1f,%eax
0830122c +0x13e:  mov    %edx,%ecx
0830122e +0x140:  sub    %eax,%ecx
08301230 +0x142:  mov    %ecx,%eax
08301232 +0x144:  mov    %eax,-0xc(%ebp)
08301235 +0x147:  jmp    08301240 <+0x152>
08301237 +0x149:  mov    0x8(%ebp),%eax
0830123a +0x14c:  mov    0x70(%eax),%eax
0830123d +0x14f:  mov    %eax,-0xc(%ebp)
08301240 +0x152:  mov    0x8(%ebp),%eax
08301243 +0x155:  mov    0x108(%eax),%eax
08301249 +0x15b:  movzbl 0x12c(%eax),%eax
08301250 +0x162:  xor    $0x1,%eax
08301253 +0x165:  test   %al,%al
08301255 +0x167:  je     0830129a <+0x1ac>
08301257 +0x169:  mov    -0xc(%ebp),%eax
0830125a +0x16c:  imul   $0x64,%eax,%eax
0830125d +0x16f:  mov    0x8(%ebp),%edx
08301260 +0x172:  mov    0x18c(%edx),%ecx
08301266 +0x178:  mov    0x8(%ebp),%edx
08301269 +0x17b:  mov    0x190(%edx),%edx
0830126f +0x181:  mov    %edx,%ebx
08301271 +0x183:  imul   %ecx,%ebx
08301274 +0x186:  mov    %ebx,-0x1c(%ebp)
08301277 +0x189:  mov    %eax,%edx
08301279 +0x18b:  sar    $0x1f,%edx
0830127c +0x18e:  idivl  -0x1c(%ebp)
0830127f +0x191:  mov    %eax,%ebx
08301281 +0x193:  movl   $0x64,(%esp)
08301288 +0x19a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0830128d +0x19f:  cmp    %eax,%ebx
0830128f +0x1a1:  setg   %al
08301292 +0x1a4:  test   %al,%al
08301294 +0x1a6:  je     0830129a <+0x1ac>
08301296 +0x1a8:  addl   $0x1,-0x10(%ebp)
0830129a +0x1ac:  mov    -0x10(%ebp),%eax
0830129d +0x1af:  add    $0x44,%esp
083012a0 +0x1b2:  pop    %ebx
083012a1 +0x1b3:  pop    %ebp
083012a2 +0x1b4:  ret
083012a3 +0x1b5:  nop
```

## 反编译 C

```c
// CBattle_Field::getAddChampionMobCnt @ 0x83010ee

/* CBattle_Field::getAddChampionMobCnt() */

int __thiscall CBattle_Field::getAddChampionMobCnt(CBattle_Field *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_10;
  
  if (*(int *)(this + 0x108) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(*(int *)(this + 0x108) + 0x80);
    if ((*(int *)(this + 0x18c) == 0) && (*(int *)(this + 400) == 0)) {
      LogManager::logFormat
                (1,"battle_field.cpp","int CBattle_Field::getAddChampionMobCnt()",0x4ed,
                 "[FPE] [CBattle_Field::ConsistMap] Dungeon[%d] Width[%d] Height[%d]",
                 *(undefined4 *)(this + 0x194),*(undefined4 *)(this + 0x18c),
                 *(undefined4 *)(this + 400));
    }
    local_10 = *(int *)(this + 0x70);
    uVar4 = get_dungeon_diff(this);
    switch(uVar4) {
    case 0:
      local_10 = *(int *)(this + 0x70);
      break;
    case 1:
      local_10 = (*(int *)(this + 0x70) * 0x96) / 100;
      break;
    case 2:
      local_10 = (*(int *)(this + 0x70) * 0xfa) / 100;
      break;
    case 3:
      local_10 = (*(int *)(this + 0x70) * 500) / 100;
      break;
    case 4:
      local_10 = *(int *)(this + 0x70);
    }
    if ((*(char *)(*(int *)(this + 0x108) + 300) != '\x01') &&
       (iVar1 = *(int *)(this + 0x18c), iVar2 = *(int *)(this + 400), iVar5 = get_rand_int(100),
       iVar5 < (local_10 * 100) / (iVar2 * iVar1))) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}
```
