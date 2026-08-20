# _PutSkillInfoToCharac

`_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot`

`Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac(char, _Mastered_skill const*, SkillSlot*)`

| 类 | 地址 |
|---|---|
| `Inter_RequestCharacSkillInfo` | `0x084e7820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7820  _ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot
#           Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac(char, _Mastered_skill const*, SkillSlot*)
# range [0x084e7820, 0x084e7883]
084e7820 +0x00:  push   %ebp
084e7821 +0x01:  mov    %esp,%ebp
084e7823 +0x03:  sub    $0x38,%esp
084e7826 +0x06:  mov    0xc(%ebp),%eax
084e7829 +0x09:  mov    %al,-0x1c(%ebp)
084e782c +0x0c:  movl   $0x198,-0xc(%ebp)
084e7833 +0x13:  cmpb   $0xff,-0x1c(%ebp)
084e7837 +0x17:  je     084e783f <+0x1f>
084e7839 +0x19:  cmpb   $0x0,-0x1c(%ebp)
084e783d +0x1d:  jne    084e785d <+0x3d>
084e783f +0x1f:  mov    0x14(%ebp),%eax
084e7842 +0x22:  lea    0x46(%eax),%edx
084e7845 +0x25:  mov    -0xc(%ebp),%eax
084e7848 +0x28:  mov    %eax,0x8(%esp)
084e784c +0x2c:  mov    0x10(%ebp),%eax
084e784f +0x2f:  mov    %eax,0x4(%esp)
084e7853 +0x33:  mov    %edx,(%esp)
084e7856 +0x36:  call   0807d8a0 <_init+0x198>
084e785b +0x3b:  jmp    084e7882 <+0x62>
084e785d +0x3d:  cmpb   $0x1,-0x1c(%ebp)
084e7861 +0x41:  jne    084e7882 <+0x62>
084e7863 +0x43:  mov    0x14(%ebp),%eax
084e7866 +0x46:  lea    0x1de(%eax),%edx
084e786c +0x4c:  mov    -0xc(%ebp),%eax
084e786f +0x4f:  mov    %eax,0x8(%esp)
084e7873 +0x53:  mov    0x10(%ebp),%eax
084e7876 +0x56:  mov    %eax,0x4(%esp)
084e787a +0x5a:  mov    %edx,(%esp)
084e787d +0x5d:  call   0807d8a0 <_init+0x198>
084e7882 +0x62:  leave
084e7883 +0x63:  ret
```

## 反编译 C

```c
// Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac @ 0x84e7820

/* Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac(char, _Mastered_skill const*, SkillSlot*) */

void __thiscall
Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac
          (Inter_RequestCharacSkillInfo *this,char param_1,_Mastered_skill *param_2,
          SkillSlot *param_3)

{
  if ((param_1 == -1) || (param_1 == '\0')) {
    memcpy(param_3 + 0x46,param_2,0x198);
  }
  else if (param_1 == '\x01') {
    memcpy(param_3 + 0x1de,param_2,0x198);
  }
  return;
}
```
