# _ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate

`CDBManager::QueryInsertUpdate(PacketInsertUpdate*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8086230` | `0x120` | `0x8057fde` | `0x10d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 lea    0x817(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0xb3>
-mov    0xc(%ebp),%eax
-lea    0x817(%eax),%ebx
-movl   $0x27f5,0x8(%esp)
-movl   $&_ZZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdateE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"QueryInsertUpdate Query(%s) Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0x11a>
+je     <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0xc4>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0x115>
+je     <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0xbd>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 lea    0x16(%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+jmp    <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate+0x10b>
+movl   $0x27f5,0x8(%esp)
+movl   $&_ZZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdateE12__FUNCTION__,0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+add    $0x817,%eax
+mov    %eax,0xc(%esp)
+movl   $"QueryInsertUpdate Query(%s) Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryInsertUpdate(PacketInsertUpdate*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate
          (CDBManager *this,PacketInsertUpdate *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + *(int *)(param_1 + 10) * 4);
  (**(code **)(*local_10 + 0x1c))(local_10,*(undefined4 *)(param_1 + 0x12),param_1 + 0x817);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,*(undefined4 *)(param_1 + 0x12));
  if (local_11 == '\x01') {
    lVar2 = (**(code **)(*local_10 + 0x74))(local_10);
    if (lVar2 == 0) {
      (**(code **)(*local_10 + 0x1c))(local_10,*(undefined4 *)(param_1 + 0xe),param_1 + 0x16);
      (**(code **)(*local_10 + 0x20))(local_10,*(undefined4 *)(param_1 + 0xe));
    }
    uVar1 = 1;
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"QueryInsertUpdate",0x27f5);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr","QueryInsertUpdate Query(%s) Error\n",param_1 + 0x817);
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2966 行）：

```cpp
char CDBManager::QueryInsertUpdate(PacketInsertUpdate* packet)
{
    CDBHandle* h = m_handles[packet->m_handleIdx];
    h->set_query(packet->m_insertQueryId, packet->m_insertSql);
    if (h->exec(packet->m_insertQueryId))
    {
        if (h->getAffectedRowCount() == 0)
        {
            h->set_query(packet->m_updateQueryId, packet->m_updateSql);
            h->exec(packet->m_updateQueryId);
        }
        return 1;
    }
    CMyFileLog log(__FUNCTION__, 0x27f5);
    log("./log/DBQueryErr", "QueryInsertUpdate Query(%s) Error\n",
        packet->m_insertSql);
    return 0;
}
```
