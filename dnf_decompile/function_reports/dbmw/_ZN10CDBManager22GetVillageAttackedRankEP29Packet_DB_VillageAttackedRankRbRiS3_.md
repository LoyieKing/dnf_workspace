# _ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_

`CDBManager::GetVillageAttackedRank(Packet_DB_VillageAttackedRank*, bool&, int&, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8082de2` | `0x130` | `0x8051788` | `0x154` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x24,%esp
+sub    $0x34,%esp
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager21GetMinTimeServerGroupEi>
 cmp    %eax,%ebx
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x4d>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x5b>
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-mov    0xf(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xf,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi>
 cmp    %eax,%ebx
-jne    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x54>
+jne    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x62>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x59>
+jmp    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x67>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x96>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xab>
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_>
 test   %al,%al
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x96>
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xab>
 mov    0x10(%ebp),%eax
 movb   $0x1,(%eax)
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-mov    0x13(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0x13,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager21GetMinTimeServerGroupEi>
 cmp    %eax,%ebx
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xdc>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xf9>
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
-mov    0xc(%ebp),%eax
-mov    0x17(%eax),%eax
+mov    -0xc(%ebp),%eax
+add    $0x17,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager29GetMaxHuntingPointServerGroupEi>
 cmp    %eax,%ebx
-jne    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xe3>
+jne    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x100>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0xe8>
+jmp    <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x105>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x125>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x149>
+mov    -0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    0x18(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0xffffffff,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CDBManager18GetCoinEventPerDayEiiRiS0_>
 test   %al,%al
-je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x125>
+setne  %al
+test   %al,%al
+je     <T> <_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_+0x149>
 mov    0x10(%ebp),%eax
 movb   $0x1,(%eax)
 mov    $0x1,%eax
-add    $0x24,%esp
+add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::GetVillageAttackedRank(Packet_DB_VillageAttackedRank*, bool&, int&, int&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager22GetVillageAttackedRankEP29Packet_DB_VillageAttackedRankRbRiS3_
          (CDBManager *this,Packet_DB_VillageAttackedRank *param_1,bool *param_2,int *param_3,
          int *param_4)

{
  Packet_DB_VillageAttackedRank PVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  
  PVar1 = param_1[10];
  uVar4 = _ZN10CDBManager21GetMinTimeServerGroupEi(this,*(int *)(param_1 + 0xb));
  if ((byte)PVar1 == uVar4) {
LAB_08082e2f:
    bVar2 = true;
  }
  else {
    PVar1 = param_1[10];
    uVar4 = GetMaxHuntingPointServerGroup(this,*(int *)(param_1 + 0xf));
    if ((byte)PVar1 == uVar4) goto LAB_08082e2f;
    bVar2 = false;
  }
  if (bVar2) {
    cVar3 = _ZN10CDBManager18GetCoinEventPerDayEiiRiS0_
                      (this,(uint)(byte)param_1[10],1,param_3,param_4);
    if (cVar3 != '\0') {
      *param_2 = true;
    }
  }
  PVar1 = param_1[10];
  uVar4 = _ZN10CDBManager21GetMinTimeServerGroupEi(this,*(int *)(param_1 + 0x13));
  if ((byte)PVar1 != uVar4) {
    PVar1 = param_1[10];
    uVar4 = GetMaxHuntingPointServerGroup(this,*(int *)(param_1 + 0x17));
    if ((byte)PVar1 != uVar4) {
      bVar2 = false;
      goto LAB_08082eca;
    }
  }
  bVar2 = true;
LAB_08082eca:
  if (bVar2) {
    cVar3 = _ZN10CDBManager18GetCoinEventPerDayEiiRiS0_
                      (this,(uint)(byte)param_1[10],-1,param_3,param_4);
    if (cVar3 != '\0') {
      *param_2 = true;
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
