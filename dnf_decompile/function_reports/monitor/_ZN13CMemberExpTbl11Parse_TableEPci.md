# _ZN13CMemberExpTbl11Parse_TableEPci

`CMemberExpTbl::Parse_Table(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8061e82` | `0x85` | `0x806153e` | `0x83` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 jne    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x18>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
 movl   $0x1,0xc(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"\t\"",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x1,%eax
 jne    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x4d>
 mov    -0xc(%ebp),%eax
 test   %eax,%eax
 jne    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x4d>
 mov    $0x1,%eax
 jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x52>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
 cmpl   $0xa,0x10(%ebp)
-jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
 mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax,%ebx,4)
+mov    0x8(%ebp),%edx
+mov    %eax,0x8(%edx,%ebx,4)
 mov    $0x1,%eax
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
 mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::Parse_Table(char*, int) */

undefined4 __thiscall
CMemberExpTbl::_ZN13CMemberExpTbl11Parse_TableEPci(CMemberExpTbl *this,char *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_14;
  int local_10;
  
  if (*param_1 == '#') {
    uVar2 = 0;
  }
  else {
    iVar3 = DNFFLib::ExplodeString(param_1,"\t\"",&local_14,1);
    if ((iVar3 == 1) && (local_10 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (param_2 < 0xb)) {
      iVar3 = atoi(local_14);
      *(int *)(this + param_2 * 4 + 8) = iVar3;
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

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 84 行）：

```cpp
bool CMemberExpTbl::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tokens[2];
    if (DNFFLib::ExplodeString(line, "\t\"", tokens, 1) == 1 && tokens[1] == 0)
    {
        if (idx < 0xb)
        {
            m_table[idx] = atoi(tokens[0]);
            return 1;
        }
    }
    return 0;
}
```
