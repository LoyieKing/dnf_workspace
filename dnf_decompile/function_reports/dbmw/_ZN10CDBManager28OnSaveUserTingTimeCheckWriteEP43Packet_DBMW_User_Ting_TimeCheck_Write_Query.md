# _ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query

`CDBManager::OnSaveUserTingTimeCheckWrite(Packet_DBMW_User_Ting_TimeCheck_Write_Query*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80806dc` | `0xec` | `0x80588a6` | `0xec` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x428,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
 jne    <T> <_ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query+0x22>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query+0xea>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
+mov    %eax,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query+0xd4>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x415(%ebp),%eax
+lea    -0x418(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    0x12(%eax,%edx,8),%edx
-mov    -0xc(%ebp),%ecx
+mov    -0x10(%ebp),%ecx
 mov    0xc(%ebp),%eax
 mov    0xe(%eax,%ecx,8),%eax
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"inSert into user_ting_timecheck (occ_time, minute, cnt) values (now(),%d,%d)",0x4(%esp)
-lea    -0x415(%ebp),%eax
+lea    -0x418(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
-lea    -0x415(%ebp),%eax
+lea    -0x418(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4ebc,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ebc,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+mov    %al,-0x9(%ebp)
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query+0x37>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSaveUserTingTimeCheckWrite(Packet_DBMW_User_Ting_TimeCheck_Write_Query*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager28OnSaveUserTingTimeCheckWriteEP43Packet_DBMW_User_Ting_TimeCheck_Write_Query
          (CDBManager *this,Packet_DBMW_User_Ting_TimeCheck_Write_Query *param_1)

{
  undefined4 uVar1;
  char local_419 [1024];
  undefined1 local_19;
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = *(int **)(this + 0x3c);
  if (local_18 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 10);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      memset(local_419,0,0x400);
      sprintf(local_419,
              "inSert into user_ting_timecheck (occ_time, minute, cnt) values (now(),%d,%d)",
              *(undefined4 *)(param_1 + local_10 * 8 + 0xe),
              *(undefined4 *)(param_1 + local_10 * 8 + 0x12));
      (**(code **)(*local_18 + 0x1c))(local_18,0x4ebc,&DAT_081ad540,local_419);
      local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4ebc);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
