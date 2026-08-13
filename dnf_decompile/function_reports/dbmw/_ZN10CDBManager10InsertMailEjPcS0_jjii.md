# _ZN10CDBManager10InsertMailEjPcS0_jjii

`CDBManager::InsertMail(unsigned int, char*, char*, unsigned int, unsigned int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80826ae` | `0x192` | `0x804f2f0` | `0x192` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,99 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x24(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    -0x10(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    -0x10(%ebp),%eax
 movl   $0x0,(%eax)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
 mov    %eax,-0xc(%ebp)
-movl   $0x0,-0x28(%ebp)
+movl   $0x0,-0x18(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x18(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager12InsertLetterEjjPKcS1_Ril>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10InsertMailEjPcS0_jjii+0xe5>
 movl   $0x1d9e,0x8(%esp)
 movl   $&_ZZN10CDBManager10InsertMailEjPcS0_jjiiE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"InsertLetter Err, %s(%s)",0x8(%esp)
 movl   $"./log/Postal",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10InsertMailEjPcS0_jjii+0x190>
-mov    -0x28(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x20(%esp)
 movl   $0x0,0x1c(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $0x0,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager12InsertPostalEjjijijiPcli>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager10InsertMailEjPcS0_jjii+0x18b>
 movl   $0x1da4,0x8(%esp)
 movl   $&_ZZN10CDBManager10InsertMailEjPcS0_jjiiE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"InsertPostal Err, %s(%s)",0x8(%esp)
 movl   $"./log/Postal",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager10InsertMailEjPcS0_jjii+0x190>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::InsertMail(unsigned int, char*, char*, unsigned int, unsigned int, int, int) */

undefined4
CDBManager::_ZN10CDBManager10InsertMailEjPcS0_jjii
          (uint param_1,char *param_2,char *param_3,uint param_4,uint param_5,int param_6,
          int param_7)

{
  char cVar1;
  undefined4 uVar2;
  int local_2c;
  time_t local_28;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  tm *local_14;
  long local_10;
  
  local_28 = time((time_t *)0x0);
  local_14 = localtime(&local_28);
  local_14->tm_hour = local_14->tm_hour + 1;
  local_14->tm_min = 0;
  local_14->tm_sec = 0;
  local_10 = mktime(local_14);
  local_2c = 0;
  cVar1 = InsertLetter((CDBManager *)param_1,(uint)param_2,0,param_3,(char *)param_4,&local_2c,
                       local_10);
  if (cVar1 == '\x01') {
    cVar1 = InsertPostal((CDBManager *)param_1,(uint)param_2,0,0,param_5,param_7,param_6,0,param_3,
                         local_10,local_2c);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_1c,"InsertMail",0x1da4);
      CMyFileLog::operator()(local_1c,"./log/Postal","InsertPostal Err, %s(%s)",param_3,param_4);
      uVar2 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"InsertMail",0x1d9e);
    CMyFileLog::operator()(local_24,"./log/Postal","InsertLetter Err, %s(%s)",param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
