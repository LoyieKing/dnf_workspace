# _ZN10CDBManager13SaveMemberExpEjjj

`CDBManager::SaveMemberExp(unsigned int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8072ed8` | `0xc7` | `0x8052112` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0x10(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"upDate charac_members set exp=%d where charac_no = %d and master_no = %d",0x8(%esp)
 movl   $0x4e4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e4d,0x4(%esp)
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
 je     <T> <_ZN10CDBManager13SaveMemberExpEjjj+0xc0>
 movl   $0x4f1,0x8(%esp)
 movl   $"SaveMemberExp",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"ERROR  CDBManager::SaveMemberExp   upDate charac_members set exp=%d where charac_no = %d and master_no = %d",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager13SaveMemberExpEjjj+0xc5>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveMemberExp(unsigned int, unsigned int, unsigned int) */

bool __thiscall
CDBManager::_ZN10CDBManager13SaveMemberExpEjjj
          (CDBManager *this,uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 8);
  (**(code **)(*local_10 + 0x1c))
            (local_10,0x4e4d,
             "upDate charac_members set exp=%d where charac_no = %d and master_no = %d",param_3,
             param_1,param_2);
  local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4e4d);
  bVar1 = local_11 == '\x01';
  if (!bVar1) {
    CMyFileLog::CMyFileLog(local_1c,"SaveMemberExp",0x4f1);
    CMyFileLog::operator()
              (local_1c,"./log/MemberModify",
               "ERROR  CDBManager::SaveMemberExp   upDate charac_members set exp=%d where charac_no = %d and master_no = %d"
               ,param_3,param_1,param_2);
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
