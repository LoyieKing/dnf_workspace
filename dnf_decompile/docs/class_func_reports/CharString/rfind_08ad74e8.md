# rfind

`_ZNK10CharString5rfindEiPKci`

`CharString::rfind(int, char const*, int) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad74e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad74e8  _ZNK10CharString5rfindEiPKci
#           CharString::rfind(int, char const*, int) const
# range [0x08ad74e8, 0x08ad757f]
08ad74e8 +0x00:  push   %ebp
08ad74e9 +0x01:  mov    %esp,%ebp
08ad74eb +0x03:  sub    $0x28,%esp
08ad74ee +0x06:  cmpl   $0x0,0x14(%ebp)
08ad74f2 +0x0a:  jne    08ad74fe <+0x16>
08ad74f4 +0x0c:  mov    $0xffffffff,%eax
08ad74f9 +0x11:  jmp    08ad757e <+0x96>
08ad74fe +0x16:  cmpl   $0x0,0xc(%ebp)
08ad7502 +0x1a:  js     08ad7517 <+0x2f>
08ad7504 +0x1c:  mov    0x8(%ebp),%eax
08ad7507 +0x1f:  mov    %eax,(%esp)
08ad750a +0x22:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad750f +0x27:  sub    0xc(%ebp),%eax
08ad7512 +0x2a:  cmp    0x14(%ebp),%eax
08ad7515 +0x2d:  jge    08ad751e <+0x36>
08ad7517 +0x2f:  mov    $0x1,%eax
08ad751c +0x34:  jmp    08ad7523 <+0x3b>
08ad751e +0x36:  mov    $0x0,%eax
08ad7523 +0x3b:  test   %al,%al
08ad7525 +0x3d:  je     08ad752e <+0x46>
08ad7527 +0x3f:  mov    $0xffffffff,%eax
08ad752c +0x44:  jmp    08ad757e <+0x96>
08ad752e +0x46:  mov    0x8(%ebp),%eax
08ad7531 +0x49:  mov    %eax,(%esp)
08ad7534 +0x4c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad7539 +0x51:  mov    %eax,-0x10(%ebp)
08ad753c +0x54:  mov    0xc(%ebp),%eax
08ad753f +0x57:  mov    %eax,-0xc(%ebp)
08ad7542 +0x5a:  jmp    08ad756d <+0x85>
08ad7544 +0x5c:  mov    0x14(%ebp),%edx
08ad7547 +0x5f:  mov    -0xc(%ebp),%eax
08ad754a +0x62:  add    -0x10(%ebp),%eax
08ad754d +0x65:  mov    %edx,0x8(%esp)
08ad7551 +0x69:  mov    0x10(%ebp),%edx
08ad7554 +0x6c:  mov    %edx,0x4(%esp)
08ad7558 +0x70:  mov    %eax,(%esp)
08ad755b +0x73:  call   0807dc90 <_init+0x588>
08ad7560 +0x78:  test   %eax,%eax
08ad7562 +0x7a:  jne    08ad7569 <+0x81>
08ad7564 +0x7c:  mov    -0xc(%ebp),%eax
08ad7567 +0x7f:  jmp    08ad757e <+0x96>
08ad7569 +0x81:  subl   $0x1,-0xc(%ebp)
08ad756d +0x85:  mov    -0xc(%ebp),%eax
08ad7570 +0x88:  not    %eax
08ad7572 +0x8a:  shr    $0x1f,%eax
08ad7575 +0x8d:  test   %al,%al
08ad7577 +0x8f:  jne    08ad7544 <+0x5c>
08ad7579 +0x91:  mov    $0xffffffff,%eax
08ad757e +0x96:  leave
08ad757f +0x97:  ret
```

## 反编译 C

```c
// CharString::rfind @ 0x8ad74e8

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char * pat, int32 patLength)
    */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        iVar4 = memcmp(pcVar3 + local_10,pat,patLength);
        if (iVar4 == 0) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
