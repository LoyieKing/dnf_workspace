# _ZN10CDBManager16UpdateQueryCountEjii

`CDBManager::UpdateQueryCount(unsigned int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x806125e` | `0x89` | `0x804c34a` | `0x89` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,43 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN10CDBManager16UpdateQueryCountEjii+0x1c>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager16UpdateQueryCountEjii+0x87>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x18,%eax
-mov    (%eax),%edx
-mov    0x14(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0x14(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_query_stat(occ_time,q_id,total,response_time) values(now(),%d,%d,%d)",0x8(%esp)
 movl   $0x4e2c,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e2c,0x4(%esp)
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
 je     <T> <_ZN10CDBManager16UpdateQueryCountEjii+0x82>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager16UpdateQueryCountEjii+0x87>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateQueryCount(unsigned int, int, int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16UpdateQueryCountEjii
          (CDBManager *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x10);
  if (param_2 < 1) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*piVar1 + 0x18))
              (piVar1,0x4e2c,
               "inSert into log_query_stat(occ_time,q_id,total,response_time) values(now(),%d,%d,%d)"
               ,param_1,param_2,param_3);
    cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,0x4e2c);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2979 行）：

```cpp
char CDBManager::UpdateQueryCount(unsigned int idx, int count, int time)
{
    CDBHandle* h = m_handles[4];
    if (count <= 0)
        return 0;
    h->set_query(0x4e2c,
                 "inSert into log_query_stat(occ_time,q_id,total,response_time) values(now(),%d,%d,%d)",
                 idx, count, time);
    bool ret = h->exec(0x4e2c);
    if (!ret)
        return 0;
    return 1;
}
```
