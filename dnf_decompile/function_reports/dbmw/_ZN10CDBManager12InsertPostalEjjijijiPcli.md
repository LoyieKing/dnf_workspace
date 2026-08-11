# _ZN10CDBManager12InsertPostalEjjijijiPcli

`CDBManager::InsertPostal(unsigned int, unsigned int, int, unsigned int, int, unsigned int, int, char*, long, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8074584` | `0x13d` | `0x806277a` | `0x13d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,86 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0x30(%ebp),%eax
-mov    %eax,0x34(%esp)
-mov    0x28(%ebp),%eax
-mov    %eax,0x30(%esp)
-mov    0x24(%ebp),%eax
-mov    %eax,0x2c(%esp)
+mov    (%eax),%eax
+mov    0x30(%ebp),%edx
+mov    %edx,0x34(%esp)
+mov    0x28(%ebp),%edx
+mov    %edx,0x30(%esp)
+mov    0x24(%ebp),%edx
+mov    %edx,0x2c(%esp)
 movl   $0x0,0x28(%esp)
-mov    0x20(%ebp),%eax
-mov    %eax,0x24(%esp)
-mov    0x1c(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    0x18(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x2c(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    0x20(%ebp),%edx
+mov    %edx,0x24(%esp)
+mov    0x1c(%ebp),%edx
+mov    %edx,0x20(%esp)
+mov    0x18(%ebp),%edx
+mov    %edx,0x1c(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x18(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name, letter_id ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s', %d)",0x8(%esp)
 movl   $0x4e3a,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager12InsertPostalEjjijijiPcli+0x10e>
 movl   $0x7bb,0x8(%esp)
 movl   $"InsertPostal",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x30(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    0x28(%ebp),%eax
 mov    %eax,0x30(%esp)
 mov    0x24(%ebp),%eax
 mov    %eax,0x2c(%esp)
 movl   $0x0,0x28(%esp)
 mov    0x20(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x2c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s', %d)\n",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e3a,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager12InsertPostalEjjijijiPcli+0x136>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager12InsertPostalEjjijijiPcli+0x13b>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::InsertPostal(unsigned int, unsigned int, int, unsigned int, int, unsigned int, int,
   char*, long, int) */

bool __thiscall
CDBManager::_ZN10CDBManager12InsertPostalEjjijijiPcli
          (CDBManager *this,uint param_1,uint param_2,int param_3,uint param_4,int param_5,
          uint param_6,int param_7,char *param_8,long param_9,int param_10)

{
  char cVar1;
  CMyFileLog local_18 [8];
  int *local_10;
  
  local_10 = *(int **)(this + 0xc);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4e3a,
                     "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name, letter_id ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\', %d)"
                     ,param_9,param_2,param_1,param_3,param_4,param_5,param_6,0,param_7,param_8,
                     param_10);
  if (cVar1 != '\x01') {
    CMyFileLog::CMyFileLog(local_18,"InsertPostal",0x7bb);
    CMyFileLog::operator()
              (local_18,"./log/DBQueryErr",
               "CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,\'%s\', %d)\n"
               ,param_9,param_2,param_1,param_3,param_4,param_5,param_6,0,param_7,param_8,param_10);
  }
  cVar1 = (**(code **)(*local_10 + 0x20))(local_10,0x4e3a);
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
