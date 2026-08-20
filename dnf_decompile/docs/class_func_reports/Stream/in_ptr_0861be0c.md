# in_ptr

`_ZN6Stream6in_ptrEi`

`Stream::in_ptr(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861be0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861be0c  _ZN6Stream6in_ptrEi
#           Stream::in_ptr(int)
# range [0x0861be0c, 0x0861be27]
0861be0c +0x00:  push   %ebp
0861be0d +0x01:  mov    %esp,%ebp
0861be0f +0x03:  mov    0x8(%ebp),%eax
0861be12 +0x06:  mov    0xc(%eax),%eax
0861be15 +0x09:  mov    %eax,%edx
0861be17 +0x0b:  add    0xc(%ebp),%edx
0861be1a +0x0e:  mov    0x8(%ebp),%eax
0861be1d +0x11:  mov    %edx,0xc(%eax)
0861be20 +0x14:  mov    0x8(%ebp),%eax
0861be23 +0x17:  mov    0xc(%eax),%eax
0861be26 +0x1a:  pop    %ebp
0861be27 +0x1b:  ret
```

## 反编译 C

```c
// Stream::in_ptr @ 0x861be0c

/* Stream::in_ptr(int) */

undefined4 __thiscall Stream::in_ptr(Stream *this,int param_1)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_1;
  return *(undefined4 *)(this + 0xc);
}
```
