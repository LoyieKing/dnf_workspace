# _ZN5Token9get_tokenEPci

`Token::get_token(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x8050854` | `0x179` | `0x805d7b8` | `0x178` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,109 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0x10(%ebp)
 jns    <T> <_ZN5Token9get_tokenEPci+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN5Token9get_tokenEPci+0x173>
+jmp    <T> <_ZN5Token9get_tokenEPci+0x172>
 mov    0x10(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,(%esp)
 call   <T> <_Znaj>
 mov    %eax,-0x14(%ebp)
 mov    0x10(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strtok>
 mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN5Token9get_tokenEPci+0x137>
+jmp    <T> <_ZN5Token9get_tokenEPci+0x136>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
-cmpl   $0x800,-0xc(%ebp)
-jle    <T> <_ZN5Token9get_tokenEPci+0xa2>
+mov    -0xc(%ebp),%eax
+cmp    $0x800,%eax
+jle    <T> <_ZN5Token9get_tokenEPci+0xa3>
 movl   $0x800,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%ebx
 mov    -0xc(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,(%esp)
 call   <T> <_Znaj>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 lea    0xc(%ebx),%ecx
 mov    %edx,0x8(%eax,%ecx,4)
 mov    -0xc(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,%edx
+lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 add    $0xc,%ecx
 mov    0x8(%eax,%ecx,4),%eax
 mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x8(%ebp),%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0xc,%edx
+mov    0x8(%eax,%edx,4),%eax
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax),%ecx
-mov    0x8(%ebp),%eax
-add    $0xc,%ecx
-mov    0x8(%eax,%ecx,4),%eax
 mov    %edx,0x8(%esp)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <strtok>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN5Token9get_tokenEPci+0x150>
+je     <T> <_ZN5Token9get_tokenEPci+0x14f>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xff,%eax
-jg     <T> <_ZN5Token9get_tokenEPci+0x150>
+jg     <T> <_ZN5Token9get_tokenEPci+0x14f>
 mov    $0x1,%eax
-jmp    <T> <_ZN5Token9get_tokenEPci+0x155>
+jmp    <T> <_ZN5Token9get_tokenEPci+0x154>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN5Token9get_tokenEPci+0x84>
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN5Token9get_tokenEPci+0x16e>
+je     <T> <_ZN5Token9get_tokenEPci+0x16d>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
 mov    $0x1,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Token::get_token(char*, int) */

undefined4 __thiscall Token::_ZN5Token9get_tokenEPci(Token *this,char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  char *__dest;
  void *pvVar4;
  char *local_14;
  size_t local_10;
  
  if (param_2 < 0) {
    uVar3 = 0;
  }
  else {
    __dest = operator_new__(param_2 + 1);
    memset(__dest,0,param_2 + 1);
    strncpy(__dest,param_1,param_2);
    *(undefined4 *)this = 0;
    local_14 = strtok(__dest,(char *)(this + 4));
    while( true ) {
      if ((local_14 == (char *)0x0) || (0xff < *(int *)this)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      local_10 = strlen(local_14);
      if (0x800 < (int)local_10) {
        local_10 = 0x800;
      }
      iVar1 = *(int *)this;
      pvVar4 = operator_new__(local_10 + 1);
      *(void **)(this + (iVar1 + 0xc) * 4 + 8) = pvVar4;
      memset(*(void **)(this + (*(int *)this + 0xc) * 4 + 8),0,local_10 + 1);
      strncpy(*(char **)(this + (*(int *)this + 0xc) * 4 + 8),local_14,local_10);
      *(int *)this = *(int *)this + 1;
      local_14 = strtok((char *)0x0,(char *)(this + 4));
    }
    if (__dest != (char *)0x0) {
      operator_delete__(__dest);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Token.cpp](source/ChannelOld/DNFChannelBridge/Token.cpp)（约第 24 行）：

```cpp
bool Token::get_token(char* str, int size)
{
    if (size < 0)
    {
        return false;
    }

    char* temp = new char[size + 1];
    if (temp == NULL)
    {
        __assert_fail("temp", "Token.cpp", 0x22, "bool Token::get_token(char*, int)");
    }
    memset(temp, 0, size + 1);
    strncpy(temp, str, size);

    n_token = 0;
    char* token = strtok(temp, seps);
    while (token != NULL && n_token < MAX_TOKEN)
    {
        int nSize = strlen(token);
        if (nSize > 0x800)
        {
            nSize = 0x800;
        }
        m_token[n_token] = new char[nSize + 1];
        memset(m_token[n_token], 0, nSize + 1);
        strncpy(m_token[n_token], token, nSize);
        n_token++;
        token = strtok(NULL, seps);
    }
    return true;
}
```
