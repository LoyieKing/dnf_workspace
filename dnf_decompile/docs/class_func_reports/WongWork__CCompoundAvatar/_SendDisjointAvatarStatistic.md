# _SendDisjointAvatarStatistic

`_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE`

`WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic(WongWork::CCompoundAvatar::tagCompoundInfo&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333ecc  _ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE
#           WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic(WongWork::CCompoundAvatar::tagCompoundInfo&)
# range [0x08333ecc, 0x08333fd9]
08333ecc +0x000:  push   %ebp
08333ecd +0x001:  mov    %esp,%ebp
08333ecf +0x003:  push   %ebx
08333ed0 +0x004:  sub    $0x54,%esp
08333ed3 +0x007:  lea    -0x3c(%ebp),%eax
08333ed6 +0x00a:  mov    %eax,(%esp)
08333ed9 +0x00d:  call   08110bae <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xc0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xc0
08333ede +0x012:  mov    0xc(%ebp),%eax
08333ee1 +0x015:  mov    0x88(%eax),%eax
08333ee7 +0x01b:  mov    %eax,-0x14(%ebp)
08333eea +0x01e:  mov    0xc(%ebp),%eax
08333eed +0x021:  mov    0x8c(%eax),%eax
08333ef3 +0x027:  mov    %eax,-0x10(%ebp)
08333ef6 +0x02a:  movl   $0x2,-0x32(%ebp)
08333efd +0x031:  movl   $0x0,-0xc(%ebp)
08333f04 +0x038:  mov    -0x14(%ebp),%eax
08333f07 +0x03b:  mov    %eax,(%esp)
08333f0a +0x03e:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08333f0f +0x043:  cmp    $0x2,%eax
08333f12 +0x046:  sete   %al
08333f15 +0x049:  test   %al,%al
08333f17 +0x04b:  je     08333f22 <+0x56>
08333f19 +0x04d:  movl   $0x2,-0xc(%ebp)
08333f20 +0x054:  jmp    08333f33 <+0x67>
08333f22 +0x056:  mov    -0x14(%ebp),%eax
08333f25 +0x059:  mov    %eax,(%esp)
08333f28 +0x05c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08333f2d +0x061:  sub    $0x1,%eax
08333f30 +0x064:  mov    %eax,-0xc(%ebp)
08333f33 +0x067:  mov    -0xc(%ebp),%eax
08333f36 +0x06a:  mov    %eax,-0x2e(%ebp)
08333f39 +0x06d:  mov    -0x14(%ebp),%eax
08333f3c +0x070:  mov    (%eax),%eax
08333f3e +0x072:  add    $0xc,%eax
08333f41 +0x075:  mov    (%eax),%edx
08333f43 +0x077:  mov    -0x14(%ebp),%eax
08333f46 +0x07a:  mov    %eax,(%esp)
08333f49 +0x07d:  call   *%edx
08333f4b +0x07f:  mov    %eax,-0x2a(%ebp)
08333f4e +0x082:  movb   $0x0,-0x26(%ebp)
08333f52 +0x086:  movl   $0x0,-0xc(%ebp)
08333f59 +0x08d:  mov    -0x10(%ebp),%eax
08333f5c +0x090:  mov    %eax,(%esp)
08333f5f +0x093:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08333f64 +0x098:  cmp    $0x2,%eax
08333f67 +0x09b:  sete   %al
08333f6a +0x09e:  test   %al,%al
08333f6c +0x0a0:  je     08333f77 <+0xab>
08333f6e +0x0a2:  movl   $0x2,-0xc(%ebp)
08333f75 +0x0a9:  jmp    08333f88 <+0xbc>
08333f77 +0x0ab:  mov    -0x10(%ebp),%eax
08333f7a +0x0ae:  mov    %eax,(%esp)
08333f7d +0x0b1:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08333f82 +0x0b6:  sub    $0x1,%eax
08333f85 +0x0b9:  mov    %eax,-0xc(%ebp)
08333f88 +0x0bc:  mov    -0xc(%ebp),%eax
08333f8b +0x0bf:  mov    %eax,-0x21(%ebp)
08333f8e +0x0c2:  mov    -0x14(%ebp),%eax
08333f91 +0x0c5:  mov    (%eax),%eax
08333f93 +0x0c7:  add    $0xc,%eax
08333f96 +0x0ca:  mov    (%eax),%edx
08333f98 +0x0cc:  mov    -0x14(%ebp),%eax
08333f9b +0x0cf:  mov    %eax,(%esp)
08333f9e +0x0d2:  call   *%edx
08333fa0 +0x0d4:  mov    %eax,-0x1d(%ebp)
08333fa3 +0x0d7:  movb   $0x0,-0x19(%ebp)
08333fa7 +0x0db:  lea    -0x3c(%ebp),%ebx
08333faa +0x0de:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08333faf +0x0e3:  movl   $0x0,0x4(%esp)
08333fb7 +0x0eb:  mov    %eax,(%esp)
08333fba +0x0ee:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08333fbf +0x0f3:  movl   $0x28,0x8(%esp)
08333fc7 +0x0fb:  mov    %ebx,0x4(%esp)
08333fcb +0x0ff:  mov    %eax,(%esp)
08333fce +0x102:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08333fd3 +0x107:  add    $0x54,%esp
08333fd6 +0x10a:  pop    %ebx
08333fd7 +0x10b:  pop    %ebp
08333fd8 +0x10c:  ret
08333fd9 +0x10d:  nop
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic @ 0x8333ecc

/* WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic(WongWork::CCompoundAvatar::tagCompoundInfo&)
    */

void __thiscall
WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic
          (CCompoundAvatar *this,tagCompoundInfo *param_1)

{
  int iVar1;
  CStatisticServerProxy *this_00;
  Packet_Avater_Disjoint_Statistic local_40 [10];
  undefined4 local_36;
  int local_32;
  undefined4 local_2e;
  undefined1 local_2a;
  int local_25;
  undefined4 local_21;
  undefined1 local_1d;
  CItem *local_18;
  CItem *local_14;
  int local_10;
  
  Packet_Avater_Disjoint_Statistic::Packet_Avater_Disjoint_Statistic(local_40);
  local_18 = *(CItem **)(param_1 + 0x88);
  local_14 = *(CItem **)(param_1 + 0x8c);
  local_36 = 2;
  local_10 = 0;
  iVar1 = CItem::get_rarity(local_18);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(local_18);
    local_10 = local_10 + -1;
  }
  local_32 = local_10;
  local_2e = (**(code **)(*(int *)local_18 + 0xc))(local_18);
  local_2a = 0;
  local_10 = 0;
  iVar1 = CItem::get_rarity(local_14);
  if (iVar1 == 2) {
    local_10 = 2;
  }
  else {
    local_10 = CItem::get_grade(local_14);
    local_10 = local_10 + -1;
  }
  local_25 = local_10;
  local_21 = (**(code **)(*(int *)local_18 + 0xc))(local_18);
  local_1d = 0;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_40,0x28);
  return;
}
```
