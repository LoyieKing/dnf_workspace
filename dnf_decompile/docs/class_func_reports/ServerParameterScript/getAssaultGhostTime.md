# getAssaultGhostTime

`_ZN21ServerParameterScript19getAssaultGhostTimeEii`

`ServerParameterScript::getAssaultGhostTime(int, int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c804  _ZN21ServerParameterScript19getAssaultGhostTimeEii
#           ServerParameterScript::getAssaultGhostTime(int, int)
# range [0x08a8c804, 0x08a8cb48]
08a8c804 +0x000:  push   %ebp
08a8c805 +0x001:  mov    %esp,%ebp
08a8c807 +0x003:  push   %esi
08a8c808 +0x004:  push   %ebx
08a8c809 +0x005:  add    $0xffffff80,%esp
08a8c80c +0x008:  mov    0x8(%ebp),%eax
08a8c80f +0x00b:  add    $0x4f0,%eax
08a8c814 +0x010:  mov    %eax,(%esp)
08a8c817 +0x013:  call   08a8dbde <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1055>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1055
08a8c81c +0x018:  test   %al,%al
08a8c81e +0x01a:  je     08a8c82a <+0x26>
08a8c820 +0x01c:  mov    $0xb4,%eax
08a8c825 +0x021:  jmp    08a8cb3f <+0x33b>
08a8c82a +0x026:  mov    0x8(%ebp),%eax
08a8c82d +0x029:  lea    0x4f0(%eax),%edx
08a8c833 +0x02f:  lea    -0x24(%ebp),%eax
08a8c836 +0x032:  mov    %edx,0x4(%esp)
08a8c83a +0x036:  mov    %eax,(%esp)
08a8c83d +0x039:  call   08a8dc22 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1099>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1099
08a8c842 +0x03e:  sub    $0x4,%esp
08a8c845 +0x041:  lea    -0x34(%ebp),%eax
08a8c848 +0x044:  mov    %eax,(%esp)
08a8c84b +0x047:  call   08a8cd56 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1cd>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1cd
08a8c850 +0x04c:  jmp    08a8c8c8 <+0xc4>
08a8c852 +0x04e:  lea    -0x24(%ebp),%eax
08a8c855 +0x051:  mov    %eax,(%esp)
08a8c858 +0x054:  call   08a8dc98 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x110f>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x110f
08a8c85d +0x059:  mov    (%eax),%eax
08a8c85f +0x05b:  cmp    0xc(%ebp),%eax
08a8c862 +0x05e:  jg     08a8c87e <+0x7a>
08a8c864 +0x060:  lea    -0x24(%ebp),%eax
08a8c867 +0x063:  mov    %eax,(%esp)
08a8c86a +0x066:  call   08a8dc98 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x110f>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x110f
08a8c86f +0x06b:  mov    0x4(%eax),%eax
08a8c872 +0x06e:  cmp    0xc(%ebp),%eax
08a8c875 +0x071:  jl     08a8c87e <+0x7a>
08a8c877 +0x073:  mov    $0x1,%eax
08a8c87c +0x078:  jmp    08a8c883 <+0x7f>
08a8c87e +0x07a:  mov    $0x0,%eax
08a8c883 +0x07f:  test   %al,%al
08a8c885 +0x081:  je     08a8c8ab <+0xa7>
08a8c887 +0x083:  lea    -0x24(%ebp),%eax
08a8c88a +0x086:  mov    %eax,(%esp)
08a8c88d +0x089:  call   08a8dca2 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1119>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1119
08a8c892 +0x08e:  mov    (%eax),%edx
08a8c894 +0x090:  mov    %edx,-0x34(%ebp)
08a8c897 +0x093:  mov    0x4(%eax),%edx
08a8c89a +0x096:  mov    %edx,-0x30(%ebp)
08a8c89d +0x099:  mov    0x8(%eax),%edx
08a8c8a0 +0x09c:  mov    %edx,-0x2c(%ebp)
08a8c8a3 +0x09f:  mov    0xc(%eax),%eax
08a8c8a6 +0x0a2:  mov    %eax,-0x28(%ebp)
08a8c8a9 +0x0a5:  jmp    08a8c8fd <+0xf9>
08a8c8ab +0x0a7:  lea    -0x1c(%ebp),%eax
08a8c8ae +0x0aa:  movl   $0x0,0x8(%esp)
08a8c8b6 +0x0b2:  lea    -0x24(%ebp),%edx
08a8c8b9 +0x0b5:  mov    %edx,0x4(%esp)
08a8c8bd +0x0b9:  mov    %eax,(%esp)
08a8c8c0 +0x0bc:  call   08a8dcac <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1123>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1123
08a8c8c5 +0x0c1:  sub    $0x4,%esp
08a8c8c8 +0x0c4:  mov    0x8(%ebp),%eax
08a8c8cb +0x0c7:  lea    0x4f0(%eax),%edx
08a8c8d1 +0x0cd:  lea    -0x20(%ebp),%eax
08a8c8d4 +0x0d0:  mov    %edx,0x4(%esp)
08a8c8d8 +0x0d4:  mov    %eax,(%esp)
08a8c8db +0x0d7:  call   08a8dc46 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x10bd>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x10bd
08a8c8e0 +0x0dc:  sub    $0x4,%esp
08a8c8e3 +0x0df:  lea    -0x20(%ebp),%eax
08a8c8e6 +0x0e2:  mov    %eax,0x4(%esp)
08a8c8ea +0x0e6:  lea    -0x24(%ebp),%eax
08a8c8ed +0x0e9:  mov    %eax,(%esp)
08a8c8f0 +0x0ec:  call   08a8dc6c <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x10e3>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x10e3
08a8c8f5 +0x0f1:  test   %al,%al
08a8c8f7 +0x0f3:  jne    08a8c852 <+0x4e>
08a8c8fd +0x0f9:  movl   $0x0,-0x10(%ebp)
08a8c904 +0x100:  mov    -0x2c(%ebp),%ecx
08a8c907 +0x103:  mov    -0x28(%ebp),%edx
08a8c90a +0x106:  mov    -0x2c(%ebp),%eax
08a8c90d +0x109:  mov    %edx,%ebx
08a8c90f +0x10b:  sub    %eax,%ebx
08a8c911 +0x10d:  mov    %ebx,%eax
08a8c913 +0x10f:  mov    -0x30(%ebp),%ebx
08a8c916 +0x112:  mov    -0x34(%ebp),%edx
08a8c919 +0x115:  mov    %ebx,%esi
08a8c91b +0x117:  sub    %edx,%esi
08a8c91d +0x119:  mov    %esi,%edx
08a8c91f +0x11b:  mov    %edx,-0x6c(%ebp)
08a8c922 +0x11e:  mov    $0x0,%edx
08a8c927 +0x123:  divl   -0x6c(%ebp)
08a8c92a +0x126:  mov    %eax,%edx
08a8c92c +0x128:  mov    -0x34(%ebp),%eax
08a8c92f +0x12b:  mov    0xc(%ebp),%ebx
08a8c932 +0x12e:  mov    %ebx,%esi
08a8c934 +0x130:  sub    %eax,%esi
08a8c936 +0x132:  mov    %esi,%eax
08a8c938 +0x134:  imul   %edx,%eax
08a8c93b +0x137:  lea    (%ecx,%eax,1),%eax
08a8c93e +0x13a:  mov    %eax,-0x10(%ebp)
08a8c941 +0x13d:  mov    -0x2c(%ebp),%eax
08a8c944 +0x140:  cmp    -0x10(%ebp),%eax
08a8c947 +0x143:  jbe    08a8c951 <+0x14d>
08a8c949 +0x145:  mov    -0x2c(%ebp),%eax
08a8c94c +0x148:  mov    %eax,-0x10(%ebp)
08a8c94f +0x14b:  jmp    08a8c95f <+0x15b>
08a8c951 +0x14d:  mov    -0x28(%ebp),%eax
08a8c954 +0x150:  cmp    -0x10(%ebp),%eax
08a8c957 +0x153:  jae    08a8c95f <+0x15b>
08a8c959 +0x155:  mov    -0x28(%ebp),%eax
08a8c95c +0x158:  mov    %eax,-0x10(%ebp)
08a8c95f +0x15b:  mov    0x8(%ebp),%eax
08a8c962 +0x15e:  add    $0x4fc,%eax
08a8c967 +0x163:  mov    %eax,(%esp)
08a8c96a +0x166:  call   08a8dce0 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1157>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1157
08a8c96f +0x16b:  test   %al,%al
08a8c971 +0x16d:  je     08a8c98d <+0x189>
08a8c973 +0x16f:  mov    -0x10(%ebp),%eax
08a8c976 +0x172:  mov    %eax,-0x70(%ebp)
08a8c979 +0x175:  mov    $0x10624dd3,%edx
08a8c97e +0x17a:  mov    -0x70(%ebp),%eax
08a8c981 +0x17d:  mul    %edx
08a8c983 +0x17f:  mov    %edx,%eax
08a8c985 +0x181:  shr    $0x6,%eax
08a8c988 +0x184:  jmp    08a8cb3f <+0x33b>
08a8c98d +0x189:  mov    $0x3f800000,%eax
08a8c992 +0x18e:  mov    %eax,-0xc(%ebp)
08a8c995 +0x191:  cmpl   $0x3e8,0x10(%ebp)
08a8c99c +0x198:  jle    08a8c9a5 <+0x1a1>
08a8c99e +0x19a:  movl   $0x3e8,0x10(%ebp)
08a8c9a5 +0x1a1:  lea    -0x38(%ebp),%eax
08a8c9a8 +0x1a4:  mov    %eax,(%esp)
08a8c9ab +0x1a7:  call   08a8dd24 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x119b>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x119b
08a8c9b0 +0x1ac:  mov    0x8(%ebp),%eax
08a8c9b3 +0x1af:  lea    0x4fc(%eax),%edx
08a8c9b9 +0x1b5:  lea    -0x4c(%ebp),%eax
08a8c9bc +0x1b8:  mov    %edx,0x4(%esp)
08a8c9c0 +0x1bc:  mov    %eax,(%esp)
08a8c9c3 +0x1bf:  call   08a8dd32 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x11a9>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x11a9
08a8c9c8 +0x1c4:  sub    $0x4,%esp
08a8c9cb +0x1c7:  mov    -0x4c(%ebp),%eax
08a8c9ce +0x1ca:  mov    %eax,-0x38(%ebp)
08a8c9d1 +0x1cd:  lea    -0x48(%ebp),%eax
08a8c9d4 +0x1d0:  mov    %eax,(%esp)
08a8c9d7 +0x1d3:  call   08a8cd82 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1f9>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1f9
08a8c9dc +0x1d8:  jmp    08a8ca54 <+0x250>
08a8c9de +0x1da:  lea    -0x38(%ebp),%eax
08a8c9e1 +0x1dd:  mov    %eax,(%esp)
08a8c9e4 +0x1e0:  call   08a8dda8 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x121f>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x121f
08a8c9e9 +0x1e5:  mov    (%eax),%eax
08a8c9eb +0x1e7:  cmp    0x10(%ebp),%eax
08a8c9ee +0x1ea:  jg     08a8ca0a <+0x206>
08a8c9f0 +0x1ec:  lea    -0x38(%ebp),%eax
08a8c9f3 +0x1ef:  mov    %eax,(%esp)
08a8c9f6 +0x1f2:  call   08a8dda8 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x121f>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x121f
08a8c9fb +0x1f7:  mov    0x4(%eax),%eax
08a8c9fe +0x1fa:  cmp    0x10(%ebp),%eax
08a8ca01 +0x1fd:  jl     08a8ca0a <+0x206>
08a8ca03 +0x1ff:  mov    $0x1,%eax
08a8ca08 +0x204:  jmp    08a8ca0f <+0x20b>
08a8ca0a +0x206:  mov    $0x0,%eax
08a8ca0f +0x20b:  test   %al,%al
08a8ca11 +0x20d:  je     08a8ca37 <+0x233>
08a8ca13 +0x20f:  lea    -0x38(%ebp),%eax
08a8ca16 +0x212:  mov    %eax,(%esp)
08a8ca19 +0x215:  call   08a8ddb2 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1229>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1229
08a8ca1e +0x21a:  mov    (%eax),%edx
08a8ca20 +0x21c:  mov    %edx,-0x48(%ebp)
08a8ca23 +0x21f:  mov    0x4(%eax),%edx
08a8ca26 +0x222:  mov    %edx,-0x44(%ebp)
08a8ca29 +0x225:  mov    0x8(%eax),%edx
08a8ca2c +0x228:  mov    %edx,-0x40(%ebp)
08a8ca2f +0x22b:  mov    0xc(%eax),%eax
08a8ca32 +0x22e:  mov    %eax,-0x3c(%ebp)
08a8ca35 +0x231:  jmp    08a8ca89 <+0x285>
08a8ca37 +0x233:  lea    -0x14(%ebp),%eax
08a8ca3a +0x236:  movl   $0x0,0x8(%esp)
08a8ca42 +0x23e:  lea    -0x38(%ebp),%edx
08a8ca45 +0x241:  mov    %edx,0x4(%esp)
08a8ca49 +0x245:  mov    %eax,(%esp)
08a8ca4c +0x248:  call   08a8ddbc <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x1233>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x1233
08a8ca51 +0x24d:  sub    $0x4,%esp
08a8ca54 +0x250:  mov    0x8(%ebp),%eax
08a8ca57 +0x253:  lea    0x4fc(%eax),%edx
08a8ca5d +0x259:  lea    -0x18(%ebp),%eax
08a8ca60 +0x25c:  mov    %edx,0x4(%esp)
08a8ca64 +0x260:  mov    %eax,(%esp)
08a8ca67 +0x263:  call   08a8dd56 <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x11cd>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x11cd
08a8ca6c +0x268:  sub    $0x4,%esp
08a8ca6f +0x26b:  lea    -0x18(%ebp),%eax
08a8ca72 +0x26e:  mov    %eax,0x4(%esp)
08a8ca76 +0x272:  lea    -0x38(%ebp),%eax
08a8ca79 +0x275:  mov    %eax,(%esp)
08a8ca7c +0x278:  call   08a8dd7c <_GLOBAL__I_ACTIVESTATUS_ATTACK_TAG+0x11f3>  ; global constructors keyed to ACTIVESTATUS_ATTACK_TAG+0x11f3
08a8ca81 +0x27d:  test   %al,%al
08a8ca83 +0x27f:  jne    08a8c9de <+0x1da>
08a8ca89 +0x285:  flds   -0x40(%ebp)
08a8ca8c +0x288:  flds   -0x3c(%ebp)
08a8ca8f +0x28b:  flds   -0x40(%ebp)
08a8ca92 +0x28e:  fsubrp %st,%st(1)
08a8ca94 +0x290:  mov    -0x44(%ebp),%edx
08a8ca97 +0x293:  mov    -0x48(%ebp),%eax
08a8ca9a +0x296:  mov    %edx,%ecx
08a8ca9c +0x298:  sub    %eax,%ecx
08a8ca9e +0x29a:  mov    %ecx,%eax
08a8caa0 +0x29c:  mov    %eax,-0x60(%ebp)
08a8caa3 +0x29f:  fildl  -0x60(%ebp)
08a8caa6 +0x2a2:  fdivrp %st,%st(1)
08a8caa8 +0x2a4:  mov    -0x48(%ebp),%eax
08a8caab +0x2a7:  mov    0x10(%ebp),%edx
08a8caae +0x2aa:  mov    %edx,%ebx
08a8cab0 +0x2ac:  sub    %eax,%ebx
08a8cab2 +0x2ae:  mov    %ebx,%eax
08a8cab4 +0x2b0:  mov    %eax,-0x60(%ebp)
08a8cab7 +0x2b3:  fildl  -0x60(%ebp)
08a8caba +0x2b6:  fmulp  %st,%st(1)
08a8cabc +0x2b8:  faddp  %st,%st(1)
08a8cabe +0x2ba:  fstps  -0xc(%ebp)
08a8cac1 +0x2bd:  flds   -0x40(%ebp)
08a8cac4 +0x2c0:  flds   -0xc(%ebp)
08a8cac7 +0x2c3:  fxch   %st(1)
08a8cac9 +0x2c5:  fucompp
08a8cacb +0x2c7:  fnstsw %ax
08a8cacd +0x2c9:  sahf
08a8cace +0x2ca:  seta   %al
08a8cad1 +0x2cd:  test   %al,%al
08a8cad3 +0x2cf:  je     08a8cadd <+0x2d9>
08a8cad5 +0x2d1:  mov    -0x40(%ebp),%eax
08a8cad8 +0x2d4:  mov    %eax,-0xc(%ebp)
08a8cadb +0x2d7:  jmp    08a8caf7 <+0x2f3>
08a8cadd +0x2d9:  flds   -0x3c(%ebp)
08a8cae0 +0x2dc:  flds   -0xc(%ebp)
08a8cae3 +0x2df:  fucompp
08a8cae5 +0x2e1:  fnstsw %ax
08a8cae7 +0x2e3:  test   $0x45,%ah
08a8caea +0x2e6:  sete   %al
08a8caed +0x2e9:  test   %al,%al
08a8caef +0x2eb:  je     08a8caf7 <+0x2f3>
08a8caf1 +0x2ed:  mov    -0x3c(%ebp),%eax
08a8caf4 +0x2f0:  mov    %eax,-0xc(%ebp)
08a8caf7 +0x2f3:  mov    -0x10(%ebp),%eax
08a8cafa +0x2f6:  mov    $0x0,%edx
08a8caff +0x2fb:  mov    %eax,-0x58(%ebp)
08a8cb02 +0x2fe:  mov    %edx,-0x54(%ebp)
08a8cb05 +0x301:  fildll -0x58(%ebp)
08a8cb08 +0x304:  fmuls  -0xc(%ebp)
08a8cb0b +0x307:  fnstcw -0x5a(%ebp)
08a8cb0e +0x30a:  movzwl -0x5a(%ebp),%eax
08a8cb12 +0x30e:  mov    $0xc,%ah
08a8cb14 +0x310:  mov    %ax,-0x5c(%ebp)
08a8cb18 +0x314:  fldcw  -0x5c(%ebp)
08a8cb1b +0x317:  fistpll -0x58(%ebp)
08a8cb1e +0x31a:  fldcw  -0x5a(%ebp)
08a8cb21 +0x31d:  mov    -0x58(%ebp),%eax
08a8cb24 +0x320:  mov    -0x54(%ebp),%edx
08a8cb27 +0x323:  mov    %eax,-0x10(%ebp)
08a8cb2a +0x326:  mov    -0x10(%ebp),%eax
08a8cb2d +0x329:  mov    %eax,-0x70(%ebp)
08a8cb30 +0x32c:  mov    $0x10624dd3,%edx
08a8cb35 +0x331:  mov    -0x70(%ebp),%eax
08a8cb38 +0x334:  mul    %edx
08a8cb3a +0x336:  mov    %edx,%eax
08a8cb3c +0x338:  shr    $0x6,%eax
08a8cb3f +0x33b:  lea    -0x8(%ebp),%esp
08a8cb42 +0x33e:  add    $0x0,%esp
08a8cb45 +0x341:  pop    %ebx
08a8cb46 +0x342:  pop    %esi
08a8cb47 +0x343:  pop    %ebp
08a8cb48 +0x344:  ret
```

## 反编译 C

```c
// ServerParameterScript::getAssaultGhostTime @ 0x8a8c804

/* ServerParameterScript::getAssaultGhostTime(int, int) */

uint __thiscall
ServerParameterScript::getAssaultGhostTime(ServerParameterScript *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  ulonglong local_5c;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
  local_3c [4];
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
  local_18 [4];
  uint local_14;
  float local_10;
  
  cVar1 = std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::empty
                    ();
  if (cVar1 == '\0') {
    std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::begin();
    stAssaultLevelGhostPanalty::stAssaultLevelGhostPanalty((stAssaultLevelGhostPanalty *)&local_38);
    while( true ) {
      std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>::end();
      bVar2 = __gnu_cxx::operator!=(local_28,local_24);
      if (!bVar2) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                      ::operator->(local_28);
      if (param_1 < *piVar3) {
LAB_08a8c87e:
        bVar2 = false;
      }
      else {
        iVar4 = __gnu_cxx::
                __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                ::operator->(local_28);
        if (*(int *)(iVar4 + 4) < param_1) goto LAB_08a8c87e;
        bVar2 = true;
      }
      if (bVar2) {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
                        ::operator*(local_28);
        local_38 = *piVar3;
        local_34 = piVar3[1];
        local_30 = piVar3[2];
        local_2c = piVar3[3];
        break;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultLevelGhostPanalty*,std::vector<stAssaultLevelGhostPanalty,std::allocator<stAssaultLevelGhostPanalty>>>
      ::operator++(local_20,(int)local_28);
    }
    local_14 = local_30 +
               (param_1 - local_38) * ((local_2c - local_30) / (uint)(local_34 - local_38));
    if (local_14 < local_30) {
      local_14 = local_30;
    }
    else if (local_2c < local_14) {
      local_14 = local_2c;
    }
    cVar1 = std::
            vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>
            ::empty();
    if (cVar1 == '\0') {
      local_10 = 1.0;
      if (1000 < param_2) {
        param_2 = 1000;
      }
      __gnu_cxx::
      __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
      ::__normal_iterator(local_3c);
      std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>::
      begin();
      stAssaultChaosPointGhostPanalty::stAssaultChaosPointGhostPanalty
                ((stAssaultChaosPointGhostPanalty *)&local_4c);
      while( true ) {
        std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>
        ::end();
        bVar2 = __gnu_cxx::operator!=(local_3c,local_1c);
        if (!bVar2) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                        ::operator->(local_3c);
        if (param_2 < *piVar3) {
LAB_08a8ca0a:
          bVar2 = false;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                  ::operator->(local_3c);
          if (*(int *)(iVar4 + 4) < param_2) goto LAB_08a8ca0a;
          bVar2 = true;
        }
        if (bVar2) {
          piVar3 = (int *)__gnu_cxx::
                          __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
                          ::operator*(local_3c);
          local_4c = *piVar3;
          local_48 = piVar3[1];
          local_44 = (float)piVar3[2];
          local_40 = (float)piVar3[3];
          break;
        }
        __gnu_cxx::
        __normal_iterator<stAssaultChaosPointGhostPanalty*,std::vector<stAssaultChaosPointGhostPanalty,std::allocator<stAssaultChaosPointGhostPanalty>>>
        ::operator++(local_18,(int)local_3c);
      }
      local_10 = (float)(param_2 - local_4c) *
                 ((local_40 - local_44) / (float)(local_48 - local_4c)) + local_44;
      if (local_44 <= local_10) {
        if (local_40 < local_10) {
          local_10 = local_40;
        }
      }
      else {
        local_10 = local_44;
      }
      local_5c = (ulonglong)local_14;
      local_5c._0_4_ = (uint)(longlong)ROUND((float)local_5c * local_10);
      local_14 = (uint)local_5c / 1000;
    }
    else {
      local_14 = local_14 / 1000;
    }
  }
  else {
    local_14 = 0xb4;
  }
  return local_14;
}
```
