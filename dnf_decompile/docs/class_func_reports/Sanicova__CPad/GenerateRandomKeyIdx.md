# GenerateRandomKeyIdx

`_ZN8Sanicova4CPad20GenerateRandomKeyIdxEv`

`Sanicova::CPad::GenerateRandomKeyIdx()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599918  _ZN8Sanicova4CPad20GenerateRandomKeyIdxEv
#           Sanicova::CPad::GenerateRandomKeyIdx()
# range [0x08599918, 0x08599935]
08599918 +0x00:  push   %ebp
08599919 +0x01:  mov    %esp,%ebp
0859991b +0x03:  sub    $0x18,%esp
0859991e +0x06:  movl   $0x1388,(%esp)
08599925 +0x0d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0859992a +0x12:  mov    %eax,%edx
0859992c +0x14:  mov    0x8(%ebp),%eax
0859992f +0x17:  mov    %dx,0x2e(%eax)
08599933 +0x1b:  leave
08599934 +0x1c:  ret
08599935 +0x1d:  nop
```

## 反编译 C

```c
// Sanicova::CPad::GenerateRandomKeyIdx @ 0x8599918

/* Sanicova::CPad::GenerateRandomKeyIdx() */

void __thiscall Sanicova::CPad::GenerateRandomKeyIdx(CPad *this)

{
  undefined2 uVar1;
  
  uVar1 = get_rand_int(5000);
  *(undefined2 *)(this + 0x2e) = uVar1;
  return;
}
```
