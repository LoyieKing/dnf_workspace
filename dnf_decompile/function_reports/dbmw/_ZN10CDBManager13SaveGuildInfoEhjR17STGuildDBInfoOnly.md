# _ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly

`CDBManager::SaveGuildInfo(unsigned char, unsigned int, STGuildDBInfoOnly&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807221e` | `0x172` | `0x8057762` | `0x16e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,107 +1,106 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0x14(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x67>
+jne    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x6a>
 movzbl -0x2c(%ebp),%ebx
 movl   $0x2e2,0x8(%esp)
 movl   $&_ZZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnlyE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    0x10(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %bl,%eax
+mov    0x10(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CDBManager::SaveGuildInfo server_group(%d), guild_id(%d) GuildName NULL\n",0x8(%esp)
 movl   $"./log/TraceGuildErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%eax
 mov    %eax,-0x44(%ebp)
 mov    0x14(%ebp),%eax
 mov    0xa0(%eax),%esi
 mov    0x14(%ebp),%eax
 movzbl 0x9f(%eax),%eax
 movzbl %al,%edi
 mov    0x14(%ebp),%eax
 movzbl 0x9e(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x40(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x9a(%eax),%eax
 mov    %eax,-0x3c(%ebp)
 mov    0x14(%ebp),%eax
 movzbl 0x95(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x38(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,-0x34(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x29(%eax),%eax
 mov    %eax,-0x30(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x24(%eax),%ebx
 mov    0x14(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%ecx
 mov    0x14(%ebp),%eax
 movzbl 0x1b(%eax),%eax
 movzbl %al,%edx
 mov    0x10(%ebp),%eax
 mov    %eax,0x34(%esp)
 mov    %esi,0x30(%esp)
 mov    %edi,0x2c(%esp)
 mov    -0x40(%ebp),%eax
 mov    %eax,0x28(%esp)
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0x38(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    -0x34(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x30(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 movl   $"upDate guild_info set lev=%d, ability=%d, guild_point=%d, guild_exp = %d, guild_name = '%s', power_side=%d, power_war_point=%d, guild_agit_flag=%d, power_join_count=%d, guild_fund = %d where guild_id = %d",0x8(%esp)
 movl   $0x4e25,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *-0x44(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e25,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x1d(%ebp)
-movzbl -0x1d(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x165>
+je     <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x161>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x16a>
+jmp    <T> <_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly+0x166>
 mov    $0x1,%eax
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SaveGuildInfo(unsigned char, unsigned int, STGuildDBInfoOnly&) */

bool __thiscall
CDBManager::_ZN10CDBManager13SaveGuildInfoEhjR17STGuildDBInfoOnly
          (CDBManager *this,uchar param_1,uint param_2,STGuildDBInfoOnly *param_3)

{
  char cVar1;
  CMyFileLog local_2c [12];
  int *local_20;
  
  local_20 = *(int **)(this + 0x20);
  if (*param_3 == (STGuildDBInfoOnly)0x0) {
    CMyFileLog::CMyFileLog(local_2c,"SaveGuildInfo",0x2e2);
    CMyFileLog::operator()
              (local_2c,"./log/TraceGuildErr",
               "CDBManager::SaveGuildInfo server_group(%d), guild_id(%d) GuildName NULL\n",
               (uint)param_1,param_2);
  }
  (**(code **)(*local_20 + 0x1c))
            (local_20,0x4e25,
             "upDate guild_info set lev=%d, ability=%d, guild_point=%d, guild_exp = %d, guild_name = \'%s\', power_side=%d, power_war_point=%d, guild_agit_flag=%d, power_join_count=%d, guild_fund = %d where guild_id = %d"
             ,param_3[0x1b],*(undefined2 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x24),
             *(undefined4 *)(param_3 + 0x29),param_3,param_3[0x95],*(undefined4 *)(param_3 + 0x9a),
             param_3[0x9e],param_3[0x9f],*(undefined4 *)(param_3 + 0xa0),param_2);
  cVar1 = (**(code **)(*local_20 + 0x20))(local_20,0x4e25);
  return cVar1 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
