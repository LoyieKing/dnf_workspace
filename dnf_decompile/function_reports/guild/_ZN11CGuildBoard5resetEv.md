# _ZN11CGuildBoard5resetEv

`CGuildBoard::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d0f8` | `0x3a` | `0x808f938` | `0x40` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE5clearEv>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
+add    $0x4,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
+add    $0x8,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x24(%eax)
+add    $0x24,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::reset() */

void __thiscall CGuildBoard::_ZN11CGuildBoard5resetEv(CGuildBoard *this)

{
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::clear((map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
           *)(this + 0xc));
  *(undefined4 *)this = 0;
  this[4] = (CGuildBoard)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 124 行）：

```cpp
void CGuildBoard::reset()
{
    ((std::map<unsigned int, STGuildBoardDBInfo, std::greater<unsigned int> >*)(m_data + 0xc))
        ->clear();
    *(unsigned int*)(m_data + 0) = 0;    // field0
    *(unsigned char*)(m_data + 4) = 0;   // webAction
    *(unsigned int*)(m_data + 8) = 0;    // dbLoadState
    *(unsigned int*)(m_data + 0x24) = 0; // dbAccessTime
}
```
