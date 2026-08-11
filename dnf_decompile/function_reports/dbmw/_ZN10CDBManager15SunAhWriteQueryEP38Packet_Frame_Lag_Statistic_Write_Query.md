# _ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query

`CDBManager::SunAhWriteQuery(Packet_Frame_Lag_Statistic_Write_Query*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x807c5f0` | `0x7e` | `0x8058b7a` | `0x7e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,40 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query+0x1c>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query+0x7c>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%edx
-mov    0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+add    $0xa,%edx
+mov    %edx,0xc(%esp)
 movl   $"%s",0x8(%esp)
 movl   $0x4e90,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
-mov    (%eax),%edx
+mov    (%eax),%eax
 movl   $0x4e90,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    -0x10(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %al,-0x9(%ebp)
 movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query+0x77>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query+0x7c>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::SunAhWriteQuery(Packet_Frame_Lag_Statistic_Write_Query*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager15SunAhWriteQueryEP38Packet_Frame_Lag_Statistic_Write_Query
          (CDBManager *this,Packet_Frame_Lag_Statistic_Write_Query *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x3c);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*piVar1 + 0x1c))(piVar1,0x4e90,&DAT_081ad540,param_1 + 10);
    cVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e90);
    if (cVar2 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
