# _Z7wformatPKwz

`wformat(wchar_t const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x818eae3` | `0x194` | `0x809ff49` | `0x194` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,120 +1,120 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x83c,%esp
 mov    0x8(%ebp),%ebx
 lea    0x10(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x200,0x4(%esp)
 lea    -0x830(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vswprintf>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 js     <T> <_Z7wformatPKwz+0xdb>
 mov    -0x1c(%ebp),%eax
 cmp    $0x1ff,%eax
 ja     <T> <_Z7wformatPKwz+0xdb>
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 shl    $0x2,%eax
 mov    %eax,%edx
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wchar5allocEj>
 sub    $0x4,%esp
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 shl    $0x2,%eax
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11StackBuffer9getBufferEv>
 mov    %esi,0x8(%esp)
 lea    -0x830(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
-lea    -0x28(%ebp),%edx
+lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharC1ERKS_>
 jmp    <T> <_Z7wformatPKwz+0xcb>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharD1Ev>
 jmp    <T> <_Z7wformatPKwz+0x183>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <vswprintf>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 shl    $0x2,%eax
 mov    %eax,%edx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wchar5allocEj>
 sub    $0x4,%esp
 mov    -0x20(%ebp),%edi
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%esi
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11StackBuffer9getBufferEv>
 mov    %edi,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <vswprintf>
 mov    %ebx,%eax
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharC1ERKS_>
 jmp    <T> <_Z7wformatPKwz+0x178>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17StackBuffer_wcharD1Ev>
 mov    %ebx,%eax
 mov    %ebx,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

StackBuffer_wchar * wformat(StackBuffer_wchar *__return_storage_ptr__,wchar_t *format,...)

{
  undefined1 *__arg;
  int iVar1;
  byte *__dest;
  size_t __n;
  wchar_t *__s;
  StackBuffer *pSVar2;
  wchar_t local_834 [512];
  StackBuffer local_34;
  StackBuffer local_2c;
  undefined1 *local_24;
  uint local_20;
  
                    /* Unresolved local var: wchar_t[512] buf@[???]
                       Unresolved local var: va_list args@[???]
                       Unresolved local var: int length@[???] */
  local_24 = &stack0x0000000c;
  local_20 = vswprintf(local_834,0x200,format,local_24);
  if (((int)local_20 < 0) || (0x1ff < local_20)) {
                    /* Unresolved local var: StackBuffer_wchar sb@[???] */
    local_20 = vswprintf((wchar_t *)0x0,0,format,local_24);
    StackBuffer_wchar::alloc((StackBuffer_wchar *)&local_34,(local_20 + 1) * 4);
    __arg = local_24;
    __n = local_20 + 1;
                    /* try { // try from 0818ec11 to 0818ec3d has its CatchHandler @ 0818ec40 */
    __s = (wchar_t *)StackBuffer::getBuffer(&local_34);
    vswprintf(__s,__n,format,__arg);
    pSVar2 = &local_34;
    StackBuffer_wchar::StackBuffer_wchar(__return_storage_ptr__,(StackBuffer_wchar *)pSVar2);
    StackBuffer_wchar::~StackBuffer_wchar((StackBuffer_wchar *)&local_34,(int)pSVar2);
  }
  else {
                    /* Unresolved local var: StackBuffer_wchar sb@[???] */
    StackBuffer_wchar::alloc((StackBuffer_wchar *)&local_2c,(local_20 + 1) * 4);
    iVar1 = local_20 + 1;
                    /* try { // try from 0818eb65 to 0818eb90 has its CatchHandler @ 0818eb93 */
    __dest = StackBuffer::getBuffer(&local_2c);
    memcpy(__dest,local_834,iVar1 * 4);
    pSVar2 = &local_2c;
    StackBuffer_wchar::StackBuffer_wchar(__return_storage_ptr__,(StackBuffer_wchar *)pSVar2);
    StackBuffer_wchar::~StackBuffer_wchar((StackBuffer_wchar *)&local_2c,(int)pSVar2);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StringFormat.cpp](source/DNFServer/GameServer/DBMW/StringFormat.cpp)（约第 45 行）：

```cpp
StackBuffer_wchar wformat(const wchar_t* fmt, ...)
{
    wchar_t buf[0x200];
    va_list ap;
    va_start(ap, fmt);
    int len = vswprintf(buf, 0x200, fmt, ap);
    if (len >= 0 && (unsigned int)len <= 0x1ff)
    {
        StackBuffer_wchar tmp = StackBuffer_wchar::alloc((len + 1) * 4);
        memcpy(tmp.getBuffer(), buf, (len + 1) * 4);
        va_end(ap);
        return tmp;
    }
    len = vswprintf((wchar_t*)0, 0, fmt, ap);
    StackBuffer_wchar tmp = StackBuffer_wchar::alloc((len + 1) * 4);
    vswprintf((wchar_t*)tmp.getBuffer(), len + 1, fmt, ap);
    va_end(ap);
    return tmp;
}
```
