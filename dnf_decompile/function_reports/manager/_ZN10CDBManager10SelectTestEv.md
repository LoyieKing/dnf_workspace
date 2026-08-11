# _ZN10CDBManager10SelectTestEv

`CDBManager::SelectTest()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80612e8` | `0x116` | `0x804c3d4` | `0x116` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0x14(%ebp)
 movl   $0x0,-0x18(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x18,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $"seLect m_id, charac_no from charac_info where m_id = 1001024",0x8(%esp)
 movl   $0x4e21,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10SelectTestEv+0x5c>
 movl   $"select login_status, m_channel_no from login_account",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10SelectTestEv+0x114>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e21,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10SelectTestEv+0x8e>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10SelectTestEv+0x114>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10SelectTestEv+0xb5>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10SelectTestEv+0x114>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
-mov    (%eax),%edx
-lea    -0x14(%ebp),%eax
-mov    %eax,0x8(%esp)
+mov    (%eax),%eax
+lea    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10SelectTestEv+0xeb>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10SelectTestEv+0x114>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
-mov    (%eax),%edx
-lea    -0x18(%ebp),%eax
-mov    %eax,0x8(%esp)
+mov    (%eax),%eax
+lea    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0xd(%ebp)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SelectTest() */

undefined4 __thiscall CDBManager::_ZN10CDBManager10SelectTestEv(CDBManager *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  char local_11;
  int *local_10;
  
  local_18 = 0;
  local_1c = 0;
  local_10 = *(int **)(this + 8);
  cVar1 = (**(code **)(*local_10 + 0x18))
                    (local_10,0x4e21,"seLect m_id, charac_no from charac_info where m_id = 1001024")
  ;
  if (cVar1 == '\x01') {
    local_11 = (**(code **)(*local_10 + 0x1c))(local_10,0x4e21);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x20))(local_10);
      if (local_11 == '\x01') {
        local_11 = (**(code **)(*local_10 + 0x34))(local_10,0,&local_18);
        if (local_11 == '\x01') {
          (**(code **)(*local_10 + 0x34))(local_10,1,&local_1c);
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    puts("select login_status, m_channel_no from login_account");
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2992 行）：

```cpp
char CDBManager::SelectTest()
{
    int i = 0;
    int j = 0;
    CDBHandle* h = m_handles[2];
    if (!h->set_query(0x4e21,
                      "seLect m_id, charac_no from charac_info where m_id = 1001024"))
    {
        puts("select login_status, m_channel_no from login_account");
        return 0;
    }
    if (!h->exec(0x4e21))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_int(0, j))
        return 0;
    if (!h->get_int(1, i))
        return 0;
    return 1;
}
```
