# clearScript

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv`

`ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088b00e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b00e0  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv
#           ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript()
# range [0x088b00e0, 0x088b0163]
088b00e0 +0x00:  push   %ebp
088b00e1 +0x01:  mov    %esp,%ebp
088b00e3 +0x03:  sub    $0x38,%esp
088b00e6 +0x06:  movl   $0x0,-0x14(%ebp)
088b00ed +0x0d:  movl   $0x0,-0x10(%ebp)
088b00f4 +0x14:  movl   $0x0,-0xc(%ebp)
088b00fb +0x1b:  jmp    088b0157 <+0x77>
088b00fd +0x1d:  mov    -0xc(%ebp),%edx
088b0100 +0x20:  mov    %edx,%eax
088b0102 +0x22:  add    %eax,%eax
088b0104 +0x24:  add    %edx,%eax
088b0106 +0x26:  shl    $0x2,%eax
088b0109 +0x29:  add    0x8(%ebp),%eax
088b010c +0x2c:  mov    %eax,(%esp)
088b010f +0x2f:  call   088b030c <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x140>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x140
088b0114 +0x34:  mov    -0x14(%ebp),%eax
088b0117 +0x37:  mov    %eax,0xc(%esp)
088b011b +0x3b:  mov    -0x10(%ebp),%eax
088b011e +0x3e:  mov    %eax,0x8(%esp)
088b0122 +0x42:  movl   $0x0,0x4(%esp)
088b012a +0x4a:  lea    -0x28(%ebp),%eax
088b012d +0x4d:  mov    %eax,(%esp)
088b0130 +0x50:  call   088b01e8 <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0x1c>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0x1c
088b0135 +0x55:  mov    -0xc(%ebp),%edx
088b0138 +0x58:  mov    %edx,%eax
088b013a +0x5a:  add    %eax,%eax
088b013c +0x5c:  add    %edx,%eax
088b013e +0x5e:  shl    $0x2,%eax
088b0141 +0x61:  add    0x8(%ebp),%eax
088b0144 +0x64:  lea    -0x28(%ebp),%edx
088b0147 +0x67:  mov    %edx,0x4(%esp)
088b014b +0x6b:  mov    %eax,(%esp)
088b014e +0x6e:  call   088b02bc <_GLOBAL__I__ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC2Ev+0xf0>  ; global constructors keyed to ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()+0xf0
088b0153 +0x73:  addl   $0x1,-0xc(%ebp)
088b0157 +0x77:  cmpl   $0x5,-0xc(%ebp)
088b015b +0x7b:  setle  %al
088b015e +0x7e:  test   %al,%al
088b0160 +0x80:  jne    088b00fd <+0x1d>
088b0162 +0x82:  leave
088b0163 +0x83:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript @ 0x88b00e0

/* ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript(AvatarFixedHiddenOption *this)

{
  STAvatarHiddenAbilityVariation local_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    clear((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
          (this + local_10 * 0xc));
    STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2c,0,local_14,local_18);
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               *)(this + local_10 * 0xc),local_2c);
  }
  return;
}
```
