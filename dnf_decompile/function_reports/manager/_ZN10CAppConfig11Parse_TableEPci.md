# _ZN10CAppConfig11Parse_TableEPci

`CAppConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8069764` | `0xb1` | `0x804cbec` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x1a>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xaf>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xab>
 movl   $0x2,0xc(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x2,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xaa>
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa6>
 cmpl   $0x12,0x10(%ebp)
-jg     <T> <_ZN10CAppConfig11Parse_TableEPci+0xaa>
+jg     <T> <_ZN10CAppConfig11Parse_TableEPci+0xa6>
 mov    0x10(%ebp),%eax
 cmp    $0x1,%eax
 je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x72>
 cmp    $0x2,%eax
-je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x87>
+je     <T> <_ZN10CAppConfig11Parse_TableEPci+0x85>
 test   %eax,%eax
-jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9c>
+jne    <T> <_ZN10CAppConfig11Parse_TableEPci+0x98>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x4(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa3>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9f>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa3>
+mov    0x8(%ebp),%edx
+mov    %eax,0x8(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9f>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xa3>
+mov    0x8(%ebp),%edx
+mov    %eax,0xc(%edx)
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0x9f>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xaf>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xab>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xaf>
+jmp    <T> <_ZN10CAppConfig11Parse_TableEPci+0xab>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CAppConfig::_ZN10CAppConfig11Parse_TableEPci(CAppConfig *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *local_18;
  char *local_14;
  
  if (*param_1 == '#') {
    uVar1 = 0;
  }
  else {
    iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_18,2);
    if ((iVar2 == 2) && (param_2 < 0x13)) {
      if (param_2 == 1) {
        iVar2 = atoi(local_14);
        *(int *)(this + 8) = iVar2;
      }
      else if (param_2 == 2) {
        iVar2 = atoi(local_14);
        *(int *)(this + 0xc) = iVar2;
      }
      else {
        if (param_2 != 0) {
          return 0;
        }
        iVar2 = atoi(local_14);
        this[4] = SUB41(iVar2,0);
      }
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

定义于 [source/DNFServer/GameServer/Manager/DNFAppConfig.cpp](source/DNFServer/GameServer/Manager/DNFAppConfig.cpp)（约第 25 行）：

```cpp
bool CAppConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[2];
    int n;  // ORIG 布局：额外槽位（fields 落在 -0x14）
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 2) == 2)
    {
        if (size <= 0x12)
        {
            switch (size)
            {
            case 0:
                m_frameCount = (char)atoi(fields[1]);
                break;
            case 1:
                m_serverUdpPort = atoi(fields[1]);
                break;
            case 2:
                m_serverTcpPort = atoi(fields[1]);
                break;
            default:
                return 0;
            }
            return 1;
        }
    }
    return 0;
}
```
