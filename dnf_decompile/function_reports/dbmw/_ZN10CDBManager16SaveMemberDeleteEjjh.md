# _ZN10CDBManager16SaveMemberDeleteEjjh

`CDBManager::SaveMemberDelete(unsigned int, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8072768` | `0x127` | `0x8055812` | `0x125` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,88 +1,87 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
 cmpb   $0x1,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0xc2>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0xc0>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set master_no = 0, exp = 0 where charac_no=%d",0x8(%esp)
 movl   $0x4e4e,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e4e,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0xb(%ebp)
+movzbl -0xb(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x7a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x125>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x123>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set  delete_time = now() where charac_no=%d",0x8(%esp)
 movl   $0x4e4c,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e4c,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x10e>
+mov    %al,-0xa(%ebp)
 cmpb   $0x2,-0x1c(%ebp)
-jne    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x10e>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x11e>
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate charac_members set  master_no = 0 , exp = 0, delete_time = now() where charac_no=%d",0x8(%esp)
 movl   $0x4e4f,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e4f,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x120>
+je     <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x11e>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x125>
+jmp    <T> <_ZN10CDBManager16SaveMemberDeleteEjjh+0x123>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveMemberDelete(unsigned int, unsigned int, unsigned char) */

bool __thiscall
CDBManager::_ZN10CDBManager16SaveMemberDeleteEjjh
          (CDBManager *this,uint param_1,uint param_2,uchar param_3)

{
  int *piVar1;
  char cVar2;
  char local_11;
  
  piVar1 = *(int **)(this + 8);
  if (param_3 == '\x01') {
    (**(code **)(*piVar1 + 0x1c))
              (piVar1,0x4e4e,"upDate charac_members set master_no = 0, exp = 0 where charac_no=%d",
               param_2);
    cVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e4e);
    if (cVar2 != '\x01') {
      return false;
    }
    (**(code **)(*piVar1 + 0x1c))
              (piVar1,0x4e4c,"upDate charac_members set  delete_time = now() where charac_no=%d",
               param_1);
    local_11 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e4c);
  }
  else if (param_3 == '\x02') {
    (**(code **)(*piVar1 + 0x1c))
              (piVar1,0x4e4f,
               "upDate charac_members set  master_no = 0 , exp = 0, delete_time = now() where charac_no=%d"
               ,param_2);
    local_11 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e4f);
  }
  return local_11 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
