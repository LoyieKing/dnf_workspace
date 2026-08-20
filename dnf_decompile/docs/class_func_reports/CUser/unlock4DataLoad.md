# unlock4DataLoad

`_ZN5CUser15unlock4DataLoadEv`

`CUser::unlock4DataLoad()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a9da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a9da  _ZN5CUser15unlock4DataLoadEv
#           CUser::unlock4DataLoad()
# range [0x0864a9da, 0x0864aa09]
0864a9da +0x00:  push   %ebp
0864a9db +0x01:  mov    %esp,%ebp
0864a9dd +0x03:  sub    $0x18,%esp
0864a9e0 +0x06:  mov    0x8(%ebp),%eax
0864a9e3 +0x09:  mov    %eax,(%esp)
0864a9e6 +0x0c:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
0864a9eb +0x11:  xor    $0x1,%eax
0864a9ee +0x14:  test   %al,%al
0864a9f0 +0x16:  je     0864a9f9 <+0x1f>
0864a9f2 +0x18:  mov    $0x0,%eax
0864a9f7 +0x1d:  jmp    0864aa08 <+0x2e>
0864a9f9 +0x1f:  mov    0x8(%ebp),%eax
0864a9fc +0x22:  movb   $0x0,0x8d0f0(%eax)
0864aa03 +0x29:  mov    $0x1,%eax
0864aa08 +0x2e:  leave
0864aa09 +0x2f:  ret
```

## 反编译 C

```c
// CUser::unlock4DataLoad @ 0x864a9da

/* CUser::unlock4DataLoad() */

bool __thiscall CUser::unlock4DataLoad(CUser *this)

{
  char cVar1;
  
  cVar1 = isLocked4DataLoad(this);
  if (cVar1 == '\x01') {
    this[0x8d0f0] = (CUser)0x0;
  }
  return cVar1 == '\x01';
}
```
