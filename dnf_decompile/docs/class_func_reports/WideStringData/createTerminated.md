# createTerminated

`_ZN14WideStringData16createTerminatedEi`

`WideStringData::createTerminated(int)`

| 类 | 地址 |
|---|---|
| `WideStringData` | `0x08ad99cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad99cc  _ZN14WideStringData16createTerminatedEi
#           WideStringData::createTerminated(int)
# range [0x08ad99cc, 0x08ad99fd]
08ad99cc +0x00:  push   %ebp
08ad99cd +0x01:  mov    %esp,%ebp
08ad99cf +0x03:  sub    $0x28,%esp
08ad99d2 +0x06:  mov    0x8(%ebp),%eax
08ad99d5 +0x09:  mov    %eax,(%esp)
08ad99d8 +0x0c:  call   08ad999a <_ZN14WideStringData6createEi>  ; WideStringData::create(int)
08ad99dd +0x11:  mov    %eax,-0xc(%ebp)
08ad99e0 +0x14:  mov    -0xc(%ebp),%eax
08ad99e3 +0x17:  mov    %eax,(%esp)
08ad99e6 +0x1a:  call   08ad998e <_ZN14WideStringData9getBufferEv>  ; WideStringData::getBuffer()
08ad99eb +0x1f:  mov    0x8(%ebp),%edx
08ad99ee +0x22:  shl    $0x2,%edx
08ad99f1 +0x25:  add    %edx,%eax
08ad99f3 +0x27:  movl   $0x0,(%eax)
08ad99f9 +0x2d:  mov    -0xc(%ebp),%eax
08ad99fc +0x30:  leave
08ad99fd +0x31:  ret
```

## 反编译 C

```c
// WideStringData::createTerminated @ 0x8ad99cc

WideStringData * WideStringData::createTerminated(int32 length)

{
  WideStringData *this;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  this = create(length);
  pwVar1 = getBuffer(this);
  pwVar1[length] = 0;
  return this;
}
```
