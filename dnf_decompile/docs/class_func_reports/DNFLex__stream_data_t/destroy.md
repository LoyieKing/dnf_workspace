# destroy

`_ZN6DNFLex13stream_data_t7destroyEv`

`DNFLex::stream_data_t::destroy()`

| 类 | 地址 |
|---|---|
| `DNFLex::stream_data_t` | `0x08acd450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd450  _ZN6DNFLex13stream_data_t7destroyEv
#           DNFLex::stream_data_t::destroy()
# range [0x08acd450, 0x08acd48a]
08acd450 +0x00:  push   %ebp
08acd451 +0x01:  mov    %esp,%ebp
08acd453 +0x03:  push   %ebx
08acd454 +0x04:  sub    $0x14,%esp
08acd457 +0x07:  mov    0x8(%ebp),%ebx
08acd45a +0x0a:  mov    (%ebx),%eax
08acd45c +0x0c:  test   %eax,%eax
08acd45e +0x0e:  je     08acd46e <+0x1e>
08acd460 +0x10:  mov    (%eax),%edx
08acd462 +0x12:  mov    %eax,(%esp)
08acd465 +0x15:  call   *0x4(%edx)
08acd468 +0x18:  movl   $0x0,(%ebx)
08acd46e +0x1e:  mov    0x8(%ebx),%eax
08acd471 +0x21:  test   %eax,%eax
08acd473 +0x23:  je     08acd484 <+0x34>
08acd475 +0x25:  mov    %eax,(%esp)
08acd478 +0x28:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08acd47d +0x2d:  movl   $0x0,0x8(%ebx)
08acd484 +0x34:  add    $0x14,%esp
08acd487 +0x37:  pop    %ebx
08acd488 +0x38:  pop    %ebp
08acd489 +0x39:  ret
08acd48a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLex::stream_data_t::destroy @ 0x8acd450

/* DWARF original prototype: void destroy(stream_data_t * this) */

void __thiscall DNFLex::stream_data_t::destroy(stream_data_t *this)

{
  istream *piVar1;
  
  piVar1 = this->stream;
  if (piVar1 != (istream *)0x0) {
    (**(code **)(*(int *)piVar1 + 4))(piVar1);
    this->stream = (istream *)0x0;
  }
  if (this->buffer != (char *)0x0) {
    operator_delete__(this->buffer);
    this->buffer = (char *)0x0;
  }
  return;
}
```
