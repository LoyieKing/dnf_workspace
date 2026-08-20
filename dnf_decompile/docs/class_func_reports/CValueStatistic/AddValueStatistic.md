# AddValueStatistic

`_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj`

`CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CValueStatistic` | `0x0860d682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d682  _ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj
#           CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
# range [0x0860d682, 0x0860d8a3]
0860d682 +0x000:  push   %ebp
0860d683 +0x001:  mov    %esp,%ebp
0860d685 +0x003:  push   %edi
0860d686 +0x004:  push   %esi
0860d687 +0x005:  push   %ebx
0860d688 +0x006:  sub    $0x642c,%esp
0860d68e +0x00c:  mov    0xc(%ebp),%eax
0860d691 +0x00f:  test   %eax,%eax
0860d693 +0x011:  js     0860d6bc <+0x3a>
0860d695 +0x013:  mov    0xc(%ebp),%eax
0860d698 +0x016:  cmp    $0x1d,%eax
0860d69b +0x019:  jg     0860d6bc <+0x3a>
0860d69d +0x01b:  mov    0x10(%ebp),%eax
0860d6a0 +0x01e:  mov    %eax,(%esp)
0860d6a3 +0x021:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860d6a8 +0x026:  test   %eax,%eax
0860d6aa +0x028:  jle    0860d6bc <+0x3a>
0860d6ac +0x02a:  mov    0x10(%ebp),%eax
0860d6af +0x02d:  mov    %eax,(%esp)
0860d6b2 +0x030:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860d6b7 +0x035:  cmp    $0x46,%eax
0860d6ba +0x038:  jle    0860d6c3 <+0x41>
0860d6bc +0x03a:  mov    $0x1,%eax
0860d6c1 +0x03f:  jmp    0860d6c8 <+0x46>
0860d6c3 +0x041:  mov    $0x0,%eax
0860d6c8 +0x046:  test   %al,%al
0860d6ca +0x048:  je     0860d72a <+0xa8>
0860d6cc +0x04a:  mov    0x10(%ebp),%eax
0860d6cf +0x04d:  mov    %eax,(%esp)
0860d6d2 +0x050:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860d6d7 +0x055:  mov    %eax,%ebx
0860d6d9 +0x057:  mov    0xc(%ebp),%esi
0860d6dc +0x05a:  movl   $0x0,0xc(%esp)
0860d6e4 +0x062:  movl   $0x306,0x8(%esp)
0860d6ec +0x06a:  movl   $&_ZZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserjE19__PRETTY_FUNCTION__,0x4(%esp)
0860d6f4 +0x072:  lea    -0x42d8(%ebp),%eax
0860d6fa +0x078:  mov    %eax,(%esp)
0860d6fd +0x07b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0860d702 +0x080:  mov    %ebx,0xc(%esp)
0860d706 +0x084:  mov    %esi,0x8(%esp)
0860d70a +0x088:  movl   $"VALUE_STATISTIC wrong index (%d,%d)",0x4(%esp)
0860d712 +0x090:  lea    -0x42d8(%ebp),%eax
0860d718 +0x096:  mov    %eax,(%esp)
0860d71b +0x099:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0860d720 +0x09e:  mov    $0x0,%eax
0860d725 +0x0a3:  jmp    0860d898 <+0x216>
0860d72a +0x0a8:  mov    0x10(%ebp),%eax
0860d72d +0x0ab:  mov    %eax,(%esp)
0860d730 +0x0ae:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860d735 +0x0b3:  mov    %eax,-0x42c8(%ebp)
0860d73b +0x0b9:  mov    0x8(%ebp),%edx
0860d73e +0x0bc:  lea    -0x42dc(%ebp),%eax
0860d744 +0x0c2:  lea    -0x42c8(%ebp),%ecx
0860d74a +0x0c8:  mov    %ecx,0x8(%esp)
0860d74e +0x0cc:  mov    %edx,0x4(%esp)
0860d752 +0x0d0:  mov    %eax,(%esp)
0860d755 +0x0d3:  call   086112a6 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1324>  ; global constructors keyed to Statistics::Statistics()+0x1324
0860d75a +0x0d8:  sub    $0x4,%esp
0860d75d +0x0db:  mov    0x8(%ebp),%edx
0860d760 +0x0de:  lea    -0x42c4(%ebp),%eax
0860d766 +0x0e4:  mov    %edx,0x4(%esp)
0860d76a +0x0e8:  mov    %eax,(%esp)
0860d76d +0x0eb:  call   086112d2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1350>  ; global constructors keyed to Statistics::Statistics()+0x1350
0860d772 +0x0f0:  sub    $0x4,%esp
0860d775 +0x0f3:  lea    -0x42c4(%ebp),%eax
0860d77b +0x0f9:  mov    %eax,0x4(%esp)
0860d77f +0x0fd:  lea    -0x42dc(%ebp),%eax
0860d785 +0x103:  mov    %eax,(%esp)
0860d788 +0x106:  call   086112f8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1376>  ; global constructors keyed to Statistics::Statistics()+0x1376
0860d78d +0x10b:  test   %al,%al
0860d78f +0x10d:  je     0860d7e8 <+0x166>
0860d791 +0x10f:  lea    -0x42dc(%ebp),%eax
0860d797 +0x115:  mov    %eax,(%esp)
0860d79a +0x118:  call   0861130c <_GLOBAL__I__ZN10StatisticsC2Ev+0x138a>  ; global constructors keyed to Statistics::Statistics()+0x138a
0860d79f +0x11d:  add    $0x4,%eax
0860d7a2 +0x120:  mov    %eax,-0x1c(%ebp)
0860d7a5 +0x123:  mov    0x10(%ebp),%eax
0860d7a8 +0x126:  mov    %eax,(%esp)
0860d7ab +0x129:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860d7b0 +0x12e:  mov    %eax,%edi
0860d7b2 +0x130:  mov    0xc(%ebp),%esi
0860d7b5 +0x133:  mov    0xc(%ebp),%ebx
0860d7b8 +0x136:  mov    -0x1c(%ebp),%ecx
0860d7bb +0x139:  add    %eax,%eax
0860d7bd +0x13b:  mov    %eax,%edx
0860d7bf +0x13d:  shl    $0x4,%edx
0860d7c2 +0x140:  sub    %eax,%edx
0860d7c4 +0x142:  lea    (%edx,%ebx,1),%eax
0860d7c7 +0x145:  mov    (%ecx,%eax,4),%eax
0860d7ca +0x148:  mov    %eax,%ebx
0860d7cc +0x14a:  add    0x14(%ebp),%ebx
0860d7cf +0x14d:  mov    -0x1c(%ebp),%ecx
0860d7d2 +0x150:  mov    %edi,%eax
0860d7d4 +0x152:  add    %eax,%eax
0860d7d6 +0x154:  mov    %eax,%edx
0860d7d8 +0x156:  shl    $0x4,%edx
0860d7db +0x159:  sub    %eax,%edx
0860d7dd +0x15b:  lea    (%edx,%esi,1),%eax
0860d7e0 +0x15e:  mov    %ebx,(%ecx,%eax,4)
0860d7e3 +0x161:  jmp    0860d893 <+0x211>
0860d7e8 +0x166:  movl   $0x2148,0x8(%esp)
0860d7f0 +0x16e:  movl   $0x0,0x4(%esp)
0860d7f8 +0x176:  lea    -0x6424(%ebp),%eax
0860d7fe +0x17c:  mov    %eax,(%esp)
0860d801 +0x17f:  call   0807dcc0 <_init+0x5b8>
0860d806 +0x184:  mov    0x10(%ebp),%eax
0860d809 +0x187:  mov    %eax,(%esp)
0860d80c +0x18a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860d811 +0x18f:  mov    0xc(%ebp),%ecx
0860d814 +0x192:  add    %eax,%eax
0860d816 +0x194:  mov    %eax,%edx
0860d818 +0x196:  shl    $0x4,%edx
0860d81b +0x199:  sub    %eax,%edx
0860d81d +0x19b:  add    %ecx,%edx
0860d81f +0x19d:  mov    0x14(%ebp),%eax
0860d822 +0x1a0:  mov    %eax,-0x6424(%ebp,%edx,4)
0860d829 +0x1a7:  mov    0x10(%ebp),%eax
0860d82c +0x1aa:  mov    %eax,(%esp)
0860d82f +0x1ad:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860d834 +0x1b2:  mov    %eax,-0x20(%ebp)
0860d837 +0x1b5:  lea    -0x216c(%ebp),%eax
0860d83d +0x1bb:  lea    -0x6424(%ebp),%edx
0860d843 +0x1c1:  mov    %edx,0x8(%esp)
0860d847 +0x1c5:  lea    -0x20(%ebp),%edx
0860d84a +0x1c8:  mov    %edx,0x4(%esp)
0860d84e +0x1cc:  mov    %eax,(%esp)
0860d851 +0x1cf:  call   08611319 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1397>  ; global constructors keyed to Statistics::Statistics()+0x1397
0860d856 +0x1d4:  sub    $0x4,%esp
0860d859 +0x1d7:  lea    -0x216c(%ebp),%eax
0860d85f +0x1dd:  mov    %eax,0x4(%esp)
0860d863 +0x1e1:  lea    -0x42b8(%ebp),%eax
0860d869 +0x1e7:  mov    %eax,(%esp)
0860d86c +0x1ea:  call   08611360 <_GLOBAL__I__ZN10StatisticsC2Ev+0x13de>  ; global constructors keyed to Statistics::Statistics()+0x13de
0860d871 +0x1ef:  mov    0x8(%ebp),%edx
0860d874 +0x1f2:  lea    -0x42c0(%ebp),%eax
0860d87a +0x1f8:  lea    -0x42b8(%ebp),%ecx
0860d880 +0x1fe:  mov    %ecx,0x8(%esp)
0860d884 +0x202:  mov    %edx,0x4(%esp)
0860d888 +0x206:  mov    %eax,(%esp)
0860d88b +0x209:  call   086113a4 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1422>  ; global constructors keyed to Statistics::Statistics()+0x1422
0860d890 +0x20e:  sub    $0x4,%esp
0860d893 +0x211:  mov    $0x1,%eax
0860d898 +0x216:  lea    -0xc(%ebp),%esp
0860d89b +0x219:  add    $0x0,%esp
0860d89e +0x21c:  pop    %ebx
0860d89f +0x21d:  pop    %esi
0860d8a0 +0x21e:  pop    %edi
0860d8a1 +0x21f:  pop    %ebp
0860d8a2 +0x220:  ret
0860d8a3 +0x221:  nop
```

## 反编译 C

```c
// CValueStatistic::AddValueStatistic @ 0x860d682

/* CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int) */

undefined4 __thiscall
CValueStatistic::AddValueStatistic(undefined4 this,int param_2,CUserCharacInfo *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_6428 [2130];
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
  local_42e0 [4];
  cMyTrace local_42dc [16];
  undefined4 local_42cc;
  map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
  local_42c8 [4];
  pair local_42c4 [8];
  pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic> local_42bc [8524];
  ENUM_SERVER_GROUP local_2170 [8524];
  undefined4 local_24;
  int local_20;
  
  if ((-1 < param_2) && (param_2 < 0x1e)) {
    iVar3 = CUserCharacInfo::get_charac_level(param_3);
    if (0 < iVar3) {
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      if (iVar3 < 0x47) {
        bVar1 = false;
        goto LAB_0860d6c8;
      }
    }
  }
  bVar1 = true;
LAB_0860d6c8:
  if (bVar1) {
    uVar4 = CUserCharacInfo::get_charac_level(param_3);
    cMyTrace::cMyTrace(local_42dc,
                       "bool CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)"
                       ,0x306,0);
    cMyTrace::operator()(local_42dc,"VALUE_STATISTIC wrong index (%d,%d)",param_2,uVar4);
    uVar4 = 0;
  }
  else {
    local_42cc = CUser::GetServerGroup((CUser *)param_3);
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::find(local_42e0);
    std::
    map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
    ::end(local_42c8);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
            ::operator!=(local_42e0,(_Rb_tree_iterator *)local_42c8);
    if (cVar2 == '\0') {
      memset(local_6428,0,0x2148);
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      local_6428[iVar3 * 0x1e + param_2] = param_4;
      local_24 = CUser::GetServerGroup((CUser *)param_3);
      std::make_pair<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic&>
                (local_2170,(stValueStatistic *)&local_24);
      std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>::
      pair<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic>(local_42bc,local_2170);
      std::
      map<ENUM_SERVER_GROUP,CValueStatistic::stValueStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>>
      ::insert(local_42c4);
    }
    else {
      local_20 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CValueStatistic::stValueStatistic>>
                 ::operator->(local_42e0);
      local_20 = local_20 + 4;
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      *(int *)(local_20 + (iVar3 * 0x1e + param_2) * 4) =
           *(int *)(local_20 + (iVar3 * 0x1e + param_2) * 4) + param_4;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
