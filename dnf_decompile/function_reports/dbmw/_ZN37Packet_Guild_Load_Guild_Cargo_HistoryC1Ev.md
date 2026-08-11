# _ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev

`Packet_Guild_Load_Guild_Cargo_History::Packet_Guild_Load_Guild_Cargo_History()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1f5e` | `0x83` | `0x80537a6` | `0xa4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x972,0x8(%esp)
 movl   $0x709,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
-mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movl   $0x0,(%eax)
+movl   $0x30,-0xc(%ebp)
+jmp    <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev+0x79>
+mov    0x8(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x4,%eax
 add    $0x12,%eax
-mov    %eax,%ebx
-mov    $0x31,%esi
-jmp    <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev+0x54>
-mov    %ebx,(%esp)
+lea    (%ecx,%eax,1),%eax
+mov    %eax,0x4(%esp)
+movl   $0x30,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev+0x75>
+mov    %eax,(%esp)
 call   <T> <_ZN15STGuildCargoLogC1Ev>
-add    $0x30,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
+subl   $0x1,-0xc(%ebp)
+cmpl   $0xffffffff,-0xc(%ebp)
 setne  %al
 test   %al,%al
-jne    <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev+0x46>
+jne    <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev+0x42>
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
 movl   $0x960,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Guild_Load_Guild_Cargo_History::Packet_Guild_Load_Guild_Cargo_History() */

void __thiscall
Packet_Guild_Load_Guild_Cargo_History::_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev
          (Packet_Guild_Load_Guild_Cargo_History *this)

{
  STGuildCargoLog *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x709,0x972);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  this_00 = (STGuildCargoLog *)(this + 0x12);
  for (iVar1 = 0x31; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildCargoLog::STGuildCargoLog(this_00);
    this_00 = this_00 + 0x30;
  }
  memset(this + 0x12,0,0x960);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1943 行）：

```cpp
Packet_Guild_Load_Guild_Cargo_History::Packet_Guild_Load_Guild_Cargo_History()
    : PacketHeader(0x709, 0x972)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    for (int i = 0x30; i != -1; i--)
        new ((STGuildCargoLog*)((char*)this + 0x12 + i * 0x30)) STGuildCargoLog;
    memset((char*)this + 0x12, 0, 0x960);
}
```
