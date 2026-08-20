# back

`_ZNK10CharString4backEv`

`CharString::back() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6edc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6edc  _ZNK10CharString4backEv
#           CharString::back() const
# range [0x08ad6edc, 0x08ad6f17]
08ad6edc +0x00:  push   %ebp
08ad6edd +0x01:  mov    %esp,%ebp
08ad6edf +0x03:  push   %ebx
08ad6ee0 +0x04:  sub    $0x14,%esp
08ad6ee3 +0x07:  mov    0x8(%ebp),%eax
08ad6ee6 +0x0a:  mov    %eax,(%esp)
08ad6ee9 +0x0d:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6eee +0x12:  test   %eax,%eax
08ad6ef0 +0x14:  je     08ad6f0d <+0x31>
08ad6ef2 +0x16:  mov    0x8(%ebp),%eax
08ad6ef5 +0x19:  mov    (%eax),%ebx
08ad6ef7 +0x1b:  mov    0x8(%ebp),%eax
08ad6efa +0x1e:  mov    %eax,(%esp)
08ad6efd +0x21:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6f02 +0x26:  sub    $0x1,%eax
08ad6f05 +0x29:  lea    (%ebx,%eax,1),%eax
08ad6f08 +0x2c:  movzbl (%eax),%eax
08ad6f0b +0x2f:  jmp    08ad6f12 <+0x36>
08ad6f0d +0x31:  mov    $0x0,%eax
08ad6f12 +0x36:  add    $0x14,%esp
08ad6f15 +0x39:  pop    %ebx
08ad6f16 +0x3a:  pop    %ebp
08ad6f17 +0x3b:  ret
```

## 反编译 C

```c
// CharString::back @ 0x8ad6edc

/* DWARF original prototype: char back(CharString * this) */

char __thiscall CharString::back(CharString *this)

{
  char *pcVar1;
  char cVar2;
  int32 iVar3;
  
  iVar3 = length(this);
  if (iVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    pcVar1 = this->buffer_;
    iVar3 = length(this);
    cVar2 = pcVar1[iVar3 + -1];
  }
  return cVar2;
}
```
