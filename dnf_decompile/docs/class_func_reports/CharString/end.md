# end

`_ZNK10CharString3endEv`

`CharString::end() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6f22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6f22  _ZNK10CharString3endEv
#           CharString::end() const
# range [0x08ad6f22, 0x08ad6f41]
08ad6f22 +0x00:  push   %ebp
08ad6f23 +0x01:  mov    %esp,%ebp
08ad6f25 +0x03:  push   %ebx
08ad6f26 +0x04:  sub    $0x14,%esp
08ad6f29 +0x07:  mov    0x8(%ebp),%eax
08ad6f2c +0x0a:  mov    (%eax),%ebx
08ad6f2e +0x0c:  mov    0x8(%ebp),%eax
08ad6f31 +0x0f:  mov    %eax,(%esp)
08ad6f34 +0x12:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad6f39 +0x17:  lea    (%ebx,%eax,1),%eax
08ad6f3c +0x1a:  add    $0x14,%esp
08ad6f3f +0x1d:  pop    %ebx
08ad6f40 +0x1e:  pop    %ebp
08ad6f41 +0x1f:  ret
```

## 反编译 C

```c
// CharString::end @ 0x8ad6f22

/* DWARF original prototype: const_iterator end(CharString * this) */

const_iterator __thiscall CharString::end(CharString *this)

{
  char *pcVar1;
  int32 iVar2;
  
  pcVar1 = this->buffer_;
  iVar2 = length(this);
  return pcVar1 + iVar2;
}
```
