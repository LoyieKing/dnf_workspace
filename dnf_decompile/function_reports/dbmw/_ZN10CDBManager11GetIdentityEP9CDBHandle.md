# _ZN10CDBManager11GetIdentityEP9CDBHandle

`CDBManager::GetIdentity(CDBHandle*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8074346` | `0xa4` | `0x8058150` | `0xa4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $"seLect @@identity",0x8(%esp)
 movl   $0x4e5d,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e5d,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0x50>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0xa2>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0x70>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0xa2>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0xc(%ebp),%eax
-mov    %eax,0x8(%esp)
+mov    (%eax),%eax
+lea    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0x9f>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager11GetIdentityEP9CDBHandle+0xa2>
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GetIdentity(CDBHandle*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager11GetIdentityEP9CDBHandle(CDBManager *this,CDBHandle *param_1)

{
  char cVar1;
  undefined4 local_10 [3];
  
  (**(code **)(*(int *)param_1 + 0x1c))(param_1,0x4e5d,"seLect @@identity");
  cVar1 = (**(code **)(*(int *)param_1 + 0x20))(param_1,0x4e5d);
  if (cVar1 == '\x01') {
    cVar1 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1,0,local_10);
      if (cVar1 != '\x01') {
        local_10[0] = 0;
      }
    }
    else {
      local_10[0] = 0;
    }
  }
  else {
    local_10[0] = 0;
  }
  return local_10[0];
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 3028 行）：

```cpp
unsigned int CDBManager::GetIdentity(CDBHandle* h)
{
    h->set_query(0x4e5d, "seLect @@identity");
    if (!h->exec(0x4e5d))
        return 0;
    if (!h->fetch())
        return 0;
    unsigned int id;
    if (!h->get_uint(0, id))
        return 0;
    return id;
}
```
