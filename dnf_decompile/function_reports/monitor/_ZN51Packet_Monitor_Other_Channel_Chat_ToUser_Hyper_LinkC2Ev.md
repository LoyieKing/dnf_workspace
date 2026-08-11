# _ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC2Ev

`Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8092e58` | `0xb2` | `0x807eb02` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x270,0x8(%esp)
 movl   $0x2719,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 movb   $0x0,0xe(%eax)
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,0xf(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x13(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x35(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x36(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x16f(%eax)
 mov    0x8(%ebp),%eax
 add    $0x17,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
+add    $0x37,%eax
+movl   $0x138,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    0x8(%ebp),%eax
 add    $0x170,%eax
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    0x8(%ebp),%eax
-add    $0x37,%eax
-movl   $0x138,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link()
    */

void __thiscall
Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::
_ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC2Ev
          (Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x2719,0x270);
  this[0xe] = (Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link)0x0;
  *(undefined4 *)(this + 0xf) = 0xffffffff;
  *(undefined4 *)(this + 0x13) = 0;
  this[0x35] = (Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link)0x0;
  this[0x36] = (Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link)0x0;
  this[0x16f] = (Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link)0x0;
  memset(this + 0x17,0,0x1e);
  memset(this + 0x170,0,0x100);
  memset(this + 0x37,0,0x138);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5920 行）：

```cpp
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link()
    : PacketHeader(0x2719, 0x270)
{
    m_fieldE = 0;
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_type = 0;
    m_itemCount = 0;
    m_msgLen = 0;
    memset(m_name, 0, 0x1e);
    memset(m_items, 0, 0x138);
    memset(m_msg, 0, 0x100);
}
```
