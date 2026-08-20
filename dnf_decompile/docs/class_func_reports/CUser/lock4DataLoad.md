# lock4DataLoad

`_ZN5CUser13lock4DataLoadEv`

`CUser::lock4DataLoad()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a9ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a9ac  _ZN5CUser13lock4DataLoadEv
#           CUser::lock4DataLoad()
# range [0x0864a9ac, 0x0864a9d9]
0864a9ac +0x00:  push   %ebp
0864a9ad +0x01:  mov    %esp,%ebp
0864a9af +0x03:  sub    $0x18,%esp
0864a9b2 +0x06:  mov    0x8(%ebp),%eax
0864a9b5 +0x09:  mov    %eax,(%esp)
0864a9b8 +0x0c:  call   0864aa0a <_ZN5CUser17isLocked4DataLoadEv>  ; CUser::isLocked4DataLoad()
0864a9bd +0x11:  test   %al,%al
0864a9bf +0x13:  je     0864a9c8 <+0x1c>
0864a9c1 +0x15:  mov    $0x0,%eax
0864a9c6 +0x1a:  jmp    0864a9d7 <+0x2b>
0864a9c8 +0x1c:  mov    0x8(%ebp),%eax
0864a9cb +0x1f:  movb   $0x1,0x8d0f0(%eax)
0864a9d2 +0x26:  mov    $0x1,%eax
0864a9d7 +0x2b:  leave
0864a9d8 +0x2c:  ret
0864a9d9 +0x2d:  nop
```

## 反编译 C

```c
// CUser::lock4DataLoad @ 0x864a9ac

/* CUser::lock4DataLoad() */

bool __thiscall CUser::lock4DataLoad(CUser *this)

{
  char cVar1;
  
  cVar1 = isLocked4DataLoad(this);
  if (cVar1 == '\0') {
    this[0x8d0f0] = (CUser)0x1;
  }
  return cVar1 == '\0';
}
```
