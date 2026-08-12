# _ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh

`CDBManager::FindCharProxyInArray(ST_MemberProxy*, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8072ff4` | `0x53` | `0x805390c` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x14,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0x14(%ebp)
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x3e>
 mov    -0x4(%ebp),%eax
 imul   $0x27,%eax,%eax
 add    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x39>
 mov    -0x4(%ebp),%eax
 imul   $0x27,%eax,%eax
 add    0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    0x10(%ebp),%eax
-jne    <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x3a>
+jne    <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x39>
 mov    -0x4(%ebp),%eax
 jmp    <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x51>
 nop
 addl   $0x1,-0x4(%ebp)
 movzbl -0x14(%ebp),%eax
 cmp    -0x4(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh+0x15>
 mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::FindCharProxyInArray(ST_MemberProxy*, unsigned int, unsigned char) */

int __thiscall
CDBManager::_ZN10CDBManager20FindCharProxyInArrayEP14ST_MemberProxyjh
          (CDBManager *this,ST_MemberProxy *param_1,uint param_2,uchar param_3)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if ((int)(uint)param_3 <= local_8) {
      return -1;
    }
    if ((*(int *)(param_1 + local_8 * 0x27) != 0) &&
       (*(uint *)(param_1 + local_8 * 0x27) == param_2)) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
