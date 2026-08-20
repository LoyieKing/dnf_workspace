# out_ptr

`_ZN6Stream7out_ptrEi`

`Stream::out_ptr(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861be34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861be34  _ZN6Stream7out_ptrEi
#           Stream::out_ptr(int)
# range [0x0861be34, 0x0861be89]
0861be34 +0x00:  push   %ebp
0861be35 +0x01:  mov    %esp,%ebp
0861be37 +0x03:  sub    $0x18,%esp
0861be3a +0x06:  mov    0x8(%ebp),%eax
0861be3d +0x09:  mov    0x10(%eax),%eax
0861be40 +0x0c:  mov    %eax,%edx
0861be42 +0x0e:  add    0xc(%ebp),%edx
0861be45 +0x11:  mov    0x8(%ebp),%eax
0861be48 +0x14:  mov    0xc(%eax),%eax
0861be4b +0x17:  cmp    %eax,%edx
0861be4d +0x19:  jle    0861be56 <+0x22>
0861be4f +0x1b:  mov    $0xffffffff,%eax
0861be54 +0x20:  jmp    0861be88 <+0x54>
0861be56 +0x22:  mov    0x8(%ebp),%eax
0861be59 +0x25:  mov    0x10(%eax),%eax
0861be5c +0x28:  mov    %eax,%edx
0861be5e +0x2a:  add    0xc(%ebp),%edx
0861be61 +0x2d:  mov    0x8(%ebp),%eax
0861be64 +0x30:  mov    %edx,0x10(%eax)
0861be67 +0x33:  mov    0x8(%ebp),%eax
0861be6a +0x36:  mov    0x10(%eax),%edx
0861be6d +0x39:  mov    0x8(%ebp),%eax
0861be70 +0x3c:  mov    0xc(%eax),%eax
0861be73 +0x3f:  cmp    %eax,%edx
0861be75 +0x41:  jne    0861be82 <+0x4e>
0861be77 +0x43:  mov    0x8(%ebp),%eax
0861be7a +0x46:  mov    %eax,(%esp)
0861be7d +0x49:  call   0861be8a <_ZN6Stream5resetEv>  ; Stream::reset()
0861be82 +0x4e:  mov    0x8(%ebp),%eax
0861be85 +0x51:  mov    0x10(%eax),%eax
0861be88 +0x54:  leave
0861be89 +0x55:  ret
```

## 反编译 C

```c
// Stream::out_ptr @ 0x861be34

/* Stream::out_ptr(int) */

undefined4 __thiscall Stream::out_ptr(Stream *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0xc) < *(int *)(this + 0x10) + param_1) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
    if (*(int *)(this + 0x10) == *(int *)(this + 0xc)) {
      reset(this);
    }
    uVar1 = *(undefined4 *)(this + 0x10);
  }
  return uVar1;
}
```
