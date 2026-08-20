# InsertCirculationStatistic

`_ZN21CCirculationStatistic26InsertCirculationStatisticEv`

`CCirculationStatistic::InsertCirculationStatistic()`

| 类 | 地址 |
|---|---|
| `CCirculationStatistic` | `0x0860dccc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860dccc  _ZN21CCirculationStatistic26InsertCirculationStatisticEv
#           CCirculationStatistic::InsertCirculationStatistic()
# range [0x0860dccc, 0x0860de4f]
0860dccc +0x000:  push   %ebp
0860dccd +0x001:  mov    %esp,%ebp
0860dccf +0x003:  push   %ebx
0860dcd0 +0x004:  sub    $0x104,%esp
0860dcd6 +0x00a:  mov    0x8(%ebp),%edx
0860dcd9 +0x00d:  lea    -0x24(%ebp),%eax
0860dcdc +0x010:  mov    %edx,0x4(%esp)
0860dce0 +0x014:  mov    %eax,(%esp)
0860dce3 +0x017:  call   0861153e <_GLOBAL__I__ZN10StatisticsC2Ev+0x15bc>  ; global constructors keyed to Statistics::Statistics()+0x15bc
0860dce8 +0x01c:  sub    $0x4,%esp
0860dceb +0x01f:  jmp    0860de17 <+0x14b>
0860dcf0 +0x024:  lea    -0x24(%ebp),%eax
0860dcf3 +0x027:  mov    %eax,(%esp)
0860dcf6 +0x02a:  call   0861147a <_GLOBAL__I__ZN10StatisticsC2Ev+0x14f8>  ; global constructors keyed to Statistics::Statistics()+0x14f8
0860dcfb +0x02f:  mov    (%eax),%eax
0860dcfd +0x031:  mov    %eax,-0x1c(%ebp)
0860dd00 +0x034:  lea    -0x24(%ebp),%eax
0860dd03 +0x037:  mov    %eax,(%esp)
0860dd06 +0x03a:  call   0861147a <_GLOBAL__I__ZN10StatisticsC2Ev+0x14f8>  ; global constructors keyed to Statistics::Statistics()+0x14f8
0860dd0b +0x03f:  add    $0x4,%eax
0860dd0e +0x042:  mov    %eax,-0x18(%ebp)
0860dd11 +0x045:  movl   $0x1,-0x14(%ebp)
0860dd18 +0x04c:  jmp    0860ddf2 <+0x126>
0860dd1d +0x051:  movb   $0x0,-0xd(%ebp)
0860dd21 +0x055:  movl   $0x0,-0xc(%ebp)
0860dd28 +0x05c:  jmp    0860dd4f <+0x83>
0860dd2a +0x05e:  mov    -0x14(%ebp),%edx
0860dd2d +0x061:  mov    -0xc(%ebp),%ebx
0860dd30 +0x064:  mov    -0x18(%ebp),%ecx
0860dd33 +0x067:  mov    %edx,%eax
0860dd35 +0x069:  add    %eax,%eax
0860dd37 +0x06b:  add    %edx,%eax
0860dd39 +0x06d:  shl    $0x4,%eax
0860dd3c +0x070:  add    %ebx,%eax
0860dd3e +0x072:  mov    (%ecx,%eax,4),%eax
0860dd41 +0x075:  test   %eax,%eax
0860dd43 +0x077:  je     0860dd4b <+0x7f>
0860dd45 +0x079:  movb   $0x1,-0xd(%ebp)
0860dd49 +0x07d:  jmp    0860dd5a <+0x8e>
0860dd4b +0x07f:  addl   $0x1,-0xc(%ebp)
0860dd4f +0x083:  cmpl   $0x2f,-0xc(%ebp)
0860dd53 +0x087:  setle  %al
0860dd56 +0x08a:  test   %al,%al
0860dd58 +0x08c:  jne    0860dd2a <+0x5e>
0860dd5a +0x08e:  movzbl -0xd(%ebp),%eax
0860dd5e +0x092:  xor    $0x1,%eax
0860dd61 +0x095:  test   %al,%al
0860dd63 +0x097:  jne    0860dded <+0x121>
0860dd69 +0x09d:  lea    -0xf4(%ebp),%eax
0860dd6f +0x0a3:  mov    %eax,(%esp)
0860dd72 +0x0a6:  call   086100f8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x176>  ; global constructors keyed to Statistics::Statistics()+0x176
0860dd77 +0x0ab:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0860dd7c +0x0b0:  mov    %eax,(%esp)
0860dd7f +0x0b3:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0860dd84 +0x0b8:  mov    %ax,-0x26(%ebp)
0860dd88 +0x0bc:  mov    -0x14(%ebp),%eax
0860dd8b +0x0bf:  mov    %eax,-0xea(%ebp)
0860dd91 +0x0c5:  mov    -0x14(%ebp),%edx
0860dd94 +0x0c8:  mov    %edx,%eax
0860dd96 +0x0ca:  add    %eax,%eax
0860dd98 +0x0cc:  add    %edx,%eax
0860dd9a +0x0ce:  shl    $0x6,%eax
0860dd9d +0x0d1:  add    -0x18(%ebp),%eax
0860dda0 +0x0d4:  movl   $0xc0,0x8(%esp)
0860dda8 +0x0dc:  mov    %eax,0x4(%esp)
0860ddac +0x0e0:  lea    -0xf4(%ebp),%eax
0860ddb2 +0x0e6:  add    $0xe,%eax
0860ddb5 +0x0e9:  mov    %eax,(%esp)
0860ddb8 +0x0ec:  call   0807d8a0 <_init+0x198>
0860ddbd +0x0f1:  lea    -0xf4(%ebp),%ebx
0860ddc3 +0x0f7:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860ddc8 +0x0fc:  mov    -0x1c(%ebp),%edx
0860ddcb +0x0ff:  mov    %edx,0x4(%esp)
0860ddcf +0x103:  mov    %eax,(%esp)
0860ddd2 +0x106:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860ddd7 +0x10b:  movl   $0xd0,0x8(%esp)
0860dddf +0x113:  mov    %ebx,0x4(%esp)
0860dde3 +0x117:  mov    %eax,(%esp)
0860dde6 +0x11a:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860ddeb +0x11f:  jmp    0860ddee <+0x122>
0860dded +0x121:  nop
0860ddee +0x122:  addl   $0x1,-0x14(%ebp)
0860ddf2 +0x126:  cmpl   $0x46,-0x14(%ebp)
0860ddf6 +0x12a:  setle  %al
0860ddf9 +0x12d:  test   %al,%al
0860ddfb +0x12f:  jne    0860dd1d <+0x51>
0860de01 +0x135:  mov    -0x18(%ebp),%eax
0860de04 +0x138:  mov    %eax,(%esp)
0860de07 +0x13b:  call   0861036c <_GLOBAL__I__ZN10StatisticsC2Ev+0x3ea>  ; global constructors keyed to Statistics::Statistics()+0x3ea
0860de0c +0x140:  lea    -0x24(%ebp),%eax
0860de0f +0x143:  mov    %eax,(%esp)
0860de12 +0x146:  call   08611564 <_GLOBAL__I__ZN10StatisticsC2Ev+0x15e2>  ; global constructors keyed to Statistics::Statistics()+0x15e2
0860de17 +0x14b:  mov    0x8(%ebp),%edx
0860de1a +0x14e:  lea    -0x20(%ebp),%eax
0860de1d +0x151:  mov    %edx,0x4(%esp)
0860de21 +0x155:  mov    %eax,(%esp)
0860de24 +0x158:  call   08611440 <_GLOBAL__I__ZN10StatisticsC2Ev+0x14be>  ; global constructors keyed to Statistics::Statistics()+0x14be
0860de29 +0x15d:  sub    $0x4,%esp
0860de2c +0x160:  lea    -0x20(%ebp),%eax
0860de2f +0x163:  mov    %eax,0x4(%esp)
0860de33 +0x167:  lea    -0x24(%ebp),%eax
0860de36 +0x16a:  mov    %eax,(%esp)
0860de39 +0x16d:  call   08611466 <_GLOBAL__I__ZN10StatisticsC2Ev+0x14e4>  ; global constructors keyed to Statistics::Statistics()+0x14e4
0860de3e +0x172:  test   %al,%al
0860de40 +0x174:  jne    0860dcf0 <+0x24>
0860de46 +0x17a:  mov    $0x1,%eax
0860de4b +0x17f:  mov    -0x4(%ebp),%ebx
0860de4e +0x182:  leave
0860de4f +0x183:  ret
```

## 反编译 C

```c
// CCirculationStatistic::InsertCirculationStatistic @ 0x860dccc

/* CCirculationStatistic::InsertCirculationStatistic() */

undefined4 CCirculationStatistic::InsertCirculationStatistic(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  CEnvironment *this;
  CStatisticServerProxy *this_00;
  Packet_Circulation_Statistic local_f8 [10];
  int local_ee;
  undefined1 auStack_ea [192];
  undefined2 local_2a;
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_28 [4];
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_24 [4];
  undefined4 local_20;
  stCirculationStatistic *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  std::
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  ::begin(local_28);
  do {
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::
             _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
             ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                           *)local_28);
    local_20 = *puVar2;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                          *)local_28);
    local_1c = (stCirculationStatistic *)(iVar3 + 4);
    for (local_18 = 1; local_18 < 0x47; local_18 = local_18 + 1) {
      local_11 = '\0';
      for (local_10 = 0; local_10 < 0x30; local_10 = local_10 + 1) {
        if (*(int *)(local_1c + (local_18 * 0x30 + local_10) * 4) != 0) {
          local_11 = '\x01';
          break;
        }
      }
      if (local_11 == '\x01') {
        Packet_Circulation_Statistic::Packet_Circulation_Statistic(local_f8);
        this = (CEnvironment *)G_CEnvironment();
        local_2a = CEnvironment::get_channel_no(this);
        local_ee = local_18;
        memcpy(auStack_ea,local_1c + local_18 * 0xc0,0xc0);
        this_00 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,local_20);
        CStatisticServerProxy::SendPacket(this_00,(char *)local_f8,0xd0);
      }
    }
    stCirculationStatistic::reset(local_1c);
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                  *)local_28);
  } while( true );
}
```
