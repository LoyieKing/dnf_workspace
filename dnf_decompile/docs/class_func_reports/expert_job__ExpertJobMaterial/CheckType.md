# CheckType

`_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi`

`expert_job::ExpertJobMaterial::CheckType(bool, int)`

| 类 | 地址 |
|---|---|
| `expert_job::ExpertJobMaterial` | `0x0849bfd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849bfd0  _ZN10expert_job17ExpertJobMaterial9CheckTypeEbi
#           expert_job::ExpertJobMaterial::CheckType(bool, int)
# range [0x0849bfd0, 0x0849c06d]
0849bfd0 +0x00:  push   %ebp
0849bfd1 +0x01:  mov    %esp,%ebp
0849bfd3 +0x03:  sub    $0x28,%esp
0849bfd6 +0x06:  mov    0xc(%ebp),%eax
0849bfd9 +0x09:  mov    %al,-0xc(%ebp)
0849bfdc +0x0c:  mov    0x8(%ebp),%eax
0849bfdf +0x0f:  mov    %eax,(%esp)
0849bfe2 +0x12:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849bfe7 +0x17:  test   %al,%al
0849bfe9 +0x19:  je     0849bff2 <+0x22>
0849bfeb +0x1b:  mov    $0x11,%eax
0849bff0 +0x20:  jmp    0849c06b <+0x9b>
0849bff2 +0x22:  mov    0x8(%ebp),%eax
0849bff5 +0x25:  mov    0x4(%eax),%eax
0849bff8 +0x28:  mov    %eax,(%esp)
0849bffb +0x2b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849c000 +0x30:  cmp    -0xc(%ebp),%al
0849c003 +0x33:  setne  %al
0849c006 +0x36:  test   %al,%al
0849c008 +0x38:  je     0849c011 <+0x41>
0849c00a +0x3a:  mov    $0x17,%eax
0849c00f +0x3f:  jmp    0849c06b <+0x9b>
0849c011 +0x41:  cmpb   $0x0,-0xc(%ebp)
0849c015 +0x45:  je     0849c040 <+0x70>
0849c017 +0x47:  mov    0x8(%ebp),%eax
0849c01a +0x4a:  mov    0x4(%eax),%eax
0849c01d +0x4d:  mov    (%eax),%eax
0849c01f +0x4f:  add    $0xc,%eax
0849c022 +0x52:  mov    (%eax),%edx
0849c024 +0x54:  mov    0x8(%ebp),%eax
0849c027 +0x57:  mov    0x4(%eax),%eax
0849c02a +0x5a:  mov    %eax,(%esp)
0849c02d +0x5d:  call   *%edx
0849c02f +0x5f:  cmp    0x10(%ebp),%eax
0849c032 +0x62:  setne  %al
0849c035 +0x65:  test   %al,%al
0849c037 +0x67:  je     0849c066 <+0x96>
0849c039 +0x69:  mov    $0x17,%eax
0849c03e +0x6e:  jmp    0849c06b <+0x9b>
0849c040 +0x70:  mov    0x8(%ebp),%eax
0849c043 +0x73:  mov    0x4(%eax),%eax
0849c046 +0x76:  mov    (%eax),%eax
0849c048 +0x78:  add    $0x1c,%eax
0849c04b +0x7b:  mov    (%eax),%edx
0849c04d +0x7d:  mov    0x8(%ebp),%eax
0849c050 +0x80:  mov    0x4(%eax),%eax
0849c053 +0x83:  mov    %eax,(%esp)
0849c056 +0x86:  call   *%edx
0849c058 +0x88:  xor    $0x1,%eax
0849c05b +0x8b:  test   %al,%al
0849c05d +0x8d:  je     0849c066 <+0x96>
0849c05f +0x8f:  mov    $0x17,%eax
0849c064 +0x94:  jmp    0849c06b <+0x9b>
0849c066 +0x96:  mov    $0x0,%eax
0849c06b +0x9b:  leave
0849c06c +0x9c:  ret
0849c06d +0x9d:  nop
```

## 反编译 C

```c
// expert_job::ExpertJobMaterial::CheckType @ 0x849bfd0

/* expert_job::ExpertJobMaterial::CheckType(bool, int) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::CheckType(ExpertJobMaterial *this,bool param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    cVar1 = CItem::is_stackable(*(CItem **)(this + 4));
    if ((bool)cVar1 == param_1) {
      if (param_1) {
        iVar3 = (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 4));
        if (iVar3 != param_2) {
          return 0x17;
        }
      }
      else {
        cVar1 = (**(code **)(**(int **)(this + 4) + 0x1c))(*(undefined4 *)(this + 4));
        if (cVar1 != '\x01') {
          return 0x17;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}
```
