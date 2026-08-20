# StatisticsAvatarDisjoint

`_ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi`

`AvatarConvertServer::StatisticsAvatarDisjoint(CItem const*, int)`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x08193136` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08193136  _ZN19AvatarConvertServer24StatisticsAvatarDisjointEPK5CItemi
#           AvatarConvertServer::StatisticsAvatarDisjoint(CItem const*, int)
# range [0x08193136, 0x081931db]
08193136 +0x00:  push   %ebp
08193137 +0x01:  mov    %esp,%ebp
08193139 +0x03:  push   %ebx
0819313a +0x04:  sub    $0x44,%esp
0819313d +0x07:  lea    -0x34(%ebp),%eax
08193140 +0x0a:  mov    %eax,(%esp)
08193143 +0x0d:  call   08110bae <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xc0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xc0
08193148 +0x12:  movl   $0x1,-0x2a(%ebp)
0819314f +0x19:  movl   $0x0,-0xc(%ebp)
08193156 +0x20:  mov    0x8(%ebp),%eax
08193159 +0x23:  mov    %eax,(%esp)
0819315c +0x26:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08193161 +0x2b:  cmp    $0x2,%eax
08193164 +0x2e:  sete   %al
08193167 +0x31:  test   %al,%al
08193169 +0x33:  je     08193174 <+0x3e>
0819316b +0x35:  movl   $0x2,-0xc(%ebp)
08193172 +0x3c:  jmp    08193185 <+0x4f>
08193174 +0x3e:  mov    0x8(%ebp),%eax
08193177 +0x41:  mov    %eax,(%esp)
0819317a +0x44:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0819317f +0x49:  sub    $0x1,%eax
08193182 +0x4c:  mov    %eax,-0xc(%ebp)
08193185 +0x4f:  mov    -0xc(%ebp),%eax
08193188 +0x52:  mov    %eax,-0x26(%ebp)
0819318b +0x55:  mov    0x8(%ebp),%eax
0819318e +0x58:  mov    (%eax),%eax
08193190 +0x5a:  add    $0xc,%eax
08193193 +0x5d:  mov    (%eax),%edx
08193195 +0x5f:  mov    0x8(%ebp),%eax
08193198 +0x62:  mov    %eax,(%esp)
0819319b +0x65:  call   *%edx
0819319d +0x67:  mov    %eax,-0x22(%ebp)
081931a0 +0x6a:  movb   $0x1,-0x1e(%ebp)
081931a4 +0x6e:  mov    0xc(%ebp),%eax
081931a7 +0x71:  mov    %eax,-0x1d(%ebp)
081931aa +0x74:  lea    -0x34(%ebp),%ebx
081931ad +0x77:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
081931b2 +0x7c:  movl   $0x0,0x4(%esp)
081931ba +0x84:  mov    %eax,(%esp)
081931bd +0x87:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
081931c2 +0x8c:  movl   $0x28,0x8(%esp)
081931ca +0x94:  mov    %ebx,0x4(%esp)
081931ce +0x98:  mov    %eax,(%esp)
081931d1 +0x9b:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
081931d6 +0xa0:  add    $0x44,%esp
081931d9 +0xa3:  pop    %ebx
081931da +0xa4:  pop    %ebp
081931db +0xa5:  ret
```

## 反编译 C

```c
// AvatarConvertServer::StatisticsAvatarDisjoint @ 0x8193136

/* AvatarConvertServer::StatisticsAvatarDisjoint(CItem const*, int) */

void AvatarConvertServer::StatisticsAvatarDisjoint(CItem *param_1,int param_2)

{
  int iVar1;
  CStatisticServerProxy *this;
  Packet_Avater_Disjoint_Statistic local_38 [10];
  undefined4 local_2e;
  int local_2a;
  undefined4 local_26;
  undefined1 local_22;
  int local_21;
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
  local_21 = param_2;
  this = (CStatisticServerProxy *)
         CServerProxyMgr<CStatisticServerProxy>::GetServerProxy(GlobalData::s_statistic_proxy_mgr,0)
  ;
  CStatisticServerProxy::SendPacket(this,(char *)local_38,0x28);
  return;
}
```
