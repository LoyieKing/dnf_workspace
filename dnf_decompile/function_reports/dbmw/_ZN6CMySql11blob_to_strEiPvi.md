# _ZN6CMySql11blob_to_strEiPvi

`CMySql::blob_to_str(int, void*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d92a` | `0xa3` | `0x80c8408` | `0x96` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
-js     <T> <_ZN6CMySql11blob_to_strEiPvi+0x21>
+js     <T> <_ZN6CMySql11blob_to_strEiPvi+0x12>
 cmpl   $0x9,0xc(%ebp)
-jg     <T> <_ZN6CMySql11blob_to_strEiPvi+0x21>
+jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x19>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0x94>
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN6CMySql11blob_to_strEiPvi+0x28>
+jne    <T> <_ZN6CMySql11blob_to_strEiPvi+0x2f>
 cmpl   $0x5fff,0x14(%ebp)
-jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x28>
+jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x2f>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0xa1>
-mov    0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-imul   $0x6001,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x6070,%eax
-movb   $0x0,0x9(%eax)
+jmp    <T> <_ZN6CMySql11blob_to_strEiPvi+0x94>
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+imul   $0x6001,%edx,%edx
+add    $0x6070,%edx
+add    %edx,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+add    $0x9,%eax
+movb   $0x0,(%eax)
 cmpl   $0x0,0x14(%ebp)
-jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8d>
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
+jle    <T> <_ZN6CMySql11blob_to_strEiPvi+0x8e>
+mov    -0x10(%ebp),%eax
 add    $0x9,%eax
 mov    %eax,-0xc(%ebp)
 mov    0x14(%ebp),%ecx
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <mysql_real_escape_string>
 add    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 movb   $0x0,(%eax)
 addl   $0x1,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-imul   $0x6001,%eax,%eax
-add    $0x6070,%eax
-add    0x8(%ebp),%eax
+mov    -0x10(%ebp),%eax
 add    $0x9,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::blob_to_str(int, void*, int) */

CMySql * __thiscall
CMySql::_ZN6CMySql11blob_to_strEiPvi(CMySql *this,int param_1,void *param_2,int param_3)

{
  CMySql *pCVar1;
  int iVar2;
  
  if (((param_1 < 0) || (9 < param_1)) || ((param_2 == (void *)0x0 && (0x5fff < param_3)))) {
    pCVar1 = (CMySql *)0x0;
  }
  else {
    this[param_1 * 0x6001 + 0x6079] = (CMySql)0x0;
    if (0 < param_3) {
      iVar2 = mysql_real_escape_string
                        (*(undefined4 *)(this + 4),this + param_1 * 0x6001 + 0x6079,param_2,param_3)
      ;
      (this + param_1 * 0x6001 + 0x6079)[iVar2] = (CMySql)0x0;
    }
    pCVar1 = this + param_1 * 0x6001 + 0x6079;
  }
  return pCVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 54 行）：

```cpp
char* CMySql::blob_to_str(int col, void* buf, int len)
{
    if (col < 0 || col > 9)
        return 0;
    if (buf == 0 && len > 0x5fff)
        return 0;
    char* base = (char*)this + col * 0x6001 + 0x6070;
    base[9] = 0;
    if (len > 0)
    {
        char* dst = base + 9;
        dst += mysql_real_escape_string(m_mysql, dst, (const char*)buf, len);
        *dst++ = 0;
    }
    return base + 9;
}
```
