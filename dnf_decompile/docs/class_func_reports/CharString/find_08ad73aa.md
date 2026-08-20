# find

`_ZNK10CharString4findEic`

`CharString::find(int, char) const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad73aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad73aa  _ZNK10CharString4findEic
#           CharString::find(int, char) const
# range [0x08ad73aa, 0x08ad7441]
08ad73aa +0x00:  push   %ebp
08ad73ab +0x01:  mov    %esp,%ebp
08ad73ad +0x03:  sub    $0x38,%esp
08ad73b0 +0x06:  mov    0x10(%ebp),%eax
08ad73b3 +0x09:  mov    %al,-0x1c(%ebp)
08ad73b6 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
08ad73ba +0x10:  jne    08ad73c3 <+0x19>
08ad73bc +0x12:  mov    $0xffffffff,%eax
08ad73c1 +0x17:  jmp    08ad7440 <+0x96>
08ad73c3 +0x19:  cmpl   $0x0,0xc(%ebp)
08ad73c7 +0x1d:  js     08ad73d9 <+0x2f>
08ad73c9 +0x1f:  mov    0x8(%ebp),%eax
08ad73cc +0x22:  mov    %eax,(%esp)
08ad73cf +0x25:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad73d4 +0x2a:  cmp    0xc(%ebp),%eax
08ad73d7 +0x2d:  jg     08ad73e0 <+0x36>
08ad73d9 +0x2f:  mov    $0x1,%eax
08ad73de +0x34:  jmp    08ad73e5 <+0x3b>
08ad73e0 +0x36:  mov    $0x0,%eax
08ad73e5 +0x3b:  test   %al,%al
08ad73e7 +0x3d:  je     08ad73f0 <+0x46>
08ad73e9 +0x3f:  mov    $0xffffffff,%eax
08ad73ee +0x44:  jmp    08ad7440 <+0x96>
08ad73f0 +0x46:  mov    0x8(%ebp),%eax
08ad73f3 +0x49:  mov    %eax,(%esp)
08ad73f6 +0x4c:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad73fb +0x51:  mov    %eax,-0x14(%ebp)
08ad73fe +0x54:  mov    0x8(%ebp),%eax
08ad7401 +0x57:  mov    %eax,(%esp)
08ad7404 +0x5a:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad7409 +0x5f:  sub    $0x1,%eax
08ad740c +0x62:  mov    %eax,-0x10(%ebp)
08ad740f +0x65:  mov    0xc(%ebp),%eax
08ad7412 +0x68:  mov    %eax,-0xc(%ebp)
08ad7415 +0x6b:  jmp    08ad742e <+0x84>
08ad7417 +0x6d:  mov    0xc(%ebp),%eax
08ad741a +0x70:  add    -0x14(%ebp),%eax
08ad741d +0x73:  movzbl (%eax),%eax
08ad7420 +0x76:  cmp    -0x1c(%ebp),%al
08ad7423 +0x79:  jne    08ad742a <+0x80>
08ad7425 +0x7b:  mov    -0xc(%ebp),%eax
08ad7428 +0x7e:  jmp    08ad7440 <+0x96>
08ad742a +0x80:  addl   $0x1,-0xc(%ebp)
08ad742e +0x84:  mov    -0xc(%ebp),%eax
08ad7431 +0x87:  cmp    -0x10(%ebp),%eax
08ad7434 +0x8a:  setle  %al
08ad7437 +0x8d:  test   %al,%al
08ad7439 +0x8f:  jne    08ad7417 <+0x6d>
08ad743b +0x91:  mov    $0xffffffff,%eax
08ad7440 +0x96:  leave
08ad7441 +0x97:  ret
```

## 反编译 C

```c
// CharString::find @ 0x8ad73aa

/* DWARF original prototype: int32 find(CharString * this, int32 pos, char pat) */

int32 __thiscall CharString::find(CharString *this,int32 pos,char pat)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (pat != '\0') {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 + -1; local_10 = local_10 + 1) {
        if (pcVar3[pos] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}
```
