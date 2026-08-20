# get_skillslot_no

`_ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib`

`SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x08607dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08607dba  _ZNK9SkillSlot16get_skillslot_noEP15_Mastered_skilliib
#           SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const
# range [0x08607dba, 0x08607efd]
08607dba +0x000:  push   %ebp
08607dbb +0x001:  mov    %esp,%ebp
08607dbd +0x003:  sub    $0x24,%esp
08607dc0 +0x006:  mov    0x18(%ebp),%eax
08607dc3 +0x009:  mov    %al,-0x24(%ebp)
08607dc6 +0x00c:  mov    0x8(%ebp),%eax
08607dc9 +0x00f:  mov    (%eax),%eax
08607dcb +0x011:  test   %eax,%eax
08607dcd +0x013:  jne    08607dd9 <+0x1f>
08607dcf +0x015:  mov    $0xffffffff,%eax
08607dd4 +0x01a:  jmp    08607efc <+0x142>
08607dd9 +0x01f:  cmpl   $0x0,0xc(%ebp)
08607ddd +0x023:  jne    08607de9 <+0x2f>
08607ddf +0x025:  mov    $0xffffffff,%eax
08607de4 +0x02a:  jmp    08607efc <+0x142>
08607de9 +0x02f:  cmpb   $0x0,-0x24(%ebp)
08607ded +0x033:  je     08607e22 <+0x68>
08607def +0x035:  movl   $0x0,-0xc(%ebp)
08607df6 +0x03c:  jmp    08607e17 <+0x5d>
08607df8 +0x03e:  mov    -0xc(%ebp),%eax
08607dfb +0x041:  add    %eax,%eax
08607dfd +0x043:  add    0xc(%ebp),%eax
08607e00 +0x046:  movzbl (%eax),%eax
08607e03 +0x049:  movzbl %al,%eax
08607e06 +0x04c:  cmp    0x10(%ebp),%eax
08607e09 +0x04f:  jne    08607e13 <+0x59>
08607e0b +0x051:  mov    -0xc(%ebp),%eax
08607e0e +0x054:  jmp    08607efc <+0x142>
08607e13 +0x059:  addl   $0x1,-0xc(%ebp)
08607e17 +0x05d:  cmpl   $0x5,-0xc(%ebp)
08607e1b +0x061:  setle  %al
08607e1e +0x064:  test   %al,%al
08607e20 +0x066:  jne    08607df8 <+0x3e>
08607e22 +0x068:  movl   $0x0,-0x14(%ebp)
08607e29 +0x06f:  movl   $0x0,-0x10(%ebp)
08607e30 +0x076:  mov    0x14(%ebp),%eax
08607e33 +0x079:  cmp    $0x1,%eax
08607e36 +0x07c:  je     08607e5f <+0xa5>
08607e38 +0x07e:  cmp    $0x1,%eax
08607e3b +0x081:  jg     08607e43 <+0x89>
08607e3d +0x083:  test   %eax,%eax
08607e3f +0x085:  je     08607e4f <+0x95>
08607e41 +0x087:  jmp    08607e8d <+0xd3>
08607e43 +0x089:  cmp    $0x2,%eax
08607e46 +0x08c:  je     08607e6f <+0xb5>
08607e48 +0x08e:  cmp    $0x3,%eax
08607e4b +0x091:  je     08607e7f <+0xc5>
08607e4d +0x093:  jmp    08607e8d <+0xd3>
08607e4f +0x095:  movl   $0x6,-0x14(%ebp)
08607e56 +0x09c:  movl   $0x36,-0x10(%ebp)
08607e5d +0x0a3:  jmp    08607e8d <+0xd3>
08607e5f +0x0a5:  movl   $0x36,-0x14(%ebp)
08607e66 +0x0ac:  movl   $0x66,-0x10(%ebp)
08607e6d +0x0b3:  jmp    08607e8d <+0xd3>
08607e6f +0x0b5:  movl   $0x66,-0x14(%ebp)
08607e76 +0x0bc:  movl   $0x96,-0x10(%ebp)
08607e7d +0x0c3:  jmp    08607e8d <+0xd3>
08607e7f +0x0c5:  movl   $0x96,-0x14(%ebp)
08607e86 +0x0cc:  movl   $0xc6,-0x10(%ebp)
08607e8d +0x0d3:  mov    -0x14(%ebp),%eax
08607e90 +0x0d6:  mov    %eax,-0x8(%ebp)
08607e93 +0x0d9:  jmp    08607eb1 <+0xf7>
08607e95 +0x0db:  mov    -0x8(%ebp),%eax
08607e98 +0x0de:  add    %eax,%eax
08607e9a +0x0e0:  add    0xc(%ebp),%eax
08607e9d +0x0e3:  movzbl (%eax),%eax
08607ea0 +0x0e6:  movzbl %al,%eax
08607ea3 +0x0e9:  cmp    0x10(%ebp),%eax
08607ea6 +0x0ec:  jne    08607ead <+0xf3>
08607ea8 +0x0ee:  mov    -0x8(%ebp),%eax
08607eab +0x0f1:  jmp    08607efc <+0x142>
08607ead +0x0f3:  addl   $0x1,-0x8(%ebp)
08607eb1 +0x0f7:  mov    -0x8(%ebp),%eax
08607eb4 +0x0fa:  cmp    -0x10(%ebp),%eax
08607eb7 +0x0fd:  setl   %al
08607eba +0x100:  test   %al,%al
08607ebc +0x102:  jne    08607e95 <+0xdb>
08607ebe +0x104:  cmpb   $0x0,-0x24(%ebp)
08607ec2 +0x108:  je     08607ef7 <+0x13d>
08607ec4 +0x10a:  movl   $0xc6,-0x4(%ebp)
08607ecb +0x111:  jmp    08607ee9 <+0x12f>
08607ecd +0x113:  mov    -0x4(%ebp),%eax
08607ed0 +0x116:  add    %eax,%eax
08607ed2 +0x118:  add    0xc(%ebp),%eax
08607ed5 +0x11b:  movzbl (%eax),%eax
08607ed8 +0x11e:  movzbl %al,%eax
08607edb +0x121:  cmp    0x10(%ebp),%eax
08607ede +0x124:  jne    08607ee5 <+0x12b>
08607ee0 +0x126:  mov    -0x4(%ebp),%eax
08607ee3 +0x129:  jmp    08607efc <+0x142>
08607ee5 +0x12b:  addl   $0x1,-0x4(%ebp)
08607ee9 +0x12f:  cmpl   $0xcb,-0x4(%ebp)
08607ef0 +0x136:  setle  %al
08607ef3 +0x139:  test   %al,%al
08607ef5 +0x13b:  jne    08607ecd <+0x113>
08607ef7 +0x13d:  mov    $0xffffffff,%eax
08607efc +0x142:  leave
08607efd +0x143:  ret
```

## 反编译 C

```c
// SkillSlot::get_skillslot_no @ 0x8607dba

/* SkillSlot::get_skillslot_no(_Mastered_skill*, int, int, bool) const */

int __thiscall
SkillSlot::get_skillslot_no
          (SkillSlot *this,_Mastered_skill *param_1,int param_2,int param_3,bool param_4)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)this != 0) && (param_1 != (_Mastered_skill *)0x0)) {
    if (param_4) {
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        if ((uint)(byte)param_1[local_10 * 2] == param_2) {
          return local_10;
        }
      }
    }
    local_18 = 0;
    local_14 = 0;
    if (param_3 == 1) {
      local_18 = 0x36;
      local_14 = 0x66;
    }
    else if (param_3 < 2) {
      if (param_3 == 0) {
        local_18 = 6;
        local_14 = 0x36;
      }
    }
    else if (param_3 == 2) {
      local_18 = 0x66;
      local_14 = 0x96;
    }
    else if (param_3 == 3) {
      local_18 = 0x96;
      local_14 = 0xc6;
    }
    for (local_c = local_18; local_c < local_14; local_c = local_c + 1) {
      if ((uint)(byte)param_1[local_c * 2] == param_2) {
        return local_c;
      }
    }
    if (param_4) {
      for (local_8 = 0xc6; local_8 < 0xcc; local_8 = local_8 + 1) {
        if ((uint)(byte)param_1[local_8 * 2] == param_2) {
          return local_8;
        }
      }
    }
  }
  return -1;
}
```
