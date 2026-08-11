# _ZN10CDBManager26OnMemberDeleteAsCharDeleteEj

`CDBManager::OnMemberDeleteAsCharDelete(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80725a4` | `0x1c3` | `0x8050c00` | `0x1b1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,132 +1,126 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_members where charac_no=%d",0x8(%esp)
 movl   $0x4e2d,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e2d,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"upDate charac_members set master_no = 0 where master_no=%d",0x8(%esp)
 movl   $0x4e2e,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e2e,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_black_list where charac_no=%d",0x8(%esp)
 movl   $0x4e7e,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e7e,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_black_info where charac_no=%d",0x8(%esp)
 movl   $0x4e7f,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e7f,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_friends where charac_no=%d",0x8(%esp)
 movl   $0x4ea3,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ea3,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"deLete from charac_friends where friend_no=%d",0x8(%esp)
 movl   $0x4ea4,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ea4,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnMemberDeleteAsCharDelete(unsigned int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager26OnMemberDeleteAsCharDeleteEj(CDBManager *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(this + 8);
  piVar2 = *(int **)(this + 0xc);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4e2d,"deLete from charac_members where charac_no=%d",param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,0x4e2d);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4e2e,"upDate charac_members set master_no = 0 where master_no=%d",param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,0x4e2e);
  (**(code **)(*piVar2 + 0x1c))
            (piVar2,0x4e7e,"deLete from charac_black_list where charac_no=%d",param_1);
  (**(code **)(*piVar2 + 0x20))(piVar2,0x4e7e);
  (**(code **)(*piVar2 + 0x1c))
            (piVar2,0x4e7f,"deLete from charac_black_info where charac_no=%d",param_1);
  (**(code **)(*piVar2 + 0x20))(piVar2,0x4e7f);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4ea3,"deLete from charac_friends where charac_no=%d",param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,0x4ea3);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4ea4,"deLete from charac_friends where friend_no=%d",param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,0x4ea4);
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1048 行）：

```cpp
char CDBManager::OnMemberDeleteAsCharDelete(unsigned int characNo)
{
    CDBHandle* h = m_handles[2];    // game db
    CDBHandle* h2 = m_handles[3];   // game2nd db
    h->set_query(0x4e2d,
                 "deLete from charac_members where charac_no=%d", characNo);
    h->exec(0x4e2d);
    h->set_query(0x4e2e,
                 "upDate charac_members set master_no = 0 where master_no=%d",
                 characNo);
    h->exec(0x4e2e);
    h2->set_query(0x4e7e,
                  "deLete from charac_black_list where charac_no=%d",
                  characNo);
    h2->exec(0x4e7e);
    h2->set_query(0x4e7f,
                  "deLete from charac_black_info where charac_no=%d",
                  characNo);
    h2->exec(0x4e7f);
    h->set_query(0x4ea3,
                 "deLete from charac_friends where charac_no=%d", characNo);
    h->exec(0x4ea3);
    h->set_query(0x4ea4,
                 "deLete from charac_friends where friend_no=%d", characNo);
    h->exec(0x4ea4);
    return 1;
}
```
