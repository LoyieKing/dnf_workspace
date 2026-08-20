# kRewardItem_

`_GLOBAL__I__ZN14CEventStayTime12kRewardItem_E`

`global constructors keyed to CEventStayTime::kRewardItem_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CEventStayTime` | `0x0816c118` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c118  _GLOBAL__I__ZN14CEventStayTime12kRewardItem_E
#           global constructors keyed to CEventStayTime::kRewardItem_
# range [0x0816c118, 0x0816c1b3]
0816c118 +0x00:  push   %ebp
0816c119 +0x01:  mov    %esp,%ebp
0816c11b +0x03:  sub    $0x18,%esp
0816c11e +0x06:  movl   $0xffff,0x4(%esp)
0816c126 +0x0e:  movl   $0x1,(%esp)
0816c12d +0x15:  call   0816c0d8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0816c132 +0x1a:  leave
0816c133 +0x1b:  ret
0816c134 +0x1c:  push   %ebp
0816c135 +0x1d:  mov    %esp,%ebp
0816c137 +0x1f:  sub    $0x18,%esp
0816c13a +0x22:  mov    0x8(%ebp),%eax
0816c13d +0x25:  mov    (%eax),%eax
0816c13f +0x27:  mov    %eax,(%esp)
0816c142 +0x2a:  call   0816c14a <+0x32>
0816c147 +0x2f:  leave
0816c148 +0x30:  ret
0816c149 +0x31:  nop
0816c14a +0x32:  push   %ebp
0816c14b +0x33:  mov    %esp,%ebp
0816c14d +0x35:  sub    $0x28,%esp
0816c150 +0x38:  jmp    0816c16e <+0x56>
0816c152 +0x3a:  mov    0x8(%ebp),%eax
0816c155 +0x3d:  mov    %eax,(%esp)
0816c158 +0x40:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0816c15d +0x45:  add    %eax,%eax
0816c15f +0x47:  mov    %eax,0x4(%esp)
0816c163 +0x4b:  mov    0x8(%ebp),%eax
0816c166 +0x4e:  mov    %eax,(%esp)
0816c169 +0x51:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0816c16e +0x56:  movl   $0x4,0x4(%esp)
0816c176 +0x5e:  mov    0x8(%ebp),%eax
0816c179 +0x61:  mov    %eax,(%esp)
0816c17c +0x64:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0816c181 +0x69:  xor    $0x1,%eax
0816c184 +0x6c:  test   %al,%al
0816c186 +0x6e:  jne    0816c152 <+0x3a>
0816c188 +0x70:  mov    0x8(%ebp),%eax
0816c18b +0x73:  mov    0x8(%eax),%eax
0816c18e +0x76:  mov    %eax,%edx
0816c190 +0x78:  mov    0x8(%ebp),%eax
0816c193 +0x7b:  mov    0xc(%eax),%eax
0816c196 +0x7e:  lea    (%edx,%eax,1),%eax
0816c199 +0x81:  mov    %eax,-0xc(%ebp)
0816c19c +0x84:  movl   $0x4,0x4(%esp)
0816c1a4 +0x8c:  mov    0x8(%ebp),%eax
0816c1a7 +0x8f:  mov    %eax,(%esp)
0816c1aa +0x92:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0816c1af +0x97:  mov    -0xc(%ebp),%eax
0816c1b2 +0x9a:  leave
0816c1b3 +0x9b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x816c118

/* CEventStayTime::kRewardItem_ */

void CEventStayTime::_GLOBAL__I_kRewardItem_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
