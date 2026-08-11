# _ZN11CGuildBoardD2Ev

`CGuildBoard::~CGuildBoard()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d0b0` | `0x48` | `0x808f916` | `0x21` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard5resetEv>
-jmp    <T> <_ZN11CGuildBoardD1Ev+0x33>
-mov    %edx,%ebx
-mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    0x8(%ebp),%eax
-add    $0xc,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEED1Ev>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::~CGuildBoard() */

void __thiscall CGuildBoard::_ZN11CGuildBoardD2Ev(CGuildBoard *this)

{
                    /* try { // try from 0809d0be to 0809d0c2 has its CatchHandler @ 0809d0c5 */
  _ZN11CGuildBoard5resetEv(this);
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::~map((map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
          *)(this + 0xc));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 117 行）：

```cpp
CGuildBoard::~CGuildBoard()
{
    reset();
    ((std::map<unsigned int, STGuildBoardDBInfo, std::greater<unsigned int> >*)(m_data + 0xc))
        ->~map();
}
```
