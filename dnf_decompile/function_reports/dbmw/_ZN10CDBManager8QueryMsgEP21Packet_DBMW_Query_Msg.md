# _ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg

`CDBManager::QueryMsg(Packet_DBMW_Query_Msg*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8082840` | `0xb8` | `0x805229e` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
-mov    0xe(%eax),%edx
+add    $0xe,%eax
+mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%ecx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+lea    0x12(%edx),%ecx
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
 mov    %ecx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
+mov    %edx,0x4(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg+0xad>
-mov    0xc(%ebp),%eax
-lea    0x12(%eax),%ebx
+je     <T> <_ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg+0xb2>
 movl   $0x1db6,0x8(%esp)
 movl   $"QueryMsg",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0xc(%esp)
 movl   $"GetDBMWQueryMsg Query(%s) Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg+0xb2>
+jmp    <T> <_ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg+0xb7>
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryMsg(Packet_DBMW_Query_Msg*) */

bool __thiscall
CDBManager::_ZN10CDBManager8QueryMsgEP21Packet_DBMW_Query_Msg
          (CDBManager *this,Packet_DBMW_Query_Msg *param_1)

{
  bool bVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + *(int *)(param_1 + 0xe) * 4);
  (**(code **)(*local_10 + 0x1c))(local_10,*(undefined4 *)(param_1 + 10),param_1 + 0x12);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,*(undefined4 *)(param_1 + 10));
  bVar1 = local_11 == '\x01';
  if (!bVar1) {
    CMyFileLog::CMyFileLog(local_1c,"QueryMsg",0x1db6);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr","GetDBMWQueryMsg Query(%s) Error\n",param_1 + 0x12);
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1481 行）：

```cpp
char CDBManager::QueryMsg(Packet_DBMW_Query_Msg* packet)
{
    CDBHandle* h = m_handles[*(int*)((char*)packet + 0xe)];
    h->set_query(*(int*)((char*)packet + 0xa), (char*)packet + 0x12);
    bool ret = h->exec(*(int*)((char*)packet + 0xa));
    if (!ret)
    {
        CMyFileLog log("QueryMsg", 0x1db6);
        log("./log/DBQueryErr", "GetDBMWQueryMsg Query(%s) Error\n",
            (char*)packet + 0x12);
        return 0;
    }
    return 1;
}
```
