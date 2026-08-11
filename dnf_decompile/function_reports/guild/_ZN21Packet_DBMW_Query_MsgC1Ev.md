# _ZN21Packet_DBMW_Query_MsgC1Ev

`Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808a84a` | `0x64` | `0x807f4e8` | `0x64` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1013,0x8(%esp)
 movl   $0x177d,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
-movl   $0x0,-0xc(%ebp)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN21Packet_DBMW_Query_MsgC1Ev+0x54>
-mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-movb   $0x0,0x12(%edx,%eax,1)
+mov    0x8(%ebp),%eax
+mov    -0xc(%ebp),%edx
+add    $0x12,%edx
+add    %edx,%eax
+movb   $0x0,(%eax)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x1000,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN21Packet_DBMW_Query_MsgC1Ev+0x45>
+jne    <T> <_ZN21Packet_DBMW_Query_MsgC1Ev+0x42>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg() */

void __thiscall Packet_DBMW_Query_Msg::_ZN21Packet_DBMW_Query_MsgC1Ev(Packet_DBMW_Query_Msg *this)

{
  int local_10;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x177d,0x1013);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  for (local_10 = 0; local_10 < 0x1001; local_10 = local_10 + 1) {
    this[local_10 + 0x12] = (Packet_DBMW_Query_Msg)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5921 行）：

```cpp
Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg()
    : PacketHeader(0x177d, 0x1013)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    for (int i = 0; i < 0x1001; i++) { *(unsigned char*)((char*)this + i + 0x12) = 0x0; }
}
```
