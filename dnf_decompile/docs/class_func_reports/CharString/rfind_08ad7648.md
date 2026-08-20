# rfind

`_ZNK10CharString5rfindEic`

`CharString::rfind(int, char) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad7648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad7648  _ZNK10CharString5rfindEic
#           CharString::rfind(int, char) const
# range [0x08ad7648, 0x08ad76cd]
08ad7648 +0x00:  push   %ebp
08ad7649 +0x01:  mov    %esp,%ebp
08ad764b +0x03:  sub    $0x38,%esp
08ad764e +0x06:  mov    0x10(%ebp),%eax
08ad7651 +0x09:  mov    %al,-0x1c(%ebp)
08ad7654 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
08ad7658 +0x10:  jne    08ad7661 <+0x19>
08ad765a +0x12:  mov    $0xffffffff,%eax
08ad765f +0x17:  jmp    08ad76cc <+0x84>
08ad7661 +0x19:  cmpl   $0x0,0xc(%ebp)
08ad7665 +0x1d:  js     08ad7677 <+0x2f>
08ad7667 +0x1f:  mov    0x8(%ebp),%eax
08ad766a +0x22:  mov    %eax,(%esp)
08ad766d +0x25:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad7672 +0x2a:  cmp    0xc(%ebp),%eax
08ad7675 +0x2d:  jg     08ad767e <+0x36>
08ad7677 +0x2f:  mov    $0x1,%eax
08ad767c +0x34:  jmp    08ad7683 <+0x3b>
08ad767e +0x36:  mov    $0x0,%eax
08ad7683 +0x3b:  test   %al,%al
08ad7685 +0x3d:  je     08ad768e <+0x46>
08ad7687 +0x3f:  mov    $0xffffffff,%eax
08ad768c +0x44:  jmp    08ad76cc <+0x84>
08ad768e +0x46:  mov    0x8(%ebp),%eax
08ad7691 +0x49:  mov    %eax,(%esp)
08ad7694 +0x4c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad7699 +0x51:  mov    %eax,-0x10(%ebp)
08ad769c +0x54:  mov    0xc(%ebp),%eax
08ad769f +0x57:  mov    %eax,-0xc(%ebp)
08ad76a2 +0x5a:  jmp    08ad76bb <+0x73>
08ad76a4 +0x5c:  mov    -0xc(%ebp),%eax
08ad76a7 +0x5f:  add    -0x10(%ebp),%eax
08ad76aa +0x62:  movzbl (%eax),%eax
08ad76ad +0x65:  cmp    -0x1c(%ebp),%al
08ad76b0 +0x68:  jne    08ad76b7 <+0x6f>
08ad76b2 +0x6a:  mov    -0xc(%ebp),%eax
08ad76b5 +0x6d:  jmp    08ad76cc <+0x84>
08ad76b7 +0x6f:  subl   $0x1,-0xc(%ebp)
08ad76bb +0x73:  mov    -0xc(%ebp),%eax
08ad76be +0x76:  not    %eax
08ad76c0 +0x78:  shr    $0x1f,%eax
08ad76c3 +0x7b:  test   %al,%al
08ad76c5 +0x7d:  jne    08ad76a4 <+0x5c>
08ad76c7 +0x7f:  mov    $0xffffffff,%eax
08ad76cc +0x84:  leave
08ad76cd +0x85:  ret
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad7648

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char pat)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???] */
  if (pat != '\0') {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        if (pcVar3[local_10] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
