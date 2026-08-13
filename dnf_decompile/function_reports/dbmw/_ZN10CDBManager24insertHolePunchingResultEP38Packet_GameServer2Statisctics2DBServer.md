# _ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer

`CDBManager::insertHolePunchingResult(Packet_GameServer2Statisctics2DBServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80878f0` | `0x12a` | `0x8051de6` | `0x125` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,87 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x9c,%esp
+sub    $0x6c,%esp
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x1c>
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11d>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x35>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x32>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11d>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%esi
 mov    0xc(%ebp),%eax
 add    $0x25,%eax
-mov    %eax,-0x5c(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x15(%eax),%edi
 mov    0xc(%ebp),%eax
-mov    0x11(%eax),%ebx
+add    $0x11,%eax
+mov    (%eax),%ebx
 mov    0xc(%ebp),%eax
-mov    0xd(%eax),%ecx
+add    $0xd,%eax
+mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 movsbl %al,%edx
 mov    0xc(%ebp),%eax
-movzwl 0xa(%eax),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x5c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %edi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
-mov    -0x6c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into p2p_connect_success_rate  (server_group, connected_type, required_time, check_time, nation_code, peer_address, occ_date) values (%d, %d, %d, %d, '%s', '%s', now())",0x8(%esp)
 movl   $0x4f60,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%esi
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xf2>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0xf0>
 movl   $0x2edf,0x8(%esp)
 movl   $&_ZZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServerE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"set_query(inSert_hole_punching_success_rate_stat)",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
-mov    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11d>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f60,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11a>
+je     <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x118>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11f>
+jmp    <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer+0x11d>
 mov    $0x1,%eax
-add    $0x9c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::insertHolePunchingResult(Packet_GameServer2Statisctics2DBServer*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer
          (CDBManager *this,Packet_GameServer2Statisctics2DBServer *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CMyFileLog local_38 [8];
  int *local_30;
  char local_1d;
  
  if (param_1 == (Packet_GameServer2Statisctics2DBServer *)0x0) {
    uVar2 = 0;
  }
  else {
    local_30 = *(int **)(this + 0x3c);
    if (local_30 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      local_1d = (**(code **)(*local_30 + 0x1c))
                           (local_30,0x4f60,
                            "inSert into p2p_connect_success_rate  (server_group, connected_type, required_time, check_time, nation_code, peer_address, occ_date) values (%d, %d, %d, %d, \'%s\', \'%s\', now())"
                            ,*(undefined2 *)(param_1 + 10),(int)(char)param_1[0xc],
                            *(undefined4 *)(param_1 + 0xd),*(undefined4 *)(param_1 + 0x11),
                            param_1 + 0x15,param_1 + 0x25);
      if (local_1d == '\x01') {
        cVar1 = (**(code **)(*local_30 + 0x20))(local_30,0x4f60);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_38,"insertHolePunchingResult",11999);
        CMyFileLog::operator()
                  (local_38,"./log/DBQueryErr","set_query(inSert_hole_punching_success_rate_stat)");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
