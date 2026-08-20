# CVillageMonster

`_ZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEii`

`village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b3004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3004  _ZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEii
#           village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)
# range [0x086b3004, 0x086b3097]
086b3004 +0x00:  push   %ebp
086b3005 +0x01:  mov    %esp,%ebp
086b3007 +0x03:  sub    $0x4,%esp
086b300a +0x06:  mov    0xc(%ebp),%eax
086b300d +0x09:  mov    %ax,-0x4(%ebp)
086b3011 +0x0d:  mov    0x8(%ebp),%eax
086b3014 +0x10:  mov    0x1c(%ebp),%edx
086b3017 +0x13:  mov    %edx,0x1c(%eax)
086b301a +0x16:  mov    &_ZZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEiiE8uid_seed,%eax
086b301f +0x1b:  mov    %eax,%ecx
086b3021 +0x1d:  mov    0x8(%ebp),%edx
086b3024 +0x20:  mov    %cx,(%edx)
086b3027 +0x23:  add    $0x1,%eax
086b302a +0x26:  mov    %eax,&_ZZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEiiE8uid_seed
086b302f +0x2b:  mov    &_ZZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEiiE8uid_seed,%eax
086b3034 +0x30:  test   %eax,%eax
086b3036 +0x32:  jne    086b3042 <+0x3e>
086b3038 +0x34:  movl   $0x1,&_ZZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEiiE8uid_seed
086b3042 +0x3e:  mov    0x8(%ebp),%eax
086b3045 +0x41:  movzwl -0x4(%ebp),%edx
086b3049 +0x45:  mov    %dx,0x2(%eax)
086b304d +0x49:  mov    0x8(%ebp),%eax
086b3050 +0x4c:  mov    0x10(%ebp),%edx
086b3053 +0x4f:  mov    %edx,0x4(%eax)
086b3056 +0x52:  mov    0x8(%ebp),%eax
086b3059 +0x55:  mov    0x14(%ebp),%edx
086b305c +0x58:  mov    %edx,0x8(%eax)
086b305f +0x5b:  mov    0x8(%ebp),%eax
086b3062 +0x5e:  movb   $0x0,0x10(%eax)
086b3066 +0x62:  mov    0x8(%ebp),%eax
086b3069 +0x65:  mov    0x18(%ebp),%edx
086b306c +0x68:  mov    %edx,0xc(%eax)
086b306f +0x6b:  mov    0x8(%ebp),%eax
086b3072 +0x6e:  movl   $0xffffffff,0x18(%eax)
086b3079 +0x75:  mov    0x8(%ebp),%eax
086b307c +0x78:  movl   $0x0,0x14(%eax)
086b3083 +0x7f:  mov    0x8(%ebp),%eax
086b3086 +0x82:  mov    0x20(%ebp),%edx
086b3089 +0x85:  mov    %edx,0x20(%eax)
086b308c +0x88:  mov    0x8(%ebp),%eax
086b308f +0x8b:  mov    0x24(%ebp),%edx
086b3092 +0x8e:  mov    %edx,0x24(%eax)
086b3095 +0x91:  leave
086b3096 +0x92:  ret
086b3097 +0x93:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::CVillageMonster @ 0x86b3004

/* village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int,
   village_attacked::CVillageMonsterArea*, int, int) */

void __thiscall
village_attacked::CVillageMonster::CVillageMonster
          (CVillageMonster *this,ushort param_1,int param_2,int param_3,int param_4,
          CVillageMonsterArea *param_5,int param_6,int param_7)

{
  *(CVillageMonsterArea **)(this + 0x1c) = param_5;
  *(short *)this =
       (short)CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)
              ::uid_seed;
  CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
  uid_seed = CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)
             ::uid_seed + 1;
  if (CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
      uid_seed == 0) {
    CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
    uid_seed = 1;
  }
  *(ushort *)(this + 2) = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0x10] = (CVillageMonster)0x0;
  *(int *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x20) = param_6;
  *(int *)(this + 0x24) = param_7;
  return;
}
```
