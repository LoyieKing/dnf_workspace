# _ZNK10CharString8endsWithEPKcb

`CharString::endsWith(char const*, bool) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x8097f66` | `0xcc` | `0x80a1e4a` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,62 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
 cmp    -0xc(%ebp),%eax
 setl   %al
 test   %al,%al
-je     <T> <_ZNK10CharString8endsWithEPKcb+0x3b>
+je     <T> <_ZNK10CharString8endsWithEPKcb+0x38>
 mov    $0x0,%eax
-jmp    <T> <_ZNK10CharString8endsWithEPKcb+0xc5>
+jmp    <T> <_ZNK10CharString8endsWithEPKcb+0xb2>
 cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZNK10CharString8endsWithEPKcb+0x84>
+je     <T> <_ZNK10CharString8endsWithEPKcb+0x79>
 mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString5c_strEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+sub    -0xc(%ebp),%eax
 lea    (%esi,%eax,1),%edx
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncasecmp>
 test   %eax,%eax
 sete   %al
-jmp    <T> <_ZNK10CharString8endsWithEPKcb+0xc5>
+jmp    <T> <_ZNK10CharString8endsWithEPKcb+0xb2>
 mov    -0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString5c_strEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+sub    -0xc(%ebp),%eax
 lea    (%esi,%eax,1),%edx
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncmp>
 test   %eax,%eax
 sete   %al
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool endsWith(CharString * this, char * pat, bool isIgnoreCase) */

bool __thiscall
CharString::_ZNK10CharString8endsWithEPKcb(CharString *this,char *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = strlen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pcVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = strncasecmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pcVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = strncmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 304 行）：

```cpp
bool CharString::endsWith(const char* pat, bool isIgnoreCase) const
{
    int32 patLength = strlen(pat);
    if (length() < patLength)
    {
        return false;
    }
    if (isIgnoreCase)
    {
        return strncasecmp(c_str() + (length() - patLength), pat, patLength) == 0;
    }
    return strncmp(c_str() + (length() - patLength), pat, patLength) == 0;
}
```
