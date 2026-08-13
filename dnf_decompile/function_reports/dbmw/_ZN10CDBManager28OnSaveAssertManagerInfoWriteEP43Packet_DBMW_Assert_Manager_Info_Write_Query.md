# _ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query

`CDBManager::OnSaveAssertManagerInfoWrite(Packet_DBMW_Assert_Manager_Info_Write_Query*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807ff9e` | `0x386` | `0x805f6ec` | `0x327` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,223 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x644,%esp
+sub    $0x648,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x22>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x325>
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x23>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x37d>
-mov    0xc(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x367>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x30f>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x628(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x128(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    -0x10(%ebp),%eax
 imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 cmp    $0xfe,%eax
-ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa8>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
+ja     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xa9>
+mov    -0xc(%ebp),%eax
 add    $0xe,%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xf6>
-mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
-lea    0xe(%eax),%ebx
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0xee>
 movl   $0x1a0e,0x8(%esp)
 movl   $&_ZZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_QueryE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0xc(%esp)
 movl   $"Assert Manager Error : %s",0x8(%esp)
 movl   $"./log/Statistics",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x363>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x30b>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    0xc(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,0x8(%esp)
 lea    -0x128(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x228(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x78,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
-imul   $0x206,%eax,%eax
-add    $0x100,%eax
-add    0xc(%ebp),%eax
-add    $0x14,%eax
+add    $0x114,%eax
 mov    %eax,0x8(%esp)
 lea    -0x228(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x206,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x100,%eax
-movzwl 0xe(%eax),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0xc(%ebp),%eax
+add    $0x10e,%eax
+movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-imul   $0x206,%eax,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x100,%eax
-mov    0x10(%eax),%eax
+add    $0x110,%eax
+mov    (%eax),%eax
 lea    -0x228(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 lea    -0x128(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"upDate assert_manager set cnt=cnt+%d where file_name='%s' and file_line=%d and reason='%s'",0x4(%esp)
 lea    -0x628(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 lea    -0x628(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4eb8,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eb8,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x247>
-mov    -0x14(%ebp),%eax
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x209>
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x24e>
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x210>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x253>
+jmp    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x215>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x323>
+je     <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x2cb>
 movl   $0x400,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x628(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%edx
-imul   $0x206,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x100,%eax
-mov    0x10(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0xc(%ebp),%ecx
-imul   $0x206,%eax,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x100,%eax
-movzwl 0xe(%eax),%eax
+add    $0x110,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+add    $0x10e,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x14(%esp)
 lea    -0x228(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 lea    -0x128(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"inSert into assert_manager (file_name, file_line, reason, cnt) values ('%s', %d, '%s', %d)",0x4(%esp)
 lea    -0x628(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 lea    -0x628(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4eb7,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x18(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4eb7,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 movl   $0x1a2e,0x8(%esp)
 movl   $&_ZZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_QueryE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 lea    -0x628(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Exec Query : %s",0x8(%esp)
 movl   $"./log/Statistic",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x38>
+jne    <T> <_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query+0x39>
 mov    $0x1,%eax
-add    $0x644,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnSaveAssertManagerInfoWrite(Packet_DBMW_Assert_Manager_Info_Write_Query*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager28OnSaveAssertManagerInfoWriteEP43Packet_DBMW_Assert_Manager_Info_Write_Query
          (CDBManager *this,Packet_DBMW_Assert_Manager_Info_Write_Query *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  char local_62c [1024];
  undefined1 local_22c [256];
  undefined1 local_12c [256];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int local_14;
  int local_10;
  
  local_18 = *(int **)(this + 0x3c);
  if (local_18 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = *(int *)(param_1 + 10);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      memset(local_62c,0,0x400);
      memset(local_12c,0,0x100);
      sVar3 = strlen((char *)(param_1 + local_10 * 0x206 + 0xe));
      if ((sVar3 < 0xff) &&
         (param_1[local_10 * 0x206 + 0xe] != (Packet_DBMW_Assert_Manager_Info_Write_Query)0x0)) {
        (**(code **)(*local_18 + 0x78))(local_18,local_12c,param_1 + local_10 * 0x206 + 0xe);
        memset(local_22c,0,0x100);
        (**(code **)(*local_18 + 0x78))(local_18,local_22c,param_1 + local_10 * 0x206 + 0x114);
        sprintf(local_62c,
                "upDate assert_manager set cnt=cnt+%d where file_name=\'%s\' and file_line=%d and reason=\'%s\'"
                ,*(undefined4 *)(param_1 + local_10 * 0x206 + 0x110),local_12c,
                (uint)*(ushort *)(param_1 + local_10 * 0x206 + 0x10e),local_22c);
        (**(code **)(*local_18 + 0x1c))(local_18,0x4eb8,&DAT_081ad540,local_62c);
        local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4eb8);
        if (local_19 == '\x01') {
          lVar5 = (**(code **)(*local_18 + 0x74))(local_18);
          if (lVar5 == 0) goto LAB_080801e5;
          bVar1 = false;
        }
        else {
LAB_080801e5:
          bVar1 = true;
        }
        if (bVar1) {
          memset(local_62c,0,0x400);
          sprintf(local_62c,
                  "inSert into assert_manager (file_name, file_line, reason, cnt) values (\'%s\', %d, \'%s\', %d)"
                  ,local_12c,(uint)*(ushort *)(param_1 + local_10 * 0x206 + 0x10e),local_22c,
                  *(undefined4 *)(param_1 + local_10 * 0x206 + 0x110));
          (**(code **)(*local_18 + 0x1c))(local_18,0x4eb7,&DAT_081ad540,local_62c);
          (**(code **)(*local_18 + 0x20))(local_18,0x4eb7);
        }
        CMyFileLog::CMyFileLog(local_24,"OnSaveAssertManagerInfoWrite",0x1a2e);
        CMyFileLog::operator()(local_24,"./log/Statistic","Exec Query : %s",local_62c);
      }
      else {
        iVar4 = local_10 * 0x206;
        CMyFileLog::CMyFileLog(local_2c,"OnSaveAssertManagerInfoWrite",0x1a0e);
        CMyFileLog::operator()
                  (local_2c,"./log/Statistics","Assert Manager Error : %s",param_1 + iVar4 + 0xe);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
