# upgreadGage

`_ZN12advancealtar10CharacData11upgreadGageEv`

`advancealtar::CharacData::upgreadGage()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d176` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d176  _ZN12advancealtar10CharacData11upgreadGageEv
#           advancealtar::CharacData::upgreadGage()
# range [0x0812d176, 0x0812d245]
0812d176 +0x00:  push   %ebp
0812d177 +0x01:  mov    %esp,%ebp
0812d179 +0x03:  sub    $0x28,%esp
0812d17c +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812d181 +0x0b:  add    $0x6364,%eax
0812d186 +0x10:  mov    %eax,-0x10(%ebp)
0812d189 +0x13:  mov    0x8(%ebp),%eax
0812d18c +0x16:  mov    0x8(%eax),%eax
0812d18f +0x19:  cmp    $0x3,%eax
0812d192 +0x1c:  jne    0812d19e <+0x28>
0812d194 +0x1e:  mov    $0x2,%eax
0812d199 +0x23:  jmp    0812d243 <+0xcd>
0812d19e +0x28:  mov    0x8(%ebp),%eax
0812d1a1 +0x2b:  mov    0x8(%eax),%eax
0812d1a4 +0x2e:  mov    %eax,%edx
0812d1a6 +0x30:  mov    -0x10(%ebp),%eax
0812d1a9 +0x33:  add    $0x4,%edx
0812d1ac +0x36:  mov    0xc(%eax,%edx,4),%eax
0812d1b0 +0x3a:  mov    %eax,-0x1c(%ebp)
0812d1b3 +0x3d:  fildl  -0x1c(%ebp)
0812d1b6 +0x40:  mov    -0x10(%ebp),%eax
0812d1b9 +0x43:  flds   0x4(%eax)
0812d1bc +0x46:  fmulp  %st,%st(1)
0812d1be +0x48:  fnstcw -0x1e(%ebp)
0812d1c1 +0x4b:  movzwl -0x1e(%ebp),%eax
0812d1c5 +0x4f:  mov    $0xc,%ah
0812d1c7 +0x51:  mov    %ax,-0x20(%ebp)
0812d1cb +0x55:  fldcw  -0x20(%ebp)
0812d1ce +0x58:  fistpl -0xc(%ebp)
0812d1d1 +0x5b:  fldcw  -0x1e(%ebp)
0812d1d4 +0x5e:  mov    -0x10(%ebp),%eax
0812d1d7 +0x61:  mov    0x18(%eax),%eax
0812d1da +0x64:  mov    (%eax),%eax
0812d1dc +0x66:  mov    -0xc(%ebp),%edx
0812d1df +0x69:  imul   %edx,%eax
0812d1e2 +0x6c:  mov    %eax,-0xc(%ebp)
0812d1e5 +0x6f:  mov    0x8(%ebp),%eax
0812d1e8 +0x72:  mov    0xc(%eax),%eax
0812d1eb +0x75:  cmp    -0xc(%ebp),%eax
0812d1ee +0x78:  jge    0812d1f7 <+0x81>
0812d1f0 +0x7a:  mov    $0x3,%eax
0812d1f5 +0x7f:  jmp    0812d243 <+0xcd>
0812d1f7 +0x81:  mov    0x8(%ebp),%eax
0812d1fa +0x84:  mov    0xc(%eax),%eax
0812d1fd +0x87:  mov    %eax,%edx
0812d1ff +0x89:  sub    -0xc(%ebp),%edx
0812d202 +0x8c:  mov    0x8(%ebp),%eax
0812d205 +0x8f:  mov    %edx,0xc(%eax)
0812d208 +0x92:  mov    0x8(%ebp),%eax
0812d20b +0x95:  mov    0x8(%eax),%eax
0812d20e +0x98:  cmp    $0x1,%eax
0812d211 +0x9b:  je     0812d228 <+0xb2>
0812d213 +0x9d:  cmp    $0x2,%eax
0812d216 +0xa0:  je     0812d234 <+0xbe>
0812d218 +0xa2:  test   %eax,%eax
0812d21a +0xa4:  jne    0812d23e <+0xc8>
0812d21c +0xa6:  mov    0x8(%ebp),%eax
0812d21f +0xa9:  movl   $0x1,0x8(%eax)
0812d226 +0xb0:  jmp    0812d23e <+0xc8>
0812d228 +0xb2:  mov    0x8(%ebp),%eax
0812d22b +0xb5:  movl   $0x2,0x8(%eax)
0812d232 +0xbc:  jmp    0812d23e <+0xc8>
0812d234 +0xbe:  mov    0x8(%ebp),%eax
0812d237 +0xc1:  movl   $0x3,0x8(%eax)
0812d23e +0xc8:  mov    $0x0,%eax
0812d243 +0xcd:  leave
0812d244 +0xce:  ret
0812d245 +0xcf:  nop
```

## 反编译 C

```c
// advancealtar::CharacData::upgreadGage @ 0x812d176

/* advancealtar::CharacData::upgreadGage() */

undefined4 __thiscall advancealtar::CharacData::upgreadGage(CharacData *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  if (*(int *)(this + 8) == 3) {
    uVar2 = 2;
  }
  else {
    iVar1 = **(int **)(iVar1 + 0x637c) *
            (int)ROUND(*(float *)(iVar1 + 0x6368) *
                       (float)*(int *)(iVar1 + 0x6370 + (*(int *)(this + 8) + 4) * 4));
    if (*(int *)(this + 0xc) < iVar1) {
      uVar2 = 3;
    }
    else {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) - iVar1;
      iVar1 = *(int *)(this + 8);
      if (iVar1 == 1) {
        *(undefined4 *)(this + 8) = 2;
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(this + 8) = 3;
      }
      else if (iVar1 == 0) {
        *(undefined4 *)(this + 8) = 1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
