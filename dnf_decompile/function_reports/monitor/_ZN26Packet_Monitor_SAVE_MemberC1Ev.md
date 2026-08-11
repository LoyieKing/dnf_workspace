# _ZN26Packet_Monitor_SAVE_MemberC1Ev

`Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809b2ac` | `0x23` | `0x807e076` | `0x45` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x14,0x8(%esp)
 movl   $0x4b4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
+mov    0x8(%ebp),%eax
+movb   $0x0,0xa(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xb(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0xf(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x0,0x13(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member() */

void __thiscall
Packet_Monitor_SAVE_Member::_ZN26Packet_Monitor_SAVE_MemberC1Ev(Packet_Monitor_SAVE_Member *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x4b4,0x14);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5654 行）：

```cpp
Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member() : PacketHeader(0x4b4, 0x14)
{
    m_fieldA = 0;
    m_upperCharNo = 0;
    m_lowerCharNo = 0;
    m_type = 0;
}
```
