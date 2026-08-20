# checkAnswer

`_ZNK8WongWork13CSecurityCard11checkAnswerEhh`

`WongWork::CSecurityCard::checkAnswer(unsigned char, unsigned char) const`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCard` | `0x085fdf6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fdf6a  _ZNK8WongWork13CSecurityCard11checkAnswerEhh
#           WongWork::CSecurityCard::checkAnswer(unsigned char, unsigned char) const
# range [0x085fdf6a, 0x085fe025]
085fdf6a +0x00:  push   %ebp
085fdf6b +0x01:  mov    %esp,%ebp
085fdf6d +0x03:  sub    $0x8,%esp
085fdf70 +0x06:  mov    0xc(%ebp),%edx
085fdf73 +0x09:  mov    0x10(%ebp),%eax
085fdf76 +0x0c:  mov    %dl,-0x4(%ebp)
085fdf79 +0x0f:  mov    %al,-0x8(%ebp)
085fdf7c +0x12:  mov    0x8(%ebp),%eax
085fdf7f +0x15:  movzbl 0x3c(%eax),%eax
085fdf83 +0x19:  test   %al,%al
085fdf85 +0x1b:  jne    085fdfaf <+0x45>
085fdf87 +0x1d:  mov    0x8(%ebp),%eax
085fdf8a +0x20:  movzbl 0x3d(%eax),%eax
085fdf8e +0x24:  test   %al,%al
085fdf90 +0x26:  jne    085fdfaf <+0x45>
085fdf92 +0x28:  mov    0x8(%ebp),%eax
085fdf95 +0x2b:  movzbl 0x3e(%eax),%eax
085fdf99 +0x2f:  test   %al,%al
085fdf9b +0x31:  jne    085fdfaf <+0x45>
085fdf9d +0x33:  mov    0x8(%ebp),%eax
085fdfa0 +0x36:  movzbl 0x3f(%eax),%eax
085fdfa4 +0x3a:  test   %al,%al
085fdfa6 +0x3c:  jne    085fdfaf <+0x45>
085fdfa8 +0x3e:  mov    $0x0,%eax
085fdfad +0x43:  jmp    085fe023 <+0xb9>
085fdfaf +0x45:  mov    0x8(%ebp),%eax
085fdfb2 +0x48:  movzbl 0x3d(%eax),%eax
085fdfb6 +0x4c:  movsbl %al,%edx
085fdfb9 +0x4f:  mov    %edx,%eax
085fdfbb +0x51:  shl    $0x2,%eax
085fdfbe +0x54:  add    %edx,%eax
085fdfc0 +0x56:  add    %eax,%eax
085fdfc2 +0x58:  mov    %eax,%edx
085fdfc4 +0x5a:  mov    0x8(%ebp),%eax
085fdfc7 +0x5d:  movzbl 0x3c(%eax),%eax
085fdfcb +0x61:  movsbl %al,%eax
085fdfce +0x64:  add    %eax,%edx
085fdfd0 +0x66:  mov    0x8(%ebp),%eax
085fdfd3 +0x69:  movzbl 0x8(%eax,%edx,1),%eax
085fdfd8 +0x6e:  movsbl %al,%edx
085fdfdb +0x71:  movzbl -0x4(%ebp),%eax
085fdfdf +0x75:  cmp    %eax,%edx
085fdfe1 +0x77:  jne    085fe01e <+0xb4>
085fdfe3 +0x79:  mov    0x8(%ebp),%eax
085fdfe6 +0x7c:  movzbl 0x3f(%eax),%eax
085fdfea +0x80:  movsbl %al,%edx
085fdfed +0x83:  mov    %edx,%eax
085fdfef +0x85:  shl    $0x2,%eax
085fdff2 +0x88:  add    %edx,%eax
085fdff4 +0x8a:  add    %eax,%eax
085fdff6 +0x8c:  mov    %eax,%edx
085fdff8 +0x8e:  mov    0x8(%ebp),%eax
085fdffb +0x91:  movzbl 0x3e(%eax),%eax
085fdfff +0x95:  movsbl %al,%eax
085fe002 +0x98:  add    %eax,%edx
085fe004 +0x9a:  mov    0x8(%ebp),%eax
085fe007 +0x9d:  movzbl 0x8(%eax,%edx,1),%eax
085fe00c +0xa2:  movsbl %al,%edx
085fe00f +0xa5:  movzbl -0x8(%ebp),%eax
085fe013 +0xa9:  cmp    %eax,%edx
085fe015 +0xab:  jne    085fe01e <+0xb4>
085fe017 +0xad:  mov    $0x1,%eax
085fe01c +0xb2:  jmp    085fe023 <+0xb9>
085fe01e +0xb4:  mov    $0x0,%eax
085fe023 +0xb9:  leave
085fe024 +0xba:  ret
085fe025 +0xbb:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCard::checkAnswer @ 0x85fdf6a

/* WongWork::CSecurityCard::checkAnswer(unsigned char, unsigned char) const */

undefined4 __thiscall
WongWork::CSecurityCard::checkAnswer(CSecurityCard *this,uchar param_1,uchar param_2)

{
  undefined4 uVar1;
  
  if ((((this[0x3c] == (CSecurityCard)0x0) && (this[0x3d] == (CSecurityCard)0x0)) &&
      (this[0x3e] == (CSecurityCard)0x0)) && (this[0x3f] == (CSecurityCard)0x0)) {
    uVar1 = 0;
  }
  else if (((int)(char)this[(char)this[0x3d] * 10 + (int)(char)this[0x3c] + 8] == (uint)param_1) &&
          ((int)(char)this[(char)this[0x3f] * 10 + (int)(char)this[0x3e] + 8] == (uint)param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
