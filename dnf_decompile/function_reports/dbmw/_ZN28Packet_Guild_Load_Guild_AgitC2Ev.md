# _ZN28Packet_Guild_Load_Guild_AgitC2Ev

`Packet_Guild_Load_Guild_Agit::Packet_Guild_Load_Guild_Agit()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1b94` | `0x3b` | `0x80532cc` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xf,0x8(%esp)
 movl   $0x6e1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
+mov    %eax,0x4(%esp)
+movl   $0x89,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN28Packet_Guild_Load_Guild_AgitC1Ev+0x51>
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildAgitDBInfoC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Guild_Load_Guild_Agit::Packet_Guild_Load_Guild_Agit() */

void __thiscall
Packet_Guild_Load_Guild_Agit::_ZN28Packet_Guild_Load_Guild_AgitC2Ev
          (Packet_Guild_Load_Guild_Agit *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x6e1,0xf);
  *(undefined4 *)(this + 10) = 0;
  STGuildAgitDBInfo::STGuildAgitDBInfo((STGuildAgitDBInfo *)(this + 0xe));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1846 行）：

```cpp
Packet_Guild_Load_Guild_Agit::Packet_Guild_Load_Guild_Agit()
    : PacketHeader(0x6e1, 0xf)
{
    *(int*)((char*)this + 0xa) = 0;
    new ((STGuildAgitDBInfo*)((char*)this + 0xe)) STGuildAgitDBInfo;
}
```
