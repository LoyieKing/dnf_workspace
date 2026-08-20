# getStr

`_ZN14CompiledDNFLex6getStrEPb`

`CompiledDNFLex::getStr(bool*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0250  _ZN14CompiledDNFLex6getStrEPb
#           CompiledDNFLex::getStr(bool*)
# range [0x08ad0250, 0x08ad028c]
08ad0250 +0x00:  push   %ebp
08ad0251 +0x01:  mov    %esp,%ebp
08ad0253 +0x03:  sub    $0x18,%esp
08ad0256 +0x06:  mov    %ebx,-0x8(%ebp)
08ad0259 +0x09:  mov    0x8(%ebp),%ebx
08ad025c +0x0c:  mov    %esi,-0x4(%ebp)
08ad025f +0x0f:  mov    0xc(%ebp),%esi
08ad0262 +0x12:  movl   $0x400,0x8(%esp)
08ad026a +0x1a:  mov    0x14(%ebx),%eax
08ad026d +0x1d:  mov    %ebx,(%esp)
08ad0270 +0x20:  mov    %eax,0x4(%esp)
08ad0274 +0x24:  call   08ad0190 <_ZN14CompiledDNFLex6getStrEPci>  ; CompiledDNFLex::getStr(char*, int)
08ad0279 +0x29:  test   %esi,%esi
08ad027b +0x2b:  je     08ad027f <+0x2f>
08ad027d +0x2d:  mov    %al,(%esi)
08ad027f +0x2f:  mov    0x14(%ebx),%eax
08ad0282 +0x32:  mov    -0x8(%ebp),%ebx
08ad0285 +0x35:  mov    -0x4(%ebp),%esi
08ad0288 +0x38:  mov    %ebp,%esp
08ad028a +0x3a:  pop    %ebp
08ad028b +0x3b:  ret
08ad028c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// CompiledDNFLex::getStr @ 0x8ad0250

/* DWARF original prototype: char * getStr(CompiledDNFLex * this, bool * result) */

char * __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,bool *result)

{
  bool bVar1;
  
                    /* Unresolved local var: bool rslt@[???] */
  bVar1 = getStr(this,this->stringBuffer_,0x400);
  if (result != (bool *)0x0) {
    *result = bVar1;
  }
  return this->stringBuffer_;
}
```
