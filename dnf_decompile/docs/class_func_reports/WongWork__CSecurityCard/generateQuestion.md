# generateQuestion

`_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_`

`WongWork::CSecurityCard::generateQuestion(short&, short&, short&, short&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCard` | `0x085fddb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fddb2  _ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_
#           WongWork::CSecurityCard::generateQuestion(short&, short&, short&, short&)
# range [0x085fddb2, 0x085fde9b]
085fddb2 +0x00:  push   %ebp
085fddb3 +0x01:  mov    %esp,%ebp
085fddb5 +0x03:  mov    0x8(%ebp),%eax
085fddb8 +0x06:  movzbl 0x3c(%eax),%eax
085fddbc +0x0a:  test   %al,%al
085fddbe +0x0c:  jne    085fdde1 <+0x2f>
085fddc0 +0x0e:  mov    0x8(%ebp),%eax
085fddc3 +0x11:  movzbl 0x3d(%eax),%eax
085fddc7 +0x15:  test   %al,%al
085fddc9 +0x17:  jne    085fdde1 <+0x2f>
085fddcb +0x19:  mov    0x8(%ebp),%eax
085fddce +0x1c:  movzbl 0x3e(%eax),%eax
085fddd2 +0x20:  test   %al,%al
085fddd4 +0x22:  jne    085fdde1 <+0x2f>
085fddd6 +0x24:  mov    0x8(%ebp),%eax
085fddd9 +0x27:  movzbl 0x3f(%eax),%eax
085fdddd +0x2b:  test   %al,%al
085fdddf +0x2d:  je     085fde39 <+0x87>
085fdde1 +0x2f:  mov    0x8(%ebp),%eax
085fdde4 +0x32:  movzbl 0x3c(%eax),%eax
085fdde8 +0x36:  test   %al,%al
085fddea +0x38:  js     085fde39 <+0x87>
085fddec +0x3a:  mov    0x8(%ebp),%eax
085fddef +0x3d:  movzbl 0x3c(%eax),%eax
085fddf3 +0x41:  cmp    $0x9,%al
085fddf5 +0x43:  jg     085fde39 <+0x87>
085fddf7 +0x45:  mov    0x8(%ebp),%eax
085fddfa +0x48:  movzbl 0x3d(%eax),%eax
085fddfe +0x4c:  test   %al,%al
085fde00 +0x4e:  js     085fde39 <+0x87>
085fde02 +0x50:  mov    0x8(%ebp),%eax
085fde05 +0x53:  movzbl 0x3d(%eax),%eax
085fde09 +0x57:  cmp    $0x3,%al
085fde0b +0x59:  jg     085fde39 <+0x87>
085fde0d +0x5b:  mov    0x8(%ebp),%eax
085fde10 +0x5e:  movzbl 0x3e(%eax),%eax
085fde14 +0x62:  test   %al,%al
085fde16 +0x64:  js     085fde39 <+0x87>
085fde18 +0x66:  mov    0x8(%ebp),%eax
085fde1b +0x69:  movzbl 0x3e(%eax),%eax
085fde1f +0x6d:  cmp    $0x9,%al
085fde21 +0x6f:  jg     085fde39 <+0x87>
085fde23 +0x71:  mov    0x8(%ebp),%eax
085fde26 +0x74:  movzbl 0x3f(%eax),%eax
085fde2a +0x78:  test   %al,%al
085fde2c +0x7a:  js     085fde39 <+0x87>
085fde2e +0x7c:  mov    0x8(%ebp),%eax
085fde31 +0x7f:  movzbl 0x3f(%eax),%eax
085fde35 +0x83:  cmp    $0x3,%al
085fde37 +0x85:  jle    085fde55 <+0xa3>
085fde39 +0x87:  mov    0x8(%ebp),%eax
085fde3c +0x8a:  movb   $0x0,0x3c(%eax)
085fde40 +0x8e:  mov    0x8(%ebp),%eax
085fde43 +0x91:  movb   $0x0,0x3d(%eax)
085fde47 +0x95:  mov    0x8(%ebp),%eax
085fde4a +0x98:  movb   $0x1,0x3e(%eax)
085fde4e +0x9c:  mov    0x8(%ebp),%eax
085fde51 +0x9f:  movb   $0x1,0x3f(%eax)
085fde55 +0xa3:  mov    0x8(%ebp),%eax
085fde58 +0xa6:  movzbl 0x3c(%eax),%eax
085fde5c +0xaa:  movsbw %al,%dx
085fde60 +0xae:  mov    0xc(%ebp),%eax
085fde63 +0xb1:  mov    %dx,(%eax)
085fde66 +0xb4:  mov    0x8(%ebp),%eax
085fde69 +0xb7:  movzbl 0x3d(%eax),%eax
085fde6d +0xbb:  movsbw %al,%dx
085fde71 +0xbf:  mov    0x10(%ebp),%eax
085fde74 +0xc2:  mov    %dx,(%eax)
085fde77 +0xc5:  mov    0x8(%ebp),%eax
085fde7a +0xc8:  movzbl 0x3e(%eax),%eax
085fde7e +0xcc:  movsbw %al,%dx
085fde82 +0xd0:  mov    0x14(%ebp),%eax
085fde85 +0xd3:  mov    %dx,(%eax)
085fde88 +0xd6:  mov    0x8(%ebp),%eax
085fde8b +0xd9:  movzbl 0x3f(%eax),%eax
085fde8f +0xdd:  movsbw %al,%dx
085fde93 +0xe1:  mov    0x18(%ebp),%eax
085fde96 +0xe4:  mov    %dx,(%eax)
085fde99 +0xe7:  pop    %ebp
085fde9a +0xe8:  ret
085fde9b +0xe9:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCard::generateQuestion @ 0x85fddb2

/* WongWork::CSecurityCard::generateQuestion(short&, short&, short&, short&) */

void __thiscall
WongWork::CSecurityCard::generateQuestion
          (CSecurityCard *this,short *param_1,short *param_2,short *param_3,short *param_4)

{
  if ((((((this[0x3c] == (CSecurityCard)0x0) && (this[0x3d] == (CSecurityCard)0x0)) &&
        (this[0x3e] == (CSecurityCard)0x0)) && (this[0x3f] == (CSecurityCard)0x0)) ||
      ((((char)this[0x3c] < '\0' || ('\t' < (char)this[0x3c])) ||
       (((char)this[0x3d] < '\0' || (('\x03' < (char)this[0x3d] || ((char)this[0x3e] < '\0'))))))))
     || (('\t' < (char)this[0x3e] || (((char)this[0x3f] < '\0' || ('\x03' < (char)this[0x3f])))))) {
    this[0x3c] = (CSecurityCard)0x0;
    this[0x3d] = (CSecurityCard)0x0;
    this[0x3e] = (CSecurityCard)0x1;
    this[0x3f] = (CSecurityCard)0x1;
  }
  *param_1 = (short)(char)this[0x3c];
  *param_2 = (short)(char)this[0x3d];
  *param_3 = (short)(char)this[0x3e];
  *param_4 = (short)(char)this[0x3f];
  return;
}
```
