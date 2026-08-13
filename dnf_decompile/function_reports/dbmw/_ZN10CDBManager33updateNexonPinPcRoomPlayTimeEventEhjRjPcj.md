# _ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj

`CDBManager::updateNexonPinPcRoomPlayTimeEvent(unsigned char, unsigned int, unsigned int&, char*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80872de` | `0x391` | `0x805f3d2` | `0x360` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,227 +1,213 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x88,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x28>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x5c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect no, nexon_pin from event_pcroom_time_nexon_cash where server_info = %d and m_id = 0 order by no asc limit 1",0x8(%esp)
 movl   $0x4f4e,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0xa0>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x99>
 movl   $0x2a16,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"seLect NexonPinPcRoomPlayTime set Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f4e,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x108>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0xfa>
 movl   $0x2a1e,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectNexonPinPcRoomPlayTime Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x163>
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x155>
 movl   $0x2a24,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectNexonPinPcRoomPlayTime (Row_Data Not Exist) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x1c3>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x1ae>
 movl   $0x2a2b,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectNexonPinPcRoomPlayTime Query(fetch) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x232>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x216>
 movl   $0x2a32,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectNexonPinPcRoomPlayTime (get_uint(pin_num)) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x2c,%eax
 mov    (%eax),%edx
 mov    0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x2a8>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x285>
 movl   $0x2a39,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectNexonPinPcRoomPlayTime (get_str(nexon_pin)) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate event_pcroom_time_nexon_cash set m_id = %d, occ_date = now() where no = %d",0x8(%esp)
 movl   $0x4f4f,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x325>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x2fb>
 movl   $0x2a43,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate NexonPinPcRoomPlayTime set Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f4f,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38a>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x359>
 movl   $0x2a4b,0x8(%esp)
 movl   $&_ZZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcjE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"upDate updateNexonPinPcRoomPlayTime Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x38f>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj+0x35e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::updateNexonPinPcRoomPlayTimeEvent(unsigned char, unsigned int, unsigned int&, char*,
   unsigned int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager33updateNexonPinPcRoomPlayTimeEventEhjRjPcj
          (CDBManager *this,uchar param_1,uint param_2,uint *param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x24);
  if (local_10 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_11 = (**(code **)(*local_10 + 0x1c))
                         (local_10,0x4f4e,
                          "seLect no, nexon_pin from event_pcroom_time_nexon_cash where server_info = %d and m_id = 0 order by no asc limit 1"
                          ,param_1);
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f4e);
      if (local_11 == '\x01') {
        iVar2 = (**(code **)(*local_10 + 0x6c))(local_10);
        if (iVar2 == 0) {
          CMyFileLog::CMyFileLog(local_44,"updateNexonPinPcRoomPlayTimeEvent",0x2a24);
          CMyFileLog::operator()
                    (local_44,"./log/DBQueryErr",
                     "selectNexonPinPcRoomPlayTime (Row_Data Not Exist) Error");
          uVar1 = 0;
        }
        else {
          local_11 = (**(code **)(*local_10 + 0x24))(local_10);
          if (local_11 == '\x01') {
            local_11 = (**(code **)(*local_10 + 0x38))(local_10,0,param_3);
            if (local_11 == '\x01') {
              local_11 = (**(code **)(*local_10 + 0x2c))(local_10,1,param_4,param_5);
              if (local_11 == '\x01') {
                local_11 = (**(code **)(*local_10 + 0x1c))
                                     (local_10,0x4f4f,
                                      "upDate event_pcroom_time_nexon_cash set m_id = %d, occ_date = now() where no = %d"
                                      ,param_2,*param_3);
                if (local_11 == '\x01') {
                  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f4f);
                  if (local_11 == '\x01') {
                    uVar1 = 1;
                  }
                  else {
                    CMyFileLog::CMyFileLog(local_1c,"updateNexonPinPcRoomPlayTimeEvent",0x2a4b);
                    CMyFileLog::operator()
                              (local_1c,"./log/DBQueryErr",
                               "upDate updateNexonPinPcRoomPlayTime Query(exec) Error");
                    uVar1 = 0;
                  }
                }
                else {
                  CMyFileLog::CMyFileLog(local_24,"updateNexonPinPcRoomPlayTimeEvent",0x2a43);
                  CMyFileLog::operator()
                            (local_24,"./log/DBQueryErr","upDate NexonPinPcRoomPlayTime set Error");
                  uVar1 = 0;
                }
              }
              else {
                CMyFileLog::CMyFileLog(local_2c,"updateNexonPinPcRoomPlayTimeEvent",0x2a39);
                CMyFileLog::operator()
                          (local_2c,"./log/DBQueryErr",
                           "selectNexonPinPcRoomPlayTime (get_str(nexon_pin)) Error");
                uVar1 = 0;
              }
            }
            else {
              CMyFileLog::CMyFileLog(local_34,"updateNexonPinPcRoomPlayTimeEvent",0x2a32);
              CMyFileLog::operator()
                        (local_34,"./log/DBQueryErr",
                         "selectNexonPinPcRoomPlayTime (get_uint(pin_num)) Error");
              uVar1 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_3c,"updateNexonPinPcRoomPlayTimeEvent",0x2a2b);
            CMyFileLog::operator()
                      (local_3c,"./log/DBQueryErr","selectNexonPinPcRoomPlayTime Query(fetch) Error"
                      );
            uVar1 = 0;
          }
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_4c,"updateNexonPinPcRoomPlayTimeEvent",0x2a1e);
        CMyFileLog::operator()
                  (local_4c,"./log/DBQueryErr","selectNexonPinPcRoomPlayTime Query(exec) Error");
        uVar1 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_54,"updateNexonPinPcRoomPlayTimeEvent",0x2a16);
      CMyFileLog::operator()(local_54,"./log/DBQueryErr","seLect NexonPinPcRoomPlayTime set Error");
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
