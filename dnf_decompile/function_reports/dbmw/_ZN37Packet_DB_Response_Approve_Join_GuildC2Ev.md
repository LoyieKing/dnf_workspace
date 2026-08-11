# _ZN37Packet_DB_Response_Approve_Join_GuildC2Ev

`Packet_DB_Response_Approve_Join_Guild::Packet_DB_Response_Approve_Join_Guild()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a2140` | `0x69` | `0x8053734` | `0x71` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x56,0x8(%esp)
 movl   $0x1bc5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x16(%eax)
+add    $0x16,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1a,%eax
 movl   $0x3c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Response_Approve_Join_Guild::Packet_DB_Response_Approve_Join_Guild() */

void __thiscall
Packet_DB_Response_Approve_Join_Guild::_ZN37Packet_DB_Response_Approve_Join_GuildC2Ev
          (Packet_DB_Response_Approve_Join_Guild *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1bc5,0x56);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  *(undefined4 *)(this + 0x16) = 0;
  memset(this + 0x1a,0,0x3c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1934 行）：

```cpp
Packet_DB_Response_Approve_Join_Guild::Packet_DB_Response_Approve_Join_Guild()
    : PacketHeader(0x1bc5, 0x56)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
    *(int*)((char*)this + 0x16) = 0;
    memset((char*)this + 0x1a, 0, 0x3c);
}
```
