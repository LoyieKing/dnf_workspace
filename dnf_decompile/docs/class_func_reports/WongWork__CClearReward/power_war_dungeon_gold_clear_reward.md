# power_war_dungeon_gold_clear_reward

`_ZN8WongWork12CClearReward35power_war_dungeon_gold_clear_rewardERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tEi`

`WongWork::CClearReward::power_war_dungeon_gold_clear_reward(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08538e64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538e64  _ZN8WongWork12CClearReward35power_war_dungeon_gold_clear_rewardERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tEi
#           WongWork::CClearReward::power_war_dungeon_gold_clear_reward(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&, int)
# range [0x08538e64, 0x0853900b]
08538e64 +0x000:  push   %ebp
08538e65 +0x001:  mov    %esp,%ebp
08538e67 +0x003:  push   %ebx
08538e68 +0x004:  sub    $0x84,%esp
08538e6e +0x00a:  mov    0xc(%ebp),%eax
08538e71 +0x00d:  add    $0x34,%eax
08538e74 +0x010:  mov    %eax,-0x20(%ebp)
08538e77 +0x013:  mov    -0x20(%ebp),%eax
08538e7a +0x016:  movzbl 0x2(%eax),%eax
08538e7e +0x01a:  movzbl %al,%eax
08538e81 +0x01d:  lea    -0x1(%eax),%edx
08538e84 +0x020:  mov    0x8(%ebp),%eax
08538e87 +0x023:  add    $0x38,%edx
08538e8a +0x026:  flds   0xc(%eax,%edx,4)
08538e8e +0x02a:  mov    -0x20(%ebp),%eax
08538e91 +0x02d:  movzbl 0x1(%eax),%eax
08538e95 +0x031:  movzbl %al,%edx
08538e98 +0x034:  mov    0x8(%ebp),%eax
08538e9b +0x037:  add    $0x34,%edx
08538e9e +0x03a:  flds   0x8(%eax,%edx,4)
08538ea2 +0x03e:  fmulp  %st,%st(1)
08538ea4 +0x040:  fstps  -0x74(%ebp)
08538ea7 +0x043:  mov    -0x20(%ebp),%eax
08538eaa +0x046:  mov    0x4(%eax),%ebx
08538ead +0x049:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538eb2 +0x04e:  add    $0x68,%eax
08538eb5 +0x051:  mov    %ebx,0x4(%esp)
08538eb9 +0x055:  mov    %eax,(%esp)
08538ebc +0x058:  call   08a8c28c <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex>  ; ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const
08538ec1 +0x05d:  fld1
08538ec3 +0x05f:  faddp  %st,%st(1)
08538ec5 +0x061:  fmuls  -0x74(%ebp)
08538ec8 +0x064:  fstps  -0x1c(%ebp)
08538ecb +0x067:  mov    0x14(%ebp),%eax
08538ece +0x06a:  movzbl %al,%edx
08538ed1 +0x06d:  mov    0x8(%ebp),%eax
08538ed4 +0x070:  mov    0x4(%eax),%eax
08538ed7 +0x073:  mov    %edx,0x4(%esp)
08538edb +0x077:  mov    %eax,(%esp)
08538ede +0x07a:  call   08533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>  ; WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)
08538ee3 +0x07f:  mov    %eax,-0x18(%ebp)
08538ee6 +0x082:  mov    -0x18(%ebp),%eax
08538ee9 +0x085:  mov    (%eax),%eax
08538eeb +0x087:  imul   $0xaf,%eax,%ecx
08538ef1 +0x08d:  mov    $0x10624dd3,%edx
08538ef6 +0x092:  mov    %ecx,%eax
08538ef8 +0x094:  imul   %edx
08538efa +0x096:  sar    $0x6,%edx
08538efd +0x099:  mov    %ecx,%eax
08538eff +0x09b:  sar    $0x1f,%eax
08538f02 +0x09e:  mov    %edx,%ecx
08538f04 +0x0a0:  sub    %eax,%ecx
08538f06 +0x0a2:  mov    %ecx,%eax
08538f08 +0x0a4:  mov    %eax,-0x14(%ebp)
08538f0b +0x0a7:  mov    -0x20(%ebp),%eax
08538f0e +0x0aa:  movzwl 0x8(%eax),%eax
08538f12 +0x0ae:  movzwl %ax,%edx
08538f15 +0x0b1:  mov    -0x20(%ebp),%eax
08538f18 +0x0b4:  movzwl 0xe(%eax),%eax
08538f1c +0x0b8:  movzwl %ax,%eax
08538f1f +0x0bb:  lea    (%eax,%eax,1),%ecx
08538f22 +0x0be:  mov    -0x20(%ebp),%eax
08538f25 +0x0c1:  movzwl 0xa(%eax),%eax
08538f29 +0x0c5:  movzwl %ax,%eax
08538f2c +0x0c8:  lea    (%ecx,%eax,1),%eax
08538f2f +0x0cb:  add    %eax,%eax
08538f31 +0x0cd:  lea    (%edx,%eax,1),%eax
08538f34 +0x0d0:  imul   -0x14(%ebp),%eax
08538f38 +0x0d4:  mov    %eax,%edx
08538f3a +0x0d6:  shr    $0x1f,%edx
08538f3d +0x0d9:  lea    (%edx,%eax,1),%eax
08538f40 +0x0dc:  sar    %eax
08538f42 +0x0de:  mov    %eax,-0x6c(%ebp)
08538f45 +0x0e1:  fildl  -0x6c(%ebp)
08538f48 +0x0e4:  fmuls  -0x1c(%ebp)
08538f4b +0x0e7:  fnstcw -0x6e(%ebp)
08538f4e +0x0ea:  movzwl -0x6e(%ebp),%eax
08538f52 +0x0ee:  mov    $0xc,%ah
08538f54 +0x0f0:  mov    %ax,-0x70(%ebp)
08538f58 +0x0f4:  fldcw  -0x70(%ebp)
08538f5b +0x0f7:  fistpl -0x10(%ebp)
08538f5e +0x0fa:  fldcw  -0x6e(%ebp)
08538f61 +0x0fd:  fildl  -0x10(%ebp)
08538f64 +0x100:  flds   &data#0d86eb63(.rodata)
08538f6a +0x106:  fdivrp %st,%st(1)
08538f6c +0x108:  mov    -0x20(%ebp),%eax
08538f6f +0x10b:  movzbl 0x2(%eax),%eax
08538f73 +0x10f:  movzbl %al,%eax
08538f76 +0x112:  mov    %eax,-0x6c(%ebp)
08538f79 +0x115:  fildl  -0x6c(%ebp)
08538f7c +0x118:  fdivrp %st,%st(1)
08538f7e +0x11a:  fmuls  -0x1c(%ebp)
08538f81 +0x11d:  fldcw  -0x70(%ebp)
08538f84 +0x120:  fistpl -0x6c(%ebp)
08538f87 +0x123:  fldcw  -0x6e(%ebp)
08538f8a +0x126:  mov    -0x6c(%ebp),%ebx
08538f8d +0x129:  mov    -0x18(%ebp),%eax
08538f90 +0x12c:  mov    0x4(%eax),%eax
08538f93 +0x12f:  mov    -0x18(%ebp),%edx
08538f96 +0x132:  mov    0x4(%edx),%edx
08538f99 +0x135:  neg    %edx
08538f9b +0x137:  mov    %eax,0x4(%esp)
08538f9f +0x13b:  mov    %edx,(%esp)
08538fa2 +0x13e:  call   08539d90 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1c
08538fa7 +0x143:  add    $0x64,%eax
08538faa +0x146:  mov    %ebx,%ecx
08538fac +0x148:  imul   %eax,%ecx
08538faf +0x14b:  mov    $0x51eb851f,%edx
08538fb4 +0x150:  mov    %ecx,%eax
08538fb6 +0x152:  imul   %edx
08538fb8 +0x154:  sar    $0x5,%edx
08538fbb +0x157:  mov    %ecx,%eax
08538fbd +0x159:  sar    $0x1f,%eax
08538fc0 +0x15c:  mov    %edx,%ecx
08538fc2 +0x15e:  sub    %eax,%ecx
08538fc4 +0x160:  mov    %ecx,%eax
08538fc6 +0x162:  mov    %eax,-0xc(%ebp)
08538fc9 +0x165:  lea    -0x5d(%ebp),%eax
08538fcc +0x168:  mov    %eax,(%esp)
08538fcf +0x16b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08538fd4 +0x170:  movb   $0x2,-0x5c(%ebp)
08538fd8 +0x174:  movl   $0x0,-0x5b(%ebp)
08538fdf +0x17b:  mov    -0xc(%ebp),%eax
08538fe2 +0x17e:  mov    %eax,0x4(%esp)
08538fe6 +0x182:  lea    -0x5d(%ebp),%eax
08538fe9 +0x185:  mov    %eax,(%esp)
08538fec +0x188:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08538ff1 +0x18d:  mov    0x10(%ebp),%eax
08538ff4 +0x190:  lea    -0x5d(%ebp),%edx
08538ff7 +0x193:  mov    %edx,0x4(%esp)
08538ffb +0x197:  mov    %eax,(%esp)
08538ffe +0x19a:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08539003 +0x19f:  add    $0x84,%esp
08539009 +0x1a5:  pop    %ebx
0853900a +0x1a6:  pop    %ebp
0853900b +0x1a7:  ret
```

## 反编译 C

```c
// WongWork::CClearReward::power_war_dungeon_gold_clear_reward @ 0x8538e64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CClearReward::power_war_dungeon_gold_clear_reward(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&, int) */

void __thiscall
WongWork::CClearReward::power_war_dungeon_gold_clear_reward
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longdouble lVar5;
  Inven_Item local_61;
  undefined1 local_60;
  undefined4 local_5f;
  stGenerateRefData_t *local_24;
  float local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = param_1 + 0x34;
  fVar1 = *(float *)(this + ((byte)param_1[0x36] + 0x37) * 4 + 0xc);
  fVar2 = *(float *)(this + ((byte)param_1[0x35] + 0x34) * 4 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  lVar5 = (longdouble)
          ServerParameterScript::GetExpBonusWeight((ServerParameterScript *)(iVar4 + 0x68),uVar3);
  local_20 = (float)(((longdouble)1 + lVar5) * (longdouble)(fVar2 * fVar1));
  local_1c = (int *)CGeneratorCommonData::getGoldGenTable
                              (*(CGeneratorCommonData **)(this + 4),(uchar)param_3);
  local_18 = (*local_1c * 0xaf) / 1000;
  local_14 = (int)ROUND((float)((int)(((uint)*(ushort *)(local_24 + 8) +
                                      ((uint)*(ushort *)(local_24 + 0xe) * 2 +
                                      (uint)*(ushort *)(local_24 + 10)) * 2) * local_18) / 2) *
                        local_20);
  fVar1 = (((float)local_14 / _DAT_08c9a6d8) / (float)(byte)local_24[2]) * local_20;
  iVar4 = GetRandomRange(-local_1c[1],local_1c[1]);
  local_10 = ((int)ROUND(fVar1) * (iVar4 + 100)) / 100;
  Inven_Item::Inven_Item(&local_61);
  local_60 = 2;
  local_5f = 0;
  Inven_Item::set_add_info(&local_61,local_10);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_61);
  return;
}
```
