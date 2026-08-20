# CharString

`_ZN10CharStringC1Ec`

`CharString::CharString(char)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6b60  _ZN10CharStringC1Ec
#           CharString::CharString(char)
# range [0x08ad6b60, 0x08ad6b9f]
08ad6b60 +0x00:  push   %ebp
08ad6b61 +0x01:  mov    %esp,%ebp
08ad6b63 +0x03:  sub    $0x38,%esp
08ad6b66 +0x06:  mov    0xc(%ebp),%eax
08ad6b69 +0x09:  mov    %al,-0x1c(%ebp)
08ad6b6c +0x0c:  movl   $0x1,(%esp)
08ad6b73 +0x13:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad6b78 +0x18:  mov    %eax,-0xc(%ebp)
08ad6b7b +0x1b:  mov    -0xc(%ebp),%eax
08ad6b7e +0x1e:  mov    %eax,(%esp)
08ad6b81 +0x21:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad6b86 +0x26:  movzbl -0x1c(%ebp),%edx
08ad6b8a +0x2a:  mov    %dl,(%eax)
08ad6b8c +0x2c:  mov    -0xc(%ebp),%eax
08ad6b8f +0x2f:  mov    %eax,0x4(%esp)
08ad6b93 +0x33:  mov    0x8(%ebp),%eax
08ad6b96 +0x36:  mov    %eax,(%esp)
08ad6b99 +0x39:  call   08ad715c <_ZN10CharString10attachDataEP14CharStringData>  ; CharString::attachData(CharStringData*)
08ad6b9e +0x3e:  leave
08ad6b9f +0x3f:  ret
```

## 反编译 C

```c
// CharString::CharString @ 0x8ad6b60

/* DWARF original prototype: void CharString(CharString * this, char src) */

void __thiscall CharString::CharString(CharString *this,char src)

{
  CharStringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  this_00 = CharStringData::createTerminated(1);
  pcVar1 = CharStringData::getBuffer(this_00);
  *pcVar1 = src;
  attachData(this,this_00);
  return;
}
```
