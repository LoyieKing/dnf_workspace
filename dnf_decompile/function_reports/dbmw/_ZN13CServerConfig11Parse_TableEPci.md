# _ZN13CServerConfig11Parse_TableEPci

`CServerConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x806b1cc` | `0xd7` | `0x808b7a2` | `0xd7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN13CServerConfig11Parse_TableEPci+0x1a>
 mov    $0x0,%eax
 jmp    <T> <_ZN13CServerConfig11Parse_TableEPci+0xd5>
 movl   $0x5,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x5,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN13CServerConfig11Parse_TableEPci+0xd0>
 cmpl   $0xfe,0x10(%ebp)
 jg     <T> <_ZN13CServerConfig11Parse_TableEPci+0xd0>
 mov    0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,-0xc(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    -0xc(%ebp),%eax
 mov    %dl,(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    -0xc(%ebp),%eax
 mov    %dl,0x1(%eax)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    -0xc(%ebp),%eax
 mov    %dl,0x2(%eax)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    -0xc(%ebp),%edx
 add    $0x4,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSsaSEPKc>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    -0xc(%ebp),%eax
 mov    %dx,0x8(%eax)
 mov    $0x1,%eax
 jmp    <T> <_ZN13CServerConfig11Parse_TableEPci+0xd5>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CServerConfig::_ZN13CServerConfig11Parse_TableEPci(CServerConfig *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  CServerConfig *local_10;
  
  if (*param_1 == '#') {
    uVar1 = 0;
  }
  else {
    iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_28,5);
    if ((iVar2 == 5) && (param_2 < 0xff)) {
      local_10 = this + param_2 * 0xc + 4;
      iVar2 = atoi(local_28);
      *local_10 = SUB41(iVar2,0);
      iVar2 = atoi(local_24);
      local_10[1] = SUB41(iVar2,0);
      iVar2 = atoi(local_20);
      local_10[2] = SUB41(iVar2,0);
      std::string::operator=((string *)(local_10 + 4),local_1c);
      iVar2 = atoi(local_18);
      *(short *)(local_10 + 8) = (short)iVar2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerConfig.cpp](source/DNFServer/GameServer/COServer/DNFServerConfig.cpp)（约第 17 行）：

```cpp
bool CServerConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tok0;
    char* tok1;
    char* tok2;
    char* tok3;
    char* tok4;
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 5);
    if (n == 5 && idx < 0x649b)
    {
        ST_ServerInfo* s = &m_servers[idx];
        s->m_field0 = (char)atoi(tok0);
        s->m_field1 = (char)atoi(tok1);
        s->m_field2 = (char)atoi(tok2);
        s->m_string = tok3;
        s->m_ushort = (unsigned short)atoi(tok4);
        return 1;
    }
    return 0;
}
```
