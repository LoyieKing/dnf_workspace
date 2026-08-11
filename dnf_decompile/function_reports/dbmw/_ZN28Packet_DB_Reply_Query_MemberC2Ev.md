# _ZN28Packet_DB_Reply_Query_MemberC2Ev

`Packet_DB_Reply_Query_Member::Packet_DB_Reply_Query_Member()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1aaa` | `0x42` | `0x8053a46` | `0x42` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1c5,0x8(%esp)
 movl   $0x4b3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14STMemberDBInfoC1Ev>
+mov    0x8(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb(%eax)
-mov    0x8(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14STMemberDBInfoC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Reply_Query_Member::Packet_DB_Reply_Query_Member() */

void __thiscall
Packet_DB_Reply_Query_Member::_ZN28Packet_DB_Reply_Query_MemberC2Ev
          (Packet_DB_Reply_Query_Member *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x4b3,0x1c5);
  this[10] = (Packet_DB_Reply_Query_Member)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  STMemberDBInfo::STMemberDBInfo((STMemberDBInfo *)(this + 0x17));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1994 行）：

```cpp
Packet_DB_Reply_Query_Member::Packet_DB_Reply_Query_Member()
    : PacketHeader(0x4b3, 0x1c5)
{
    m_flag = 0;
    m_fieldB = 0;
}
```
