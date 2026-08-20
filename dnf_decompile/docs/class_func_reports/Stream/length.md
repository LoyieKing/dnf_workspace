# length

`_ZN6Stream6lengthEv`

`Stream::length()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bdd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bdd4  _ZN6Stream6lengthEv
#           Stream::length()
# range [0x0861bdd4, 0x0861bdff]
0861bdd4 +0x00:  push   %ebp
0861bdd5 +0x01:  mov    %esp,%ebp
0861bdd7 +0x03:  push   %ebx
0861bdd8 +0x04:  sub    $0x14,%esp
0861bddb +0x07:  mov    0x8(%ebp),%eax
0861bdde +0x0a:  mov    %eax,(%esp)
0861bde1 +0x0d:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861bde6 +0x12:  mov    %eax,%ebx
0861bde8 +0x14:  mov    0x8(%ebp),%eax
0861bdeb +0x17:  mov    %eax,(%esp)
0861bdee +0x1a:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861bdf3 +0x1f:  mov    %ebx,%edx
0861bdf5 +0x21:  sub    %eax,%edx
0861bdf7 +0x23:  mov    %edx,%eax
0861bdf9 +0x25:  add    $0x14,%esp
0861bdfc +0x28:  pop    %ebx
0861bdfd +0x29:  pop    %ebp
0861bdfe +0x2a:  ret
0861bdff +0x2b:  nop
```

## 反编译 C

```c
// Stream::length @ 0x861bdd4

/* Stream::length() */

int __thiscall Stream::length(Stream *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = in_ptr(this);
  iVar2 = out_ptr(this);
  return iVar1 - iVar2;
}
```
