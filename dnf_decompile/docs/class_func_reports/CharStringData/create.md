# create

`_ZN14CharStringData6createEi`

`CharStringData::create(int)`

| 类 | 地址 |
|---|---|
| `CharStringData` | `0x08ad694e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad694e  _ZN14CharStringData6createEi
#           CharStringData::create(int)
# range [0x08ad694e, 0x08ad697d]
08ad694e +0x00:  push   %ebp
08ad694f +0x01:  mov    %esp,%ebp
08ad6951 +0x03:  sub    $0x28,%esp
08ad6954 +0x06:  mov    0x8(%ebp),%eax
08ad6957 +0x09:  add    $0x1,%eax
08ad695a +0x0c:  mov    %eax,-0x10(%ebp)
08ad695d +0x0f:  mov    -0x10(%ebp),%eax
08ad6960 +0x12:  mov    %eax,(%esp)
08ad6963 +0x15:  call   08ad68f8 <_ZN10StringData6createEi>  ; StringData::create(int)
08ad6968 +0x1a:  mov    %eax,-0xc(%ebp)
08ad696b +0x1d:  cmpl   $0x0,-0xc(%ebp)
08ad696f +0x21:  jne    08ad6978 <+0x2a>
08ad6971 +0x23:  mov    $0x0,%eax
08ad6976 +0x28:  jmp    08ad697b <+0x2d>
08ad6978 +0x2a:  mov    -0xc(%ebp),%eax
08ad697b +0x2d:  leave
08ad697c +0x2e:  ret
08ad697d +0x2f:  nop
```

## 反编译 C

```c
// CharStringData::create @ 0x8ad694e

CharStringData * CharStringData::create(int32 length)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: int32 size@[???]
                       Unresolved local var: CharStringData * data@[???] */
  pSVar1 = StringData::create(length + 1);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  return (CharStringData *)pSVar1;
}
```
