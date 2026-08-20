# decideLinkCharacSlotIndexes

`_ZN5CUser27decideLinkCharacSlotIndexesEci`

`CUser::decideLinkCharacSlotIndexes(char, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652b06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652b06  _ZN5CUser27decideLinkCharacSlotIndexesEci
#           CUser::decideLinkCharacSlotIndexes(char, int)
# range [0x08652b06, 0x08652b8f]
08652b06 +0x00:  push   %ebp
08652b07 +0x01:  mov    %esp,%ebp
08652b09 +0x03:  sub    $0x38,%esp
08652b0c +0x06:  mov    0xc(%ebp),%eax
08652b0f +0x09:  mov    %al,-0x1c(%ebp)
08652b12 +0x0c:  mov    0x8(%ebp),%eax
08652b15 +0x0f:  mov    %eax,(%esp)
08652b18 +0x12:  call   08696b4a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x339f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x339f
08652b1d +0x17:  movsbl %al,%eax
08652b20 +0x1a:  mov    %eax,-0xc(%ebp)
08652b23 +0x1d:  movsbl -0x1c(%ebp),%eax
08652b27 +0x21:  cmp    0x10(%ebp),%eax
08652b2a +0x24:  jge    08652b89 <+0x83>
08652b2c +0x26:  cmpb   $0x0,-0x1c(%ebp)
08652b30 +0x2a:  js     08652b8c <+0x86>
08652b32 +0x2c:  cmpl   $0x2,-0xc(%ebp)
08652b36 +0x30:  jne    08652b53 <+0x4d>
08652b38 +0x32:  movzbl -0x1c(%ebp),%eax
08652b3c +0x36:  add    $0x1,%eax
08652b3f +0x39:  movsbl %al,%edx
08652b42 +0x3c:  mov    0x8(%ebp),%eax
08652b45 +0x3f:  mov    %edx,0x4(%esp)
08652b49 +0x43:  mov    %eax,(%esp)
08652b4c +0x46:  call   08696b22 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3377>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3377
08652b51 +0x4b:  jmp    08652b8d <+0x87>
08652b53 +0x4d:  cmpl   $0x3,-0xc(%ebp)
08652b57 +0x51:  jne    08652b74 <+0x6e>
08652b59 +0x53:  movzbl -0x1c(%ebp),%eax
08652b5d +0x57:  sub    $0x1,%eax
08652b60 +0x5a:  movsbl %al,%edx
08652b63 +0x5d:  mov    0x8(%ebp),%eax
08652b66 +0x60:  mov    %edx,0x4(%esp)
08652b6a +0x64:  mov    %eax,(%esp)
08652b6d +0x67:  call   08696b22 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3377>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3377
08652b72 +0x6c:  jmp    08652b8d <+0x87>
08652b74 +0x6e:  mov    0x8(%ebp),%eax
08652b77 +0x71:  movl   $0xffffffff,0x4(%esp)
08652b7f +0x79:  mov    %eax,(%esp)
08652b82 +0x7c:  call   08696b22 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3377>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3377
08652b87 +0x81:  jmp    08652b8d <+0x87>
08652b89 +0x83:  nop
08652b8a +0x84:  jmp    08652b8d <+0x87>
08652b8c +0x86:  nop
08652b8d +0x87:  leave
08652b8e +0x88:  ret
08652b8f +0x89:  nop
```

## 反编译 C

```c
// CUser::decideLinkCharacSlotIndexes @ 0x8652b06

/* CUser::decideLinkCharacSlotIndexes(char, int) */

void __thiscall CUser::decideLinkCharacSlotIndexes(CUser *this,char param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CUserCharacInfo::getCharacLinkType((CUserCharacInfo *)this);
  if ((param_1 < param_2) && (-1 < param_1)) {
    if (cVar1 == '\x02') {
      CUserCharacInfo::setLinkCharacSlotIndex((CUserCharacInfo *)this,param_1 + '\x01');
    }
    else if (cVar1 == '\x03') {
      CUserCharacInfo::setLinkCharacSlotIndex((CUserCharacInfo *)this,param_1 + -1);
    }
    else {
      CUserCharacInfo::setLinkCharacSlotIndex((CUserCharacInfo *)this,-1);
    }
  }
  return;
}
```
