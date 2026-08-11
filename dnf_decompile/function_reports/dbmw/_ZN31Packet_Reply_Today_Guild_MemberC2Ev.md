# _ZN31Packet_Reply_Today_Guild_MemberC2Ev

`Packet_Reply_Today_Guild_Member::Packet_Reply_Today_Guild_Member()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a20f4` | `0x4b` | `0x805342a` | `0x4d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x35,0x8(%esp)
 movl   $0x1bc0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x27,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Reply_Today_Guild_Member::Packet_Reply_Today_Guild_Member() */

void __thiscall
Packet_Reply_Today_Guild_Member::_ZN31Packet_Reply_Today_Guild_MemberC2Ev
          (Packet_Reply_Today_Guild_Member *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1bc0,0x35);
  *(undefined4 *)(this + 10) = 0;
  memset(this + 0xe,0,0x27);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1869 行）：

```cpp
Packet_Reply_Today_Guild_Member::Packet_Reply_Today_Guild_Member()
    : PacketHeader(0x1bc0, 0x35)
{
    *(int*)((char*)this + 0xa) = 0;
    memset((char*)this + 0xe, 0, 0x27);
}
```
