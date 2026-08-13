# _ZN10CDBManager19QueryCharacNoByNameEPcRjPi

`CDBManager::QueryCharacNoByName(char*, unsigned int&, int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80764f6` | `0x281` | `0x806343e` | `0x283` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,176 +1,174 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x90>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no from charac_info where charac_name = '%s'",0x8(%esp)
 movl   $0x4e3e,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x107>
 movl   $0xb12,0x8(%esp)
 movl   $&_ZZN10CDBManager19QueryCharacNoByNameEPcRjPiE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = '%s'",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect charac_no,m_id from charac_info where charac_name = '%s'",0x8(%esp)
 movl   $0x4e3e,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x107>
 movl   $0xb1a,0x8(%esp)
 movl   $&_ZZN10CDBManager19QueryCharacNoByNameEPcRjPiE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = '%s'",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e3e,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x139>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x132>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x153>
 cmpl   $0x1,-0x10(%ebp)
-jg     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x15a>
-cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1a1>
+jle    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x19a>
 movl   $0xb30,0x8(%esp)
 movl   $&_ZZN10CDBManager19QueryCharacNoByNameEPcRjPiE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::QueryCharacNoByName() : n_data != 1( %d )\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1cb>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1bd>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x201>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x1ef>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
+movl   $0x0,-0x30(%ebp)
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x23d>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x22f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13GetGMAccountsEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x4(%esp)
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    -0x30(%ebp),%edx
 mov    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN8WongWork11CGMAccounts4isGMEj>
 test   %al,%al
-je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27a>
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x263>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x268>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27c>
 mov    0x14(%ebp),%eax
 movl   $0x5a,(%eax)
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x27f>
+jmp    <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi+0x281>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryCharacNoByName(char*, unsigned int&, int*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager19QueryCharacNoByNameEPcRjPi
          (CDBManager *this,char *param_1,uint *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint local_38;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  int local_14;
  CGMAccounts *local_10;
  
  local_18 = *(int **)(this + 8);
  if (param_3 == (int *)0x0) {
    cVar1 = (**(code **)(*local_18 + 0x1c))
                      (local_18,0x4e3e,
                       "seLect charac_no from charac_info where charac_name = \'%s\'",param_1);
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_34,"QueryCharacNoByName",0xb12);
      CMyFileLog::operator()
                (local_34,"./log/DBQueryErr",
                 "CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = \'%s\'"
                 ,param_1);
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(*local_18 + 0x1c))
                      (local_18,0x4e3e,
                       "seLect charac_no,m_id from charac_info where charac_name = \'%s\'",param_1);
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_2c,"QueryCharacNoByName",0xb1a);
      CMyFileLog::operator()
                (local_2c,"./log/DBQueryErr",
                 "CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = \'%s\'"
                 ,param_1);
      return 0;
    }
  }
  local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4e3e);
  if (local_19 == '\x01') {
    local_14 = (**(code **)(*local_18 + 0x6c))(local_18);
    if ((local_14 < 2) && (local_14 != 0)) {
      local_19 = (**(code **)(*local_18 + 0x24))(local_18);
      if (local_19 == '\x01') {
        local_19 = (**(code **)(*local_18 + 0x38))(local_18,0,param_2);
        if (local_19 == '\x01') {
          if (param_3 != (int *)0x0) {
            local_19 = (**(code **)(*local_18 + 0x38))(local_18,1,&local_38);
            if (local_19 != '\x01') {
              return 0;
            }
            local_10 = (CGMAccounts *)CApplication::GetGMAccounts(*(CApplication **)(this + 0x44));
            if ((local_10 != (CGMAccounts *)0x0) &&
               (cVar1 = WongWork::CGMAccounts::isGM(local_10,local_38), cVar1 != '\0')) {
              *param_3 = 0x5a;
              return 0;
            }
          }
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
      CMyFileLog::CMyFileLog(local_24,"QueryCharacNoByName",0xb30);
      CMyFileLog::operator()
                (local_24,"./log/DBQueryErr",
                 "CDBManager::QueryCharacNoByName() : n_data != 1( %d )\n",local_14);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
