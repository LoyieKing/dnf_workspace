# SendRequestOnTimeEventReward

`_ZN19CMonitorServerProxy28SendRequestOnTimeEventRewardEjjj`

`CMonitorServerProxy::SendRequestOnTimeEventReward(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x084711fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084711fe  _ZN19CMonitorServerProxy28SendRequestOnTimeEventRewardEjjj
#           CMonitorServerProxy::SendRequestOnTimeEventReward(unsigned int, unsigned int, unsigned int)
# range [0x084711fe, 0x0847123f]
084711fe +0x00:  push   %ebp
084711ff +0x01:  mov    %esp,%ebp
08471201 +0x03:  sub    $0x38,%esp
08471204 +0x06:  lea    -0x1e(%ebp),%eax
08471207 +0x09:  mov    %eax,(%esp)
0847120a +0x0c:  call   084716fa <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x154>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x154
0847120f +0x11:  mov    0xc(%ebp),%eax
08471212 +0x14:  mov    %eax,-0x14(%ebp)
08471215 +0x17:  mov    0x10(%ebp),%eax
08471218 +0x1a:  mov    %eax,-0x10(%ebp)
0847121b +0x1d:  mov    0x14(%ebp),%eax
0847121e +0x20:  mov    %eax,-0xc(%ebp)
08471221 +0x23:  movzwl -0x1c(%ebp),%eax
08471225 +0x27:  movzwl %ax,%edx
08471228 +0x2a:  lea    -0x1e(%ebp),%eax
0847122b +0x2d:  mov    %edx,0x8(%esp)
0847122f +0x31:  mov    %eax,0x4(%esp)
08471233 +0x35:  mov    0x8(%ebp),%eax
08471236 +0x38:  mov    %eax,(%esp)
08471239 +0x3b:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
0847123e +0x40:  leave
0847123f +0x41:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendRequestOnTimeEventReward @ 0x84711fe

/* CMonitorServerProxy::SendRequestOnTimeEventReward(unsigned int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendRequestOnTimeEventReward
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3)

{
  Packet_GTM_OntimeEvent_RequestReward local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_GTM_OntimeEvent_RequestReward::Packet_GTM_OntimeEvent_RequestReward(local_22);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendPacket(this,(char *)local_22,(uint)local_20);
  return;
}
```
