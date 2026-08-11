# _ZN10CDBManager21DeleteToBlackListOnlyEjPc

`CDBManager::DeleteToBlackListOnly(unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8076480` | `0x75` | `0x804e47e` | `0x75` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_black_list where m_id = %u and charac_name = '%s'",0x8(%esp)
 movl   $0x4e40,0x4(%esp)
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
 movl   $0x4e40,0x4(%esp)
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
 je     <T> <_ZN10CDBManager21DeleteToBlackListOnlyEjPc+0x6e>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager21DeleteToBlackListOnlyEjPc+0x73>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::DeleteToBlackListOnly(unsigned int, char*) */

bool __thiscall
CDBManager::_ZN10CDBManager21DeleteToBlackListOnlyEjPc(CDBManager *this,uint param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(this + 0xc);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4e40,"deLete from charac_black_list where m_id = %u and charac_name = \'%s\'",
             param_1,param_2);
  cVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e40);
  return cVar2 == '\x01';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 327 行）：

```cpp
char CDBManager::DeleteToBlackListOnly(unsigned int m_id, char* name)
{
    CDBHandle* h = m_handles[3];    // game db
    h->set_query(0x4e40,
                 "deLete from charac_black_list where m_id = %u and charac_name = '%s'",
                 m_id, name);
    bool ret = h->exec(0x4e40);
    if (!ret)
        return 0;
    return 1;
}
```
