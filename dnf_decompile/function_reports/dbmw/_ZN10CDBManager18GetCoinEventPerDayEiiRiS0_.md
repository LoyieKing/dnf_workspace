# _ZN10CDBManager18GetCoinEventPerDayEiiRiS0_

`CDBManager::GetCoinEventPerDay(int, int, int&, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8082b58` | `0x28a` | `0x80631dc` | `0x27b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,181 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x54,%esp
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x10(%ebp)
-movb   $0x0,-0x9(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 movl   $0x4,0xc(%esp)
 movl   $"seLect log_id, parameter1, parameter2 from dnf_event_log where event_type= %d and end_time = 0 and server_id =%d and now() >= start_time order by start_time",0x8(%esp)
 movl   $0x4ee5,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4ee5,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xad>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x88>
 movl   $0x1e15,0x8(%esp)
 movl   $&_ZZN10CDBManager18GetCoinEventPerDayEiiRiS0_E12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"GetCoinEventPerDay Error\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4ee5,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xb3>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xd2>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xd8>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xfc>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0xfb>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x2c(%ebp)
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%edx
-lea    -0x24(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x14a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+movl   $0x0,-0x10(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $0x1,0x4(%esp)
-mov    -0x10(%ebp),%eax
+movl   $0x0,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x183>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x134>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+movl   $0x0,-0x14(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x16d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+movl   $0x0,-0x18(%ebp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x1bc>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x1a6>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+mov    -0x14(%ebp),%eax
 add    0x10(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 test   %eax,%eax
-jns    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x1d3>
-movl   $0x0,-0x28(%ebp)
-mov    -0x28(%ebp),%edx
+jns    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x1bd>
+movl   $0x0,-0x14(%ebp)
+mov    -0x14(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %edx,(%eax)
-mov    -0x2c(%ebp),%edx
+mov    -0x18(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %edx,(%eax)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ebx
-mov    -0x24(%ebp),%ecx
-mov    -0x2c(%ebp),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x10(%ebp),%ecx
+mov    -0x18(%ebp),%edx
+mov    -0x14(%ebp),%eax
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate dnf_event_log set parameter1=%d, parameter2=%d where log_id = %u",0x8(%esp)
 movl   $0x4ee6,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ebx
-mov    -0x10(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x248>
+movl   $0x1e44,0x8(%esp)
+movl   $&_ZZN10CDBManager18GetCoinEventPerDayEiiRiS0_E12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"GetCoinEventPerDay Error\n",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ee6,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x27f>
-movl   $0x1e44,0x8(%esp)
-movl   $&_ZZN10CDBManager18GetCoinEventPerDayEiiRiS0_E12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"GetCoinEventPerDay Error\n",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x270>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x284>
+jmp    <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_+0x275>
 mov    $0x1,%eax
-add    $0x54,%esp
+add    $0x44,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GetCoinEventPerDay(int, int, int&, int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_
          (CDBManager *this,int param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_30;
  int local_2c;
  undefined4 local_28;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int *local_14;
  char local_d;
  
  local_14 = *(int **)(this + 4);
  local_d = 0;
  (**(code **)(*local_14 + 0x1c))
            (local_14,0x4ee5,
             "seLect log_id, parameter1, parameter2 from dnf_event_log where event_type= %d and end_time = 0 and server_id =%d and now() >= start_time order by start_time"
             ,4,param_1);
  local_d = (**(code **)(*local_14 + 0x20))(local_14,0x4ee5);
  if (local_d == '\x01') {
    iVar2 = (**(code **)(*local_14 + 0x6c))(local_14);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      local_d = (**(code **)(*local_14 + 0x24))(local_14);
      if (local_d == '\x01') {
        local_28 = 0;
        local_2c = 0;
        local_30 = 0;
        local_d = (**(code **)(*local_14 + 0x38))(local_14,0,&local_28);
        if (local_d == '\x01') {
          local_d = (**(code **)(*local_14 + 0x34))(local_14,1,&local_2c);
          if (local_d == '\x01') {
            local_d = (**(code **)(*local_14 + 0x34))(local_14,2,&local_30);
            if (local_d == '\x01') {
              local_2c = local_2c + param_2;
              if (local_2c < 0) {
                local_2c = 0;
              }
              *param_3 = local_2c;
              *param_4 = local_30;
              (**(code **)(*local_14 + 0x1c))
                        (local_14,0x4ee6,
                         "upDate dnf_event_log set parameter1=%d, parameter2=%d where log_id = %u",
                         local_2c,local_30,local_28);
              local_d = (**(code **)(*local_14 + 0x20))(local_14,0x4ee6);
              if (local_d == '\x01') {
                uVar1 = 1;
              }
              else {
                CMyFileLog::CMyFileLog(local_1c,"GetCoinEventPerDay",0x1e44);
                CMyFileLog::operator()(local_1c,"./log/DBQueryErr","GetCoinEventPerDay Error\n");
                uVar1 = 0;
              }
            }
            else {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_24,"GetCoinEventPerDay",0x1e15);
    CMyFileLog::operator()(local_24,"./log/DBQueryErr","GetCoinEventPerDay Error\n");
    uVar1 = 0;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
