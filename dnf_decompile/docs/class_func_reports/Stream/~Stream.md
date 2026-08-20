# ~Stream

`_ZN6StreamD1Ev`

`Stream::~Stream()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bd6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bd6c  _ZN6StreamD1Ev
#           Stream::~Stream()
# range [0x0861bd6c, 0x0861bda9]
0861bd6c +0x00:  push   %ebp
0861bd6d +0x01:  mov    %esp,%ebp
0861bd6f +0x03:  sub    $0x18,%esp
0861bd72 +0x06:  mov    0x8(%ebp),%eax
0861bd75 +0x09:  movl   $&_ZTV6Stream+0x8,(%eax)
0861bd7b +0x0f:  mov    0x8(%ebp),%eax
0861bd7e +0x12:  mov    0x8(%eax),%eax
0861bd81 +0x15:  test   %eax,%eax
0861bd83 +0x17:  je     0861bd93 <+0x27>
0861bd85 +0x19:  mov    0x8(%ebp),%eax
0861bd88 +0x1c:  mov    0x8(%eax),%eax
0861bd8b +0x1f:  mov    %eax,(%esp)
0861bd8e +0x22:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0861bd93 +0x27:  mov    $0x0,%eax
0861bd98 +0x2c:  test   %al,%al
0861bd9a +0x2e:  je     0861bda7 <+0x3b>
0861bd9c +0x30:  mov    0x8(%ebp),%eax
0861bd9f +0x33:  mov    %eax,(%esp)
0861bda2 +0x36:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0861bda7 +0x3b:  leave
0861bda8 +0x3c:  ret
0861bda9 +0x3d:  nop
```

## 反编译 C

```c
// Stream::~Stream @ 0x861bd6c

/* WARNING: Removing unreachable block (ram,0x0861bd9c) */
/* Stream::~Stream() */

void __thiscall Stream::~Stream(Stream *this)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 8));
  }
  return;
}
```
