# ProcTest

`_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE`

`WongWork::CCompoundAvatar::ProcTest(ENUM_CHARACTERJOB, ENUM_EQUIPMENTTYPE, int, int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333fda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333fda  _ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE
#           WongWork::CCompoundAvatar::ProcTest(ENUM_CHARACTERJOB, ENUM_EQUIPMENTTYPE, int, int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
# range [0x08333fda, 0x083341c1]
08333fda +0x000:  push   %ebp
08333fdb +0x001:  mov    %esp,%ebp
08333fdd +0x003:  sub    $0x58,%esp
08333fe0 +0x006:  mov    0xc(%ebp),%edx
08333fe3 +0x009:  mov    %edx,%eax
08333fe5 +0x00b:  add    %eax,%eax
08333fe7 +0x00d:  add    %edx,%eax
08333fe9 +0x00f:  shl    $0x2,%eax
08333fec +0x012:  add    0x8(%ebp),%eax
08333fef +0x015:  mov    %eax,-0x18(%ebp)
08333ff2 +0x018:  movl   $0x1,0x4(%esp)
08333ffa +0x020:  mov    -0x18(%ebp),%eax
08333ffd +0x023:  mov    %eax,(%esp)
08334000 +0x026:  call   08903fcc <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi>  ; tagCompoundAvatarTable::getCompoundAvatarInfo(int) const
08334005 +0x02b:  mov    %eax,-0x14(%ebp)
08334008 +0x02e:  movl   $0x0,-0x10(%ebp)
0833400f +0x035:  jmp    083341ae <+0x1d4>
08334014 +0x03a:  movl   $0x0,-0x40(%ebp)
0833401b +0x041:  mov    0x10(%ebp),%edx
0833401e +0x044:  mov    -0x14(%ebp),%eax
08334021 +0x047:  mov    0x4(%eax,%edx,4),%edx
08334025 +0x04b:  mov    0x10(%ebp),%ecx
08334028 +0x04e:  mov    -0x14(%ebp),%eax
0833402b +0x051:  add    $0xb8,%ecx
08334031 +0x057:  mov    (%eax,%ecx,4),%ecx
08334034 +0x05a:  mov    0x14(%ebp),%eax
08334037 +0x05d:  imul   %ecx,%eax
0833403a +0x060:  lea    (%edx,%eax,1),%eax
0833403d +0x063:  mov    %eax,-0xc(%ebp)
08334040 +0x066:  cmpl   $0x1,0x18(%ebp)
08334044 +0x06a:  jne    08334054 <+0x7a>
08334046 +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0833404b +0x071:  mov    0x4a54(%eax),%eax
08334051 +0x077:  add    %eax,-0xc(%ebp)
08334054 +0x07a:  movl   $0x2710,-0x3c(%ebp)
0833405b +0x081:  mov    0x8(%ebp),%eax
0833405e +0x084:  mov    0x84(%eax),%eax
08334064 +0x08a:  lea    -0x3c(%ebp),%edx
08334067 +0x08d:  mov    %edx,0x4(%esp)
0833406b +0x091:  mov    %eax,(%esp)
0833406e +0x094:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08334073 +0x099:  cmp    -0xc(%ebp),%eax
08334076 +0x09c:  setb   %al
08334079 +0x09f:  test   %al,%al
0833407b +0x0a1:  je     083340b8 <+0xde>
0833407d +0x0a3:  mov    0x10(%ebp),%edx
08334080 +0x0a6:  mov    -0x14(%ebp),%eax
08334083 +0x0a9:  add    $0x8,%edx
08334086 +0x0ac:  mov    0xc(%eax,%edx,4),%eax
0833408a +0x0b0:  mov    %eax,(%esp)
0833408d +0x0b3:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08334092 +0x0b8:  mov    %eax,%ecx
08334094 +0x0ba:  mov    0x10(%ebp),%edx
08334097 +0x0bd:  mov    %edx,%eax
08334099 +0x0bf:  add    %eax,%eax
0833409b +0x0c1:  add    %edx,%eax
0833409d +0x0c3:  shl    $0x2,%eax
083340a0 +0x0c6:  add    $0x70,%eax
083340a3 +0x0c9:  add    -0x14(%ebp),%eax
083340a6 +0x0cc:  add    $0xc,%eax
083340a9 +0x0cf:  mov    %ecx,0x4(%esp)
083340ad +0x0d3:  mov    %eax,(%esp)
083340b0 +0x0d6:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
083340b5 +0x0db:  mov    %eax,-0x40(%ebp)
083340b8 +0x0de:  mov    -0x40(%ebp),%eax
083340bb +0x0e1:  test   %eax,%eax
083340bd +0x0e3:  jne    083340fc <+0x122>
083340bf +0x0e5:  mov    0x10(%ebp),%edx
083340c2 +0x0e8:  mov    -0x14(%ebp),%eax
083340c5 +0x0eb:  add    $0x14,%edx
083340c8 +0x0ee:  mov    0x4(%eax,%edx,4),%eax
083340cc +0x0f2:  mov    %eax,(%esp)
083340cf +0x0f5:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083340d4 +0x0fa:  mov    %eax,%ecx
083340d6 +0x0fc:  mov    0x10(%ebp),%edx
083340d9 +0x0ff:  mov    %edx,%eax
083340db +0x101:  add    %eax,%eax
083340dd +0x103:  add    %edx,%eax
083340df +0x105:  shl    $0x2,%eax
083340e2 +0x108:  add    $0xf0,%eax
083340e7 +0x10d:  add    -0x14(%ebp),%eax
083340ea +0x110:  add    $0x4,%eax
083340ed +0x113:  mov    %ecx,0x4(%esp)
083340f1 +0x117:  mov    %eax,(%esp)
083340f4 +0x11a:  call   08332e4e <_Z12getItemIndexRKSt6vectorISt4pairIiiESaIS1_EEi>  ; getItemIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, int)
083340f9 +0x11f:  mov    %eax,-0x40(%ebp)
083340fc +0x122:  lea    -0x44(%ebp),%eax
083340ff +0x125:  lea    -0x40(%ebp),%edx
08334102 +0x128:  mov    %edx,0x8(%esp)
08334106 +0x12c:  mov    0x1c(%ebp),%edx
08334109 +0x12f:  mov    %edx,0x4(%esp)
0833410d +0x133:  mov    %eax,(%esp)
08334110 +0x136:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08334115 +0x13b:  sub    $0x4,%esp
08334118 +0x13e:  lea    -0x38(%ebp),%eax
0833411b +0x141:  mov    0x1c(%ebp),%edx
0833411e +0x144:  mov    %edx,0x4(%esp)
08334122 +0x148:  mov    %eax,(%esp)
08334125 +0x14b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0833412a +0x150:  sub    $0x4,%esp
0833412d +0x153:  lea    -0x38(%ebp),%eax
08334130 +0x156:  mov    %eax,0x4(%esp)
08334134 +0x15a:  lea    -0x44(%ebp),%eax
08334137 +0x15d:  mov    %eax,(%esp)
0833413a +0x160:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0833413f +0x165:  test   %al,%al
08334141 +0x167:  je     08334159 <+0x17f>
08334143 +0x169:  lea    -0x44(%ebp),%eax
08334146 +0x16c:  mov    %eax,(%esp)
08334149 +0x16f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0833414e +0x174:  mov    0x4(%eax),%edx
08334151 +0x177:  add    $0x1,%edx
08334154 +0x17a:  mov    %edx,0x4(%eax)
08334157 +0x17d:  jmp    083341aa <+0x1d0>
08334159 +0x17f:  movl   $0x1,-0x1c(%ebp)
08334160 +0x186:  lea    -0x24(%ebp),%eax
08334163 +0x189:  lea    -0x1c(%ebp),%edx
08334166 +0x18c:  mov    %edx,0x8(%esp)
0833416a +0x190:  lea    -0x40(%ebp),%edx
0833416d +0x193:  mov    %edx,0x4(%esp)
08334171 +0x197:  mov    %eax,(%esp)
08334174 +0x19a:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08334179 +0x19f:  sub    $0x4,%esp
0833417c +0x1a2:  lea    -0x24(%ebp),%eax
0833417f +0x1a5:  mov    %eax,0x4(%esp)
08334183 +0x1a9:  lea    -0x2c(%ebp),%eax
08334186 +0x1ac:  mov    %eax,(%esp)
08334189 +0x1af:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
0833418e +0x1b4:  lea    -0x34(%ebp),%eax
08334191 +0x1b7:  lea    -0x2c(%ebp),%edx
08334194 +0x1ba:  mov    %edx,0x8(%esp)
08334198 +0x1be:  mov    0x1c(%ebp),%edx
0833419b +0x1c1:  mov    %edx,0x4(%esp)
0833419f +0x1c5:  mov    %eax,(%esp)
083341a2 +0x1c8:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
083341a7 +0x1cd:  sub    $0x4,%esp
083341aa +0x1d0:  addl   $0x1,-0x10(%ebp)
083341ae +0x1d4:  cmpl   $0x270f,-0x10(%ebp)
083341b5 +0x1db:  setle  %al
083341b8 +0x1de:  test   %al,%al
083341ba +0x1e0:  jne    08334014 <+0x3a>
083341c0 +0x1e6:  leave
083341c1 +0x1e7:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::ProcTest @ 0x8333fda

/* WongWork::CCompoundAvatar::ProcTest(ENUM_CHARACTERJOB, ENUM_EQUIPMENTTYPE, int, int,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void WongWork::CCompoundAvatar::ProcTest
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  int local_44 [2];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  pair local_38 [8];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  undefined4 local_20;
  tagCompoundAvatarTable *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_1c = (tagCompoundAvatarTable *)(param_2 * 0xc + param_1);
  local_18 = tagCompoundAvatarTable::getCompoundAvatarInfo(local_1c,1);
  for (local_14 = 0; local_14 < 10000; local_14 = local_14 + 1) {
    local_44[0] = 0;
    local_10 = *(int *)(local_18 + 4 + param_3 * 4) +
               param_4 * *(int *)(local_18 + (param_3 + 0xb8) * 4);
    if (param_5 == 1) {
      iVar2 = G_CDataManager();
      local_10 = local_10 + *(int *)(iVar2 + 0x4a54);
    }
    local_44[1] = 10000;
    uVar3 = CMTRand::randInt(*(CMTRand **)(param_1 + 0x84),(ulong *)(local_44 + 1));
    if (uVar3 < local_10) {
      iVar2 = get_rand_int(*(int *)(local_18 + 0xc + (param_3 + 8) * 4));
      local_44[0] = getItemIndex((vector *)(param_3 * 0xc + local_18 + 0x7c),iVar2);
    }
    if (local_44[0] == 0) {
      iVar2 = get_rand_int(*(int *)(local_18 + 4 + (param_3 + 0x14) * 4));
      local_44[0] = getItemIndex((vector *)(param_3 * 0xc + local_18 + 0xf4),iVar2);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_48)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_48,(_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') {
      local_20 = 1;
      std::make_pair<int,int>(local_28,local_44);
      std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_38);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_48);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}
```
