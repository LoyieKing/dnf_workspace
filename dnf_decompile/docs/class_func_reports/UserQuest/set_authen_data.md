# set_authen_data

`_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii`

`UserQuest::set_authen_data(QUEST_CONDITION, int, int)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086abdb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086abdb0  _ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii
#           UserQuest::set_authen_data(QUEST_CONDITION, int, int)
# range [0x086abdb0, 0x086abe30]
086abdb0 +0x00:  push   %ebp
086abdb1 +0x01:  mov    %esp,%ebp
086abdb3 +0x03:  mov    0xc(%ebp),%eax
086abdb6 +0x06:  cmp    $0x5,%eax
086abdb9 +0x09:  ja     086abe2f <+0x7f>
086abdbb +0x0b:  mov    &data#b106dceb(.rodata)(,%eax,4),%eax
086abdc2 +0x12:  jmp    *%eax
086abdc4 +0x14:  mov    0x10(%ebp),%eax
086abdc7 +0x17:  mov    %eax,%edx
086abdc9 +0x19:  mov    0x8(%ebp),%eax
086abdcc +0x1c:  mov    %dx,0x75d8(%eax)
086abdd3 +0x23:  mov    0x14(%ebp),%eax
086abdd6 +0x26:  mov    %eax,%edx
086abdd8 +0x28:  mov    0x8(%ebp),%eax
086abddb +0x2b:  mov    %dx,0x75da(%eax)
086abde2 +0x32:  jmp    086abe2f <+0x7f>
086abde4 +0x34:  mov    0x10(%ebp),%eax
086abde7 +0x37:  mov    %eax,%edx
086abde9 +0x39:  mov    0x8(%ebp),%eax
086abdec +0x3c:  mov    %dx,0x75dc(%eax)
086abdf3 +0x43:  jmp    086abe2f <+0x7f>
086abdf5 +0x45:  mov    0x8(%ebp),%eax
086abdf8 +0x48:  mov    0x10(%ebp),%edx
086abdfb +0x4b:  mov    %edx,0x75e0(%eax)
086abe01 +0x51:  jmp    086abe2f <+0x7f>
086abe03 +0x53:  cmpl   $0x0,0x10(%ebp)
086abe07 +0x57:  setne  %dl
086abe0a +0x5a:  mov    0x8(%ebp),%eax
086abe0d +0x5d:  mov    %dl,0x75e4(%eax)
086abe13 +0x63:  jmp    086abe2f <+0x7f>
086abe15 +0x65:  mov    0x8(%ebp),%eax
086abe18 +0x68:  mov    0x10(%ebp),%edx
086abe1b +0x6b:  mov    %edx,0x75e8(%eax)
086abe21 +0x71:  jmp    086abe2f <+0x7f>
086abe23 +0x73:  mov    0x8(%ebp),%eax
086abe26 +0x76:  mov    0x10(%ebp),%edx
086abe29 +0x79:  mov    %edx,0x75ec(%eax)
086abe2f +0x7f:  pop    %ebp
086abe30 +0x80:  ret
```

## 反编译 C

```c
// UserQuest::set_authen_data @ 0x86abdb0

/* UserQuest::set_authen_data(QUEST_CONDITION, int, int) */

void __thiscall
UserQuest::set_authen_data(UserQuest *this,undefined4 param_2,int param_3,undefined2 param_4)

{
  switch(param_2) {
  case 0:
    *(short *)(this + 0x75d8) = (short)param_3;
    *(undefined2 *)(this + 0x75da) = param_4;
    break;
  case 1:
    *(short *)(this + 0x75dc) = (short)param_3;
    break;
  case 2:
    *(int *)(this + 0x75e0) = param_3;
    break;
  case 3:
    this[0x75e4] = (UserQuest)(param_3 != 0);
    break;
  case 4:
    *(int *)(this + 0x75e8) = param_3;
    break;
  case 5:
    *(int *)(this + 0x75ec) = param_3;
  }
  return;
}
```
