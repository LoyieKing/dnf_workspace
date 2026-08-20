# Alert

`_ZN5yaSSL5AlertC1ENS_10AlertLevelENS_16AlertDescriptionE`

`yaSSL::Alert::Alert(yaSSL::AlertLevel, yaSSL::AlertDescription)`

| 类 | 地址 |
|---|---|
| `yaSSL::Alert` | `0x08746b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b90  _ZN5yaSSL5AlertC1ENS_10AlertLevelENS_16AlertDescriptionE
#           yaSSL::Alert::Alert(yaSSL::AlertLevel, yaSSL::AlertDescription)
# range [0x08746b90, 0x08746bba]
08746b90 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746b95 +0x05:  add    $0xc26003,%ecx
08746b9b +0x0b:  push   %ebp
08746b9c +0x0c:  mov    %esp,%ebp
08746b9e +0x0e:  mov    0x8(%ebp),%eax
08746ba1 +0x11:  mov    -0x2e0(%ecx),%edx
08746ba7 +0x17:  add    $0x8,%edx
08746baa +0x1a:  mov    %edx,(%eax)
08746bac +0x1c:  mov    0xc(%ebp),%edx
08746baf +0x1f:  mov    %edx,0x4(%eax)
08746bb2 +0x22:  mov    0x10(%ebp),%edx
08746bb5 +0x25:  mov    %edx,0x8(%eax)
08746bb8 +0x28:  pop    %ebp
08746bb9 +0x29:  ret
08746bba +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Alert::Alert @ 0x8746b90

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Alert::Alert(yaSSL::AlertLevel, yaSSL::AlertDescription) */

void __thiscall yaSSL::Alert::Alert(Alert *this,undefined4 param_2,undefined4 param_3)

{
  *(undefined **)this = PTR_vtable_0936c8b8 + 8;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  return;
}
```
