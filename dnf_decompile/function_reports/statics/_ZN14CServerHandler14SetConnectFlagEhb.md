# _ZN14CServerHandler14SetConnectFlagEhb

`CServerHandler::SetConnectFlag(unsigned char, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8066056` | `0xb0` | `0x805b878` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,-0x1c(%ebp)
 mov    %al,-0x20(%ebp)
 cmpb   $0xff,-0x1c(%ebp)
 je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3d>
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer13IsValidServerEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x3d>
 mov    $0x1,%eax
 jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x42>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x6c>
+je     <T> <_ZN14CServerHandler14SetConnectFlagEhb+0x69>
 movzbl -0x20(%ebp),%ecx
-mov    0x8(%ebp),%ebx
 movzbl -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-lea    (%ebx,%eax,1),%eax
+add    0x8(%ebp),%eax
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer11SetConnFlagEb>
-jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0xaa>
+jmp    <T> <_ZN14CServerHandler14SetConnectFlagEhb+0xa7>
 movzbl -0x1c(%ebp),%ebx
 movl   $0x125,0x8(%esp)
 movl   $"SetConnectFlag",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CServerHandler::SetConnectFlag\tGame Server Index Over Index : %d!\n",0x8(%esp)
 movl   $"./log/GameServer",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SetConnectFlag(unsigned char, bool) */

void __thiscall
CServerHandler::_ZN14CServerHandler14SetConnectFlagEhb
          (CServerHandler *this,uchar param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  CMyFileLog local_14 [12];
  
  if (param_1 != 0xff) {
    cVar2 = CGameServer::IsValidServer((CGameServer *)(this + (uint)param_1 * 0x14));
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08066098;
    }
  }
  bVar1 = false;
LAB_08066098:
  if (bVar1) {
    CGameServer::_ZN11CGameServer11SetConnFlagEb
              ((CGameServer *)(this + (uint)param_1 * 0x14),param_2);
  }
  else {
    CMyFileLog::CMyFileLog(local_14,"SetConnectFlag",0x125);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GameServer",
               "CServerHandler::SetConnectFlag\tGame Server Index Over Index : %d!\n",(uint)param_1)
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 192 行）：

```cpp
void CServerHandler::SetConnectFlag(unsigned char idx, bool flag) {}
```
