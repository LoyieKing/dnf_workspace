# getPrefixGrade

`_ZN18RandomOptionScript14getPrefixGradeEi`

`RandomOptionScript::getPrefixGrade(int)`

| 类 | 地址 |
|---|---|
| `RandomOptionScript` | `0x08a73a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a73a80  _ZN18RandomOptionScript14getPrefixGradeEi
#           RandomOptionScript::getPrefixGrade(int)
# range [0x08a73a80, 0x08a73b1e]
08a73a80 +0x00:  push   %ebp
08a73a81 +0x01:  mov    %esp,%ebp
08a73a83 +0x03:  sub    $0x28,%esp
08a73a86 +0x06:  movl   $0x0,-0x14(%ebp)
08a73a8d +0x0d:  mov    0x8(%ebp),%eax
08a73a90 +0x10:  add    $0x1d8,%eax
08a73a95 +0x15:  mov    %eax,-0x10(%ebp)
08a73a98 +0x18:  movl   $0x0,-0xc(%ebp)
08a73a9f +0x1f:  jmp    08a73b05 <+0x85>
08a73aa1 +0x21:  mov    -0xc(%ebp),%eax
08a73aa4 +0x24:  mov    %eax,0x4(%esp)
08a73aa8 +0x28:  mov    -0x10(%ebp),%eax
08a73aab +0x2b:  mov    %eax,(%esp)
08a73aae +0x2e:  call   08a74eea <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x138b>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x138b
08a73ab3 +0x33:  mov    (%eax),%eax
08a73ab5 +0x35:  cmp    0xc(%ebp),%eax
08a73ab8 +0x38:  jg     08a73adb <+0x5b>
08a73aba +0x3a:  mov    -0xc(%ebp),%eax
08a73abd +0x3d:  mov    %eax,0x4(%esp)
08a73ac1 +0x41:  mov    -0x10(%ebp),%eax
08a73ac4 +0x44:  mov    %eax,(%esp)
08a73ac7 +0x47:  call   08a74eea <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x138b>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x138b
08a73acc +0x4c:  mov    0x4(%eax),%eax
08a73acf +0x4f:  cmp    0xc(%ebp),%eax
08a73ad2 +0x52:  jle    08a73adb <+0x5b>
08a73ad4 +0x54:  mov    $0x1,%eax
08a73ad9 +0x59:  jmp    08a73ae0 <+0x60>
08a73adb +0x5b:  mov    $0x0,%eax
08a73ae0 +0x60:  test   %al,%al
08a73ae2 +0x62:  je     08a73b01 <+0x81>
08a73ae4 +0x64:  mov    -0xc(%ebp),%eax
08a73ae7 +0x67:  mov    %eax,0x4(%esp)
08a73aeb +0x6b:  mov    -0x10(%ebp),%eax
08a73aee +0x6e:  mov    %eax,(%esp)
08a73af1 +0x71:  call   08a74eea <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x138b>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x138b
08a73af6 +0x76:  mov    0x8(%eax),%eax
08a73af9 +0x79:  sub    $0x1,%eax
08a73afc +0x7c:  mov    %eax,-0x14(%ebp)
08a73aff +0x7f:  jmp    08a73b1a <+0x9a>
08a73b01 +0x81:  addl   $0x1,-0xc(%ebp)
08a73b05 +0x85:  mov    -0x10(%ebp),%eax
08a73b08 +0x88:  mov    %eax,(%esp)
08a73b0b +0x8b:  call   08a74ec8 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x1369>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x1369
08a73b10 +0x90:  cmp    -0xc(%ebp),%eax
08a73b13 +0x93:  seta   %al
08a73b16 +0x96:  test   %al,%al
08a73b18 +0x98:  jne    08a73aa1 <+0x21>
08a73b1a +0x9a:  mov    -0x14(%ebp),%eax
08a73b1d +0x9d:  leave
08a73b1e +0x9e:  ret
```

## 反编译 C

```c
// RandomOptionScript::getPrefixGrade @ 0x8a73a80

/* RandomOptionScript::getPrefixGrade(int) */

int __thiscall RandomOptionScript::getPrefixGrade(RandomOptionScript *this,int param_1)

{
  bool bVar1;
  vector<ChoosePrefix,std::allocator<ChoosePrefix>> *this_00;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  this_00 = (vector<ChoosePrefix,std::allocator<ChoosePrefix>> *)(this + 0x1d8);
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::size(this_00);
    if (uVar4 <= local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[]
                              (this_00,local_10);
    if ((param_1 < *piVar2) ||
       (iVar3 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[](this_00,local_10)
       , *(int *)(iVar3 + 4) <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[](this_00,local_10);
  return *(int *)(iVar3 + 8) + -1;
}
```
