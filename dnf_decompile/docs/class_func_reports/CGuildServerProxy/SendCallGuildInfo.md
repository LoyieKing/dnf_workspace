# SendCallGuildInfo

`_ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj`

`CGuildServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846ddd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846ddd2  _ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj
#           CGuildServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)
# range [0x0846ddd2, 0x0846de7f]
0846ddd2 +0x00:  push   %ebp
0846ddd3 +0x01:  mov    %esp,%ebp
0846ddd5 +0x03:  sub    $0x1c8,%esp
0846dddb +0x09:  mov    0x14(%ebp),%eax
0846ddde +0x0c:  mov    %al,-0x1ac(%ebp)
0846dde4 +0x12:  lea    -0x19b(%ebp),%eax
0846ddea +0x18:  mov    %eax,(%esp)
0846dded +0x1b:  call   0846f472 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x242>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x242
0846ddf2 +0x20:  mov    0xc(%ebp),%eax
0846ddf5 +0x23:  mov    %eax,-0x18d(%ebp)
0846ddfb +0x29:  mov    0x10(%ebp),%eax
0846ddfe +0x2c:  mov    %eax,-0x191(%ebp)
0846de04 +0x32:  movzbl -0x1ac(%ebp),%eax
0846de0b +0x39:  mov    %al,-0x189(%ebp)
0846de11 +0x3f:  movl   $0x0,-0xc(%ebp)
0846de18 +0x46:  jmp    0846de36 <+0x64>
0846de1a +0x48:  mov    -0xc(%ebp),%edx
0846de1d +0x4b:  mov    -0xc(%ebp),%eax
0846de20 +0x4e:  shl    $0x2,%eax
0846de23 +0x51:  add    0x18(%ebp),%eax
0846de26 +0x54:  mov    (%eax),%eax
0846de28 +0x56:  add    $0x4,%edx
0846de2b +0x59:  mov    %eax,-0x198(%ebp,%edx,4)
0846de32 +0x60:  addl   $0x1,-0xc(%ebp)
0846de36 +0x64:  movzbl -0x1ac(%ebp),%eax
0846de3d +0x6b:  cmp    -0xc(%ebp),%eax
0846de40 +0x6e:  setg   %al
0846de43 +0x71:  test   %al,%al
0846de45 +0x73:  jne    0846de1a <+0x48>
0846de47 +0x75:  movzbl -0x1ac(%ebp),%eax
0846de4e +0x7c:  shl    $0x2,%eax
0846de51 +0x7f:  add    $0x13,%eax
0846de54 +0x82:  mov    %ax,-0x199(%ebp)
0846de5b +0x89:  movzwl -0x199(%ebp),%eax
0846de62 +0x90:  movzwl %ax,%edx
0846de65 +0x93:  lea    -0x19b(%ebp),%eax
0846de6b +0x99:  mov    %edx,0x8(%esp)
0846de6f +0x9d:  mov    %eax,0x4(%esp)
0846de73 +0xa1:  mov    0x8(%ebp),%eax
0846de76 +0xa4:  mov    %eax,(%esp)
0846de79 +0xa7:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846de7e +0xac:  leave
0846de7f +0xad:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendCallGuildInfo @ 0x846ddd2

/* CGuildServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*) */

void __thiscall
CGuildServerProxy::SendCallGuildInfo
          (CGuildServerProxy *this,uint param_1,uint param_2,uchar param_3,uint *param_4)

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
