# _ZN10CharStringC1EPKc

`CharString::CharString(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x8097ab2` | `0x7d` | `0x80a1996` | `0x7b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10CharStringC1EPKc+0x31>
 mov    &_ZL21s_emptyCharStringData,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharString10attachDataEP14CharStringData>
-jmp    <T> <_ZN10CharStringC1EPKc+0x77>
+jmp    <T> <_ZN10CharStringC1EPKc+0x75>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData6createEi>
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,%ebx
+lea    0x1(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CharStringData9getBufferEv>
 mov    %ebx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CharString10attachDataEP14CharStringData>
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void CharString(CharString * this, char * src) */

void __thiscall CharString::_ZN10CharStringC1EPKc(CharString *this,char *src)

{
  size_t length;
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * data@[???] */
  length = strlen(src);
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::create(length);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,length + 1);
    attachData(this,this_00);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Library/Include/Core/Strings.cpp](source/Library/Include/Core/Strings.cpp)（约第 157 行）：

```cpp
CharString::CharString(const char* src)
{
    size_t length = strlen(src);
    if (length == 0)
    {
        attachData(s_emptyCharStringData);
    }
    else
    {
        CharStringData* data = CharStringData::create((int32)length);
        memcpy(data->getBuffer(), src, length + 1);
        attachData(data);
    }
}
```
