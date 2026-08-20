# AddCirculationStatistic

`_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj`

`CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CCirculationStatistic` | `0x0860daaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860daaa  _ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj
#           CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
# range [0x0860daaa, 0x0860dccb]
0860daaa +0x000:  push   %ebp
0860daab +0x001:  mov    %esp,%ebp
0860daad +0x003:  push   %edi
0860daae +0x004:  push   %esi
0860daaf +0x005:  push   %ebx
0860dab0 +0x006:  sub    $0xa01c,%esp
0860dab6 +0x00c:  mov    0xc(%ebp),%eax
0860dab9 +0x00f:  test   %eax,%eax
0860dabb +0x011:  js     0860dae4 <+0x3a>
0860dabd +0x013:  mov    0xc(%ebp),%eax
0860dac0 +0x016:  cmp    $0x2f,%eax
0860dac3 +0x019:  jg     0860dae4 <+0x3a>
0860dac5 +0x01b:  mov    0x10(%ebp),%eax
0860dac8 +0x01e:  mov    %eax,(%esp)
0860dacb +0x021:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860dad0 +0x026:  test   %eax,%eax
0860dad2 +0x028:  jle    0860dae4 <+0x3a>
0860dad4 +0x02a:  mov    0x10(%ebp),%eax
0860dad7 +0x02d:  mov    %eax,(%esp)
0860dada +0x030:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860dadf +0x035:  cmp    $0x46,%eax
0860dae2 +0x038:  jle    0860daeb <+0x41>
0860dae4 +0x03a:  mov    $0x1,%eax
0860dae9 +0x03f:  jmp    0860daf0 <+0x46>
0860daeb +0x041:  mov    $0x0,%eax
0860daf0 +0x046:  test   %al,%al
0860daf2 +0x048:  je     0860db52 <+0xa8>
0860daf4 +0x04a:  mov    0x10(%ebp),%eax
0860daf7 +0x04d:  mov    %eax,(%esp)
0860dafa +0x050:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860daff +0x055:  mov    %eax,%ebx
0860db01 +0x057:  mov    0xc(%ebp),%esi
0860db04 +0x05a:  movl   $0x0,0xc(%esp)
0860db0c +0x062:  movl   $0x39b,0x8(%esp)
0860db14 +0x06a:  movl   $&_ZZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserjE19__PRETTY_FUNCTION__,0x4(%esp)
0860db1c +0x072:  lea    -0x6ac8(%ebp),%eax
0860db22 +0x078:  mov    %eax,(%esp)
0860db25 +0x07b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0860db2a +0x080:  mov    %ebx,0xc(%esp)
0860db2e +0x084:  mov    %esi,0x8(%esp)
0860db32 +0x088:  movl   $"CIRCULATION_STATISTIC wrong index (%d,%d)",0x4(%esp)
0860db3a +0x090:  lea    -0x6ac8(%ebp),%eax
0860db40 +0x096:  mov    %eax,(%esp)
0860db43 +0x099:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0860db48 +0x09e:  mov    $0x0,%eax
0860db4d +0x0a3:  jmp    0860dcc1 <+0x217>
0860db52 +0x0a8:  mov    0x10(%ebp),%eax
0860db55 +0x0ab:  mov    %eax,(%esp)
0860db58 +0x0ae:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860db5d +0x0b3:  mov    %eax,-0x6ab8(%ebp)
0860db63 +0x0b9:  mov    0x8(%ebp),%edx
0860db66 +0x0bc:  lea    -0x6acc(%ebp),%eax
0860db6c +0x0c2:  lea    -0x6ab8(%ebp),%ecx
0860db72 +0x0c8:  mov    %ecx,0x8(%esp)
0860db76 +0x0cc:  mov    %edx,0x4(%esp)
0860db7a +0x0d0:  mov    %eax,(%esp)
0860db7d +0x0d3:  call   08611414 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1492>  ; global constructors keyed to Statistics::Statistics()+0x1492
0860db82 +0x0d8:  sub    $0x4,%esp
0860db85 +0x0db:  mov    0x8(%ebp),%edx
0860db88 +0x0de:  lea    -0x6ab4(%ebp),%eax
0860db8e +0x0e4:  mov    %edx,0x4(%esp)
0860db92 +0x0e8:  mov    %eax,(%esp)
0860db95 +0x0eb:  call   08611440 <_GLOBAL__I__ZN10StatisticsC2Ev+0x14be>  ; global constructors keyed to Statistics::Statistics()+0x14be
0860db9a +0x0f0:  sub    $0x4,%esp
0860db9d +0x0f3:  lea    -0x6ab4(%ebp),%eax
0860dba3 +0x0f9:  mov    %eax,0x4(%esp)
0860dba7 +0x0fd:  lea    -0x6acc(%ebp),%eax
0860dbad +0x103:  mov    %eax,(%esp)
0860dbb0 +0x106:  call   08611466 <_GLOBAL__I__ZN10StatisticsC2Ev+0x14e4>  ; global constructors keyed to Statistics::Statistics()+0x14e4
0860dbb5 +0x10b:  test   %al,%al
0860dbb7 +0x10d:  je     0860dc0e <+0x164>
0860dbb9 +0x10f:  lea    -0x6acc(%ebp),%eax
0860dbbf +0x115:  mov    %eax,(%esp)
0860dbc2 +0x118:  call   0861147a <_GLOBAL__I__ZN10StatisticsC2Ev+0x14f8>  ; global constructors keyed to Statistics::Statistics()+0x14f8
0860dbc7 +0x11d:  add    $0x4,%eax
0860dbca +0x120:  mov    %eax,-0x1c(%ebp)
0860dbcd +0x123:  mov    0x10(%ebp),%eax
0860dbd0 +0x126:  mov    %eax,(%esp)
0860dbd3 +0x129:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860dbd8 +0x12e:  mov    %eax,%edx
0860dbda +0x130:  mov    0xc(%ebp),%esi
0860dbdd +0x133:  mov    %eax,%ecx
0860dbdf +0x135:  mov    0xc(%ebp),%edi
0860dbe2 +0x138:  mov    -0x1c(%ebp),%ebx
0860dbe5 +0x13b:  mov    %ecx,%eax
0860dbe7 +0x13d:  add    %eax,%eax
0860dbe9 +0x13f:  add    %ecx,%eax
0860dbeb +0x141:  shl    $0x4,%eax
0860dbee +0x144:  add    %edi,%eax
0860dbf0 +0x146:  mov    (%ebx,%eax,4),%eax
0860dbf3 +0x149:  mov    %eax,%ebx
0860dbf5 +0x14b:  add    0x14(%ebp),%ebx
0860dbf8 +0x14e:  mov    -0x1c(%ebp),%ecx
0860dbfb +0x151:  mov    %edx,%eax
0860dbfd +0x153:  add    %eax,%eax
0860dbff +0x155:  add    %edx,%eax
0860dc01 +0x157:  shl    $0x4,%eax
0860dc04 +0x15a:  add    %esi,%eax
0860dc06 +0x15c:  mov    %ebx,(%ecx,%eax,4)
0860dc09 +0x15f:  jmp    0860dcbc <+0x212>
0860dc0e +0x164:  movl   $0x3540,0x8(%esp)
0860dc16 +0x16c:  movl   $0x0,0x4(%esp)
0860dc1e +0x174:  lea    -0xa00c(%ebp),%eax
0860dc24 +0x17a:  mov    %eax,(%esp)
0860dc27 +0x17d:  call   0807dcc0 <_init+0x5b8>
0860dc2c +0x182:  mov    0x10(%ebp),%eax
0860dc2f +0x185:  mov    %eax,(%esp)
0860dc32 +0x188:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0860dc37 +0x18d:  mov    %eax,%edx
0860dc39 +0x18f:  mov    0xc(%ebp),%ecx
0860dc3c +0x192:  mov    %edx,%eax
0860dc3e +0x194:  add    %eax,%eax
0860dc40 +0x196:  add    %edx,%eax
0860dc42 +0x198:  shl    $0x4,%eax
0860dc45 +0x19b:  lea    (%eax,%ecx,1),%edx
0860dc48 +0x19e:  mov    0x14(%ebp),%eax
0860dc4b +0x1a1:  mov    %eax,-0xa00c(%ebp,%edx,4)
0860dc52 +0x1a8:  mov    0x10(%ebp),%eax
0860dc55 +0x1ab:  mov    %eax,(%esp)
0860dc58 +0x1ae:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0860dc5d +0x1b3:  mov    %eax,-0x20(%ebp)
0860dc60 +0x1b6:  lea    -0x3564(%ebp),%eax
0860dc66 +0x1bc:  lea    -0xa00c(%ebp),%edx
0860dc6c +0x1c2:  mov    %edx,0x8(%esp)
0860dc70 +0x1c6:  lea    -0x20(%ebp),%edx
0860dc73 +0x1c9:  mov    %edx,0x4(%esp)
0860dc77 +0x1cd:  mov    %eax,(%esp)
0860dc7a +0x1d0:  call   08611487 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1505>  ; global constructors keyed to Statistics::Statistics()+0x1505
0860dc7f +0x1d5:  sub    $0x4,%esp
0860dc82 +0x1d8:  lea    -0x3564(%ebp),%eax
0860dc88 +0x1de:  mov    %eax,0x4(%esp)
0860dc8c +0x1e2:  lea    -0x6aa8(%ebp),%eax
0860dc92 +0x1e8:  mov    %eax,(%esp)
0860dc95 +0x1eb:  call   086114ce <_GLOBAL__I__ZN10StatisticsC2Ev+0x154c>  ; global constructors keyed to Statistics::Statistics()+0x154c
0860dc9a +0x1f0:  mov    0x8(%ebp),%edx
0860dc9d +0x1f3:  lea    -0x6ab0(%ebp),%eax
0860dca3 +0x1f9:  lea    -0x6aa8(%ebp),%ecx
0860dca9 +0x1ff:  mov    %ecx,0x8(%esp)
0860dcad +0x203:  mov    %edx,0x4(%esp)
0860dcb1 +0x207:  mov    %eax,(%esp)
0860dcb4 +0x20a:  call   08611512 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1590>  ; global constructors keyed to Statistics::Statistics()+0x1590
0860dcb9 +0x20f:  sub    $0x4,%esp
0860dcbc +0x212:  mov    $0x1,%eax
0860dcc1 +0x217:  lea    -0xc(%ebp),%esp
0860dcc4 +0x21a:  add    $0x0,%esp
0860dcc7 +0x21d:  pop    %ebx
0860dcc8 +0x21e:  pop    %esi
0860dcc9 +0x21f:  pop    %edi
0860dcca +0x220:  pop    %ebp
0860dccb +0x221:  ret
```

## 反编译 C

```c
// CCirculationStatistic::AddCirculationStatistic @ 0x860daaa

/* CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
    */

undefined4 __thiscall
CCirculationStatistic::AddCirculationStatistic
          (undefined4 this,int param_2,CUserCharacInfo *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_a010 [3408];
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
  local_6ad0 [4];
  cMyTrace local_6acc [16];
  undefined4 local_6abc;
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_6ab8 [4];
  pair local_6ab4 [8];
  pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic> local_6aac [13636];
  ENUM_SERVER_GROUP local_3568 [13636];
  undefined4 local_24;
  int local_20;
  
  if ((-1 < param_2) && (param_2 < 0x30)) {
    iVar3 = CUserCharacInfo::get_charac_level(param_3);
    if (0 < iVar3) {
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      if (iVar3 < 0x47) {
        bVar1 = false;
        goto LAB_0860daf0;
      }
    }
  }
  bVar1 = true;
LAB_0860daf0:
  if (bVar1) {
    uVar4 = CUserCharacInfo::get_charac_level(param_3);
    cMyTrace::cMyTrace(local_6acc,
                       "bool CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)"
                       ,0x39b,0);
    cMyTrace::operator()(local_6acc,"CIRCULATION_STATISTIC wrong index (%d,%d)",param_2,uVar4);
    uVar4 = 0;
  }
  else {
    local_6abc = CUser::GetServerGroup((CUser *)param_3);
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::find(local_6ad0);
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::end(local_6ab8);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator!=(local_6ad0,(_Rb_tree_iterator *)local_6ab8);
    if (cVar2 == '\0') {
      memset(local_a010,0,0x3540);
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      local_a010[iVar3 * 0x30 + param_2] = param_4;
      local_24 = CUser::GetServerGroup((CUser *)param_3);
      std::make_pair<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic&>
                (local_3568,(stCirculationStatistic *)&local_24);
      std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>::
      pair<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic>(local_6aac,local_3568);
      std::
      map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
      ::insert(local_6ab4);
    }
    else {
      local_20 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                 ::operator->(local_6ad0);
      local_20 = local_20 + 4;
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      *(int *)(local_20 + (iVar3 * 0x30 + param_2) * 4) =
           *(int *)(local_20 + (iVar3 * 0x30 + param_2) * 4) + param_4;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
