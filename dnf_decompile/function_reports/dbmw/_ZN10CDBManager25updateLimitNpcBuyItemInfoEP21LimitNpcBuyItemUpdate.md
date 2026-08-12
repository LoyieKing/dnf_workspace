# _ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate

`CDBManager::updateLimitNpcBuyItemInfo(LimitNpcBuyItemUpdate*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80866d4` | `0x127` | `0x8063ee2` | `0x112` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,81 +1,72 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x21>
+jne    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x1f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x120>
+jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x110>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0x12(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    0xa(%eax),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate limit_npc_item set sell_count=sell_count+%u where item_index=%u",0x8(%esp)
 movl   $0x4f46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0xb6>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    0xc(%ebp),%eax
-mov    0x12(%eax),%ebx
+je     <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0xad>
 movl   $0x2857,0x8(%esp)
 movl   $&_ZZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdateE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    0x12(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"upDate limit_npc_item set sell_count=%u where item_index=%u Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x120>
+jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x110>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f46,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x11b>
+je     <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x10b>
 movl   $0x2861,0x8(%esp)
 movl   $&_ZZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdateE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"updateLimitNpcBuyItemInfo Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x120>
+jmp    <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate+0x110>
 mov    $0x1,%eax
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::updateLimitNpcBuyItemInfo(LimitNpcBuyItemUpdate*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate
          (CDBManager *this,LimitNpcBuyItemUpdate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 8);
  if (local_10 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_11 = (**(code **)(*local_10 + 0x1c))
                         (local_10,0x4f46,
                          "upDate limit_npc_item set sell_count=sell_count+%u where item_index=%u",
                          *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 10));
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f46);
      if (local_11 == '\x01') {
        uVar2 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_1c,"updateLimitNpcBuyItemInfo",0x2861);
        CMyFileLog::operator()
                  (local_1c,"./log/DBQueryErr","updateLimitNpcBuyItemInfo Query(exec) Error");
        uVar2 = 0;
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 10);
      uVar1 = *(undefined4 *)(param_1 + 0x12);
      CMyFileLog::CMyFileLog(local_24,"updateLimitNpcBuyItemInfo",0x2857);
      CMyFileLog::operator()
                (local_24,"./log/DBQueryErr",
                 "upDate limit_npc_item set sell_count=%u where item_index=%u Error",uVar1,uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 6224 行）：

```cpp
bool CDBManager::updateLimitNpcBuyItemInfo(LimitNpcBuyItemUpdate* update)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h)
        return 0;
    if (!h->set_query(0x4f46,
                      "upDate limit_npc_item set sell_count=sell_count+%u where item_index=%u",
                      update->m_fieldA, update->m_field12))
    {
        CMyFileLog log(__FUNCTION__, 0x2857);
        log("./log/DBQueryErr",
            "upDate limit_npc_item set sell_count=%u where item_index=%u Error",
            update->m_fieldA, update->m_field12);
        return 0;
    }
    if (!h->exec(0x4f46))
    {
        CMyFileLog log(__FUNCTION__, 0x2861);
        log("./log/DBQueryErr", "updateLimitNpcBuyItemInfo Query(exec) Error");
        return 0;
    }
    return 1;
}
```
