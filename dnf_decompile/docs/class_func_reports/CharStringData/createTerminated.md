# createTerminated

`_ZN14CharStringData16createTerminatedEi`

`CharStringData::createTerminated(int)`

| 类 | 地址 |
|---|---|
| `CharStringData` | `0x08ad697e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad697e  _ZN14CharStringData16createTerminatedEi
#           CharStringData::createTerminated(int)
# range [0x08ad697e, 0x08ad69a9]
08ad697e +0x00:  push   %ebp
08ad697f +0x01:  mov    %esp,%ebp
08ad6981 +0x03:  sub    $0x28,%esp
08ad6984 +0x06:  mov    0x8(%ebp),%eax
08ad6987 +0x09:  mov    %eax,(%esp)
08ad698a +0x0c:  call   08ad694e <_ZN14CharStringData6createEi>  ; CharStringData::create(int)
08ad698f +0x11:  mov    %eax,-0xc(%ebp)
08ad6992 +0x14:  mov    -0xc(%ebp),%eax
08ad6995 +0x17:  mov    %eax,(%esp)
08ad6998 +0x1a:  call   08ad6942 <_ZN14CharStringData9getBufferEv>  ; CharStringData::getBuffer()
08ad699d +0x1f:  mov    0x8(%ebp),%edx
08ad69a0 +0x22:  add    %edx,%eax
08ad69a2 +0x24:  movb   $0x0,(%eax)
08ad69a5 +0x27:  mov    -0xc(%ebp),%eax
08ad69a8 +0x2a:  leave
08ad69a9 +0x2b:  ret
```

## 反编译 C

```c
// CharStringData::createTerminated @ 0x8ad697e

CharStringData * CharStringData::createTerminated(int32 length)

{
  CharStringData *this;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  this = create(length);
  pcVar1 = getBuffer(this);
  pcVar1[length] = '\0';
  return this;
}
```
