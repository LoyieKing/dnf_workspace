# _ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember

`CGuild::SetTodayGuildMember(STTodayGuildMember&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808b01c` | `0x70` | `0x8052ad0` | `0xca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
+add    $0x66ec,%eax
 mov    0xc(%ebp),%edx
-mov    (%edx),%ecx
-mov    %ecx,0x66ec(%eax)
-mov    0x4(%edx),%ecx
-mov    %ecx,0x66f0(%eax)
-mov    0x8(%edx),%ecx
-mov    %ecx,0x66f4(%eax)
-mov    0xc(%edx),%ecx
-mov    %ecx,0x66f8(%eax)
-mov    0x10(%edx),%ecx
-mov    %ecx,0x66fc(%eax)
-mov    0x14(%edx),%ecx
-mov    %ecx,0x6700(%eax)
-mov    0x18(%edx),%ecx
-mov    %ecx,0x6704(%eax)
-mov    0x1c(%edx),%ecx
-mov    %ecx,0x6708(%eax)
-mov    0x20(%edx),%ecx
-mov    %ecx,0x670c(%eax)
-movzwl 0x24(%edx),%ecx
-mov    %cx,0x6710(%eax)
-movzbl 0x26(%edx),%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x66f0,%eax
+mov    0xc(%ebp),%edx
+add    $0x4,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x66f4,%eax
+mov    0xc(%ebp),%edx
+add    $0x8,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x66f8,%eax
+mov    0xc(%ebp),%edx
+add    $0xc,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x66fc,%eax
+mov    0xc(%ebp),%edx
+add    $0x10,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x6700,%eax
+mov    0xc(%ebp),%edx
+add    $0x14,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x6704,%eax
+mov    0xc(%ebp),%edx
+add    $0x18,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x6708,%eax
+mov    0xc(%ebp),%edx
+add    $0x1c,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x670c,%eax
+mov    0xc(%ebp),%edx
+add    $0x20,%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x6710,%eax
+mov    0xc(%ebp),%edx
+add    $0x24,%edx
+movzwl (%edx),%edx
+mov    %dx,(%eax)
+mov    0xc(%ebp),%eax
+add    $0x26,%eax
+movzbl (%eax),%edx
+mov    0x8(%ebp),%eax
 mov    %dl,0x6712(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SetTodayGuildMember(STTodayGuildMember&) */

void __thiscall
CGuild::_ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember
          (CGuild *this,STTodayGuildMember *param_1)

{
  *(undefined4 *)(this + 0x66ec) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x66f0) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x66f4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x66f8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x66fc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x6700) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x6704) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x6708) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x670c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(this + 0x6710) = *(undefined2 *)(param_1 + 0x24);
  this[0x6712] = *(CGuild *)(param_1 + 0x26);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 433 行）：

```cpp
void CGuild::SetTodayGuildMember(STTodayGuildMember& member)
{
    *(unsigned int*)&m_board.m_rest[0] = *(unsigned int*)(member.m_data + 0);
    *(unsigned int*)&m_board.m_rest[4] = *(unsigned int*)(member.m_data + 4);
    *(unsigned int*)&m_board.m_rest[8] = *(unsigned int*)(member.m_data + 8);
    *(unsigned int*)&m_board.m_rest[0xc] = *(unsigned int*)(member.m_data + 0xc);
    *(unsigned int*)&m_board.m_rest[0x10] = *(unsigned int*)(member.m_data + 0x10);
    *(unsigned int*)&m_board.m_rest[0x14] = *(unsigned int*)(member.m_data + 0x14);
    *(unsigned int*)&m_board.m_rest[0x18] = *(unsigned int*)(member.m_data + 0x18);
    *(unsigned int*)&m_board.m_rest[0x1c] = *(unsigned int*)(member.m_data + 0x1c);
    *(unsigned int*)&m_board.m_rest[0x20] = *(unsigned int*)(member.m_data + 0x20);
    *(unsigned short*)&m_board.m_rest[0x24] = *(unsigned short*)(member.m_data + 0x24);
    *(char*)&m_board.m_rest[0x26] = *(char*)(member.m_data + 0x26);
}
```
