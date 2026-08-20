# setSecurityCardInfo

`_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc`

`WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCard` | `0x085fde9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fde9c  _ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc
#           WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*)
# range [0x085fde9c, 0x085fdf69]
085fde9c +0x00:  push   %ebp
085fde9d +0x01:  mov    %esp,%ebp
085fde9f +0x03:  sub    $0x28,%esp
085fdea2 +0x06:  mov    0x10(%ebp),%edx
085fdea5 +0x09:  mov    0x14(%ebp),%eax
085fdea8 +0x0c:  mov    %dl,-0xc(%ebp)
085fdeab +0x0f:  mov    %al,-0x10(%ebp)
085fdeae +0x12:  mov    0x8(%ebp),%eax
085fdeb1 +0x15:  lea    0x8(%eax),%edx
085fdeb4 +0x18:  movl   $0x27,0x8(%esp)
085fdebc +0x20:  mov    0xc(%ebp),%eax
085fdebf +0x23:  mov    %eax,0x4(%esp)
085fdec3 +0x27:  mov    %edx,(%esp)
085fdec6 +0x2a:  call   0807d8d0 <_init+0x1c8>
085fdecb +0x2f:  mov    0x8(%ebp),%eax
085fdece +0x32:  movzbl -0xc(%ebp),%edx
085fded2 +0x36:  mov    %dl,0x2f(%eax)
085fded5 +0x39:  mov    0x8(%ebp),%eax
085fded8 +0x3c:  movzbl -0x10(%ebp),%edx
085fdedc +0x40:  mov    %dl,0x30(%eax)
085fdedf +0x43:  mov    0x8(%ebp),%eax
085fdee2 +0x46:  mov    0x18(%ebp),%edx
085fdee5 +0x49:  mov    %edx,0x34(%eax)
085fdee8 +0x4c:  mov    0x1c(%ebp),%eax
085fdeeb +0x4f:  mov    %eax,%edx
085fdeed +0x51:  mov    0x8(%ebp),%eax
085fdef0 +0x54:  mov    %dl,0x31(%eax)
085fdef3 +0x57:  mov    0x8(%ebp),%eax
085fdef6 +0x5a:  mov    0x20(%ebp),%edx
085fdef9 +0x5d:  mov    %edx,0x38(%eax)
085fdefc +0x60:  cmpl   $0x0,0x24(%ebp)
085fdf00 +0x64:  je     085fdf67 <+0xcb>
085fdf02 +0x66:  mov    0x8(%ebp),%eax
085fdf05 +0x69:  lea    0x3c(%eax),%edx
085fdf08 +0x6c:  movl   $0x5,0x8(%esp)
085fdf10 +0x74:  mov    0x24(%ebp),%eax
085fdf13 +0x77:  mov    %eax,0x4(%esp)
085fdf17 +0x7b:  mov    %edx,(%esp)
085fdf1a +0x7e:  call   0807d8d0 <_init+0x1c8>
085fdf1f +0x83:  mov    0x8(%ebp),%eax
085fdf22 +0x86:  movzbl 0x3c(%eax),%eax
085fdf26 +0x8a:  sub    $0x30,%eax
085fdf29 +0x8d:  mov    %eax,%edx
085fdf2b +0x8f:  mov    0x8(%ebp),%eax
085fdf2e +0x92:  mov    %dl,0x3c(%eax)
085fdf31 +0x95:  mov    0x8(%ebp),%eax
085fdf34 +0x98:  movzbl 0x3d(%eax),%eax
085fdf38 +0x9c:  sub    $0x30,%eax
085fdf3b +0x9f:  mov    %eax,%edx
085fdf3d +0xa1:  mov    0x8(%ebp),%eax
085fdf40 +0xa4:  mov    %dl,0x3d(%eax)
085fdf43 +0xa7:  mov    0x8(%ebp),%eax
085fdf46 +0xaa:  movzbl 0x3e(%eax),%eax
085fdf4a +0xae:  sub    $0x30,%eax
085fdf4d +0xb1:  mov    %eax,%edx
085fdf4f +0xb3:  mov    0x8(%ebp),%eax
085fdf52 +0xb6:  mov    %dl,0x3e(%eax)
085fdf55 +0xb9:  mov    0x8(%ebp),%eax
085fdf58 +0xbc:  movzbl 0x3f(%eax),%eax
085fdf5c +0xc0:  sub    $0x30,%eax
085fdf5f +0xc3:  mov    %eax,%edx
085fdf61 +0xc5:  mov    0x8(%ebp),%eax
085fdf64 +0xc8:  mov    %dl,0x3f(%eax)
085fdf67 +0xcb:  leave
085fdf68 +0xcc:  ret
085fdf69 +0xcd:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCard::setSecurityCardInfo @ 0x85fde9c

/* WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*) */

void __thiscall
WongWork::CSecurityCard::setSecurityCardInfo
          (CSecurityCard *this,char *param_1,bool param_2,bool param_3,int param_4,int param_5,
          int param_6,char *param_7)

{
  strncpy((char *)(this + 8),param_1,0x27);
  this[0x2f] = (CSecurityCard)param_2;
  this[0x30] = (CSecurityCard)param_3;
  *(int *)(this + 0x34) = param_4;
  this[0x31] = SUB41(param_5,0);
  *(int *)(this + 0x38) = param_6;
  if (param_7 != (char *)0x0) {
    strncpy((char *)(this + 0x3c),param_7,5);
    this[0x3c] = (CSecurityCard)((char)this[0x3c] + -0x30);
    this[0x3d] = (CSecurityCard)((char)this[0x3d] + -0x30);
    this[0x3e] = (CSecurityCard)((char)this[0x3e] + -0x30);
    this[0x3f] = (CSecurityCard)((char)this[0x3f] + -0x30);
  }
  return;
}
```
