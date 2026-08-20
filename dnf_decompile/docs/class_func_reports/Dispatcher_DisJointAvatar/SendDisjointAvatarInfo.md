# SendDisjointAvatarInfo

`_ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem`

`Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(CItem const*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x08218996` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08218996  _ZN25Dispatcher_DisJointAvatar22SendDisjointAvatarInfoEPK5CItem
#           Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(CItem const*)
# range [0x08218996, 0x08218a35]
08218996 +0x00:  push   %ebp
08218997 +0x01:  mov    %esp,%ebp
08218999 +0x03:  push   %ebx
0821899a +0x04:  sub    $0x44,%esp
0821899d +0x07:  lea    -0x34(%ebp),%eax
082189a0 +0x0a:  mov    %eax,(%esp)
082189a3 +0x0d:  call   08110bae <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xc0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xc0
082189a8 +0x12:  movl   $0x1,-0x2a(%ebp)
082189af +0x19:  movl   $0x0,-0xc(%ebp)
082189b6 +0x20:  mov    0xc(%ebp),%eax
082189b9 +0x23:  mov    %eax,(%esp)
082189bc +0x26:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
082189c1 +0x2b:  cmp    $0x2,%eax
082189c4 +0x2e:  sete   %al
082189c7 +0x31:  test   %al,%al
082189c9 +0x33:  je     082189d4 <+0x3e>
082189cb +0x35:  movl   $0x2,-0xc(%ebp)
082189d2 +0x3c:  jmp    082189e5 <+0x4f>
082189d4 +0x3e:  mov    0xc(%ebp),%eax
082189d7 +0x41:  mov    %eax,(%esp)
082189da +0x44:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
082189df +0x49:  sub    $0x1,%eax
082189e2 +0x4c:  mov    %eax,-0xc(%ebp)
082189e5 +0x4f:  mov    -0xc(%ebp),%eax
082189e8 +0x52:  mov    %eax,-0x26(%ebp)
082189eb +0x55:  mov    0xc(%ebp),%eax
082189ee +0x58:  mov    (%eax),%eax
082189f0 +0x5a:  add    $0xc,%eax
082189f3 +0x5d:  mov    (%eax),%edx
082189f5 +0x5f:  mov    0xc(%ebp),%eax
082189f8 +0x62:  mov    %eax,(%esp)
082189fb +0x65:  call   *%edx
082189fd +0x67:  mov    %eax,-0x22(%ebp)
08218a00 +0x6a:  movb   $0x1,-0x1e(%ebp)
08218a04 +0x6e:  lea    -0x34(%ebp),%ebx
08218a07 +0x71:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08218a0c +0x76:  movl   $0x0,0x4(%esp)
08218a14 +0x7e:  mov    %eax,(%esp)
08218a17 +0x81:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08218a1c +0x86:  movl   $0x28,0x8(%esp)
08218a24 +0x8e:  mov    %ebx,0x4(%esp)
08218a28 +0x92:  mov    %eax,(%esp)
08218a2b +0x95:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08218a30 +0x9a:  add    $0x44,%esp
08218a33 +0x9d:  pop    %ebx
08218a34 +0x9e:  pop    %ebp
08218a35 +0x9f:  ret
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::SendDisjointAvatarInfo @ 0x8218996

/* Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(CItem const*) */

void __thiscall
Dispatcher_DisJointAvatar::SendDisjointAvatarInfo(Dispatcher_DisJointAvatar *this,CItem *param_1)

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
