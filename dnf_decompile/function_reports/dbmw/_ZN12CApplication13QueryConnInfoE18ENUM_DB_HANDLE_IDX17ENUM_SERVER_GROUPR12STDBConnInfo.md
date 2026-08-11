# _ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo

`CApplication::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x806da48` | `0x264` | `0x806deac` | `0x264` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,189 +1,189 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
 sub    $0x70,%esp
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager11GetDBHandleE18ENUM_DB_HANDLE_IDX>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect db_name,db_ip,db_port,db_userid,db_passwd from db_connect where db_server_group = %d and db_type = %d",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x62>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x0,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x8d>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0xb0>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 cmp    $0x1,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0xd6>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 movl   $0x0,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 lea    0x42(%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x1f,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x11d>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%ecx
 mov    0x14(%ebp),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x11,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x15a>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x5c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 lea    0x14(%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x192>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 lea    0x18(%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x15,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x1d2>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
-lea    -0x4c(%ebp),%ebx
+lea    -0x50(%ebp),%ebx
 mov    $0x0,%eax
-mov    $0xf,%edx
+mov    $0x10,%edx
 mov    %ebx,%edi
 mov    %edx,%ecx
 rep stos %eax,%es:(%edi)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x3c,0xc(%esp)
-lea    -0x4c(%ebp),%edx
+lea    -0x50(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x21f>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    0x14(%ebp),%eax
 lea    0x2d(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %edx,0x8(%esp)
-lea    -0x4c(%ebp),%edx
+lea    -0x50(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig12DecryptValueEPKcPc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x24c>
 mov    $0x0,%eax
 jmp    <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo+0x25d>
 mov    0x10(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %edx,0x164(%eax)
 mov    $0x1,%eax
 add    $0x70,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::QueryConnInfo(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, STDBConnInfo&) */

undefined4 __thiscall
CApplication::
_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo
          (CApplication *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_50 [60];
  int *local_14;
  int local_10;
  
  bVar6 = 0;
  local_14 = (int *)CDBManager::GetDBHandle((CDBManager *)(this + 0x50),0);
  cVar2 = (**(code **)(*local_14 + 0x1c))
                    (local_14,0,
                     "seLect db_name,db_ip,db_port,db_userid,db_passwd from db_connect where db_server_group = %d and db_type = %d"
                     ,param_3,param_2);
  if (cVar2 == '\x01') {
    cVar2 = (**(code **)(*local_14 + 0x20))(local_14,0);
    if (cVar2 == '\x01') {
      cVar2 = (**(code **)(*local_14 + 0x24))(local_14);
      if (cVar2 == '\x01') {
        iVar4 = (**(code **)(*local_14 + 0x6c))(local_14);
        if (iVar4 == 1) {
          local_10 = 1;
          cVar2 = (**(code **)(*local_14 + 0x2c))(local_14,0,param_4 + 0x42,0x1f);
          iVar4 = local_10;
          if (cVar2 == '\x01') {
            local_10 = local_10 + 1;
            cVar2 = (**(code **)(*local_14 + 0x2c))(local_14,iVar4,param_4,0x11);
            iVar4 = local_10;
            if (cVar2 == '\x01') {
              local_10 = local_10 + 1;
              cVar2 = (**(code **)(*local_14 + 0x5c))(local_14,iVar4,param_4 + 0x14);
              iVar4 = local_10;
              if (cVar2 == '\x01') {
                local_10 = local_10 + 1;
                cVar2 = (**(code **)(*local_14 + 0x2c))(local_14,iVar4,param_4 + 0x18,0x15);
                if (cVar2 == '\x01') {
                  pcVar5 = local_50;
                  for (iVar4 = 0xf; iVar1 = local_10, iVar4 != 0; iVar4 = iVar4 + -1) {
                    pcVar5[0] = '\0';
                    pcVar5[1] = '\0';
                    pcVar5[2] = '\0';
                    pcVar5[3] = '\0';
                    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
                  }
                  local_10 = local_10 + 1;
                  cVar2 = (**(code **)(*local_14 + 0x2c))(local_14,iVar1,local_50,0x3c);
                  if (cVar2 == '\x01') {
                    cVar2 = CAppConfig::_ZN10CAppConfig12DecryptValueEPKcPc
                                      (*(CAppConfig **)(this + 0x10),local_50,
                                       (char *)(param_4 + 0x2d));
                    if (cVar2 == '\x01') {
                      *(undefined4 *)(param_4 + 0x164) = param_3;
                      uVar3 = 1;
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DNFApplication.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h, source/DNFServer/GameServer/DBMW/DNFApplication.cpp 等 293 个文件*
