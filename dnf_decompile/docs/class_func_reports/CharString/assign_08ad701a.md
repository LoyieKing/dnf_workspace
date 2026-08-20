# assign

`_ZN10CharString6assignEc`

`CharString::assign(char)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad701a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad701a  _ZN10CharString6assignEc
#           CharString::assign(char)
# range [0x08ad701a, 0x08ad706d]
08ad701a +0x00:  push   %ebp
08ad701b +0x01:  mov    %esp,%ebp
08ad701d +0x03:  sub    $0x38,%esp
08ad7020 +0x06:  mov    0xc(%ebp),%eax
08ad7023 +0x09:  mov    %al,-0x1c(%ebp)
08ad7026 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
08ad702a +0x10:  jne    08ad7039 <+0x1f>
08ad702c +0x12:  mov    0x8(%ebp),%eax
08ad702f +0x15:  mov    %eax,(%esp)
08ad7032 +0x18:  call   08ad706e <_ZN10CharString5clearEv>  ; CharString::clear()
08ad7037 +0x1d:  jmp    08ad706b <+0x51>
08ad7039 +0x1f:  movl   $0x1,(%esp)
08ad7040 +0x26:  call   08ad697e <_ZN14CharStringData16createTerminatedEi>  ; CharStringData::createTerminated(int)
08ad7045 +0x2b:  mov    %eax,-0xc(%ebp)
08ad7048 +0x2e:  mov    -0xc(%ebp),%eax
08ad704b +0x31:  mov    %eax,(%esp)
08ad704e +0x34:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad7053 +0x39:  movzbl -0x1c(%ebp),%edx
08ad7057 +0x3d:  mov    %dl,(%eax)
08ad7059 +0x3f:  mov    -0xc(%ebp),%eax
08ad705c +0x42:  mov    %eax,0x4(%esp)
08ad7060 +0x46:  mov    0x8(%ebp),%eax
08ad7063 +0x49:  mov    %eax,(%esp)
08ad7066 +0x4c:  call   08ad7180 <_ZN10CharString11replaceDataEP14CharStringData>  ; CharString::replaceData(CharStringData*)
08ad706b +0x51:  leave
08ad706c +0x52:  ret
08ad706d +0x53:  nop
```

## 反编译 C

```c
// CharString::assign @ 0x8ad701a

/* DWARF original prototype: void assign(CharString * this, char src) */

void __thiscall CharString::assign(CharString *this,char src)

{
  CharStringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (src == '\0') {
    clear(this);
  }
  else {
    this_00 = CharStringData::createTerminated(1);
    pcVar1 = CharStringData::getBuffer(this_00);
    *pcVar1 = src;
    replaceData(this,this_00);
  }
  return;
}
```
