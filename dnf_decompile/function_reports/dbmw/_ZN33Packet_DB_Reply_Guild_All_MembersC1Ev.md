# _ZN33Packet_DB_Reply_Guild_All_MembersC1Ev

`Packet_DB_Reply_Guild_All_Members::Packet_DB_Reply_Guild_All_Members()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1982` | `0x73` | `0x8053ace` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x17b1,0x8(%esp)
 movl   $0x426,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
+add    $0x14,%eax
+mov    %eax,%ebx
+mov    $0x5c,%esi
+jmp    <T> <_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev+0x40>
+mov    %ebx,(%esp)
+call   <T> <_ZN18STGuildMemberProxyC1Ev>
+add    $0x41,%ebx
+sub    $0x1,%esi
+cmp    $0xffffffff,%esi
+setne  %al
+test   %al,%al
+jne    <T> <_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev+0x32>
+mov    0x8(%ebp),%eax
 movl   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xe(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x12(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x13(%eax)
-mov    0x8(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,%ebx
-mov    $0x5c,%esi
-jmp    <T> <_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev+0x62>
-mov    %ebx,(%esp)
-call   <T> <_ZN18STGuildMemberProxyC1Ev>
-add    $0x41,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
-test   %al,%al
-jne    <T> <_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev+0x54>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Reply_Guild_All_Members::Packet_DB_Reply_Guild_All_Members() */

void __thiscall
Packet_DB_Reply_Guild_All_Members::_ZN33Packet_DB_Reply_Guild_All_MembersC1Ev
          (Packet_DB_Reply_Guild_All_Members *this)

{
  STGuildMemberProxy *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x426,0x17b1);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  this[0x12] = (Packet_DB_Reply_Guild_All_Members)0x0;
  this[0x13] = (Packet_DB_Reply_Guild_All_Members)0x0;
  this_00 = (STGuildMemberProxy *)(this + 0x14);
  for (iVar1 = 0x5c; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildMemberProxy::STGuildMemberProxy(this_00);
    this_00 = this_00 + 0x41;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2006 行）：

```cpp
Packet_DB_Reply_Guild_All_Members::Packet_DB_Reply_Guild_All_Members()
    : PacketHeader(0x426, 0x17b1)
{
    m_fieldA = 0;
    m_fieldE = 0;
    m_flag = 0;
    m_count = 0;
}
```
