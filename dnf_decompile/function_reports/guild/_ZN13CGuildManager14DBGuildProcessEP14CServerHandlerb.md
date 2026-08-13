# _ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb

`CGuildManager::DBGuildProcess(CServerHandler*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096a74` | `0x159` | `0x805c888` | `0x151` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,105 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x153>
-movl   $0x0,(%esp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14b>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <time>
-mov    %eax,-0x20(%ebp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
 mov    0x4(%eax),%ecx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    0x8(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0x8(%ebp),%ebx
 add    $0x1c,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CScheduler22IsOnTimeSpecialDayHourEiii>
-mov    %al,-0xe(%ebp)
+mov    %al,-0x12(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0xd(%ebp)
+mov    %al,-0x11(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xfe>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf6>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ecx
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
-mov    %edx,%eax
-shr    $0x3,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+shr    $0x3,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %edx,%eax
 mov    %eax,-0xc(%ebp)
 mov    &_ZZN13CGuildManager14DBGuildProcessEP14CServerHandlerbE10save_order,%eax
 cmp    %eax,-0xc(%ebp)
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild18DBGuildSaveProcessEP14CServerHandler>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x8d>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x89>
 mov    &_ZZN13CGuildManager14DBGuildProcessEP14CServerHandlerbE10save_order,%eax
 add    $0x1,%eax
 mov    %eax,&_ZZN13CGuildManager14DBGuildProcessEP14CServerHandlerbE10save_order
 mov    &_ZZN13CGuildManager14DBGuildProcessEP14CServerHandlerbE10save_order,%eax
 cmp    $0x9,%eax
-jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
 movl   $0x0,&_ZZN13CGuildManager14DBGuildProcessEP14CServerHandlerbE10save_order
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::DBGuildProcess(CServerHandler*, bool) */

void CGuildManager::_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb
               (CServerHandler *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  undefined3 in_stack_00000009;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_28 [4];
  time_t local_24;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_20 [4];
  CGuild *local_1c;
  tm *local_18;
  undefined1 local_12;
  undefined1 local_11;
  uint local_10;
  
  if (_param_2 != (CServerHandler *)0x0) {
    local_24 = time((time_t *)0x0);
    local_18 = localtime(&local_24);
    local_12 = CScheduler::_ZN10CScheduler22IsOnTimeSpecialDayHourEiii
                         ((CScheduler *)(param_1 + 0x1c),local_18->tm_mday,local_18->tm_hour,
                          local_18->tm_min);
    local_11 = CApplication::_ZN12CApplication15Get_ServerGroupEv(*(CApplication **)param_1);
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
      ::end(local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_28,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_28);
      local_1c = *(CGuild **)(iVar2 + 4);
      if (local_1c != (CGuild *)0x0) {
        local_10 = CGuild::GetGuildKey(local_1c);
        local_10 = local_10 % 10;
        if (local_10 == DBGuildProcess(CServerHandler*,bool)::save_order) {
          CGuild::DBGuildSaveProcess(local_1c,_param_2);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_28);
    }
    DBGuildProcess(CServerHandler*,bool)::save_order =
         DBGuildProcess(CServerHandler*,bool)::save_order + 1;
    if (9 < DBGuildProcess(CServerHandler*,bool)::save_order) {
      DBGuildProcess(CServerHandler*,bool)::save_order = 0;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 539 行）：

```cpp
void CGuildManager::DBGuildProcess(CServerHandler* handler, bool flag)
{
    if (handler == 0)
    {
        return;
    }
    static unsigned int save_order = 0;
    time_t now;
    tm* t;
    time(&now);
    t = localtime(&now);
    char onTime = m_scheduler.IsOnTimeSpecialDayHour(t->tm_mday, t->tm_hour, t->tm_min);
    unsigned char groupNo = m_app->Get_ServerGroup();
    for (std::map<unsigned int, CGuild*>::iterator it = m_guilds.begin();
         it != m_guilds.end(); ++it)
    {
        CGuild* guild = it->second;
        if (guild != 0)
        {
            unsigned int key = guild->GetGuildKey();
            key = key % 10;
            if (key == save_order)
            {
                guild->DBGuildSaveProcess(handler);
            }
        }
    }
    save_order++;
    if (save_order > 9)
    {
        save_order = 0;
    }
}
```
