# _ZN11CGuildBoard20deleteGuildBoardDataEjjj

`CGuildBoard::deleteGuildBoardData(unsigned int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d89c` | `0x106` | `0x808ff3e` | `0x106` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,69 +1,69 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x8(%ebp),%eax
+lea    0xc(%eax),%edx
+lea    -0x20(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE3endEv>
+sub    $0x4,%esp
+mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE3endEv>
-sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEneERKS4_>
 test   %al,%al
 je     <T> <_ZN11CGuildBoard20deleteGuildBoardDataEjjj+0xb6>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE5eraseERS4_>
 mov    0xc(%ebp),%ebx
 movl   $0xdc,0x8(%esp)
 movl   $&_ZZN11CGuildBoard20deleteGuildBoardDataEjjjE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"DELETE SUCCESS - GUILD:%u, CHARAC:%u, NO:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN11CGuildBoard20deleteGuildBoardDataEjjj+0x101>
 mov    0xc(%ebp),%ebx
 movl   $0xe3,0x8(%esp)
 movl   $&_ZZN11CGuildBoard20deleteGuildBoardDataEjjjE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"DELETE FAIL - GUILD:%u, CHARAC:%u, NO:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::deleteGuildBoardData(unsigned int, unsigned int, unsigned int) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard20deleteGuildBoardDataEjjj
          (CGuildBoard *this,uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> local_24 [4];
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  local_20 [4];
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [12];
  
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::find((uint *)local_24);
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    CMyFileLog::CMyFileLog(local_14,"deleteGuildBoardData",0xe3);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GuildBoard","DELETE FAIL - GUILD:%u, CHARAC:%u, NO:%u",param_2,
               param_3,param_1);
  }
  else {
    std::
    map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
    ::erase((uint *)(this + 0xc));
    CMyFileLog::CMyFileLog(local_1c,"deleteGuildBoardData",0xdc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_1c,"./log/GuildBoard","DELETE SUCCESS - GUILD:%u, CHARAC:%u, NO:%u",param_2,
               param_3,param_1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 253 行）：

```cpp
void CGuildBoard::deleteGuildBoardData(unsigned int a, unsigned int b, unsigned int c)
{
    if (m_board.find(a) != m_board.end())
    {
        m_board.erase(a);
        DNF_LOG_SCOPE_LINE(0xdc, "./log/GuildBoard", "DELETE SUCCESS - GUILD:%u, CHARAC:%u, NO:%u", b, c, a);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xe3, "./log/GuildBoard", "DELETE FAIL - GUILD:%u, CHARAC:%u, NO:%u", b, c, a);
    }
}
```
