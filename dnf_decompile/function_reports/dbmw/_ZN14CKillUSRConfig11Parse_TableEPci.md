# _ZN14CKillUSRConfig11Parse_TableEPci

`CKillUSRConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806a38a` | `0xeb` | `0x80c7386` | `0xf2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0x1b>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xe5>
+jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xec>
 movl   $0x4,0xc(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x4,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xe0>
+je     <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xe7>
 movl   $&_ZSt7nothrow,0x4(%esp)
 movl   $0x10,(%esp)
 call   <T> <_ZnwjRKSt9nothrow_t>
 mov    %eax,%ebx
 mov    %ebx,%eax
 test   %eax,%eax
 je     <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0x75>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16ST_KillUSRConfigC1Ev>
 mov    %ebx,%eax
 jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0x77>
 mov    %ebx,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xe0>
-mov    -0x20(%ebp),%ebx
-mov    -0x1c(%ebp),%eax
+jne    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0x88>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xec>
+mov    -0x1c(%ebp),%ebx
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,(%ebx)
-mov    -0x20(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%ebx
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0x4(%ebx)
-mov    -0x20(%ebp),%ebx
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%ebx
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0x8(%ebx)
-mov    -0x20(%ebp),%ebx
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,0xc(%ebx)
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIP16ST_KillUSRConfigSaIS1_EE9push_backERKS1_>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xe5>
+jmp    <T> <_ZN14CKillUSRConfig11Parse_TableEPci+0xec>
 mov    $0x0,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CKillUSRConfig::Parse_Table(char*, int) */

undefined4 CKillUSRConfig::_ZN14CKillUSRConfig11Parse_TableEPci(char *param_1,int param_2)

{
  ST_KillUSRConfig *pSVar1;
  undefined4 uVar2;
  int iVar3;
  ST_KillUSRConfig *pSVar4;
  ST_KillUSRConfig *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  if (*(char *)param_2 == '#') {
    uVar2 = 0;
  }
  else {
    iVar3 = DNFFLib::ExplodeString((char *)param_2," \t\r\n\"",&local_20,4);
    if ((iVar3 == 4) &&
       (pSVar4 = operator_new(0x10,(nothrow_t *)&std::nothrow), pSVar4 != (ST_KillUSRConfig *)0x0))
    {
      ST_KillUSRConfig::ST_KillUSRConfig(pSVar4);
      local_24 = pSVar4;
      iVar3 = atoi(local_20);
      pSVar1 = local_24;
      *(int *)pSVar4 = iVar3;
      iVar3 = atoi(local_1c);
      pSVar4 = local_24;
      *(int *)(pSVar1 + 4) = iVar3;
      iVar3 = atoi(local_18);
      pSVar1 = local_24;
      *(int *)(pSVar4 + 8) = iVar3;
      iVar3 = atoi(local_14);
      *(int *)(pSVar1 + 0xc) = iVar3;
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::push_back
                ((vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>> *)(param_1 + 4),
                 &local_24);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFKillUserConfig.cpp](source/DNFServer/GameServer/DBMW/DNFKillUserConfig.cpp)（约第 42 行）：

```cpp
int CKillUSRConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[4];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 4) == 4)
    {
        ST_KillUSRConfig* kc = new (std::nothrow) ST_KillUSRConfig;
        if (!kc)
            return 0;
        kc->m_type = atoi(fields[0]);
        kc->m_field4 = atoi(fields[1]);
        kc->m_field8 = atoi(fields[2]);
        kc->m_fieldC = atoi(fields[3]);
        m_list.push_back(kc);
        return 1;
    }
    return 0;
}
```
