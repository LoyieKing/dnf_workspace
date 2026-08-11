# _ZN10CDBManager28SaveServerQueueLoadStatisticEhii

`CDBManager::SaveServerQueueLoadStatistic(unsigned char, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8081f80` | `0xc2` | `0x805c202` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10CDBManager28SaveServerQueueLoadStatisticEhii+0x25>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager28SaveServerQueueLoadStatisticEhii+0xc0>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%ecx
-movzbl -0x1c(%ebp),%eax
-mov    0x14(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+movzbl -0x1c(%ebp),%edx
+mov    0x14(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    0x10(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_otherserver_load_stat set occ_time=now(), server_type=%d, kind=%d, q_cnt=%d",0x8(%esp)
 movl   $0x4ecd,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4ecd,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager28SaveServerQueueLoadStatisticEhii+0xbb>
 movl   $0x1c5f,0x8(%esp)
 movl   $"SaveServerQueueLoadStatistic",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"SaveServerQueueLoadStatistic Query Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveServerQueueLoadStatistic(unsigned char, int, int) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager28SaveServerQueueLoadStatisticEhii
          (CDBManager *this,uchar param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x10);
  if (local_10 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*local_10 + 0x1c))
              (local_10,0x4ecd,
               "inSert into log_otherserver_load_stat set occ_time=now(), server_type=%d, kind=%d, q_cnt=%d"
               ,param_1,param_2,param_3);
    local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4ecd);
    if (local_11 != '\x01') {
      CMyFileLog::CMyFileLog(local_1c,"SaveServerQueueLoadStatistic",0x1c5f);
      CMyFileLog::operator()(local_1c,"./log/DBQueryErr","SaveServerQueueLoadStatistic Query Error")
      ;
    }
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
