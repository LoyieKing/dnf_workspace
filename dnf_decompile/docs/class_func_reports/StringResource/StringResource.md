# StringResource

`_ZN14StringResourceC1Ev`

`StringResource::StringResource()`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad47a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad47a8  _ZN14StringResourceC1Ev
#           StringResource::StringResource()
# range [0x08ad47a8, 0x08ad47bb]
08ad47a8 +0x00:  push   %ebp
08ad47a9 +0x01:  mov    %esp,%ebp
08ad47ab +0x03:  sub    $0x18,%esp
08ad47ae +0x06:  mov    0x8(%ebp),%eax
08ad47b1 +0x09:  mov    %eax,(%esp)
08ad47b4 +0x0c:  call   08ad558c <_ZN3app6getStrEi+0xc0>  ; app::getStr(int)+0xc0
08ad47b9 +0x11:  leave
08ad47ba +0x12:  ret
08ad47bb +0x13:  nop
```

## 反编译 C

```c
// StringResource::StringResource @ 0x8ad47a8

/* StringResource::StringResource() */

void __thiscall StringResource::StringResource(StringResource *this)

{
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::map
            ((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> *)
             this);
  return;
}
```
