# _ZN10CDBManager18OnDeleteGuildBoardEj

`CDBManager::OnDeleteGuildBoard(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8084fa6` | `0xa4` | `0x804dcd8` | `0xa4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,45 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from guild_memo where no=%u",0x8(%esp)
 movl   $0x4f09,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4f09,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager18OnDeleteGuildBoardEj+0x9d>
 movl   $0x235b,0x8(%esp)
 movl   $"OnDeleteGuildBoard",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnDeleteGuildBoard Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager18OnDeleteGuildBoardEj+0xa2>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnDeleteGuildBoard(unsigned int) */

bool __thiscall CDBManager::_ZN10CDBManager18OnDeleteGuildBoardEj(CDBManager *this,uint param_1)

{
  bool bVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x14);
  (**(code **)(*local_10 + 0x1c))(local_10,0x4f09,"deLete from guild_memo where no=%u",param_1);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f09);
  bVar1 = local_11 == '\x01';
  if (!bVar1) {
    CMyFileLog::CMyFileLog(local_1c,"OnDeleteGuildBoard",0x235b);
    CMyFileLog::operator()(local_1c,"./log/DBQueryErr","OnDeleteGuildBoard Query Error");
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 201 行）：

```cpp
char CDBManager::OnDeleteGuildBoard(unsigned int no)
{
    CDBHandle* h = m_handles[5];    // web db
    h->set_query(0x4f09, "deLete from guild_memo where no=%u", no);
    bool ret = h->exec(0x4f09);
    if (!ret)
    {
        CMyFileLog log("OnDeleteGuildBoard", 0x235b);
        log("./log/DBQueryErr", "OnDeleteGuildBoard Query Error");
        return 0;
    }
    return 1;
}
```
