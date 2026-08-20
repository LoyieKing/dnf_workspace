# dispatch

`_ZN21DB_ForceSaveSimpleSSO8dispatchEiiP6Stream`

`DB_ForceSaveSimpleSSO::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ForceSaveSimpleSSO` | `0x08428154` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08428154  _ZN21DB_ForceSaveSimpleSSO8dispatchEiiP6Stream
#           DB_ForceSaveSimpleSSO::dispatch(int, int, Stream*)
# range [0x08428154, 0x084281ad]
08428154 +0x00:  push   %ebp
08428155 +0x01:  mov    %esp,%ebp
08428157 +0x03:  sub    $0x28,%esp
0842815a +0x06:  lea    -0xc(%ebp),%eax
0842815d +0x09:  mov    %eax,0x4(%esp)
08428161 +0x0d:  mov    0x14(%ebp),%eax
08428164 +0x10:  mov    %eax,(%esp)
08428167 +0x13:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0842816c +0x18:  lea    -0x10(%ebp),%eax
0842816f +0x1b:  mov    %eax,0x4(%esp)
08428173 +0x1f:  mov    0x14(%ebp),%eax
08428176 +0x22:  mov    %eax,(%esp)
08428179 +0x25:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842817e +0x2a:  mov    -0x10(%ebp),%ecx
08428181 +0x2d:  mov    -0xc(%ebp),%edx
08428184 +0x30:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
08428189 +0x35:  mov    %ecx,0x8(%esp)
0842818d +0x39:  mov    %edx,0x4(%esp)
08428191 +0x3d:  mov    %eax,(%esp)
08428194 +0x40:  call   08603226 <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji>  ; WongWork::CSimpleSSO::updateHumanCertify(unsigned int, int)
08428199 +0x45:  xor    $0x1,%eax
0842819c +0x48:  test   %al,%al
0842819e +0x4a:  je     084281a7 <+0x53>
084281a0 +0x4c:  mov    $0x0,%eax
084281a5 +0x51:  jmp    084281ac <+0x58>
084281a7 +0x53:  mov    $0x1,%eax
084281ac +0x58:  leave
084281ad +0x59:  ret
```

## 反编译 C

```c
// DB_ForceSaveSimpleSSO::dispatch @ 0x8428154

/* DB_ForceSaveSimpleSSO::dispatch(int, int, Stream*) */

bool DB_ForceSaveSimpleSSO::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_14;
  uint local_10 [3];
  
  Stream::operator>>(in_stack_00000010,local_10);
  Stream::operator>>(in_stack_00000010,&local_14);
  cVar1 = WongWork::CSimpleSSO::updateHumanCertify(GlobalData::s_psimpleSSO,local_10[0],local_14);
  return cVar1 == '\x01';
}
```
