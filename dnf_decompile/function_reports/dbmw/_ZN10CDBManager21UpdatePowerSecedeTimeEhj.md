# _ZN10CDBManager21UpdatePowerSecedeTimeEhj

`CDBManager::UpdatePowerSecedeTime(unsigned char, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807acc2` | `0xc2` | `0x80521da` | `0xc3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,54 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x44,%esp
+sub    $0x58,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x1c(%ebp)
+mov    %al,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-movzbl -0x1c(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+movzbl -0x2c(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d",0x8(%esp)
 movl   $0x4ec6,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager21UpdatePowerSecedeTimeEhj+0x9a>
-movzbl -0x1c(%ebp),%ebx
+je     <T> <_ZN10CDBManager21UpdatePowerSecedeTimeEhj+0x9f>
+movzbl -0x2c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
 movl   $0x12fa,0x8(%esp)
 movl   $"UpdatePowerSecedeTime",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CDBManager::SavePowerWarPoint() : upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager21UpdatePowerSecedeTimeEhj+0xbc>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CDBManager21UpdatePowerSecedeTimeEhj+0xc1>
+mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ec6,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x14(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0xd(%ebp)
 mov    $0x1,%eax
-add    $0x44,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdatePowerSecedeTime(unsigned char, unsigned int) */

bool __thiscall
CDBManager::_ZN10CDBManager21UpdatePowerSecedeTimeEhj(CDBManager *this,uchar param_1,uint param_2)

{
  char cVar1;
  CMyFileLog local_1c [12];
  int *local_10;
  
  local_10 = *(int **)(this + 0x20);
  cVar1 = (**(code **)(*local_10 + 0x1c))
                    (local_10,0x4ec6,
                     "upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d"
                     ,param_2,param_1);
  if (cVar1 == '\x01') {
    (**(code **)(*local_10 + 0x20))(local_10,0x4ec6);
  }
  else {
    CMyFileLog::CMyFileLog(local_1c,"UpdatePowerSecedeTime",0x12fa);
    CMyFileLog::operator()
              (local_1c,"./log/DBQueryErr",
               "CDBManager::SavePowerWarPoint() : upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d"
               ,param_2,(uint)param_1);
  }
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
