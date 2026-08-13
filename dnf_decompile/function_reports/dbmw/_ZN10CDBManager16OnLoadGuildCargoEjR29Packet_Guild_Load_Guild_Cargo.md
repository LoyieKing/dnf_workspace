# _ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo

`CDBManager::OnLoadGuildCargo(unsigned int, Packet_Guild_Load_Guild_Cargo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8080d02` | `0x146` | `0x804dee2` | `0x150` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect cargo_capacity,cargo from guild_agit where guild_id=%d",0x8(%esp)
 movl   $0x4ed7,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x7f>
+movl   $0x1b35,0x8(%esp)
+movl   $&_ZZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_CargoE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"OnLoadGuildCargo Query Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x14e>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ed7,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0xa0>
-movl   $0x1b35,0x8(%esp)
-movl   $&_ZZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_CargoE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"OnLoadGuildCargo Query Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0xaa>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x144>
+jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x14e>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0xc3>
+je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0xcd>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x144>
+jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x14e>
 movl   $0x0,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 lea    0x18e6(%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x102>
+je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x10c>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x144>
+jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x14e>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x30,%eax
 mov    (%eax),%edx
 mov    0x10(%ebp),%eax
 lea    0xe(%eax),%ecx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 movl   $0x18d8,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x13f>
+je     <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x149>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x144>
+jmp    <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo+0x14e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::OnLoadGuildCargo(unsigned int, Packet_Guild_Load_Guild_Cargo&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo
          (CDBManager *this,uint param_1,Packet_Guild_Load_Guild_Cargo *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x20);
  (**(code **)(*local_14 + 0x1c))
            (local_14,0x4ed7,"seLect cargo_capacity,cargo from guild_agit where guild_id=%d",param_1
            );
  local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4ed7);
  if (local_15 == '\x01') {
    cVar2 = (**(code **)(*local_14 + 0x24))(local_14);
    if (cVar2 == '\x01') {
      local_10 = 1;
      cVar2 = (**(code **)(*local_14 + 0x38))(local_14,0,param_2 + 0x18e6);
      iVar1 = local_10;
      if (cVar2 == '\x01') {
        local_10 = local_10 + 1;
        cVar2 = (**(code **)(*local_14 + 0x30))(local_14,iVar1,param_2 + 0xe,0x18d8);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_20,"OnLoadGuildCargo",0x1b35);
    CMyFileLog::operator()(local_20,"./log/DBQueryErr","OnLoadGuildCargo Query Error");
    uVar3 = 0;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
