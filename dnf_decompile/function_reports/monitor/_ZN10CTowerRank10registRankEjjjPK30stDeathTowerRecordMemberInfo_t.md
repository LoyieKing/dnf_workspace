# _ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t

`CTowerRank::registRank(unsigned int, unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a3512` | `0x4f` | `0x8086e34` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t+0x40>
 mov    -0xc(%ebp),%eax
 imul   $0x17,%eax,%eax
 add    0x18(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank16registCharacRankEjPKcjj>
 addl   $0x1,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+mov    -0xc(%ebp),%eax
+cmp    0xc(%ebp),%eax
+setb   %al
 test   %al,%al
 jne    <T> <_ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTowerRank::registRank(unsigned int, unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t
   const*) */

void __thiscall
CTowerRank::_ZN10CTowerRank10registRankEjjjPK30stDeathTowerRecordMemberInfo_t
          (CTowerRank *this,uint param_1,uint param_2,uint param_3,
          stDeathTowerRecordMemberInfo_t *param_4)

{
  int local_10;
  
  for (local_10 = 0; local_10 < (int)param_1; local_10 = local_10 + 1) {
    registCharacRank(this,param_1,(char *)(param_4 + local_10 * 0x17),param_2,param_3);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFServerHandler.h, source/DNFServer/GameServer/Monitor/DNFServerInterface.h, source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFTowerRank.h, source/DNFServer/ServerCommon/DNFFileLog.h 等 299 个文件*
