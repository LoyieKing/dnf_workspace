# create

`_ZN14WideStringData6createEi`

`WideStringData::create(int)`

| 类 | 地址 |
|---|---|
| `WideStringData` | `0x08ad999a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad999a  _ZN14WideStringData6createEi
#           WideStringData::create(int)
# range [0x08ad999a, 0x08ad99cb]
08ad999a +0x00:  push   %ebp
08ad999b +0x01:  mov    %esp,%ebp
08ad999d +0x03:  sub    $0x28,%esp
08ad99a0 +0x06:  mov    0x8(%ebp),%eax
08ad99a3 +0x09:  add    $0x1,%eax
08ad99a6 +0x0c:  shl    $0x2,%eax
08ad99a9 +0x0f:  mov    %eax,-0x10(%ebp)
08ad99ac +0x12:  mov    -0x10(%ebp),%eax
08ad99af +0x15:  mov    %eax,(%esp)
08ad99b2 +0x18:  call   08ad68f8 <_ZN10StringData6createEi>  ; StringData::create(int)
08ad99b7 +0x1d:  mov    %eax,-0xc(%ebp)
08ad99ba +0x20:  cmpl   $0x0,-0xc(%ebp)
08ad99be +0x24:  jne    08ad99c7 <+0x2d>
08ad99c0 +0x26:  mov    $0x0,%eax
08ad99c5 +0x2b:  jmp    08ad99ca <+0x30>
08ad99c7 +0x2d:  mov    -0xc(%ebp),%eax
08ad99ca +0x30:  leave
08ad99cb +0x31:  ret
```

## 反编译 C

```c
// WideStringData::create @ 0x8ad999a

WideStringData * WideStringData::create(int32 length)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: int32 size@[???]
                       Unresolved local var: WideStringData * data@[???] */
  pSVar1 = StringData::create((length + 1) * 4);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  return (WideStringData *)pSVar1;
}
```
