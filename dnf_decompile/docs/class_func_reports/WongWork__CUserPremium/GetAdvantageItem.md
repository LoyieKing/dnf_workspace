# GetAdvantageItem

`_ZN8WongWork12CUserPremium16GetAdvantageItemEi`

`WongWork::CUserPremium::GetAdvantageItem(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086adf7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086adf7c  _ZN8WongWork12CUserPremium16GetAdvantageItemEi
#           WongWork::CUserPremium::GetAdvantageItem(int)
# range [0x086adf7c, 0x086ae10d]
086adf7c +0x000:  push   %ebp
086adf7d +0x001:  mov    %esp,%ebp
086adf7f +0x003:  push   %edi
086adf80 +0x004:  push   %esi
086adf81 +0x005:  push   %ebx
086adf82 +0x006:  sub    $0x5c,%esp
086adf85 +0x009:  mov    0x8(%ebp),%ebx
086adf88 +0x00c:  mov    %ebx,%eax
086adf8a +0x00e:  mov    %eax,(%esp)
086adf8d +0x011:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
086adf92 +0x016:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086adf99 +0x01d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086adf9e +0x022:  mov    %eax,-0x20(%ebp)
086adfa1 +0x025:  lea    -0x54(%ebp),%eax
086adfa4 +0x028:  mov    %eax,0x4(%esp)
086adfa8 +0x02c:  lea    -0x20(%ebp),%eax
086adfab +0x02f:  mov    %eax,(%esp)
086adfae +0x032:  call   0807e360 <_init+0xc58>
086adfb3 +0x037:  mov    0x10(%ebp),%edx
086adfb6 +0x03a:  mov    0xc(%ebp),%ecx
086adfb9 +0x03d:  mov    %edx,%eax
086adfbb +0x03f:  shl    $0x2,%eax
086adfbe +0x042:  add    %edx,%eax
086adfc0 +0x044:  shl    $0x2,%eax
086adfc3 +0x047:  mov    (%eax,%ecx,1),%eax
086adfc6 +0x04a:  test   %eax,%eax
086adfc8 +0x04c:  je     086ae0f8 <+0x17c>
086adfce +0x052:  mov    0x10(%ebp),%edx
086adfd1 +0x055:  mov    0xc(%ebp),%ecx
086adfd4 +0x058:  mov    %edx,%eax
086adfd6 +0x05a:  shl    $0x2,%eax
086adfd9 +0x05d:  add    %edx,%eax
086adfdb +0x05f:  shl    $0x2,%eax
086adfde +0x062:  mov    (%eax,%ecx,1),%eax
086adfe1 +0x065:  cmp    $0x69,%eax
086adfe4 +0x068:  jg     086ae0fb <+0x17f>
086adfea +0x06e:  mov    0x10(%ebp),%edx
086adfed +0x071:  mov    0xc(%ebp),%ecx
086adff0 +0x074:  mov    %edx,%eax
086adff2 +0x076:  shl    $0x2,%eax
086adff5 +0x079:  add    %edx,%eax
086adff7 +0x07b:  shl    $0x2,%eax
086adffa +0x07e:  mov    (%eax,%ecx,1),%edx
086adffd +0x081:  mov    %edx,%eax
086adfff +0x083:  shl    $0x3,%eax
086ae002 +0x086:  add    %edx,%eax
086ae004 +0x088:  shl    $0x5,%eax
086ae007 +0x08b:  mov    &g_SPremiumInfo(%eax),%eax
086ae00d +0x091:  cmp    $0x1,%eax
086ae010 +0x094:  jne    086ae0fe <+0x182>
086ae016 +0x09a:  movl   $0x0,-0x1c(%ebp)
086ae01d +0x0a1:  jmp    086ae0cd <+0x151>
086ae022 +0x0a6:  mov    0x10(%ebp),%edx
086ae025 +0x0a9:  mov    0xc(%ebp),%ecx
086ae028 +0x0ac:  mov    %edx,%eax
086ae02a +0x0ae:  shl    $0x2,%eax
086ae02d +0x0b1:  add    %edx,%eax
086ae02f +0x0b3:  shl    $0x2,%eax
086ae032 +0x0b6:  mov    (%eax,%ecx,1),%edx
086ae035 +0x0b9:  mov    -0x1c(%ebp),%ecx
086ae038 +0x0bc:  mov    %edx,%eax
086ae03a +0x0be:  shl    $0x3,%eax
086ae03d +0x0c1:  add    %edx,%eax
086ae03f +0x0c3:  shl    $0x2,%eax
086ae042 +0x0c6:  add    %ecx,%eax
086ae044 +0x0c8:  mov    &g_SPremiumInfo+0xc(,%eax,8),%eax
086ae04b +0x0cf:  test   %eax,%eax
086ae04d +0x0d1:  jne    086ae055 <+0xd9>
086ae04f +0x0d3:  nop
086ae050 +0x0d4:  jmp    086ae0ff <+0x183>
086ae055 +0x0d9:  lea    -0x28(%ebp),%eax
086ae058 +0x0dc:  mov    %eax,(%esp)
086ae05b +0x0df:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
086ae060 +0x0e4:  mov    0x10(%ebp),%edx
086ae063 +0x0e7:  mov    0xc(%ebp),%ecx
086ae066 +0x0ea:  mov    %edx,%eax
086ae068 +0x0ec:  shl    $0x2,%eax
086ae06b +0x0ef:  add    %edx,%eax
086ae06d +0x0f1:  shl    $0x2,%eax
086ae070 +0x0f4:  mov    (%eax,%ecx,1),%edx
086ae073 +0x0f7:  mov    -0x1c(%ebp),%ecx
086ae076 +0x0fa:  mov    %edx,%eax
086ae078 +0x0fc:  shl    $0x3,%eax
086ae07b +0x0ff:  add    %edx,%eax
086ae07d +0x101:  shl    $0x2,%eax
086ae080 +0x104:  add    %ecx,%eax
086ae082 +0x106:  mov    &g_SPremiumInfo+0xc(,%eax,8),%eax
086ae089 +0x10d:  mov    %eax,-0x28(%ebp)
086ae08c +0x110:  mov    0x10(%ebp),%edx
086ae08f +0x113:  mov    0xc(%ebp),%ecx
086ae092 +0x116:  mov    %edx,%eax
086ae094 +0x118:  shl    $0x2,%eax
086ae097 +0x11b:  add    %edx,%eax
086ae099 +0x11d:  shl    $0x2,%eax
086ae09c +0x120:  mov    (%eax,%ecx,1),%edx
086ae09f +0x123:  mov    -0x1c(%ebp),%ecx
086ae0a2 +0x126:  mov    %edx,%eax
086ae0a4 +0x128:  shl    $0x3,%eax
086ae0a7 +0x12b:  add    %edx,%eax
086ae0a9 +0x12d:  shl    $0x2,%eax
086ae0ac +0x130:  add    %ecx,%eax
086ae0ae +0x132:  mov    &g_SPremiumInfo+0x10(,%eax,8),%eax
086ae0b5 +0x139:  mov    %eax,-0x24(%ebp)
086ae0b8 +0x13c:  mov    %ebx,%eax
086ae0ba +0x13e:  lea    -0x28(%ebp),%edx
086ae0bd +0x141:  mov    %edx,0x4(%esp)
086ae0c1 +0x145:  mov    %eax,(%esp)
086ae0c4 +0x148:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
086ae0c9 +0x14d:  addl   $0x1,-0x1c(%ebp)
086ae0cd +0x151:  cmpl   $0x4,-0x1c(%ebp)
086ae0d1 +0x155:  setle  %al
086ae0d4 +0x158:  test   %al,%al
086ae0d6 +0x15a:  jne    086ae022 <+0xa6>
086ae0dc +0x160:  jmp    086ae0ff <+0x183>
086ae0de +0x162:  mov    %edx,%esi
086ae0e0 +0x164:  mov    %eax,%edi
086ae0e2 +0x166:  mov    %ebx,%eax
086ae0e4 +0x168:  mov    %eax,(%esp)
086ae0e7 +0x16b:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
086ae0ec +0x170:  mov    %edi,%eax
086ae0ee +0x172:  mov    %esi,%edx
086ae0f0 +0x174:  mov    %eax,(%esp)
086ae0f3 +0x177:  call   08ae3750 <_Unwind_Resume>
086ae0f8 +0x17c:  nop
086ae0f9 +0x17d:  jmp    086ae0ff <+0x183>
086ae0fb +0x17f:  nop
086ae0fc +0x180:  jmp    086ae0ff <+0x183>
086ae0fe +0x182:  nop
086ae0ff +0x183:  mov    %ebx,%eax
086ae101 +0x185:  mov    %ebx,%eax
086ae103 +0x187:  add    $0x5c,%esp
086ae106 +0x18a:  pop    %ebx
086ae107 +0x18b:  pop    %esi
086ae108 +0x18c:  pop    %edi
086ae109 +0x18d:  pop    %ebp
086ae10a +0x18e:  ret    $0x4
086ae10d +0x191:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::GetAdvantageItem @ 0x86adf7c

/* WongWork::CUserPremium::GetAdvantageItem(int) */

int WongWork::CUserPremium::GetAdvantageItem(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  tm local_58;
  undefined4 local_2c;
  undefined4 local_28;
  time_t local_24;
  int local_20;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_24,&local_58);
  if (((*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) != 0) &&
      (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) < 0x6a)) &&
     (*(int *)(g_SPremiumInfo + *(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x120) == 1
     )) {
    local_20 = 0;
    while ((local_20 < 5 &&
           (*(int *)(g_SPremiumInfo +
                    (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                    0xc) != 0))) {
      std::pair<int,int>::pair((pair<int,int> *)&local_2c);
      local_2c = *(undefined4 *)
                  (g_SPremiumInfo +
                  (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                  0xc);
      local_28 = *(undefined4 *)
                  (g_SPremiumInfo +
                  (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                  0x10);
                    /* try { // try from 086ae0c4 to 086ae0c8 has its CatchHandler @ 086ae0de */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                 (pair *)&local_2c);
      local_20 = local_20 + 1;
    }
  }
  return param_1;
}
```
