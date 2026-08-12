# _ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler

`FrameLagCollector::SaveCollectedDirectxVersion(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8067c1a` | `0x179` | `0x8060e9c` | `0x189` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x47c,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
 je     <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x21>
 mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x16e>
+jmp    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x17e>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x169>
+jne    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x41>
+mov    $0x0,%eax
+jmp    <T> <_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler+0x17e>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x9c(%eax)
 lea    -0x426(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Frame_Lag_Statistic_Write_QueryC1Ev>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x0,(%esp)
 call   <T> <time>
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
-mov    0xc0(%eax),%esi
+mov    0xc0(%eax),%eax
+mov    %eax,%edi
 mov    0x8(%ebp),%eax
-mov    0xbc(%eax),%edi
+mov    0xbc(%eax),%eax
+mov    %eax,-0x43c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb8(%eax),%eax
-mov    %eax,-0x43c(%ebp)
+mov    %eax,-0x438(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb4(%eax),%eax
-mov    %eax,-0x438(%ebp)
+mov    %eax,-0x434(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xb0(%eax),%eax
-mov    %eax,-0x434(%ebp)
+mov    %eax,-0x430(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xac(%eax),%eax
-mov    %eax,-0x430(%ebp)
+mov    %eax,-0x42c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa8(%eax),%eax
-mov    %eax,-0x42c(%ebp)
+mov    %eax,%esi
 mov    0x8(%ebp),%eax
-mov    0xa4(%eax),%ebx
+mov    0xa4(%eax),%eax
+mov    %eax,%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-movsbl %al,%edx
+movsbl %al,%eax
+mov    %edi,0x30(%esp)
+mov    -0x43c(%ebp),%edx
+mov    %edx,0x2c(%esp)
+mov    -0x438(%ebp),%edx
+mov    %edx,0x28(%esp)
+mov    -0x434(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    -0x430(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    -0x42c(%ebp),%edx
+mov    %edx,0x1c(%esp)
+mov    %esi,0x18(%esp)
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    -0x1c(%ebp),%eax
-mov    %esi,0x30(%esp)
-mov    %edi,0x2c(%esp)
-mov    -0x43c(%ebp),%ecx
-mov    %ecx,0x28(%esp)
-mov    -0x438(%ebp),%ecx
-mov    %ecx,0x24(%esp)
-mov    -0x434(%ebp),%ecx
-mov    %ecx,0x20(%esp)
-mov    -0x430(%ebp),%ecx
-mov    %ecx,0x1c(%esp)
-mov    -0x42c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"inSert into directx_version(occ_time,server_group,ver_etc,ver_8_x,ver_9_0,ver_9_0_a,ver_9_0_b,ver_9_0_c,ver_10_x,ver_11_x) values(from_unixtime(%d),%hhd,%u,%u,%u,%u,%u,%u,%u,%u)",0x8(%esp)
 movl   $0x400,0x4(%esp)
 lea    -0x426(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 lea    -0x426(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x8(%ebp),%eax
 add    $0xa4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector20DirectxVersionStruct4initEv>
 mov    $0x0,%eax
 add    $0x47c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::SaveCollectedDirectxVersion(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector27SaveCollectedDirectxVersionEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  Packet_Frame_Lag_Statistic_Write_Query local_42a [10];
  char acStack_420 [1024];
  time_t local_20 [4];
  
  if (*(int *)(this + 4) == 2) {
    if (*(int *)(this + 0x9c) != *(int *)(this + 0x98)) {
      *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x98);
      Packet_Frame_Lag_Statistic_Write_Query::Packet_Frame_Lag_Statistic_Write_Query(local_42a);
      time(local_20);
      uVar9 = *(undefined4 *)(this + 0xc0);
      uVar1 = *(undefined4 *)(this + 0xbc);
      uVar2 = *(undefined4 *)(this + 0xb8);
      uVar3 = *(undefined4 *)(this + 0xb4);
      uVar4 = *(undefined4 *)(this + 0xb0);
      uVar5 = *(undefined4 *)(this + 0xac);
      uVar6 = *(undefined4 *)(this + 0xa8);
      uVar7 = *(undefined4 *)(this + 0xa4);
      cVar8 = CServerHandler::GetServerGroupNo(param_1);
      snprintf(acStack_420,0x400,
               "inSert into directx_version(occ_time,server_group,ver_etc,ver_8_x,ver_9_0,ver_9_0_a,ver_9_0_b,ver_9_0_c,ver_10_x,ver_11_x) values(from_unixtime(%d),%hhd,%u,%u,%u,%u,%u,%u,%u,%u)"
               ,local_20[0],(int)cVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1,uVar9);
      CServerHandler::SendToDB(param_1,(PacketHeader *)local_42a);
      DirectxVersionStruct::init((DirectxVersionStruct *)(this + 0xa4));
    }
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
  }
  return uVar9;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 449 行）：

```cpp
int FrameLagCollector::SaveCollectedDirectxVersion(CServerHandler* handler)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    if (m_field9c == m_today)
    {
        return 0;
    }
    m_field9c = m_today;
    Packet_Frame_Lag_Statistic_Write_Query pkt;
    time_t now = time(0);
    snprintf((char*)&pkt + 10, 0x400,
             "inSert into directx_version(occ_time,server_group,ver_etc,ver_8_x,ver_9_0,ver_9_0_a,ver_9_0_b,ver_9_0_c,ver_10_x,ver_11_x) values(from_unixtime(%d),%hhd,%u,%u,%u,%u,%u,%u,%u,%u)",
             (int)now, (signed char)handler->GetServerGroupNo(),
             (unsigned int)m_directx.m_data[0], (unsigned int)m_directx.m_data[1],
             (unsigned int)m_directx.m_data[2], (unsigned int)m_directx.m_data[3],
             (unsigned int)m_directx.m_data[4], (unsigned int)m_directx.m_data[5],
             (unsigned int)m_directx.m_data[6], (unsigned int)m_directx.m_data[7]);
    handler->SendToDB((PacketHeader*)&pkt);
    m_directx.init();
    return 0;
}
```
