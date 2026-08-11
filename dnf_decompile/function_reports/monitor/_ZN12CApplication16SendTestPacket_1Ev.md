# _ZN12CApplication16SendTestPacket_1Ev

`CApplication::SendTestPacket_1()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8064f64` | `0x4e` | `0x8052864` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
-movl   $0x9,-0xc(%ebp)
+lea    -0x16(%ebp),%eax
+add    $0xa,%eax
+movl   $0x9,(%eax)
 lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-movl   $0x9,-0x1e(%ebp)
-movw   $0x4,-0x1a(%ebp)
-movw   $0x0,-0x18(%ebp)
+lea    -0x28(%ebp),%eax
+add    $0xa,%eax
+movl   $0x9,(%eax)
+lea    -0x28(%ebp),%eax
+add    $0xe,%eax
+movw   $0x4,(%eax)
+lea    -0x28(%ebp),%eax
+add    $0x10,%eax
+movw   $0x0,(%eax)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::SendTestPacket_1() */

void CApplication::_ZN12CApplication16SendTestPacket_1Ev(void)

{
  Packet_Monitor_Event_Start local_2c [10];
  undefined4 local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  Packet_Monitor_Event_End local_1a [10];
  undefined4 local_10;
  
  Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_1a);
  local_10 = 9;
  CPacketTranslater::OnEventEnd((PacketHeader *)local_1a);
  Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_2c);
  local_22 = 9;
  local_1e = 4;
  local_1c = 0;
  CPacketTranslater::OnEventStart((PacketHeader *)local_2c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 392 行）：

```cpp
void CApplication::SendTestPacket_1()
{
    Packet_Monitor_Event_End end;
    int x = 9;
    (void)x;
    Packet_Monitor_Event_Start start;
    start.m_field1 = 9;
    start.m_field2 = 4;
    start.m_field3 = 0;
}
```
