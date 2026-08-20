# SendCallGuildInfo

`_ZN19CMonitorServerProxy17SendCallGuildInfoEjjhPj`

`CMonitorServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470f06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470f06  _ZN19CMonitorServerProxy17SendCallGuildInfoEjjhPj
#           CMonitorServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)
# range [0x08470f06, 0x08470fb3]
08470f06 +0x00:  push   %ebp
08470f07 +0x01:  mov    %esp,%ebp
08470f09 +0x03:  sub    $0x1c8,%esp
08470f0f +0x09:  mov    0x14(%ebp),%eax
08470f12 +0x0c:  mov    %al,-0x1ac(%ebp)
08470f18 +0x12:  lea    -0x19b(%ebp),%eax
08470f1e +0x18:  mov    %eax,(%esp)
08470f21 +0x1b:  call   0846f472 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x242>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x242
08470f26 +0x20:  mov    0xc(%ebp),%eax
08470f29 +0x23:  mov    %eax,-0x18d(%ebp)
08470f2f +0x29:  mov    0x10(%ebp),%eax
08470f32 +0x2c:  mov    %eax,-0x191(%ebp)
08470f38 +0x32:  movzbl -0x1ac(%ebp),%eax
08470f3f +0x39:  mov    %al,-0x189(%ebp)
08470f45 +0x3f:  movl   $0x0,-0xc(%ebp)
08470f4c +0x46:  jmp    08470f6a <+0x64>
08470f4e +0x48:  mov    -0xc(%ebp),%edx
08470f51 +0x4b:  mov    -0xc(%ebp),%eax
08470f54 +0x4e:  shl    $0x2,%eax
08470f57 +0x51:  add    0x18(%ebp),%eax
08470f5a +0x54:  mov    (%eax),%eax
08470f5c +0x56:  add    $0x4,%edx
08470f5f +0x59:  mov    %eax,-0x198(%ebp,%edx,4)
08470f66 +0x60:  addl   $0x1,-0xc(%ebp)
08470f6a +0x64:  movzbl -0x1ac(%ebp),%eax
08470f71 +0x6b:  cmp    -0xc(%ebp),%eax
08470f74 +0x6e:  setg   %al
08470f77 +0x71:  test   %al,%al
08470f79 +0x73:  jne    08470f4e <+0x48>
08470f7b +0x75:  movzbl -0x1ac(%ebp),%eax
08470f82 +0x7c:  shl    $0x2,%eax
08470f85 +0x7f:  add    $0x13,%eax
08470f88 +0x82:  mov    %ax,-0x199(%ebp)
08470f8f +0x89:  movzwl -0x199(%ebp),%eax
08470f96 +0x90:  movzwl %ax,%edx
08470f99 +0x93:  lea    -0x19b(%ebp),%eax
08470f9f +0x99:  mov    %edx,0x8(%esp)
08470fa3 +0x9d:  mov    %eax,0x4(%esp)
08470fa7 +0xa1:  mov    0x8(%ebp),%eax
08470faa +0xa4:  mov    %eax,(%esp)
08470fad +0xa7:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08470fb2 +0xac:  leave
08470fb3 +0xad:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendCallGuildInfo @ 0x8470f06

/* CMonitorServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)
    */

void __thiscall
CMonitorServerProxy::SendCallGuildInfo
          (CMonitorServerProxy *this,uint param_1,uint param_2,uchar param_3,uint *param_4)

{
  Packet_Monitor_Call_Guild_Info local_19f [2];
  undefined1 local_19d [8];
  uint local_195;
  uint local_191;
  uchar local_18d;
  uint auStack_18c [95];
  int local_10;
  
  Packet_Monitor_Call_Guild_Info::Packet_Monitor_Call_Guild_Info(local_19f);
  local_191 = param_1;
  local_195 = param_2;
  for (local_10 = 0; local_10 < (int)(uint)param_3; local_10 = local_10 + 1) {
    *(uint *)(local_19d + (local_10 + 4) * 4 + 1) = param_4[local_10];
  }
  local_19d._0_2_ = (ushort)param_3 * 4 + 0x13;
  local_18d = param_3;
  SendPacket(this,(char *)local_19f,(uint)(ushort)local_19d._0_2_);
  return;
}
```
