# _ZN38Packet_DB_Load_Reply_Guild_Board_WriteC1Ev

`Packet_DB_Load_Reply_Guild_Board_Write::Packet_DB_Load_Reply_Guild_Board_Write()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a2248` | `0x4e` | `0x805384a` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xb9,0x8(%esp)
 movl   $0x2330,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
+mov    %eax,0x4(%esp)
+movl   $0xa5,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN38Packet_DB_Load_Reply_Guild_Board_WriteC1Ev+0x45>
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
 mov    0x8(%ebp),%eax
-movw   $0x0,0xa(%eax)
+add    $0xa,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
+add    $0xc,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
+add    $0x10,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Load_Reply_Guild_Board_Write::Packet_DB_Load_Reply_Guild_Board_Write() */

void __thiscall
Packet_DB_Load_Reply_Guild_Board_Write::_ZN38Packet_DB_Load_Reply_Guild_Board_WriteC1Ev
          (Packet_DB_Load_Reply_Guild_Board_Write *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x2330,0xb9);
  STGuildBoardDBInfo::_ZN18STGuildBoardDBInfoC2Ev((STGuildBoardDBInfo *)(this + 0x14));
  *(undefined2 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1952 行）：

```cpp
Packet_DB_Load_Reply_Guild_Board_Write::Packet_DB_Load_Reply_Guild_Board_Write()
    : PacketHeader(0x2330, 0xb9)
{
    new ((STGuildBoardDBInfo*)((char*)this + 0x14)) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
}
```
