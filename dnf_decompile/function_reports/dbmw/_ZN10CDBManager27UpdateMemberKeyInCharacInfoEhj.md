# _ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj

`CDBManager::UpdateMemberKeyInCharacInfo(unsigned char, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8072528` | `0x7c` | `0x8050db2` | `0x7c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
-mov    (%eax),%ecx
-movzbl -0x1c(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+mov    (%eax),%eax
+movzbl -0x1c(%ebp),%edx
+mov    0x10(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"upDate charac_info set member_flag = %d where charac_no = %d",0x8(%esp)
 movl   $0x4e26,0x4(%esp)
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
 movl   $0x4e26,0x4(%esp)
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
 je     <T> <_ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj+0x75>
 mov    $0x0,%eax
 jmp    <T> <_ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj+0x7a>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::UpdateMemberKeyInCharacInfo(unsigned char, unsigned int) */

bool __thiscall
CDBManager::_ZN10CDBManager27UpdateMemberKeyInCharacInfoEhj
          (CDBManager *this,uchar param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(this + 8);
  (**(code **)(*piVar1 + 0x1c))
            (piVar1,0x4e26,"upDate charac_info set member_flag = %d where charac_no = %d",param_1,
             param_2);
  cVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e26);
  return cVar2 == '\x01';
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
