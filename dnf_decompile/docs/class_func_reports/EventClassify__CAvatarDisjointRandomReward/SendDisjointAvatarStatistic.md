# SendDisjointAvatarStatistic

`_ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem`

`EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic(CItem const*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f5f4  _ZN13EventClassify27CAvatarDisjointRandomReward27SendDisjointAvatarStatisticEPK5CItem
#           EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic(CItem const*)
# range [0x0810f5f4, 0x0810f693]
0810f5f4 +0x00:  push   %ebp
0810f5f5 +0x01:  mov    %esp,%ebp
0810f5f7 +0x03:  push   %ebx
0810f5f8 +0x04:  sub    $0x44,%esp
0810f5fb +0x07:  lea    -0x34(%ebp),%eax
0810f5fe +0x0a:  mov    %eax,(%esp)
0810f601 +0x0d:  call   08110bae <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xc0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xc0
0810f606 +0x12:  movl   $0x1,-0x2a(%ebp)
0810f60d +0x19:  movl   $0x0,-0xc(%ebp)
0810f614 +0x20:  mov    0xc(%ebp),%eax
0810f617 +0x23:  mov    %eax,(%esp)
0810f61a +0x26:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0810f61f +0x2b:  cmp    $0x2,%eax
0810f622 +0x2e:  sete   %al
0810f625 +0x31:  test   %al,%al
0810f627 +0x33:  je     0810f632 <+0x3e>
0810f629 +0x35:  movl   $0x2,-0xc(%ebp)
0810f630 +0x3c:  jmp    0810f643 <+0x4f>
0810f632 +0x3e:  mov    0xc(%ebp),%eax
0810f635 +0x41:  mov    %eax,(%esp)
0810f638 +0x44:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0810f63d +0x49:  sub    $0x1,%eax
0810f640 +0x4c:  mov    %eax,-0xc(%ebp)
0810f643 +0x4f:  mov    -0xc(%ebp),%eax
0810f646 +0x52:  mov    %eax,-0x26(%ebp)
0810f649 +0x55:  mov    0xc(%ebp),%eax
0810f64c +0x58:  mov    (%eax),%eax
0810f64e +0x5a:  add    $0xc,%eax
0810f651 +0x5d:  mov    (%eax),%edx
0810f653 +0x5f:  mov    0xc(%ebp),%eax
0810f656 +0x62:  mov    %eax,(%esp)
0810f659 +0x65:  call   *%edx
0810f65b +0x67:  mov    %eax,-0x22(%ebp)
0810f65e +0x6a:  movb   $0x1,-0x1e(%ebp)
0810f662 +0x6e:  lea    -0x34(%ebp),%ebx
0810f665 +0x71:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0810f66a +0x76:  movl   $0x0,0x4(%esp)
0810f672 +0x7e:  mov    %eax,(%esp)
0810f675 +0x81:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0810f67a +0x86:  movl   $0x28,0x8(%esp)
0810f682 +0x8e:  mov    %ebx,0x4(%esp)
0810f686 +0x92:  mov    %eax,(%esp)
0810f689 +0x95:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0810f68e +0x9a:  add    $0x44,%esp
0810f691 +0x9d:  pop    %ebx
0810f692 +0x9e:  pop    %ebp
0810f693 +0x9f:  ret
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic @ 0x810f5f4

/* EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic(CItem const*) */

void __thiscall
EventClassify::CAvatarDisjointRandomReward::SendDisjointAvatarStatistic
          (CAvatarDisjointRandomReward *this,CItem *param_1)

{
  int iVar1;
  CStatisticServerProxy *this_00;
  Packet_Avater_Disjoint_Statistic local_38 [10];
  undefined4 local_2e;
  int local_2a;
  undefined4 local_26;
  undefined1 local_22;
  int local_10;
  
  Packet_Avater_Disjoint_Statistic::Packet_Avater_Disjoint_Statistic(local_38);
  local_2e = 1;
  local_10 = 0;
  iVar1 = CItem::get_rarity(param_1);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(param_1);
    local_10 = local_10 + -1;
  }
  local_2a = local_10;
  local_26 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
  local_22 = 1;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_38,0x28);
  return;
}
```
