# _Z7sformatPKcz

`sformat(char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x818e958` | `0x18b` | `0x809fdbe` | `0x18b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,117 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x23c,%esp
 mov    0x8(%ebp),%ebx
 lea    0x10(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x200,0x4(%esp)
 lea    -0x230(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vsnprintf>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 js     <T> <_Z7sformatPKcz+0xd5>
 mov    -0x1c(%ebp),%eax
 cmp    $0x1ff,%eax
 ja     <T> <_Z7sformatPKcz+0xd5>
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%edx
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_char5allocEj>
 sub    $0x4,%esp
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11StackBuffer9getBufferEv>
 mov    %esi,0x8(%esp)
 lea    -0x230(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    %ebx,%eax
-lea    -0x28(%ebp),%edx
+lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charC1ERKS_>
 jmp    <T> <_Z7sformatPKcz+0xc5>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charD1Ev>
 jmp    <T> <_Z7sformatPKcz+0x17a>
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <vsnprintf>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%edx
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_char5allocEj>
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
 call   <T> <vsnprintf>
 mov    %ebx,%eax
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charC1ERKS_>
 jmp    <T> <_Z7sformatPKcz+0x16f>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StackBuffer_charD1Ev>
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

StackBuffer_char * sformat(StackBuffer_char *__return_storage_ptr__,char *format,...)

{
  undefined1 *__arg;
  size_t sVar1;
  byte *pbVar2;
  StackBuffer *pSVar3;
  char local_234 [512];
  StackBuffer local_34;
  StackBuffer local_2c;
  undefined1 *local_24;
  uint local_20;
  
                    /* Unresolved local var: char[512] buf@[???]
                       Unresolved local var: va_list args@[???]
                       Unresolved local var: int length@[???] */
  local_24 = &stack0x0000000c;
  local_20 = vsnprintf(local_234,0x200,format,local_24);
  if (((int)local_20 < 0) || (0x1ff < local_20)) {
                    /* Unresolved local var: StackBuffer_char sb@[???] */
    local_20 = vsnprintf((char *)0x0,0,format,local_24);
    StackBuffer_char::alloc((StackBuffer_char *)&local_34,local_20 + 1);
    __arg = local_24;
    sVar1 = local_20 + 1;
                    /* try { // try from 0818ea7d to 0818eaa9 has its CatchHandler @ 0818eaac */
    pbVar2 = StackBuffer::getBuffer(&local_34);
    vsnprintf((char *)pbVar2,sVar1,format,__arg);
    pSVar3 = &local_34;
    StackBuffer_char::StackBuffer_char(__return_storage_ptr__,(StackBuffer_char *)pSVar3);
    StackBuffer_char::~StackBuffer_char((StackBuffer_char *)&local_34,(int)pSVar3);
  }
  else {
                    /* Unresolved local var: StackBuffer_char sb@[???] */
    StackBuffer_char::alloc((StackBuffer_char *)&local_2c,local_20 + 1);
    sVar1 = local_20 + 1;
                    /* try { // try from 0818e9d4 to 0818e9ff has its CatchHandler @ 0818ea02 */
    pbVar2 = StackBuffer::getBuffer(&local_2c);
    memcpy(pbVar2,local_234,sVar1);
    pSVar3 = &local_2c;
    StackBuffer_char::StackBuffer_char(__return_storage_ptr__,(StackBuffer_char *)pSVar3);
    StackBuffer_char::~StackBuffer_char((StackBuffer_char *)&local_2c,(int)pSVar3);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StringFormat.cpp](source/DNFServer/GameServer/DBMW/StringFormat.cpp)（约第 26 行）：

```cpp
StackBuffer_char sformat(const char* fmt, ...)
{
    char buf[0x200];
    va_list ap;
    va_start(ap, fmt);
    int len = vsnprintf(buf, 0x200, fmt, ap);
    if (len >= 0 && (unsigned int)len <= 0x1ff)
    {
        StackBuffer_char tmp = StackBuffer_char::alloc(len + 1);
        memcpy(tmp.getBuffer(), buf, len + 1);
        va_end(ap);
        return tmp;
    }
    len = vsnprintf(0, 0, fmt, ap);
    StackBuffer_char tmp = StackBuffer_char::alloc(len + 1);
    vsnprintf(tmp.getBuffer(), len + 1, fmt, ap);
    va_end(ap);
    return tmp;
}
```
