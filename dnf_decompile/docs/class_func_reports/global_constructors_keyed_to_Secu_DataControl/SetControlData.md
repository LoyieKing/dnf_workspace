# SetControlData

`_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt`

`global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_DataControl` | `0x082870c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082870c2  _GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt
#           global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)
# range [0x082870c2, 0x082871ab]
082870c2 +0x00:  push   %ebp
082870c3 +0x01:  mov    %esp,%ebp
082870c5 +0x03:  sub    $0x18,%esp
082870c8 +0x06:  movl   $0xffff,0x4(%esp)
082870d0 +0x0e:  movl   $0x1,(%esp)
082870d7 +0x15:  call   08287082 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082870dc +0x1a:  leave
082870dd +0x1b:  ret
082870de +0x1c:  push   %ebp
082870df +0x1d:  mov    %esp,%ebp
082870e1 +0x1f:  sub    $0x38,%esp
082870e4 +0x22:  mov    0xc(%ebp),%eax
082870e7 +0x25:  mov    %ax,-0x1c(%ebp)
082870eb +0x29:  movw   $0x2710,-0xc(%ebp)
082870f1 +0x2f:  lea    -0xc(%ebp),%eax
082870f4 +0x32:  mov    %eax,0x4(%esp)
082870f8 +0x36:  lea    -0x1c(%ebp),%eax
082870fb +0x39:  mov    %eax,(%esp)
082870fe +0x3c:  call   0828716d <+0xab>
08287103 +0x41:  movw   $0x0,-0xa(%ebp)
08287109 +0x47:  mov    %eax,0x4(%esp)
0828710d +0x4b:  lea    -0xa(%ebp),%eax
08287110 +0x4e:  mov    %eax,(%esp)
08287113 +0x51:  call   0828718b <+0xc9>
08287118 +0x56:  movzwl (%eax),%eax
0828711b +0x59:  movzwl %ax,%edx
0828711e +0x5c:  mov    0x8(%ebp),%eax
08287121 +0x5f:  mov    %edx,(%eax)
08287123 +0x61:  mov    0x8(%ebp),%eax
08287126 +0x64:  movb   $0x1,0x14(%eax)
0828712a +0x68:  leave
0828712b +0x69:  ret
0828712c +0x6a:  push   %ebp
0828712d +0x6b:  mov    %esp,%ebp
0828712f +0x6d:  mov    0x8(%ebp),%eax
08287132 +0x70:  mov    0xc(%ebp),%edx
08287135 +0x73:  mov    %edx,0x38(%eax)
08287138 +0x76:  pop    %ebp
08287139 +0x77:  ret
0828713a +0x78:  push   %ebp
0828713b +0x79:  mov    %esp,%ebp
0828713d +0x7b:  sub    $0x18,%esp
08287140 +0x7e:  mov    0x8(%ebp),%eax
08287143 +0x81:  movl   $0x24,0x8(%esp)
0828714b +0x89:  mov    0xc(%ebp),%edx
0828714e +0x8c:  mov    %edx,0x4(%esp)
08287152 +0x90:  mov    %eax,(%esp)
08287155 +0x93:  call   0807d8d0 <_init+0x1c8>
0828715a +0x98:  leave
0828715b +0x99:  ret
0828715c +0x9a:  push   %ebp
0828715d +0x9b:  mov    %esp,%ebp
0828715f +0x9d:  mov    0x8(%ebp),%eax
08287162 +0xa0:  mov    0xc(%ebp),%edx
08287165 +0xa3:  mov    %edx,0x79624(%eax)
0828716b +0xa9:  pop    %ebp
0828716c +0xaa:  ret
0828716d +0xab:  push   %ebp
0828716e +0xac:  mov    %esp,%ebp
08287170 +0xae:  mov    0xc(%ebp),%eax
08287173 +0xb1:  movzwl (%eax),%edx
08287176 +0xb4:  mov    0x8(%ebp),%eax
08287179 +0xb7:  movzwl (%eax),%eax
0828717c +0xba:  cmp    %ax,%dx
0828717f +0xbd:  jae    08287186 <+0xc4>
08287181 +0xbf:  mov    0xc(%ebp),%eax
08287184 +0xc2:  jmp    08287189 <+0xc7>
08287186 +0xc4:  mov    0x8(%ebp),%eax
08287189 +0xc7:  pop    %ebp
0828718a +0xc8:  ret
0828718b +0xc9:  push   %ebp
0828718c +0xca:  mov    %esp,%ebp
0828718e +0xcc:  mov    0x8(%ebp),%eax
08287191 +0xcf:  movzwl (%eax),%edx
08287194 +0xd2:  mov    0xc(%ebp),%eax
08287197 +0xd5:  movzwl (%eax),%eax
0828719a +0xd8:  cmp    %ax,%dx
0828719d +0xdb:  jae    082871a4 <+0xe2>
0828719f +0xdd:  mov    0xc(%ebp),%eax
082871a2 +0xe0:  jmp    082871a7 <+0xe5>
082871a4 +0xe2:  mov    0x8(%ebp),%eax
082871a7 +0xe5:  pop    %ebp
082871a8 +0xe6:  ret
082871a9 +0xe7:  nop
082871aa +0xe8:  nop
082871ab +0xe9:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82870c2

/* Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short) */

void Secu_DataControl::_GLOBAL__I_SetControlData(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
