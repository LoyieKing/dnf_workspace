# ~CStreamGuard

`_ZN12CStreamGuardD1Ev`

`CStreamGuard::~CStreamGuard()`

| 类 | 地址 |
|---|---|
| `CStreamGuard` | `0x0861c8d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c8d2  _ZN12CStreamGuardD1Ev
#           CStreamGuard::~CStreamGuard()
# range [0x0861c8d2, 0x0861c958]
0861c8d2 +0x00:  push   %ebp
0861c8d3 +0x01:  mov    %esp,%ebp
0861c8d5 +0x03:  sub    $0x18,%esp
0861c8d8 +0x06:  mov    0x8(%ebp),%eax
0861c8db +0x09:  mov    (%eax),%eax
0861c8dd +0x0b:  test   %eax,%eax
0861c8df +0x0d:  je     0861c957 <+0x85>
0861c8e1 +0x0f:  mov    0x8(%ebp),%eax
0861c8e4 +0x12:  movzbl 0x4(%eax),%eax
0861c8e8 +0x16:  test   %al,%al
0861c8ea +0x18:  je     0861c957 <+0x85>
0861c8ec +0x1a:  mov    0x8(%ebp),%eax
0861c8ef +0x1d:  mov    (%eax),%eax
0861c8f1 +0x1f:  movzbl 0x24(%eax),%eax
0861c8f5 +0x23:  test   %al,%al
0861c8f7 +0x25:  je     0861c957 <+0x85>
0861c8f9 +0x27:  mov    0x8(%ebp),%eax
0861c8fc +0x2a:  mov    (%eax),%eax
0861c8fe +0x2c:  mov    0x20(%eax),%eax
0861c901 +0x2f:  cmp    $0x1,%eax
0861c904 +0x32:  je     0861c911 <+0x3f>
0861c906 +0x34:  cmp    $0x2,%eax
0861c909 +0x37:  je     0861c941 <+0x6f>
0861c90b +0x39:  test   %eax,%eax
0861c90d +0x3b:  je     0861c929 <+0x57>
0861c90f +0x3d:  jmp    0861c957 <+0x85>
0861c911 +0x3f:  mov    0x8(%ebp),%eax
0861c914 +0x42:  mov    (%eax),%edx
0861c916 +0x44:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
0861c91b +0x49:  mov    %edx,0x4(%esp)
0861c91f +0x4d:  mov    %eax,(%esp)
0861c922 +0x50:  call   08290004 <_ZN15SmallStreamPool4FreeEP6Stream>  ; SmallStreamPool::Free(Stream*)
0861c927 +0x55:  jmp    0861c957 <+0x85>
0861c929 +0x57:  mov    0x8(%ebp),%eax
0861c92c +0x5a:  mov    (%eax),%edx
0861c92e +0x5c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0861c933 +0x61:  mov    %edx,0x4(%esp)
0861c937 +0x65:  mov    %eax,(%esp)
0861c93a +0x68:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
0861c93f +0x6d:  jmp    0861c957 <+0x85>
0861c941 +0x6f:  mov    0x8(%ebp),%eax
0861c944 +0x72:  mov    (%eax),%edx
0861c946 +0x74:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0861c94b +0x79:  mov    %edx,0x4(%esp)
0861c94f +0x7d:  mov    %eax,(%esp)
0861c952 +0x80:  call   08290304 <_ZN13BigStreamPool4FreeEP6Stream>  ; BigStreamPool::Free(Stream*)
0861c957 +0x85:  leave
0861c958 +0x86:  ret
```

## 反编译 C

```c
// CStreamGuard::~CStreamGuard @ 0x861c8d2

/* CStreamGuard::~CStreamGuard() */

void __thiscall CStreamGuard::~CStreamGuard(CStreamGuard *this)

{
  int iVar1;
  
  if (((*(int *)this != 0) && (this[4] != (CStreamGuard)0x0)) &&
     (*(char *)(*(int *)this + 0x24) != '\0')) {
    iVar1 = *(int *)(*(int *)this + 0x20);
    if (iVar1 == 1) {
      SmallStreamPool::Free(GlobalData::s_small_stream_pool,*(Stream **)this);
    }
    else if (iVar1 == 2) {
      BigStreamPool::Free(GlobalData::s_big_stream_pool,*(Stream **)this);
    }
    else if (iVar1 == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,*(Stream **)this);
    }
  }
  return;
}
```
