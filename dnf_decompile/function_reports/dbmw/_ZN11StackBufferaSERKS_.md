# _ZN11StackBufferaSERKS_

`StackBuffer::operator=(StackBuffer const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x818c992` | `0x61` | `0x80f1814` | `0x5c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,32 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN11StackBufferaSERKS_+0x13>
-mov    0x8(%ebp),%eax
-jmp    <T> <_ZN11StackBufferaSERKS_+0x5f>
+je     <T> <_ZN11StackBufferaSERKS_+0x57>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN11StackBufferaSERKS_+0x33>
+je     <T> <_ZN11StackBufferaSERKS_+0x2e>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZL15freeStackBufferPhi>
 mov    0xc(%ebp),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 mov    0xc(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0xc(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: StackBuffer * operator=(StackBuffer * this, StackBuffer * obj) */

StackBuffer * __thiscall StackBuffer::_ZN11StackBufferaSERKS_(StackBuffer *this,StackBuffer *obj)

{
  if (this != obj) {
    if (this->buffer_ != (byte *)0x0) {
      freeStackBuffer(this->buffer_,this->bufferIdx_);
    }
    this->buffer_ = obj->buffer_;
    this->bufferIdx_ = obj->bufferIdx_;
    obj->buffer_ = (byte *)0x0;
    obj->bufferIdx_ = 0;
  }
  return this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StackBuffer.cpp](source/DNFServer/GameServer/DBMW/StackBuffer.cpp)（约第 139 行）：

```cpp
StackBuffer& StackBuffer::operator=(const StackBuffer& other)
{
    if (this == &other)
        return *this;
    if (m_buf)
        freeStackBuffer((unsigned char*)m_buf, m_end);
    m_buf = other.m_buf;
    m_end = other.m_end;
    const_cast<StackBuffer&>(other).m_buf = 0;
    const_cast<StackBuffer&>(other).m_end = 0;
    return *this;
}
```
