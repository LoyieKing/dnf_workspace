# _ZN3nsl5Token9get_tokenEPci

`nsl::Token::get_token(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80b566c` | `0x1a3` | `0x80b4088` | `0x1a3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN3nsl5Token9get_tokenEPci+0x17>
 mov    $0x0,%eax
 jmp    <T> <_ZN3nsl5Token9get_tokenEPci+0x19d>
 mov    0x10(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,(%esp)
 call   <T> <_Znaj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN3nsl5Token9get_tokenEPci+0x52>
 movl   $"bool nsl::Token::get_token(char*, int)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"Token.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.cpp",0x4(%esp)
 movl   $"temp",(%esp)
 call   <T> <__assert_fail>
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
 jmp    <T> <_ZN3nsl5Token9get_tokenEPci+0x161>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x800,-0xc(%ebp)
 jle    <T> <_ZN3nsl5Token9get_tokenEPci+0xcc>
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
 add    $0x1,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 add    $0xc,%ecx
 mov    0x8(%eax,%ecx,4),%eax
 mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 add    $0xc,%ecx
 mov    0x8(%eax,%ecx,4),%eax
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
 je     <T> <_ZN3nsl5Token9get_tokenEPci+0x17a>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xff,%eax
 jg     <T> <_ZN3nsl5Token9get_tokenEPci+0x17a>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl5Token9get_tokenEPci+0x17f>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN3nsl5Token9get_tokenEPci+0xae>
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN3nsl5Token9get_tokenEPci+0x198>
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

/* DWARF original prototype: bool get_token(Token * this, char * str, int size) */

bool __thiscall nsl::Token::_ZN3nsl5Token9get_tokenEPci(Token *this,char *str,int size)

{
  int iVar1;
  bool bVar2;
  char *__dest;
  char *pcVar3;
  char *local_14;
  size_t local_10;
  
                    /* Unresolved local var: char * temp@[???]
                       Unresolved local var: char * token@[???] */
  if (size < 1) {
    bVar2 = false;
  }
  else {
    __dest = operator_new__(size + 1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("temp","Token.cpp",0x20,"bool nsl::Token::get_token(char*, int)");
    }
    memset(__dest,0,size + 1);
    strncpy(__dest,str,size);
    this->n_token = 0;
    local_14 = strtok(__dest,this->seps);
    while( true ) {
      if ((local_14 == (char *)0x0) || (0xff < this->n_token)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
                    /* Unresolved local var: int nToken_size@[???] */
      local_10 = strlen(local_14);
      if (0x800 < (int)local_10) {
        local_10 = 0x800;
      }
      iVar1 = this->n_token;
      pcVar3 = operator_new__(local_10 + 1);
      this->m_token[iVar1] = pcVar3;
      memset(this->m_token[this->n_token],0,local_10 + 1);
      strncpy(this->m_token[this->n_token],local_14,local_10);
      this->n_token = this->n_token + 1;
      local_14 = strtok((char *)0x0,this->seps);
    }
    if (__dest != (char *)0x0) {
      operator_delete__(__dest);
    }
    bVar2 = true;
  }
  return bVar2;
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
