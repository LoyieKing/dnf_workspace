# GetLevelUpRequirePoint

`_ZN18CharacManageScript22GetLevelUpRequirePointEj`

`CharacManageScript::GetLevelUpRequirePoint(unsigned int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e1114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e1114  _ZN18CharacManageScript22GetLevelUpRequirePointEj
#           CharacManageScript::GetLevelUpRequirePoint(unsigned int)
# range [0x088e1114, 0x088e1165]
088e1114 +0x00:  push   %ebp
088e1115 +0x01:  mov    %esp,%ebp
088e1117 +0x03:  sub    $0x18,%esp
088e111a +0x06:  cmpl   $0x0,0xc(%ebp)
088e111e +0x0a:  je     088e1133 <+0x1f>
088e1120 +0x0c:  mov    0x8(%ebp),%eax
088e1123 +0x0f:  add    $0xc,%eax
088e1126 +0x12:  mov    %eax,(%esp)
088e1129 +0x15:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
088e112e +0x1a:  cmp    0xc(%ebp),%eax
088e1131 +0x1d:  jae    088e113a <+0x26>
088e1133 +0x1f:  mov    $0x1,%eax
088e1138 +0x24:  jmp    088e113f <+0x2b>
088e113a +0x26:  mov    $0x0,%eax
088e113f +0x2b:  test   %al,%al
088e1141 +0x2d:  je     088e114a <+0x36>
088e1143 +0x2f:  mov    $0x0,%eax
088e1148 +0x34:  jmp    088e1164 <+0x50>
088e114a +0x36:  mov    0xc(%ebp),%eax
088e114d +0x39:  lea    -0x1(%eax),%edx
088e1150 +0x3c:  mov    0x8(%ebp),%eax
088e1153 +0x3f:  add    $0xc,%eax
088e1156 +0x42:  mov    %edx,0x4(%esp)
088e115a +0x46:  mov    %eax,(%esp)
088e115d +0x49:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
088e1162 +0x4e:  mov    (%eax),%eax
088e1164 +0x50:  leave
088e1165 +0x51:  ret
```

## 反编译 C

```c
// CharacManageScript::GetLevelUpRequirePoint @ 0x88e1114

/* CharacManageScript::GetLevelUpRequirePoint(unsigned int) */

undefined4 __thiscall
CharacManageScript::GetLevelUpRequirePoint(CharacManageScript *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0xc));
    if (param_1 <= uVar2) {
      bVar1 = false;
      goto LAB_088e113f;
    }
  }
  bVar1 = true;
LAB_088e113f:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 0xc),param_1 - 1);
    uVar3 = *puVar4;
  }
  return uVar3;
}
```
