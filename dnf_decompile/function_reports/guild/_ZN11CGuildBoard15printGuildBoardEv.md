# _ZN11CGuildBoard15printGuildBoardEv

`CGuildBoard::printGuildBoard()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809e0aa` | `0xde` | `0x8090648` | `0xde` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x24(%ebp),%eax
+add    $0xc,%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE5beginEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0xc(%eax),%edx
-lea    -0x28(%ebp),%eax
-mov    %edx,0x4(%esp)
+jmp    <T> <_ZN11CGuildBoard15printGuildBoardEv+0xa4>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE3endEv>
-sub    $0x4,%esp
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-jmp    <T> <_ZN11CGuildBoard15printGuildBoardEv+0xb9>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
+lea    0x8(%eax),%edi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
 add    $0x4,%eax
-mov    %eax,%edi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
-mov    0x7c(%eax),%esi
+add    $0x7c,%eax
+mov    (%eax),%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEptEv>
 mov    (%eax),%ebx
 movl   $0x188,0x8(%esp)
 movl   $&_ZZN11CGuildBoard15printGuildBoardEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"\n*%d* %d %s\n",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEppEv>
 lea    -0x28(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIj18STGuildBoardDBInfoSt7greaterIjESaISt4pairIKjS0_EEE3endEv>
+sub    $0x4,%esp
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STGuildBoardDBInfoEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN11CGuildBoard15printGuildBoardEv+0x41>
+jne    <T> <_ZN11CGuildBoard15printGuildBoardEv+0x29>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::printGuildBoard() */

void CGuildBoard::_ZN11CGuildBoard15printGuildBoardEv(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  local_2c [4];
  undefined4 local_28;
  CMyFileLog local_24 [20];
  
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::begin((map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
           *)&local_28);
  std::
  map<unsigned_int,STGuildBoardDBInfo,std::greater<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>>
  ::end(local_2c);
  local_30 = local_28;
  while( true ) {
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                       &local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar3 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                       &local_30);
    iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                       &local_30);
    uVar1 = *(undefined4 *)(iVar5 + 0x7c);
    puVar6 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator->
                       ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)
                        &local_30);
    uVar2 = *puVar6;
    CMyFileLog::CMyFileLog(local_24,"printGuildBoard",0x188);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildBoard","\n*%d* %d %s\n",uVar2,uVar1,iVar4 + 4);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,STGuildBoardDBInfo>> *)&local_30);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 334 行）：

```cpp
void CGuildBoard::printGuildBoard()
{
    std::map<unsigned int, STGuildBoardDBInfo, std::greater<unsigned int> >* map = &m_board;
    for (std::map<unsigned int, STGuildBoardDBInfo, std::greater<unsigned int> >::iterator it =
             map->begin();
         it != map->end(); ++it)
    {
        DNF_LOG_SCOPE_LINE(0x188,"./log/GuildBoard", "\n*%d* %d %s\n",
            it->first, *(unsigned int*)((char*)&it->second + 0x7c),
            (char*)&it->second + 4);
    }
}
```
