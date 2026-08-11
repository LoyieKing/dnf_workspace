# mysql_real_query

`mysql_real_query`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80c0010` | `0x53` | `0x80b927e` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
-mov    0x10(%ebp),%eax
-mov    %ebx,-0x8(%ebp)
-call   <T> <__i686.get_pc_thunk.bx>
-add    $0x1c299f,%ebx
-mov    %esi,-0x4(%ebp)
-mov    0x8(%ebp),%esi
-mov    %eax,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %esi,(%esp)
-mov    %eax,0x4(%esp)
-call   <T> <mysql_send_query>
-mov    %eax,%edx
-mov    $0x1,%eax
-test   %edx,%edx
-jne    <T> <mysql_real_query+0x49>
-mov    0x3b0(%esi),%eax
-mov    %esi,(%esp)
-call   *(%eax)
-movsbl %al,%eax
-mov    -0x8(%ebp),%ebx
-mov    -0x4(%ebp),%esi
-mov    %ebp,%esp
+mov    $0x0,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int mysql_real_query(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = mysql_send_query(param_1,param_2,param_3);
  iVar3 = 1;
  if (iVar2 == 0) {
    cVar1 = (*(code *)**(undefined4 **)(param_1 + 0x3b0))(param_1);
    iVar3 = (int)cVar1;
  }
  return iVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/mysql_stubs.cpp)（约第 48 行）：

```cpp
NSL_WEAK int mysql_real_query(MYSQL* mysql, const char* q, unsigned long length)
{
    (void)mysql;
    (void)q;
    (void)length;
    return 0;
}
```
