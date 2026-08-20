# SendUserRepel

`_ZN19CMonitorServerProxy13SendUserRepelEjjPci`

`CMonitorServerProxy::SendUserRepel(unsigned int, unsigned int, char*, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x0847101a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847101a  _ZN19CMonitorServerProxy13SendUserRepelEjjPci
#           CMonitorServerProxy::SendUserRepel(unsigned int, unsigned int, char*, int)
# range [0x0847101a, 0x08471071]
0847101a +0x00:  push   %ebp
0847101b +0x01:  mov    %esp,%ebp
0847101d +0x03:  sub    $0x48,%esp
08471020 +0x06:  lea    -0x38(%ebp),%eax
08471023 +0x09:  mov    %eax,(%esp)
08471026 +0x0c:  call   0847160a <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x64>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x64
0847102b +0x11:  mov    0x10(%ebp),%eax
0847102e +0x14:  mov    %eax,-0x2e(%ebp)
08471031 +0x17:  mov    0xc(%ebp),%eax
08471034 +0x1a:  mov    %eax,-0x2a(%ebp)
08471037 +0x1d:  mov    0x18(%ebp),%eax
0847103a +0x20:  mov    %eax,0x8(%esp)
0847103e +0x24:  mov    0x14(%ebp),%eax
08471041 +0x27:  mov    %eax,0x4(%esp)
08471045 +0x2b:  lea    -0x38(%ebp),%eax
08471048 +0x2e:  add    $0x12,%eax
0847104b +0x31:  mov    %eax,(%esp)
0847104e +0x34:  call   0807d8a0 <_init+0x198>
08471053 +0x39:  movzwl -0x36(%ebp),%eax
08471057 +0x3d:  movzwl %ax,%edx
0847105a +0x40:  lea    -0x38(%ebp),%eax
0847105d +0x43:  mov    %edx,0x8(%esp)
08471061 +0x47:  mov    %eax,0x4(%esp)
08471065 +0x4b:  mov    0x8(%ebp),%eax
08471068 +0x4e:  mov    %eax,(%esp)
0847106b +0x51:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08471070 +0x56:  leave
08471071 +0x57:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendUserRepel @ 0x847101a

/* CMonitorServerProxy::SendUserRepel(unsigned int, unsigned int, char*, int) */

void __thiscall
CMonitorServerProxy::SendUserRepel
          (CMonitorServerProxy *this,uint param_1,uint param_2,char *param_3,int param_4)

{
  Packet_Monitor_User_Repel_ByCharName local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Monitor_User_Repel_ByCharName::Packet_Monitor_User_Repel_ByCharName(local_3c);
  local_32 = param_2;
  local_2e = param_1;
  memcpy(auStack_2a,param_3,param_4);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}
```
