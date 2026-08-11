# _ZN27Packet_DB_Reply_Query_GuildC1Ev

`Packet_DB_Reply_Query_Guild::Packet_DB_Reply_Query_Guild()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1916` | `0x6c` | `0x8053202` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x135,0x8(%esp)
 movl   $0x405,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xb(%eax)
+add    $0xb,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xf(%eax)
+add    $0xf,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x13,%eax
+mov    %eax,0x4(%esp)
+movl   $0xbd,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN27Packet_DB_Reply_Query_GuildC1Ev+0x66>
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildDBInfoOnlyC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xd0,%eax
 movl   $0x65,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Reply_Query_Guild::Packet_DB_Reply_Query_Guild() */

void __thiscall
Packet_DB_Reply_Query_Guild::_ZN27Packet_DB_Reply_Query_GuildC1Ev(Packet_DB_Reply_Query_Guild *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x405,0x135);
  this[10] = (Packet_DB_Reply_Query_Guild)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  *(undefined4 *)(this + 0xf) = 0;
  STGuildDBInfoOnly::_ZN17STGuildDBInfoOnlyC2Ev((STGuildDBInfoOnly *)(this + 0x13));
  memset(this + 0xd0,0,0x65);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1832 行）：

```cpp
Packet_DB_Reply_Query_Guild::Packet_DB_Reply_Query_Guild()
    : PacketHeader(0x405, 0x135)
{
    *(char*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xb) = 0;
    *(int*)((char*)this + 0xf) = 0;
    new ((STGuildDBInfoOnly*)((char*)this + 0x13)) STGuildDBInfoOnly;
    memset((char*)this + 0xd0, 0, 0x65);
}
```
