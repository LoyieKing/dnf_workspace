# GenerateRandomShakeData

`_ZN8Sanicova4CPad23GenerateRandomShakeDataEv`

`Sanicova::CPad::GenerateRandomShakeData()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599946` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599946  _ZN8Sanicova4CPad23GenerateRandomShakeDataEv
#           Sanicova::CPad::GenerateRandomShakeData()
# range [0x08599946, 0x0859998b]
08599946 +0x00:  push   %ebp
08599947 +0x01:  mov    %esp,%ebp
08599949 +0x03:  push   %ebx
0859994a +0x04:  sub    $0x24,%esp
0859994d +0x07:  movl   $0x0,-0xc(%ebp)
08599954 +0x0e:  movl   $0x0,-0xc(%ebp)
0859995b +0x15:  jmp    0859997a <+0x34>
0859995d +0x17:  mov    -0xc(%ebp),%ebx
08599960 +0x1a:  movl   $0xc8,(%esp)
08599967 +0x21:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0859996c +0x26:  lea    0x14(%eax),%edx
0859996f +0x29:  mov    0x8(%ebp),%eax
08599972 +0x2c:  mov    %dl,0x34(%eax,%ebx,1)
08599976 +0x30:  addl   $0x1,-0xc(%ebp)
0859997a +0x34:  cmpl   $0x3,-0xc(%ebp)
0859997e +0x38:  setle  %al
08599981 +0x3b:  test   %al,%al
08599983 +0x3d:  jne    0859995d <+0x17>
08599985 +0x3f:  nop
08599986 +0x40:  add    $0x24,%esp
08599989 +0x43:  pop    %ebx
0859998a +0x44:  pop    %ebp
0859998b +0x45:  ret
```

## 反编译 C

```c
// Sanicova::CPad::GenerateRandomShakeData @ 0x8599946

/* Sanicova::CPad::GenerateRandomShakeData() */

void __thiscall Sanicova::CPad::GenerateRandomShakeData(CPad *this)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = get_rand_int(200);
    this[local_10 + 0x34] = (CPad)(cVar1 + '\x14');
  }
  return;
}
```
