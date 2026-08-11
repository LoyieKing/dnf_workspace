# _ZN10CharString6concatERKS_c

`CharString::concat(CharString const&, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8099b28` | `0xe7` | `0x80a392a` | `0xe9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%ebx
 mov    0x10(%ebp),%eax
-mov    %al,-0x2c(%ebp)
+mov    %al,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CharString6concatERKS_c+0x3d>
+je     <T> <_ZN10CharString6concatERKS_c+0x3c>
 mov    %ebx,%eax
-movsbl -0x2c(%ebp),%edx
+movsbl -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1Ec>
-jmp    <T> <_ZN10CharString6concatERKS_c+0xd9>
-cmpb   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN10CharString6concatERKS_c+0x59>
+jmp    <T> <_ZN10CharString6concatERKS_c+0xdc>
+cmpb   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN10CharString6concatERKS_c+0x58>
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1ERKS_>
-jmp    <T> <_ZN10CharString6concatERKS_c+0xd9>
+jmp    <T> <_ZN10CharString6concatERKS_c+0xdc>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
 add    $0x1,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData16createTerminatedEi>
-mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
-mov    %eax,%edi
+mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString5c_strEv>
 mov    %eax,%esi
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData9getBufferEv>
-mov    %edi,0x8(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData9getBufferEv>
 mov    %eax,%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK10CharString6lengthEv>
 lea    (%esi,%eax,1),%edx
-movzbl -0x2c(%ebp),%eax
+movzbl -0x1c(%ebp),%eax
 mov    %al,(%edx)
 mov    %ebx,%eax
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CharStringC1EP14CharStringData>
 mov    %ebx,%eax
 mov    %ebx,%eax
-add    $0x3c,%esp
+add    $0x30,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

CharString *
CharString::_ZN10CharString6concatERKS_c
          (CharString *__return_storage_ptr__,CharString *src1,char src2)

{
  int32 iVar1;
  CharStringData *this;
  size_t __n;
  char *pcVar2;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else if (src2 == '\0') {
    CharString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    this = CharStringData::createTerminated(iVar1 + 1);
    __n = length(src1);
    pcVar2 = c_str(src1);
    __dest = CharStringData::getBuffer(this);
    memcpy(__dest,pcVar2,__n);
    pcVar2 = CharStringData::getBuffer(this);
    iVar1 = length(src1);
    pcVar2[iVar1] = src2;
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 1084 行）：

```cpp
CharString CharString::concat(const CharString& src1, const char* src2)
{
    return concat(src1, src2, strlen(src2));
}
```
