# _ZN3nsl5Token10free_tokenEi

`nsl::Token::free_token(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80b5858` | `0x6a` | `0x80b4274` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
 js     <T> <_ZN3nsl5Token10free_tokenEi+0x15>
 cmpl   $0xff,0xc(%ebp)
 jle    <T> <_ZN3nsl5Token10free_tokenEi+0x39>
 movl   $"void nsl::Token::free_token(int)",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"Token.cpp",0x4(%esp)
-movl   $"idx0>=0 && idx0<MAX_TOKEN",(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.cpp",0x4(%esp)
+movl   $"idx0 >= 0 && idx0 < 256",(%esp)
 call   <T> <__assert_fail>
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xc,%edx
 mov    0x8(%eax,%edx,4),%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl5Token10free_tokenEi+0x5f>
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0xc,%edx
 mov    0x8(%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void free_token(Token * this, int idx0) */

void __thiscall nsl::Token::_ZN3nsl5Token10free_tokenEi(Token *this,int idx0)

{
  if ((-1 < idx0) && (idx0 < 0x100)) {
    if (this->m_token[idx0] != (char *)0x0) {
      operator_delete__(this->m_token[idx0]);
    }
    this->n_token = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("idx0>=0 && idx0<MAX_TOKEN","Token.cpp",0x48,"void nsl::Token::free_token(int)");
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Token.cpp](source/DNFServer/GameServer/Relay/Token.cpp)（约第 59 行）：

```cpp
void Token::free_token(int idx0)
{
}
```
