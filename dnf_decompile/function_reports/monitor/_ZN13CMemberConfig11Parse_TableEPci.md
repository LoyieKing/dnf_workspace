# _ZN13CMemberConfig11Parse_TableEPci

`CMemberConfig::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8061c80` | `0xa1` | `0x80614ee` | `0xac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN13CMemberConfig11Parse_TableEPci+0x1a>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CMemberConfig11Parse_TableEPci+0x9f>
+jmp    <T> <_ZN13CMemberConfig11Parse_TableEPci+0xaa>
 movl   $0x3,0xc(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x3,%eax
-sete   %al
+jne    <T> <_ZN13CMemberConfig11Parse_TableEPci+0x4e>
+cmpl   $0x9,0x10(%ebp)
+jg     <T> <_ZN13CMemberConfig11Parse_TableEPci+0x4e>
+mov    $0x1,%eax
+jmp    <T> <_ZN13CMemberConfig11Parse_TableEPci+0x53>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CMemberConfig11Parse_TableEPci+0x9a>
-cmpl   $0x9,0x10(%ebp)
-jg     <T> <_ZN13CMemberConfig11Parse_TableEPci+0x9a>
+je     <T> <_ZN13CMemberConfig11Parse_TableEPci+0xa5>
 mov    0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,-0xc(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    -0xc(%ebp),%edx
 mov    %eax,(%edx)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    -0xc(%ebp),%edx
 mov    %eax,0x4(%edx)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    -0xc(%ebp),%edx
 mov    %eax,0x8(%edx)
 mov    $0x1,%eax
-jmp    <T> <_ZN13CMemberConfig11Parse_TableEPci+0x9f>
+jmp    <T> <_ZN13CMemberConfig11Parse_TableEPci+0xaa>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberConfig::Parse_Table(char*, int) */

undefined4 __thiscall
CMemberConfig::_ZN13CMemberConfig11Parse_TableEPci(CMemberConfig *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *local_20;
  char *local_1c;
  char *local_18;
  CMemberConfig *local_10;
  
  if (*param_1 == '#') {
    uVar1 = 0;
  }
  else {
    iVar2 = DNFFLib::ExplodeString(param_1," \t\r\n\"",&local_20,3);
    if ((iVar2 == 3) && (param_2 < 10)) {
      local_10 = this + param_2 * 0xc + 4;
      iVar2 = atoi(local_20);
      *(int *)local_10 = iVar2;
      iVar2 = atoi(local_1c);
      *(int *)(local_10 + 4) = iVar2;
      iVar2 = atoi(local_18);
      *(int *)(local_10 + 8) = iVar2;
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

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 48 行）：

```cpp
bool CMemberConfig::Parse_Table(char* line, int idx)
{
    char* tokens[4];
    if (line[0] == '#')
    {
        return 0;
    }
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 3) == 3)
    {
        if (idx < 10)
        {
            ST_MemberConfig* info = &m_table[idx];
            info->m_a = atoi(tokens[0]);
            info->m_b = atoi(tokens[1]);
            info->m_c = atoi(tokens[2]);
            return 1;
        }
    }
    return 0;
}
```
