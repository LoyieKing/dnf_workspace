# SkillSave

`_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason`

`cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685dce  _ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason
#           cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
# range [0x08685dce, 0x08686183]
08685dce +0x000:  push   %ebp
08685dcf +0x001:  mov    %esp,%ebp
08685dd1 +0x003:  push   %edi
08685dd2 +0x004:  push   %esi
08685dd3 +0x005:  push   %ebx
08685dd4 +0x006:  sub    $0x6bc,%esp
08685dda +0x00c:  movl   $0xf,-0x44(%ebp)
08685de1 +0x013:  mov    0x18(%ebp),%eax
08685de4 +0x016:  mov    %eax,0x8(%esp)
08685de8 +0x01a:  movl   $",%d, ",0x4(%esp)
08685df0 +0x022:  lea    -0x60(%ebp),%eax
08685df3 +0x025:  mov    %eax,(%esp)
08685df6 +0x028:  call   0807e440 <_init+0xd38>
08685dfb +0x02d:  movl   $0x0,-0x40(%ebp)
08685e02 +0x034:  lea    -0x6c(%ebp),%eax
08685e05 +0x037:  mov    %eax,(%esp)
08685e08 +0x03a:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08685e0d +0x03f:  movl   $0x0,-0x3c(%ebp)
08685e14 +0x046:  movl   $0x0,-0x38(%ebp)
08685e1b +0x04d:  jmp    08685e95 <+0xc7>
08685e1d +0x04f:  mov    -0x38(%ebp),%eax
08685e20 +0x052:  add    %eax,%eax
08685e22 +0x054:  add    0xc(%ebp),%eax
08685e25 +0x057:  movzbl (%eax),%eax
08685e28 +0x05a:  test   %al,%al
08685e2a +0x05c:  je     08685e91 <+0xc3>
08685e2c +0x05e:  cmpl   $0x89,-0x38(%ebp)
08685e33 +0x065:  jle    08685e3e <+0x70>
08685e35 +0x067:  cmpl   $0x95,-0x38(%ebp)
08685e3c +0x06e:  jle    08685e91 <+0xc3>
08685e3e +0x070:  mov    -0x38(%ebp),%eax
08685e41 +0x073:  add    %eax,%eax
08685e43 +0x075:  add    0xc(%ebp),%eax
08685e46 +0x078:  lea    0x1(%eax),%ecx
08685e49 +0x07b:  mov    -0x38(%ebp),%eax
08685e4c +0x07e:  add    %eax,%eax
08685e4e +0x080:  add    0xc(%ebp),%eax
08685e51 +0x083:  mov    %eax,%edx
08685e53 +0x085:  lea    -0x46(%ebp),%eax
08685e56 +0x088:  mov    %ecx,0x8(%esp)
08685e5a +0x08c:  mov    %edx,0x4(%esp)
08685e5e +0x090:  mov    %eax,(%esp)
08685e61 +0x093:  call   0869c165 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x89ba>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x89ba
08685e66 +0x098:  sub    $0x4,%esp
08685e69 +0x09b:  lea    -0x46(%ebp),%eax
08685e6c +0x09e:  mov    %eax,0x4(%esp)
08685e70 +0x0a2:  lea    -0x50(%ebp),%eax
08685e73 +0x0a5:  mov    %eax,(%esp)
08685e76 +0x0a8:  call   0869c1a4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x89f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x89f9
08685e7b +0x0ad:  lea    -0x50(%ebp),%eax
08685e7e +0x0b0:  mov    %eax,0x4(%esp)
08685e82 +0x0b4:  lea    -0x6c(%ebp),%eax
08685e85 +0x0b7:  mov    %eax,(%esp)
08685e88 +0x0ba:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08685e8d +0x0bf:  addl   $0x1,-0x3c(%ebp)
08685e91 +0x0c3:  addl   $0x1,-0x38(%ebp)
08685e95 +0x0c7:  cmpl   $0xcb,-0x38(%ebp)
08685e9c +0x0ce:  setle  %al
08685e9f +0x0d1:  test   %al,%al
08685ea1 +0x0d3:  jne    08685e1d <+0x4f>
08685ea7 +0x0d9:  fildl  -0x3c(%ebp)
08685eaa +0x0dc:  flds   &data#06fe57b9(.rodata)
08685eb0 +0x0e2:  fdivrp %st,%st(1)
08685eb2 +0x0e4:  fnstcw -0x69a(%ebp)
08685eb8 +0x0ea:  movzwl -0x69a(%ebp),%eax
08685ebf +0x0f1:  mov    $0xc,%ah
08685ec1 +0x0f3:  mov    %ax,-0x69c(%ebp)
08685ec8 +0x0fa:  fldcw  -0x69c(%ebp)
08685ece +0x100:  fistpl -0x6a0(%ebp)
08685ed4 +0x106:  fldcw  -0x69a(%ebp)
08685eda +0x10c:  mov    -0x6a0(%ebp),%eax
08685ee0 +0x112:  add    $0x1,%eax
08685ee3 +0x115:  mov    %eax,-0x40(%ebp)
08685ee6 +0x118:  movl   $0x0,-0x34(%ebp)
08685eed +0x11f:  jmp    08686143 <+0x375>
08685ef2 +0x124:  lea    -0x694(%ebp),%ebx
08685ef8 +0x12a:  mov    $0x0,%eax
08685efd +0x12f:  mov    $0x100,%edx
08685f02 +0x134:  mov    %ebx,%edi
08685f04 +0x136:  mov    %edx,%ecx
08685f06 +0x138:  rep stos %eax,%es:(%edi)
08685f08 +0x13a:  movl   $0xa,0x8(%esp)
08685f10 +0x142:  movl   $"SaveLethe",0x4(%esp)
08685f18 +0x14a:  lea    -0x694(%ebp),%eax
08685f1e +0x150:  mov    %eax,(%esp)
08685f21 +0x153:  call   0807d8a0 <_init+0x198>
08685f26 +0x158:  lea    -0x60(%ebp),%eax
08685f29 +0x15b:  mov    %eax,0x4(%esp)
08685f2d +0x15f:  lea    -0x694(%ebp),%eax
08685f33 +0x165:  mov    %eax,(%esp)
08685f36 +0x168:  call   0807dd60 <_init+0x658>
08685f3b +0x16d:  mov    -0x34(%ebp),%edx
08685f3e +0x170:  mov    %edx,%eax
08685f40 +0x172:  shl    $0x4,%eax
08685f43 +0x175:  sub    %edx,%eax
08685f45 +0x177:  mov    %eax,-0x30(%ebp)
08685f48 +0x17a:  movl   $0x0,-0x2c(%ebp)
08685f4f +0x181:  mov    -0x40(%ebp),%eax
08685f52 +0x184:  sub    $0x1,%eax
08685f55 +0x187:  cmp    -0x34(%ebp),%eax
08685f58 +0x18a:  jle    08685f65 <+0x197>
08685f5a +0x18c:  mov    -0x30(%ebp),%eax
08685f5d +0x18f:  add    $0xe,%eax
08685f60 +0x192:  mov    %eax,-0x2c(%ebp)
08685f63 +0x195:  jmp    08685f94 <+0x1c6>
08685f65 +0x197:  mov    -0x3c(%ebp),%ecx
08685f68 +0x19a:  mov    $0x88888889,%edx
08685f6d +0x19f:  mov    %ecx,%eax
08685f6f +0x1a1:  imul   %edx
08685f71 +0x1a3:  lea    (%edx,%ecx,1),%eax
08685f74 +0x1a6:  mov    %eax,%edx
08685f76 +0x1a8:  sar    $0x3,%edx
08685f79 +0x1ab:  mov    %ecx,%eax
08685f7b +0x1ad:  sar    $0x1f,%eax
08685f7e +0x1b0:  sub    %eax,%edx
08685f80 +0x1b2:  mov    %edx,%eax
08685f82 +0x1b4:  shl    $0x4,%eax
08685f85 +0x1b7:  sub    %edx,%eax
08685f87 +0x1b9:  mov    %ecx,%edx
08685f89 +0x1bb:  sub    %eax,%edx
08685f8b +0x1bd:  lea    -0x1(%edx),%eax
08685f8e +0x1c0:  add    -0x30(%ebp),%eax
08685f91 +0x1c3:  mov    %eax,-0x2c(%ebp)
08685f94 +0x1c6:  mov    -0x30(%ebp),%eax
08685f97 +0x1c9:  mov    -0x2c(%ebp),%edx
08685f9a +0x1cc:  mov    %edx,%ecx
08685f9c +0x1ce:  sub    %eax,%ecx
08685f9e +0x1d0:  mov    %ecx,%eax
08685fa0 +0x1d2:  add    $0x1,%eax
08685fa3 +0x1d5:  mov    %eax,-0x28(%ebp)
08685fa6 +0x1d8:  cmpl   $0x0,-0x28(%ebp)
08685faa +0x1dc:  je     08686156 <+0x388>
08685fb0 +0x1e2:  mov    0x14(%ebp),%eax
08685fb3 +0x1e5:  mov    %eax,0x10(%esp)
08685fb7 +0x1e9:  mov    -0x28(%ebp),%eax
08685fba +0x1ec:  mov    %eax,0xc(%esp)
08685fbe +0x1f0:  mov    0x10(%ebp),%eax
08685fc1 +0x1f3:  mov    %eax,0x8(%esp)
08685fc5 +0x1f7:  movl   $"%d/%d/%d",0x4(%esp)
08685fcd +0x1ff:  lea    -0x84(%ebp),%eax
08685fd3 +0x205:  mov    %eax,(%esp)
08685fd6 +0x208:  call   0807e440 <_init+0xd38>
08685fdb +0x20d:  lea    -0x84(%ebp),%eax
08685fe1 +0x213:  mov    %eax,0x4(%esp)
08685fe5 +0x217:  lea    -0x694(%ebp),%eax
08685feb +0x21d:  mov    %eax,(%esp)
08685fee +0x220:  call   0807dd60 <_init+0x658>
08685ff3 +0x225:  lea    -0x294(%ebp),%ebx
08685ff9 +0x22b:  mov    $0x0,%eax
08685ffe +0x230:  mov    $0x80,%edx
08686003 +0x235:  mov    %ebx,%edi
08686005 +0x237:  mov    %edx,%ecx
08686007 +0x239:  rep stos %eax,%es:(%edi)
08686009 +0x23b:  movl   $0x0,-0x24(%ebp)
08686010 +0x242:  jmp    086860ff <+0x331>
08686015 +0x247:  mov    -0x24(%ebp),%eax
08686018 +0x24a:  mov    -0x30(%ebp),%edx
0868601b +0x24d:  lea    (%edx,%eax,1),%eax
0868601e +0x250:  mov    %eax,0x4(%esp)
08686022 +0x254:  lea    -0x6c(%ebp),%eax
08686025 +0x257:  mov    %eax,(%esp)
08686028 +0x25a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868602d +0x25f:  mov    (%eax),%eax
0868602f +0x261:  mov    %eax,-0x20(%ebp)
08686032 +0x264:  mov    -0x24(%ebp),%eax
08686035 +0x267:  mov    -0x30(%ebp),%edx
08686038 +0x26a:  lea    (%edx,%eax,1),%eax
0868603b +0x26d:  mov    %eax,0x4(%esp)
0868603f +0x271:  lea    -0x6c(%ebp),%eax
08686042 +0x274:  mov    %eax,(%esp)
08686045 +0x277:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0868604a +0x27c:  mov    0x4(%eax),%eax
0868604d +0x27f:  mov    %eax,-0x1c(%ebp)
08686050 +0x282:  movl   $0x0,-0x94(%ebp)
0868605a +0x28c:  movl   $0x0,-0x90(%ebp)
08686064 +0x296:  movl   $0x0,-0x8c(%ebp)
0868606e +0x2a0:  movl   $0x0,-0x88(%ebp)
08686078 +0x2aa:  mov    -0x24(%ebp),%ecx
0868607b +0x2ad:  mov    $0x55555556,%edx
08686080 +0x2b2:  mov    %ecx,%eax
08686082 +0x2b4:  imul   %edx
08686084 +0x2b6:  mov    %ecx,%eax
08686086 +0x2b8:  sar    $0x1f,%eax
08686089 +0x2bb:  sub    %eax,%edx
0868608b +0x2bd:  mov    %edx,%eax
0868608d +0x2bf:  add    %eax,%eax
0868608f +0x2c1:  add    %edx,%eax
08686091 +0x2c3:  mov    %ecx,%edx
08686093 +0x2c5:  sub    %eax,%edx
08686095 +0x2c7:  test   %edx,%edx
08686097 +0x2c9:  jne    086860bf <+0x2f1>
08686099 +0x2cb:  mov    -0x1c(%ebp),%eax
0868609c +0x2ce:  mov    %eax,0xc(%esp)
086860a0 +0x2d2:  mov    -0x20(%ebp),%eax
086860a3 +0x2d5:  mov    %eax,0x8(%esp)
086860a7 +0x2d9:  movl   $",%d/%d",0x4(%esp)
086860af +0x2e1:  lea    -0x94(%ebp),%eax
086860b5 +0x2e7:  mov    %eax,(%esp)
086860b8 +0x2ea:  call   0807e440 <_init+0xd38>
086860bd +0x2ef:  jmp    086860e3 <+0x315>
086860bf +0x2f1:  mov    -0x1c(%ebp),%eax
086860c2 +0x2f4:  mov    %eax,0xc(%esp)
086860c6 +0x2f8:  mov    -0x20(%ebp),%eax
086860c9 +0x2fb:  mov    %eax,0x8(%esp)
086860cd +0x2ff:  movl   $"/%d/%d",0x4(%esp)
086860d5 +0x307:  lea    -0x94(%ebp),%eax
086860db +0x30d:  mov    %eax,(%esp)
086860de +0x310:  call   0807e440 <_init+0xd38>
086860e3 +0x315:  lea    -0x94(%ebp),%eax
086860e9 +0x31b:  mov    %eax,0x4(%esp)
086860ed +0x31f:  lea    -0x294(%ebp),%eax
086860f3 +0x325:  mov    %eax,(%esp)
086860f6 +0x328:  call   0807dd60 <_init+0x658>
086860fb +0x32d:  addl   $0x1,-0x24(%ebp)
086860ff +0x331:  mov    -0x24(%ebp),%eax
08686102 +0x334:  cmp    -0x28(%ebp),%eax
08686105 +0x337:  setl   %al
08686108 +0x33a:  test   %al,%al
0868610a +0x33c:  jne    08686015 <+0x247>
08686110 +0x342:  lea    -0x294(%ebp),%eax
08686116 +0x348:  mov    %eax,0x4(%esp)
0868611a +0x34c:  lea    -0x694(%ebp),%eax
08686120 +0x352:  mov    %eax,(%esp)
08686123 +0x355:  call   0807dd60 <_init+0x658>
08686128 +0x35a:  mov    0x8(%ebp),%eax
0868612b +0x35d:  mov    (%eax),%eax
0868612d +0x35f:  lea    -0x694(%ebp),%edx
08686133 +0x365:  mov    %edx,0x4(%esp)
08686137 +0x369:  mov    %eax,(%esp)
0868613a +0x36c:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868613f +0x371:  addl   $0x1,-0x34(%ebp)
08686143 +0x375:  mov    -0x34(%ebp),%eax
08686146 +0x378:  cmp    -0x40(%ebp),%eax
08686149 +0x37b:  setl   %al
0868614c +0x37e:  test   %al,%al
0868614e +0x380:  jne    08685ef2 <+0x124>
08686154 +0x386:  jmp    08686157 <+0x389>
08686156 +0x388:  nop
08686157 +0x389:  lea    -0x6c(%ebp),%eax
0868615a +0x38c:  mov    %eax,(%esp)
0868615d +0x38f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08686162 +0x394:  lea    -0xc(%ebp),%esp
08686165 +0x397:  add    $0x0,%esp
08686168 +0x39a:  pop    %ebx
08686169 +0x39b:  pop    %esi
0868616a +0x39c:  pop    %edi
0868616b +0x39d:  pop    %ebp
0868616c +0x39e:  ret
0868616d +0x39f:  mov    %edx,%ebx
0868616f +0x3a1:  mov    %eax,%esi
08686171 +0x3a3:  lea    -0x6c(%ebp),%eax
08686174 +0x3a6:  mov    %eax,(%esp)
08686177 +0x3a9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0868617c +0x3ae:  mov    %esi,%eax
0868617e +0x3b0:  mov    %ebx,%edx
08686180 +0x3b2:  mov    %eax,(%esp)
08686183 +0x3b5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// cUserHistoryLog::SkillSave @ 0x8685dce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason) */

void __thiscall
cUserHistoryLog::SkillSave
          (cUserHistoryLog *this,int param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_698 [1024];
  char local_298 [512];
  char local_98 [40];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_70 [12];
  char local_64 [16];
  pair<int,int> local_54 [10];
  uchar local_4a [2];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar4 = 0;
  local_48 = 0xf;
  sprintf(local_64,",%d, ",param_5);
  local_44 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_70);
  local_40 = 0;
  for (local_3c = 0; local_3c < 0xcc; local_3c = local_3c + 1) {
    if ((*(char *)(local_3c * 2 + param_1) != '\0') && ((local_3c < 0x8a || (0x95 < local_3c)))) {
                    /* try { // try from 08685e61 to 0868613e has its CatchHandler @ 0868616d */
      std::make_pair<unsigned_char_const&,char_const&>(local_4a,(char *)(local_3c * 2 + param_1));
      std::pair<int,int>::pair<unsigned_char,char>(local_54,local_4a);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_70,local_54);
      local_40 = local_40 + 1;
    }
  }
  local_44 = (int)ROUND((float)local_40 / _DAT_08cf3980) + 1;
  for (local_38 = 0; local_38 < local_44; local_38 = local_38 + 1) {
    pcVar3 = local_698;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    memcpy(local_698,"SaveLethe",10);
    strcat(local_698,local_64);
    local_34 = local_38 * 0xf;
    if (local_38 < local_44 + -1) {
      local_30 = local_34 + 0xe;
    }
    else {
      local_30 = local_40 % 0xf + -1 + local_34;
    }
    local_2c = local_30 + local_38 * -0xf + 1;
    if (local_2c == 0) break;
    sprintf(local_98 + 0x10,"%d/%d/%d",param_2,local_2c,param_3);
    strcat(local_698,local_98 + 0x10);
    pcVar3 = local_298;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
      puVar1 = (undefined4 *)
               std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                         (local_70,local_34 + local_28);
      local_24 = *puVar1;
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        (local_70,local_34 + local_28);
      local_20 = *(undefined4 *)(iVar2 + 4);
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      if (local_28 % 3 == 0) {
        sprintf(local_98,",%d/%d",local_24,local_20);
      }
      else {
        sprintf(local_98,"/%d/%d",local_24,local_20);
      }
      strcat(local_298,local_98);
    }
    strcat(local_698,local_298);
    CUser::LogHistory(*(CUser **)this,local_698);
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_70);
  return;
}
```
