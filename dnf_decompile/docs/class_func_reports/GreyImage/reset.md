# reset

`_ZN9GreyImage5resetEv`

`GreyImage::reset()`

| 类 | 地址 |
|---|---|
| `GreyImage` | `0x080df582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df582  _ZN9GreyImage5resetEv
#           GreyImage::reset()
# range [0x080df582, 0x080df5c1]
080df582 +0x00:  push   %ebp
080df583 +0x01:  mov    %esp,%ebp
080df585 +0x03:  sub    $0x18,%esp
080df588 +0x06:  mov    0x8(%ebp),%eax
080df58b +0x09:  mov    0x8(%eax),%eax
080df58e +0x0c:  test   %eax,%eax
080df590 +0x0e:  je     080df5bf <+0x3d>
080df592 +0x10:  mov    0x8(%ebp),%eax
080df595 +0x13:  movl   $0x0,(%eax)
080df59b +0x19:  mov    0x8(%ebp),%eax
080df59e +0x1c:  movl   $0x0,0x4(%eax)
080df5a5 +0x23:  mov    0x8(%ebp),%eax
080df5a8 +0x26:  mov    0x8(%eax),%eax
080df5ab +0x29:  mov    %eax,(%esp)
080df5ae +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080df5b3 +0x31:  mov    0x8(%ebp),%eax
080df5b6 +0x34:  movl   $0x0,0x8(%eax)
080df5bd +0x3b:  jmp    080df5c0 <+0x3e>
080df5bf +0x3d:  nop
080df5c0 +0x3e:  leave
080df5c1 +0x3f:  ret
```

## 反编译 C

```c
// GreyImage::reset @ 0x80df582

/* GreyImage::reset() */

void __thiscall GreyImage::reset(GreyImage *this)

{
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}
```
