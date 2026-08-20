# updateTowerRank

`_ZN19CMonitorServerProxy15updateTowerRankEjjjj`

`CMonitorServerProxy::updateTowerRank(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08471240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471240  _ZN19CMonitorServerProxy15updateTowerRankEjjjj
#           CMonitorServerProxy::updateTowerRank(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x08471240, 0x08471287]
08471240 +0x00:  push   %ebp
08471241 +0x01:  mov    %esp,%ebp
08471243 +0x03:  sub    $0x38,%esp
08471246 +0x06:  lea    -0x22(%ebp),%eax
08471249 +0x09:  mov    %eax,(%esp)
0847124c +0x0c:  call   084716d6 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x130>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x130
08471251 +0x11:  mov    0xc(%ebp),%eax
08471254 +0x14:  mov    %eax,-0x18(%ebp)
08471257 +0x17:  mov    0x10(%ebp),%eax
0847125a +0x1a:  mov    %eax,-0x14(%ebp)
0847125d +0x1d:  mov    0x14(%ebp),%eax
08471260 +0x20:  mov    %eax,-0x10(%ebp)
08471263 +0x23:  mov    0x18(%ebp),%eax
08471266 +0x26:  mov    %eax,-0xc(%ebp)
08471269 +0x29:  movzwl -0x20(%ebp),%eax
0847126d +0x2d:  movzwl %ax,%edx
08471270 +0x30:  lea    -0x22(%ebp),%eax
08471273 +0x33:  mov    %edx,0x8(%esp)
08471277 +0x37:  mov    %eax,0x4(%esp)
0847127b +0x3b:  mov    0x8(%ebp),%eax
0847127e +0x3e:  mov    %eax,(%esp)
08471281 +0x41:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08471286 +0x46:  leave
08471287 +0x47:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::updateTowerRank @ 0x8471240

/* CMonitorServerProxy::updateTowerRank(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::updateTowerRank
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Request_Charac_Tower_Update_Ranking local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Request_Charac_Tower_Update_Ranking::Packet_Request_Charac_Tower_Update_Ranking(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendPacket(this,(char *)local_26,(uint)local_24);
  return;
}
```
