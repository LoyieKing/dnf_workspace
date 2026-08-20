# OnRunVillageMonster

`_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi`

`village_attacked::CVillageMonster::OnRunVillageMonster(std::vector<MapArea, std::allocator<MapArea> >*, int)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b310c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b310c  _ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi
#           village_attacked::CVillageMonster::OnRunVillageMonster(std::vector<MapArea, std::allocator<MapArea> >*, int)
# range [0x086b310c, 0x086b323f]
086b310c +0x000:  push   %ebp
086b310d +0x001:  mov    %esp,%ebp
086b310f +0x003:  push   %ebx
086b3110 +0x004:  sub    $0x34,%esp
086b3113 +0x007:  mov    0x8(%ebp),%eax
086b3116 +0x00a:  movb   $0x0,0x10(%eax)
086b311a +0x00e:  mov    0x8(%ebp),%eax
086b311d +0x011:  mov    0x14(%eax),%eax
086b3120 +0x014:  test   %eax,%eax
086b3122 +0x016:  jne    086b3235 <+0x129>
086b3128 +0x01c:  mov    0x10(%ebp),%ecx
086b312b +0x01f:  mov    $0x55555556,%edx
086b3130 +0x024:  mov    %ecx,%eax
086b3132 +0x026:  imul   %edx
086b3134 +0x028:  mov    %ecx,%eax
086b3136 +0x02a:  sar    $0x1f,%eax
086b3139 +0x02d:  sub    %eax,%edx
086b313b +0x02f:  mov    %edx,%eax
086b313d +0x031:  add    %eax,%eax
086b313f +0x033:  add    %edx,%eax
086b3141 +0x035:  mov    %ecx,%edx
086b3143 +0x037:  sub    %eax,%edx
086b3145 +0x039:  mov    0x8(%ebp),%eax
086b3148 +0x03c:  mov    0xc(%eax),%eax
086b314b +0x03f:  cmp    %eax,%edx
086b314d +0x041:  jne    086b3238 <+0x12c>
086b3153 +0x047:  mov    0x8(%ebp),%eax
086b3156 +0x04a:  mov    0x4(%eax),%eax
086b3159 +0x04d:  mov    %eax,-0x14(%ebp)
086b315c +0x050:  mov    0x8(%ebp),%eax
086b315f +0x053:  mov    0x8(%eax),%eax
086b3162 +0x056:  mov    %eax,-0x10(%ebp)
086b3165 +0x059:  movl   $0x12c,(%esp)
086b316c +0x060:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b3171 +0x065:  sub    $0x96,%eax
086b3176 +0x06a:  mov    %eax,-0xc(%ebp)
086b3179 +0x06d:  mov    0x8(%ebp),%eax
086b317c +0x070:  mov    0x4(%eax),%eax
086b317f +0x073:  mov    %eax,%edx
086b3181 +0x075:  add    -0xc(%ebp),%edx
086b3184 +0x078:  mov    0x8(%ebp),%eax
086b3187 +0x07b:  mov    %edx,0x4(%eax)
086b318a +0x07e:  movl   $0x12c,(%esp)
086b3191 +0x085:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086b3196 +0x08a:  sub    $0x96,%eax
086b319b +0x08f:  mov    %eax,-0xc(%ebp)
086b319e +0x092:  mov    0x8(%ebp),%eax
086b31a1 +0x095:  mov    0x8(%eax),%eax
086b31a4 +0x098:  mov    %eax,%edx
086b31a6 +0x09a:  add    -0xc(%ebp),%edx
086b31a9 +0x09d:  mov    0x8(%ebp),%eax
086b31ac +0x0a0:  mov    %edx,0x8(%eax)
086b31af +0x0a3:  mov    0x8(%ebp),%eax
086b31b2 +0x0a6:  lea    0x8(%eax),%ebx
086b31b5 +0x0a9:  mov    0x8(%ebp),%eax
086b31b8 +0x0ac:  lea    0x4(%eax),%ecx
086b31bb +0x0af:  mov    0x8(%ebp),%eax
086b31be +0x0b2:  mov    0x8(%eax),%edx
086b31c1 +0x0b5:  mov    0x8(%ebp),%eax
086b31c4 +0x0b8:  mov    0x4(%eax),%eax
086b31c7 +0x0bb:  movl   $0x14,0x14(%esp)
086b31cf +0x0c3:  mov    %ebx,0x10(%esp)
086b31d3 +0x0c7:  mov    %ecx,0xc(%esp)
086b31d7 +0x0cb:  mov    %edx,0x8(%esp)
086b31db +0x0cf:  mov    %eax,0x4(%esp)
086b31df +0x0d3:  mov    0xc(%ebp),%eax
086b31e2 +0x0d6:  mov    %eax,(%esp)
086b31e5 +0x0d9:  call   082e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>  ; pvp_assault::IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int, int&, int&, int)
086b31ea +0x0de:  mov    0x8(%ebp),%eax
086b31ed +0x0e1:  mov    0x4(%eax),%eax
086b31f0 +0x0e4:  sub    -0x14(%ebp),%eax
086b31f3 +0x0e7:  mov    %eax,%ecx
086b31f5 +0x0e9:  sar    $0x1f,%ecx
086b31f8 +0x0ec:  mov    %ecx,%edx
086b31fa +0x0ee:  xor    %eax,%edx
086b31fc +0x0f0:  sub    %ecx,%edx
086b31fe +0x0f2:  mov    0x8(%ebp),%eax
086b3201 +0x0f5:  mov    0x8(%eax),%eax
086b3204 +0x0f8:  sub    -0x10(%ebp),%eax
086b3207 +0x0fb:  mov    %eax,%ecx
086b3209 +0x0fd:  sar    $0x1f,%ecx
086b320c +0x100:  xor    %ecx,%eax
086b320e +0x102:  sub    %ecx,%eax
086b3210 +0x104:  lea    (%edx,%eax,1),%eax
086b3213 +0x107:  cmp    $0x31,%eax
086b3216 +0x10a:  jg     086b322c <+0x120>
086b3218 +0x10c:  mov    0x8(%ebp),%eax
086b321b +0x10f:  mov    -0x14(%ebp),%edx
086b321e +0x112:  mov    %edx,0x4(%eax)
086b3221 +0x115:  mov    0x8(%ebp),%eax
086b3224 +0x118:  mov    -0x10(%ebp),%edx
086b3227 +0x11b:  mov    %edx,0x8(%eax)
086b322a +0x11e:  jmp    086b3239 <+0x12d>
086b322c +0x120:  mov    0x8(%ebp),%eax
086b322f +0x123:  movb   $0x1,0x10(%eax)
086b3233 +0x127:  jmp    086b3239 <+0x12d>
086b3235 +0x129:  nop
086b3236 +0x12a:  jmp    086b3239 <+0x12d>
086b3238 +0x12c:  nop
086b3239 +0x12d:  add    $0x34,%esp
086b323c +0x130:  pop    %ebx
086b323d +0x131:  pop    %ebp
086b323e +0x132:  ret
086b323f +0x133:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::OnRunVillageMonster @ 0x86b310c

/* village_attacked::CVillageMonster::OnRunVillageMonster(std::vector<MapArea,
   std::allocator<MapArea> >*, int) */

void __thiscall
village_attacked::CVillageMonster::OnRunVillageMonster
          (CVillageMonster *this,vector *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  this[0x10] = (CVillageMonster)0x0;
  if ((*(int *)(this + 0x14) == 0) && (param_2 % 3 == *(int *)(this + 0xc))) {
    iVar1 = *(int *)(this + 4);
    iVar2 = *(int *)(this + 8);
    iVar3 = get_rand_int(300);
    *(int *)(this + 4) = *(int *)(this + 4) + iVar3 + -0x96;
    iVar3 = get_rand_int(300);
    *(int *)(this + 8) = *(int *)(this + 8) + iVar3 + -0x96;
    pvp_assault::IsIncludeVirtualMoveAreas
              (param_1,*(int *)(this + 4),*(int *)(this + 8),(int *)(this + 4),(int *)(this + 8),
               0x14);
    uVar4 = *(int *)(this + 4) - iVar1;
    uVar6 = (int)uVar4 >> 0x1f;
    uVar5 = *(int *)(this + 8) - iVar2;
    uVar7 = (int)uVar5 >> 0x1f;
    if ((int)(((uVar6 ^ uVar4) - uVar6) + ((uVar5 ^ uVar7) - uVar7)) < 0x32) {
      *(int *)(this + 4) = iVar1;
      *(int *)(this + 8) = iVar2;
    }
    else {
      this[0x10] = (CVillageMonster)0x1;
    }
  }
  return;
}
```
