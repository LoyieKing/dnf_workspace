# SetExpRate

`_ZN12CDataManager10SetExpRateEf`

`CDataManager::SetExpRate(float)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360716  _ZN12CDataManager10SetExpRateEf
#           CDataManager::SetExpRate(float)
# range [0x08360716, 0x083607d7]
08360716 +0x00:  push   %ebp
08360717 +0x01:  mov    %esp,%ebp
08360719 +0x03:  sub    $0x38,%esp
0836071c +0x06:  mov    0x8(%ebp),%eax
0836071f +0x09:  flds   0xb3ec(%eax)
08360725 +0x0f:  flds   0xc(%ebp)
08360728 +0x12:  fxch   %st(1)
0836072a +0x14:  fucompp
0836072c +0x16:  fnstsw %ax
0836072e +0x18:  sahf
0836072f +0x19:  jp     08360737 <+0x21>
08360731 +0x1b:  je     083607d4 <+0xbe>
08360737 +0x21:  mov    0x8(%ebp),%eax
0836073a +0x24:  lea    0xb0c8(%eax),%edx
08360740 +0x2a:  mov    0x8(%ebp),%eax
08360743 +0x2d:  add    $0xada4,%eax
08360748 +0x32:  movl   $0x324,0x8(%esp)
08360750 +0x3a:  mov    %edx,0x4(%esp)
08360754 +0x3e:  mov    %eax,(%esp)
08360757 +0x41:  call   0807d8a0 <_init+0x198>
0836075c +0x46:  mov    0x8(%ebp),%eax
0836075f +0x49:  mov    0xc(%ebp),%edx
08360762 +0x4c:  mov    %edx,0xb3ec(%eax)
08360768 +0x52:  movl   $0x0,-0xc(%ebp)
0836076f +0x59:  jmp    083607c4 <+0xae>
08360771 +0x5b:  mov    -0xc(%ebp),%ecx
08360774 +0x5e:  mov    -0xc(%ebp),%edx
08360777 +0x61:  mov    0x8(%ebp),%eax
0836077a +0x64:  add    $0x2b68,%edx
08360780 +0x6a:  mov    0x4(%eax,%edx,4),%eax
08360784 +0x6e:  mov    $0x0,%edx
08360789 +0x73:  mov    %eax,-0x20(%ebp)
0836078c +0x76:  mov    %edx,-0x1c(%ebp)
0836078f +0x79:  fildll -0x20(%ebp)
08360792 +0x7c:  fmuls  0xc(%ebp)
08360795 +0x7f:  fnstcw -0x22(%ebp)
08360798 +0x82:  movzwl -0x22(%ebp),%eax
0836079c +0x86:  mov    $0xc,%ah
0836079e +0x88:  mov    %ax,-0x24(%ebp)
083607a2 +0x8c:  fldcw  -0x24(%ebp)
083607a5 +0x8f:  fistpll -0x20(%ebp)
083607a8 +0x92:  fldcw  -0x22(%ebp)
083607ab +0x95:  mov    -0x20(%ebp),%eax
083607ae +0x98:  mov    -0x1c(%ebp),%edx
083607b1 +0x9b:  mov    %eax,%edx
083607b3 +0x9d:  mov    0x8(%ebp),%eax
083607b6 +0xa0:  add    $0x2b68,%ecx
083607bc +0xa6:  mov    %edx,0x4(%eax,%ecx,4)
083607c0 +0xaa:  addl   $0x1,-0xc(%ebp)
083607c4 +0xae:  cmpl   $0xc8,-0xc(%ebp)
083607cb +0xb5:  setle  %al
083607ce +0xb8:  test   %al,%al
083607d0 +0xba:  jne    08360771 <+0x5b>
083607d2 +0xbc:  jmp    083607d5 <+0xbf>
083607d4 +0xbe:  nop
083607d5 +0xbf:  leave
083607d6 +0xc0:  ret
083607d7 +0xc1:  nop
```

## 反编译 C

```c
// CDataManager::SetExpRate @ 0x8360716

/* CDataManager::SetExpRate(float) */

void __thiscall CDataManager::SetExpRate(CDataManager *this,float param_1)

{
  ulonglong local_24;
  int local_10;
  
  if (*(float *)(this + 0xb3ec) != param_1) {
    memcpy(this + 0xada4,this + 0xb0c8,0x324);
    *(float *)(this + 0xb3ec) = param_1;
    for (local_10 = 0; local_10 < 0xc9; local_10 = local_10 + 1) {
      local_24 = (ulonglong)*(uint *)(this + (local_10 + 0x2b68) * 4 + 4);
      local_24._0_4_ = (undefined4)(longlong)ROUND((float)local_24 * param_1);
      *(undefined4 *)(this + (local_10 + 0x2b68) * 4 + 4) = (undefined4)local_24;
    }
  }
  return;
}
```
