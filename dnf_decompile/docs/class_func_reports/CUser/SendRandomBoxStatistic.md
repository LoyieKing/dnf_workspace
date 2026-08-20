# SendRandomBoxStatistic

`_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND`

`CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676826` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676826  _ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND
#           CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
# range [0x08676826, 0x08676875]
08676826 +0x00:  push   %ebp
08676827 +0x01:  mov    %esp,%ebp
08676829 +0x03:  push   %ebx
0867682a +0x04:  sub    $0x24,%esp
0867682d +0x07:  lea    -0x14(%ebp),%eax
08676830 +0x0a:  mov    %eax,(%esp)
08676833 +0x0d:  call   086945a2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xdf7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xdf7
08676838 +0x12:  mov    0x8(%ebp),%eax
0867683b +0x15:  mov    %al,-0xa(%ebp)
0867683e +0x18:  mov    0xc(%ebp),%eax
08676841 +0x1b:  mov    %al,-0x9(%ebp)
08676844 +0x1e:  lea    -0x14(%ebp),%ebx
08676847 +0x21:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0867684c +0x26:  movl   $0x0,0x4(%esp)
08676854 +0x2e:  mov    %eax,(%esp)
08676857 +0x31:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0867685c +0x36:  movl   $0xc,0x8(%esp)
08676864 +0x3e:  mov    %ebx,0x4(%esp)
08676868 +0x42:  mov    %eax,(%esp)
0867686b +0x45:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08676870 +0x4a:  add    $0x24,%esp
08676873 +0x4d:  pop    %ebx
08676874 +0x4e:  pop    %ebp
08676875 +0x4f:  ret
```

## 反编译 C

```c
// CUser::SendRandomBoxStatistic @ 0x8676826

/* CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND) */

void CUser::SendRandomBoxStatistic(undefined1 param_1,undefined1 param_2)

{
  CStatisticServerProxy *this;
  Packet_Randombox_statistic local_18 [10];
  undefined1 local_e;
  undefined1 local_d;
  
  Packet_Randombox_statistic::Packet_Randombox_statistic(local_18);
  local_e = param_1;
  local_d = param_2;
  this = (CStatisticServerProxy *)
         CServerProxyMgr<CStatisticServerProxy>::GetServerProxy(GlobalData::s_statistic_proxy_mgr,0)
  ;
  CStatisticServerProxy::SendPacket(this,(char *)local_18,0xc);
  return;
}
```
